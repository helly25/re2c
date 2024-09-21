-- Generated by re2hs
{-# LANGUAGE RecordWildCards #-}
-- re2hs $INPUT -o $OUTPUT -ib
{-# LANGUAGE OverloadedStrings #-}
{-# OPTIONS_GHC -Wno-unused-record-wildcards #-}

import Data.Array (Array, array, (!))
import Data.Bits ((.&.))
import Data.Word (Word8)
import Data.ByteString (ByteString, index)

data State = State {
    _yyinput :: ByteString,
    _yycursor :: Int
}


yy0 :: State -> Bool
yy0 State{..} =
    let yych = index _yyinput _yycursor in
    let __ = _yycursor + 1 in let _yycursor = __ in
    if yych <= 0x30 then yy1 State{..}
    else if yych <= 0x39 then yy2 State{..}
    else yy1 State{..}

yy1 :: State -> Bool
yy1 State{..} =
    False

yy2 :: State -> Bool
yy2 State{..} =
    let yych = index _yyinput _yycursor in
    if (yybm ! (0 + fromIntegral yych) .&. 128) /= 0 then
        let __ = _yycursor + 1 in let _yycursor = __ in
        yy2 State{..}
    else
        yy3 State{..}

yy3 :: State -> Bool
yy3 State{..} =
    True

lexer :: State -> Bool
lexer State{..} =
    yy0 State{..}

yybm :: Array Int Word8
yybm = array (0, 256 - 1) $ Prelude.zip [0 .. 256 - 1] [
      0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,
    128, 128, 128, 128, 128, 128, 128, 128,
    128, 128,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0]


main :: IO ()
main = case lexer State{_yyinput = "1234\0", _yycursor = 0} of
    True -> return ()
    False -> error "lexer failed!"
