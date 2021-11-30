/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_dalvik_heap.h>
#include <libinit_variant.h>

#include "vendor_init.h"

#define DESCRIPTION "nabu_global-user 11 RKQ1.200826.002 V12.5.3.0.RJUMIXM release-keys"
#define FINGERPRINT "Xiaomi/nabu_global/nabu:11/RKQ1.200826.002/V12.5.3.0.RJUMIXM:user/release-keys"


static const variant_info_t nabu_global_info = {
    .hwc_value = "GLOBAL",
    .sku_value = "",

    .brand = "Xiaomi",
    .device = "nabu",
    .marketname = "Xiaomi Pad 5",
    .model = "21051182G",
    .build_description = DESCRIPTION,
    .build_fingerprint = FINGERPRINT,

    .nfc = false,
};


static const variant_info_t nabu_china_info = {
    .hwc_value = "CHINA",
    .sku_value = "",

    .brand = "Xiaomi",
    .device = "nabu",
    .marketname = "Xiaomi Pad 5",
    .model = "21051182C",
    .build_description = DESCRIPTION,
    .build_fingerprint = FINGERPRINT,

    .nfc = false,
};
static const std::vector<variant_info_t> variants = {
    nabu_global_info,
    nabu_china_info,
};

void vendor_load_properties() {
    set_dalvik_heap();
    search_variant(variants);
}
