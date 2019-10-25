/*
 * Copyright (c) 2019, Nuvoton Technology Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "NuSDBlockDevice.h"

using namespace mbed;

#if defined(MBED_CONF_NUSD_PROVIDE_DEFAULT_BLOCKDEVICE) && MBED_CONF_NUSD_PROVIDE_DEFAULT_BLOCKDEVICE
BlockDevice *BlockDevice::get_default_instance()
{
    static NuSDBlockDevice default_bd;

    return &default_bd;
}
#endif

#if defined(MBED_CONF_NUSD_PROVIDE_KVSTORE_OTHER_BLOCKDEVICE) && MBED_CONF_NUSD_PROVIDE_KVSTORE_OTHER_BLOCKDEVICE
BlockDevice *get_other_blockdevice()
{
    static NuSDBlockDevice default_bd;

    return &default_bd;
}
#endif