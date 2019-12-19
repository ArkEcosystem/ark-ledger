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

#ifndef ARK_OPERATIONS_TRANSACTION_ASSETS_HTLC_LOCK_DISPLAY_H
#define ARK_OPERATIONS_TRANSACTION_ASSETS_HTLC_LOCK_DISPLAY_H

#include <stddef.h>
#include <stdint.h>

#include "constants.h"

#include "operations/transactions/transaction.h"

#include "ux/display_context.h"

#include "utils/base58.h"
#include "utils/hex.h"
#include "utils/print.h"
#include "utils/utils.h"

////////////////////////////////////////////////////////////////////////////////

static const uint8_t STEPS_HTLC_LOCK = 5U;

////////////////////////////////////////////////////////////////////////////////

void displayHtlcLock(const Transaction *transaction) {
    const char *const LABEL     = "HTLC Lock";
    const size_t LABEL_SIZE     = 10;

    const char *const LABEL_SECRET_HASH     = "Secret Hash";
    const size_t LABEL_SECRET_HASH_SIZE     = 12;

    const char *const LABEL_TIME        = "time: ";
    const size_t LABEL_TIME_SIZE        = 6;  // sizeof - 1

    const char *const LABEL_HEIGHT      = "height: ";
    const size_t LABEL_HEIGHT_SIZE      = 8;  // sizeof - 1

    bytecpy((char *)displayCtx.operation, LABEL,
                                          LABEL_SIZE);
    bytecpy((char *)displayCtx.title[0], LABEL_TO,
                                         LABEL_TO_SIZE);
    bytecpy((char *)displayCtx.title[1], LABEL_SECRET_HASH,
                                         LABEL_SECRET_HASH_SIZE);
    bytecpy((char *)displayCtx.title[2], LABEL_EXPIRATION,
                                         LABEL_EXPIRATION_SIZE);
    bytecpy((char *)displayCtx.title[3], LABEL_AMOUNT,
                                         LABEL_AMOUNT_SIZE);
    bytecpy((char *)displayCtx.title[4], LABEL_FEE,
                                         LABEL_FEE_SIZE);

    // RecipientId
    encodeBase58PublicKey((uint8_t *)transaction->asset.htlcLock.recipientId,
                          ADDRESS_HASH_LEN,
                          (uint8_t *)displayCtx.var[0],
                          ADDRESS_LEN,
                          transaction->asset.htlcLock.recipientId[0],
                          1);

    // Secret Hash
    bytesToHex((char *)displayCtx.var[1],
               (uint8_t *)transaction->asset.htlcLock.secretHash,
               HASH_32_LEN);

    // Expiration
    if (transaction->asset.htlcLock.expirationType == 1U) {
        printAmount(transaction->asset.htlcLock.expiration,
                    displayCtx.var[2], sizeof(displayCtx.var[2]),
                    LABEL_TIME, LABEL_TIME_SIZE, 0);
    } else {
        printAmount(transaction->asset.htlcLock.expiration,
                    displayCtx.var[2], sizeof(displayCtx.var[2]),
                    LABEL_HEIGHT, LABEL_HEIGHT_SIZE, 0);
    }

    // Amount
    printAmount(transaction->asset.htlcLock.amount,
                (uint8_t *)displayCtx.var[3], sizeof(displayCtx.var[3]),
                TOKEN_NAME, TOKEN_NAME_SIZE, TOKEN_DECIMALS);
    // Fees
    printAmount(transaction->fee,
                (uint8_t *)displayCtx.var[4], sizeof(displayCtx.var[4]),
                TOKEN_NAME, TOKEN_NAME_SIZE, TOKEN_DECIMALS);
}

////////////////////////////////////////////////////////////////////////////////

#endif
