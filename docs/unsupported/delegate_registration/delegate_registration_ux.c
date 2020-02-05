
////////////////////////////////////////////////////////////////////////////////

// The Following are only examples and places where this code could be implemented.
//  It is not final or guaranteed working.
//  This should only serve as a reference for implementing.

////////////////////////////////////////////////////////////////////////////////

/*******************************************************************************
 * This file is part of the ARK Ledger App.
 *
 * Copyright (c) ARK Ecosystem <info@ark.io>
 *
 * The MIT License (MIT)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 ******************************************************************************/

#include "transactions/ux/delegate_registration_ux.h"

#include <stddef.h>
#include <stdint.h>

#include "constants.h"

#include "operations/transactions/transaction.h"

#include "utils/print.h"
#include "utils/utils.h"

#include "display/context.h"

////////////////////////////////////////////////////////////////////////////////
void displayDelegateRegistration(const Transaction *transaction) {

    const char *const LABEL     = "Delegate Reg.";
    const size_t LABEL_SIZE     = 14;

    const char *const LABEL_USERNAME     = "Username";
    const size_t LABEL_USERNAME_SIZE     = 9;

    bytecpy((char *)displayCtx.operation, LABEL, LABEL_SIZE);
    bytecpy((char *)displayCtx.title[0], LABEL_USERNAME, LABEL_USERNAME_SIZE);
    bytecpy((char *)displayCtx.title[1], LABEL_FEE, LABEL_FEE_SIZE);

    // Username
    bytecpy((char *)displayCtx.text[0],
            transaction->asset.delegateRegistration.username,
            transaction->asset.delegateRegistration.length);

    // Fee
    printAmount(transaction->fee,
                (uint8_t *)displayCtx.text[1],
                sizeof(displayCtx.text[1]),
                TOKEN_NAME, TOKEN_NAME_SIZE, TOKEN_DECIMALS);
}