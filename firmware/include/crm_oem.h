#pragma once

#include <stdint.h>

/**
 * @brief Replace the ADC divider field in `CRM->cfg`.
 *
 * OEM `FUN_0801a5dc` at `0x0801A5DC`. Clears `adcdiv_l` (bits 15:14) and
 * `adcdiv_h` (bit 28), then ORs @p adcdiv_bits. The caller supplies the
 * already-shifted bits.
 */
void rt950_crm_adc_div_set(uint32_t adcdiv_bits);

/**
 * @brief Set or clear bits in `CRM->ahben` (`0x14`).
 *
 * OEM `FUN_0801a5f4` at `0x0801A5F4`. Any non-zero @p enable sets the bits.
 * The mask is the register bit, not the packed `crm_periph_clock_type` value
 * used by `crm_periph_clock_enable`.
 */
void rt950_crm_ahb_clock(uint32_t mask, int enable);

/** @brief `CRM->apb1en` (`0x1C`). OEM `FUN_0801a610` at `0x0801A610`. */
void rt950_crm_apb1_clock(uint32_t mask, int enable);

/** @brief `CRM->apb2en` (`0x18`). OEM `FUN_0801a648` at `0x0801A648`. */
void rt950_crm_apb2_clock(uint32_t mask, int enable);

/** @brief `CRM->apb1rst` (`0x10`). OEM `FUN_0801a62c` at `0x0801A62C`. */
void rt950_crm_apb1_reset(uint32_t mask, int enable);

/** @brief `CRM->apb2rst` (`0x0C`). OEM `FUN_0801a664` at `0x0801A664`. */
void rt950_crm_apb2_reset(uint32_t mask, int enable);

/**
 * @brief `CRM->misc3.auto_step_en`.
 *
 * OEM `FUN_0801a7a0` at `0x0801A7A0`. The value 1 writes `0x3`
 * (`CRM_AUTO_STEP_MODE_ENABLE`). Every other value clears bits 5:4.
 */
void rt950_crm_auto_step(int enable);

/**
 * @brief Turn on HEXT and switch the system clock to the PLL.
 *
 * OEM `FUN_08020440` at `0x08020440`. Enables HEXT and polls `hextstbl` at
 * most `0x3000` times. If HEXT is not stable, it returns and leaves the
 * PLL alone. Otherwise it sets APB1 and APB2 to divide by 2
 * (`CRM_APB1_DIV_2` / `CRM_APB2_DIV_2`, field value 4), selects HEXT as the
 * PLL source (`pllrcs`), sets `pllmult_l` to 13 (`CRM_PLL_MULT_15`) with
 * `pllrange` set, enables the PLL, and waits until `pllstbl`. That wait has
 * no poll limit. It then enables auto-step, selects `CRM_SCLK_PLL` (2),
 * waits until `sclksts` is 2 (also with no poll limit), and disables
 * auto-step.
 */
void rt950_crm_use_hext_pll(void);

/**
 * @brief Enable the FPU, reset the clock tree, then run the HEXT/PLL switch.
 *
 * OEM `FUN_08021e8c` at `0x08021E8C`. Sets `SCB->CPACR` bits for CP10 and
 * CP11 (`0x00F00000`), sets `hicken`, clears the clock fields listed in
 * `crm_oem.c`, writes `0x009F0000` to `CRM->clkint`, calls
 * `rt950_crm_use_hext_pll`, and stores `0x08000000` in `SCB->VTOR`.
 */
void rt950_crm_bringup(void);
