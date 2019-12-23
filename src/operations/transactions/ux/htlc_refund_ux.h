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

#ifndef ARK_OPERATIONS_TRANSACTION_UX_HTLC_REFUND_UX_H
#define ARK_OPERATIONS_TRANSACTION_UX_HTLC_REFUND_UX_H

#include <stdint.h>

#include "operations/transactions/transaction.h"

////////////////////////////////////////////////////////////////////////////////

static const uint8_t STEPS_HTLC_REFUND = 1U;

////////////////////////////////////////////////////////////////////////////////

void displayHtlcRefund(const Transaction *transaction);

////////////////////////////////////////////////////////////////////////////////

#endif
