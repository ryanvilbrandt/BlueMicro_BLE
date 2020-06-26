/*
Copyright 2019 <Pierre Constantineau>

3-Clause BSD License

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR 
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/

#ifndef KEYBOARD_CONFIG_H
#define KEYBOARD_CONFIG_H
#include "hardware_config.h"

#define KEYBOARD_SIDE LEFT

#define DEVICE_NAME_R                         "bar"                          /**< Name of device. Will be included in the advertising data. */
#define DEVICE_NAME_L                         "foo"                          /**< Name of device. Will be included in the advertising data. */
#define DEVICE_NAME_M                         "foobarBLE"                          /**< Name of device. Will be included in the advertising data. */

#define DEVICE_MODEL                        "Foobar"                          /**< Name of device. Will be included in the advertising data. */

#define MANUFACTURER_NAME                   "di0id"                      /**< Manufacturer. Will be passed to Device Information Service. */


#if KEYBOARD_SIDE == RIGHT

    #define KEYMAP( \
       K00,   K01,   K02,   K03,   K04,     \
       K10,   K11,   K12,   K13 ,  K14,     \
       K20,   K21,   K22,   K23,   K24     \
) { \
  {    K04,   K03,   K02,   K01,   K00 }, \
  {    K14,   K13,   K12,   K11,   K10 }, \
  {    K24,   K23,   K22,   K21,   K20 } \
}

#else

#define KEYMAP( \
       K00,   K01,   K02,   K03,   K04,     \
       K10,   K11,   K12,   K13 ,  K14,     \
       K20,   K21,   K22,   K23,   K24     \
) { \
  { K00,   K01,   K02,   K03,   K04 }, \
  { K10,   K11,   K12,   K13,   K14 }, \
  { K20,   K21,   K22,   K23,   K24 } \
}

#endif
#endif /* KEYBOARD_CONFIG_H */