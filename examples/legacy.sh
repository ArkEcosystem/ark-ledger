#!/usr/bin/env bash

printf "\n\n%s\n" "v1 and Legacy Examples"

printf "\n%s\n" "Testing a Legacy Transfer Transaction."
python3 "$(dirname "$0")"/example_helper.py --tx 0092ffd30002e012f0a7cac12a74bdc17d844cbc9f637177b470019c32a53cef94c7a56e2ea9178d4aa08afea30cfc61acd261306c67a87c3e1c2e00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000bac53949010000008096980000000000 --ecdsa

printf "\n%s\n" "Testing a Legacy Transfer Transaction with a VendorField."
python3 "$(dirname "$0")"/example_helper.py --tx 0092ffd30002e012f0a7cac12a74bdc17d844cbc9f637177b470019c32a53cef94c7a56e2ea9178d4aa08afea30cfc61acd261306c67a87c3e1c2e74686973206973206120746573740000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000bac53949010000008096980000000000 --ecdsa

printf "\n%s\n"  "Testing a Legacy Vote Transaction."
python3 "$(dirname "$0")"/example_helper.py --tx 035706d400025f81956d5826bad7d30daed2b5c8c98e72046c1ec8323da336445476183fb7ca17af33b082a81e338a36d9fb9127597d4fb4e6ef6c00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000e1f505000000002b303263393536353264313665316335653337326531613234313233396663643834666236643261393564313930333063653861616138613635343638313530656439 --ecdsa

printf "\n%s\n"  "Testing a v1 Transfer Transaction."
python3 "$(dirname "$0")"/example_helper.py --tx ff011e0007627802034151a3ec46b5670a682b0a63394f863587d1bc97483b1b6c70eb58e7f0aed19280969800000000000000c2eb0b00000000000000001e0995750207ecaf0ccf251c1265b92ad84f553662 --ecdsa

printf "\n%s\n"  "Testing a v1 Transfer Transaction with a VendorField."
python3 "$(dirname "$0")"/example_helper.py --tx ff011e0007627802034151a3ec46b5670a682b0a63394f863587d1bc97483b1b6c70eb58e7f0aed19280969800000000000b48656c6c6f20576f726c6400c2eb0b00000000000000001e0995750207ecaf0ccf251c1265b92ad84f553662 --ecdsa

printf "\n%s\n"  "Testing a v1 Vote Transaction."
python3 "$(dirname "$0")"/example_helper.py --tx ff011e0376b87502034151a3ec46b5670a682b0a63394f863587d1bc97483b1b6c70eb58e7f0aed19200e1f50500000000000101022cca9529ec97a772156c152a00aad155ee6708243e65c9d211a589cb5d43234d --ecdsa
