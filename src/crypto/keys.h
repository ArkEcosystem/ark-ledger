/*******************************************************************************
*   Ark Wallet
*   (c) 2017 Ledger
*   (c) ARK Ecosystem
*
*  Licensed under the Apache License, Version 2.0 (the "License");
*  you may not use this file except in compliance with the License.
*  You may obtain a copy of the License at
*
*      http://www.apache.org/licenses/LICENSE-2.0
*
*  Unless required by applicable law or agreed to in writing, software
*  distributed under the License is distributed on an "AS IS" BASIS,
*  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*  See the License for the specific language governing permissions and
*  limitations under the License.
********************************************************************************/

#ifndef ARK_CRYPTO_KEYS
#define ARK_CRYPTO_KEYS

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "constants.h"

////////////////////////////////////////////////////////////////////////////////

typedef struct public_key_context_t {
    uint8_t             data[HASH_64_LEN];
    uint8_t             address[41];
    uint8_t             chainCode[HASH_32_LEN];
    bool                needsChainCode;
} PublicKeyContext;

////////////////////////////////////////////////////////////////////////////////

bool compressPublicKey(uint8_t *publicKey, uint8_t *out, size_t outSize);

uint32_t setPublicKeyContext(PublicKeyContext *ctx, uint8_t *apduBuffer);

////////////////////////////////////////////////////////////////////////////////

#endif