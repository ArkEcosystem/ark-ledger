#!/usr/bin/env bash

printf "\n\n%s\n" "Message Examples"

printf "\n%s\n" "Testing a Message Signing Operation | len: 55"
printf "\n%s\n" "What we know is a drop, what we don't know is an ocean."
echo "> \"57686174207765206b6e6f7720697320612064726f702c207768617420776520646f6e2774206b6e6f7720697320616e206f6365616e2e\""
python3 "$(dirname "$0")"/example_helper.py --message 57686174207765206b6e6f7720697320612064726f702c207768617420776520646f6e2774206b6e6f7720697320616e206f6365616e2e

printf "\n%s\n" "Testing a Message Signing Operation | len: 90."
printf "%s\n"  "\"We can only see a short distance ahead, but we can see plenty there that needs to be done.\""
printf "%s\n"  "> \"57652063616e206f6e6c792073656520612073686f72742064697374616e63652061686561642c206275742077652063616e2073656520706c656e74792074686572652074686174206e6565647320746f20626520646f6e652e\""
python3 "$(dirname "$0")"/example_helper.py --message 57652063616e206f6e6c792073656520612073686f72742064697374616e63652061686561642c206275742077652063616e2073656520706c656e74792074686572652074686174206e6565647320746f20626520646f6e652e

printf "\n%s\n" "Testing a Message Signing Operation | len: 137."
printf "%s\n"  "\"The scientists of today think deeply instead of clearly. One must be sane to think clearly, but one can think deeply and be quite insane.\""
printf "%s\n"  "> \"54686520736369656e7469737473206f6620746f646179207468696e6b20646565706c7920696e7374656164206f6620636c6561726c792e204f6e65206d7573742062652073616e6520746f207468696e6b20636c6561726c792c20627574206f6e652063616e207468696e6b20646565706c7920616e6420626520717569746520696e73616e652e\""
python3 "$(dirname "$0")"/example_helper.py --message 54686520736369656e7469737473206f6620746f646179207468696e6b20646565706c7920696e7374656164206f6620636c6561726c792e204f6e65206d7573742062652073616e6520746f207468696e6b20636c6561726c792c20627574206f6e652063616e207468696e6b20646565706c7920616e6420626520717569746520696e73616e652e

printf "\n%s\n" "Testing a Message Signing Operation | len: 255."
printf "%s\n"  "\"All parts should go together without forcing. You must remember that the parts you are reassembling were disassembled by you. Therefore, if you can't get them together again, there must be a reason. By all means, do not use a hammer. ~ IBM Manual - (1975)\""
printf "%s\n"  "> \"416c6c2070617274732073686f756c6420676f20746f67657468657220776974686f757420666f7263696e672e20596f75206d7573742072656d656d62657220746861742074686520706172747320796f7520617265207265617373656d626c696e67207765726520646973617373656d626c656420627920796f752e205468657265666f72652c20696620796f752063616e277420676574207468656d20746f67657468657220616761696e2c207468657265206d757374206265206120726561736f6e2e20427920616c6c206d65616e732c20646f206e6f742075736520612068616d6d65722e207e2049424d204d616e75616c202d20283139373529\""
python3 "$(dirname "$0")"/example_helper.py --message 416c6c2070617274732073686f756c6420676f20746f67657468657220776974686f757420666f7263696e672e20596f75206d7573742072656d656d62657220746861742074686520706172747320796f7520617265207265617373656d626c696e67207765726520646973617373656d626c656420627920796f752e205468657265666f72652c20696620796f752063616e277420676574207468656d20746f67657468657220616761696e2c207468657265206d757374206265206120726561736f6e2e20427920616c6c206d65616e732c20646f206e6f742075736520612068616d6d65722e207e2049424d204d616e75616c202d20283139373529
