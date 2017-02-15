/*
 * Copyright (c) 2017 ARM Limited. All rights reserved.
 * SPDX-License-Identifier: Apache-2.0
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef NSDLACCESSHELPER_STUB_H
#define NSDLACCESSHELPER_STUB_H

#include "nsdlaccesshelper.h"

//some internal test related stuff
namespace nsdlaccesshelper_stub
{
    extern bool bool_value;
    extern void *void_value;
    extern uint8_t int_value;
    void clear();
}

#endif // NSDLACCESSHELPER_STUB_H
