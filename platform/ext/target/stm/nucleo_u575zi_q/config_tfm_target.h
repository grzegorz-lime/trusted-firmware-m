/*
 * Copyright (c) 2022-2024, Arm Limited. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 */

#ifndef __CONFIG_TFM_TARGET_H__
#define __CONFIG_TFM_TARGET_H__

/* Use stored NV seed to provide entropy.
 * STM32U575 has no HW crypto accelerator (PKA/HASH), so MBEDTLS_PSA_CRYPTO_EXTERNAL_RNG
 * is not defined. The PSA crypto subsystem uses DRBG seeded from NV entropy stored in ITS.
 * The seed is provisioned from OTP during crypto partition init.
 */
#define CRYPTO_NV_SEED                         1

/* External RNG disabled - no HW crypto accelerator to provide
 * mbedtls_psa_external_get_random(). The TRNG peripheral is used by BL2
 * and isolation setup but the PSA crypto partition uses NV seed + DRBG.
 */
#define CRYPTO_EXT_RNG                         0

#define ITS_NUM_ASSETS                         32

#endif /* __CONFIG_TFM_TARGET_H__ */
