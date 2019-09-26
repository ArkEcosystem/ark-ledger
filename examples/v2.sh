#!/usr/bin/env bash

echo "v2 Examples"

echo ""
echo Testing a Transfer Transaction.
python $(dirname $0)/example_helper.py --tx ff0217010000000000010000000000000003a02b9d5fdd1307c2ee4652ba54d492d1fd11a7d1bb3f3a44c4a05e79f19de933809698000000000000a08601000000000000000000171dfc69b54c7fe901e91d5a9ab78388645e2427ea
echo ""

echo Testing a Transfer Transaction with a VendorField.
python $(dirname $0)/example_helper.py --tx ff02170100000000000300000000000000029f0ab8ab10258144332230178353fa24eb4274370345eaaf1594948a79c8939980969800000000000b48656c6c6f20576f726c64010000000000000000000000173cf7ea59e8d9690e858b7674885b9a4a2c4365d6
echo ""

echo Testing a Second Signature Registration Transaction.
python $(dirname $0)/example_helper.py --tx ff0217010000000100020000000000000002e0c063777427ac196af3c426fd648231ebc4ea06fff5edb1652b98f9c8420c690065cd1d000000000002877e4f35c76abaeb152b128670db0a7ae10b3999afcd28a42938b653fbf87ae9
echo ""

echo Testing a Vote Transaction.
python $(dirname $0)/example_helper.py --tx ff0217010000000300020000000000000002555806bca6737eaeaff6434d5171bac8aeb72533ed9bafb280dd11b328a3822d00e1f5050000000000010102555806bca6737eaeaff6434d5171bac8aeb72533ed9bafb280dd11b328a3822d
echo ""

echo Testing an IPFS Transaction.
python $(dirname $0)/example_helper.py --tx ff02170100000005000200000000000000038e000c902d4551065ac5705637c685d52e6ac4032e158ad0370c5ef2bbafae2c0065cd1d000000000012209608184d6cee2b9af8e6c2a46fc9318adf73329aeb8a86cf8472829fff5bb89e
echo ""

echo Testing an HTLC Lock Transaction.
python $(dirname $0)/example_helper.py --tx ff02170100000008000200000000000000020d272fab67c179a9e4df4d006344d3ca47fb531b4246b483373940f0603a9216809698000000000000010000000000000009b9a28393efd02fcd76a21b0f0f55ba2aad8f3640ff8cae86de033a9cfbd78c01537bb104177f2a95c7076ea278776d8fcecc5b18e588976da6
echo ""

echo Testing an HTLC Claim Transaction.
python $(dirname $0)/example_helper.py --tx ff02170100000009000300000000000000039d974aa6feff6a19fde69a8a8b25b991798e98252765a887118ba61218f473a2000000000000000000f84efeab77224af8959301a7185597a7cfbfbc9a4d99cb021af62f3714feb9d36635656138373761333131636564393063663435323463623438396539373266
echo ""

echo Testing an HTLC Refund Transaction.
python $(dirname $0)/example_helper.py --tx ff0217010000000a000300000000000000037fc2e14f626586722a4f9e00dca2efbc4ac409c1ca63bc4309f56184265f95d5000000000000000000c62bd36c162dd0116a08bf8a75cd6d1f83b8f5f1e17e89c8231ebb7af595f64d
echo ""
