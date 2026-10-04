#pragma once

#include <stdint.h>

/**
 * @brief V0.29 flash status codes from `FUN_0800eaf0`.
 *
 * The Artery SDK uses the same flag tests and a different numbering:
 * busy 0, program error 1, erase/program-protect error 2, done 3, timeout 4.
 * This image returns 1, 2, 3, 4, and 5. Callers compare the ready value with 4.
 */
enum {
	RT950_FLASH_BUSY = 1, /* sts.obf */
	RT950_FLASH_PROGRAM_ERROR = 2, /* sts.prgmerr */
	RT950_FLASH_EPP_ERROR = 3, /* sts.epperr */
	RT950_FLASH_DONE = 4, /* none of those three flags */
	RT950_FLASH_TIMEOUT = 5 /* wait counter reached 0 */
};

/**
 * @brief Bank 1 status. OEM `FUN_0800eaf0` at `0x0800EAF0`.
 *
 * Reads `FLASH->sts` at offset `0x0C`. Same tests as
 * `flash_operation_status_get`, with the radio's return codes.
 */
int rt950_flash_bank1_status(void);

/**
 * @brief Bank 2 status. OEM `FUN_0800eb18` at `0x0800EB18`.
 *
 * Reads `FLASH->sts2` at offset `0x4C`.
 */
int rt950_flash_bank2_status(void);

/**
 * @brief External SPIM status. OEM `FUN_0800eb40` at `0x0800EB40`.
 *
 * Reads `FLASH->sts3` at offset `0x8C`.
 */
int rt950_flash_spim_status(void);

/**
 * @brief Poll until bank 1 is not busy, or the counter hits 0.
 *
 * OEM `FUN_0800ec3c` (`0x0800EC3C`) and `FUN_0800ec9c` (`0x0800EC9C`) are the
 * same instruction sequence. A starting count of 0 returns
 * `RT950_FLASH_TIMEOUT` even when the bank is idle.
 */
int rt950_flash_bank1_wait(uint32_t polls);

/** @brief OEM `FUN_0800ec5c` at `0x0800EC5C`. Polls `rt950_flash_bank2_status`. */
int rt950_flash_bank2_wait(uint32_t polls);

/** @brief OEM `FUN_0800ec7c` at `0x0800EC7C`. Polls `rt950_flash_spim_status`. */
int rt950_flash_spim_wait(uint32_t polls);

/**
 * @brief Program one 32-bit word. OEM `FUN_0800eb84` at `0x0800EB84`.
 *
 * The image passes `0x00100000` (`PROGRAMMING_TIMEOUT`) to every wait.
 * It programs only when the matching status call returns `RT950_FLASH_DONE`.
 * `address <= 0x0807FFFF` uses bank 1, including addresses below flash.
 * `0x08080000` through `0x080FFFFF` uses bank 2. `address >= 0x08400000`
 * uses SPIM and does not do the SDK's dummy read. Any other address returns
 * `RT950_FLASH_DONE` without a store.
 */
int rt950_flash_word_program(uint32_t address, uint32_t data);

/**
 * @brief Write the two unlock keys to bank 1 and bank 2.
 *
 * OEM `FUN_0800ec20` at `0x0800EC20`. The pool constants are
 * `0x45670123` and `0xCDEF89AB`, the same as `FLASH_UNLOCK_KEY1` and
 * `FLASH_UNLOCK_KEY2`. This is `flash_unlock` without the SPIM key writes.
 */
void rt950_flash_unlock(void);

/**
 * @brief Set `oplk` on bank 1 and bank 2 control registers.
 *
 * OEM `FUN_0800eb6c` at `0x0800EB6C`. Same stores as `flash_lock`.
 * SPIM `ctrl3` is left alone.
 */
void rt950_flash_lock(void);
