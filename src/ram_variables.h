/******************************************************************************
*   HYCON Wallet for Ledger Nano S
*   (c) 2018 Dulguun Batmunkh
*   (c) 2018 Hycon
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
******************************************************************************/

#ifndef RAM_VARIABLES_H
#define RAM_VARIABLES_H

#ifndef UNIT_TEST
#include "os_io_seproxyhal.h"
#endif

#include "../blake2b/blake2.h"
#include "hycon_types.h"

/* ------------------------------------------------------------------------- */
/* ---                           UI VARIABLES                            --- */
/* ------------------------------------------------------------------------- */

#ifndef UNIT_TEST
extern ux_state_t ux;	// don't change (used for UX_ functions)
#endif

extern unsigned int ux_step;
extern unsigned int ux_step_count;

extern unsigned char G_public_key_value[65];

extern enum UI_STATE G_ui_state;

/* ------------------------------------------------------------------------- */
/* ---                     CRYPTOGRAPHY VARIABLES                        --- */
/* ------------------------------------------------------------------------- */

#ifndef UNIT_TEST
// IO buffer to communicate with the outside world.
extern unsigned char G_io_seproxyhal_spi_buffer[IO_SEPROXYHAL_BUFFER_SIZE_B];
#endif

extern uint8_t G_bip32_path_len;
extern uint32_t G_bip32_path[MAX_BIP32_PATH];
extern blake2b_state G_blake2b_state;

/* ------------------------------------------------------------------------- */
/* ---                              OTHERS                               --- */
/* ------------------------------------------------------------------------- */

extern ram G_ram;

#endif // RAM_VARIABLES_H
