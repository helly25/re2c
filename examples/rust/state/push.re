// re2rust $INPUT -o $OUTPUT -f

use std::fs::File;
use std::io::{Read, Write};

const DEBUG: bool = false;
macro_rules! log {
    ($($fmt:expr)? $(, $args:expr)*) => {
        if DEBUG { println!($($fmt)? $(, $args)*) }
    }
}

// Use a small buffer to cover the case when a lexeme doesn't fit.
// In real world use a larger buffer.
const BUFSIZE: usize = 10;

struct State {
    file: File,
    yyinput: [u8; BUFSIZE],
    yylimit: usize,
    yycursor: usize,
    yymarker: usize,
    token: usize,
    yystate: isize,
}

#[derive(Debug, PartialEq)]
enum Status {End, Ready, Waiting, BadPacket, BigPacket}

fn fill(st: &mut State) -> Status {
    // Error: lexeme too long. In real life can reallocate a larger buffer.
    if st.token < 1 { return Status::BigPacket; }

    // Shift buffer contents (discard everything up to the current lexeme).
    st.yyinput.copy_within(st.token..st.yylimit, 0);
    st.yylimit -= st.token;
    st.yycursor -= st.token;
    st.yymarker = st.yymarker.overflowing_sub(st.token).0; // underflows if marker is unused
    st.token = 0;

    // Fill free space at the end of buffer with new data.
    match st.file.read(&mut st.yyinput[st.yylimit..BUFSIZE - 1]) { // -1 for sentinel
        Ok(n) => {
            st.yylimit += n;
            st.yyinput[st.yylimit] = 0; // append sentinel symbol
        },
        Err(why) => panic!("cannot read from file: {}", why)
    }

    return Status::Ready;
}

fn lex(yyrecord: &mut State, recv: &mut usize) -> Status {
    let mut yych;
    'lex: loop {
        yyrecord.token = yyrecord.yycursor;
    /*!re2c
        re2c:api = record;
        re2c:eof = 0;
        re2c:YYCTYPE = "u8";
        re2c:YYFILL = "return Status::Waiting;";

        packet = [a-z]+[;];

        *      { return Status::BadPacket; }
        $      { return Status::End; }
        packet { *recv += 1; continue 'lex; }
    */}
}

fn test(packets: Vec<&[u8]>, expect: Status) {
    // Create a pipe (open the same file for reading and writing).
    let fname = "pipe";
    let mut fw: File = match File::create(fname) {
        Err(why) => panic!("cannot open {}: {}", fname, why),
        Ok(file) => file,
    };
    let fr: File = match File::open(fname) {
        Err(why) => panic!("cannot read file {}: {}", fname, why),
        Ok(file) => file,
    };

    // Initialize lexer state: `state` value is -1, all offsets are at the end
    // of buffer, the character at `yylimit` offset is the sentinel (null).
    let yylimit = BUFSIZE - 1;
    let mut state = State {
        file: fr,
        // Sentinel (at `yylimit` offset) is set to null, which triggers YYFILL.
        yyinput: [0; BUFSIZE],
        yylimit: yylimit,
        yycursor: yylimit,
        yymarker: yylimit,
        token: yylimit,
        yystate: -1,
    };

    // Main loop. The buffer contains incomplete data which appears packet by
    // packet. When the lexer needs more input it saves its internal state and
    // returns to the caller which should provide more input and resume lexing.
    let mut status;
    let mut send = 0;
    let mut recv = 0;
    loop {
        status = lex(&mut state, &mut recv);
        if status == Status::End {
            log!("done: got {} packets", recv);
            break;
        } else if status == Status::Waiting {
            log!("waiting...");
            if send < packets.len() {
                log!("sent packet {}", send);
                match fw.write_all(packets[send]) {
                    Err(why) => panic!("cannot write to {}: {}", fname, why),
                    Ok(_) => send += 1,
                }
            }
            status = fill(&mut state);
            log!("queue: '{}'", String::from_utf8_lossy(&state.yyinput));
            if status == Status::BigPacket {
                log!("error: packet too big");
                break;
            }
            assert_eq!(status, Status::Ready);
        } else {
            assert_eq!(status, Status::BadPacket);
            log!("error: ill-formed packet");
            break;
        }
    }

    // Check results.
    assert_eq!(status, expect);
    if status == Status::End { assert_eq!(recv, send); }

    // Cleanup: remove input file.
    match std::fs::remove_file(fname) {
        Err(why) => panic!("cannot remove {}: {}", fname, why),
        Ok(_) => {}
    }
}

fn main() {
    test(vec![], Status::End);
    test(vec![b"zero;", b"one;", b"two;", b"three;", b"four;"], Status::End);
    test(vec![b"zer0;"], Status::BadPacket);
    test(vec![b"goooooooooogle;"], Status::BigPacket);
}
