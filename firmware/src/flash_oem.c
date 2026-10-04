#include "flash_oem.h"

#include "at32f403a_407.h"

/* .rt950_oem is KEEP'd. main does not call these. */
#define RT950_OEM __attribute__((used, section(".rt950_oem")))

static int status_from(uint32_t sts)
{
	if ((sts & 0x1u) != 0) {
		return RT950_FLASH_BUSY;
	}
	if ((sts & 0x4u) != 0) {
		return RT950_FLASH_PROGRAM_ERROR;
	}
	if ((sts & 0x10u) != 0) {
		return RT950_FLASH_EPP_ERROR;
	}
	return RT950_FLASH_DONE;
}

static int wait_status(int (*read_status)(void), uint32_t polls)
{
	int status = read_status();

	while (status == RT950_FLASH_BUSY && polls != 0) {
		status = read_status();
		polls--;
	}
	if (polls == 0) {
		return RT950_FLASH_TIMEOUT;
	}
	return status;
}

RT950_OEM int rt950_flash_bank1_status(void)
{
	return status_from(FLASH->sts);
}

RT950_OEM int rt950_flash_bank2_status(void)
{
	return status_from(FLASH->sts2);
}

RT950_OEM int rt950_flash_spim_status(void)
{
	return status_from(FLASH->sts3);
}

RT950_OEM int rt950_flash_bank1_wait(uint32_t polls)
{
	return wait_status(rt950_flash_bank1_status, polls);
}

RT950_OEM int rt950_flash_bank2_wait(uint32_t polls)
{
	return wait_status(rt950_flash_bank2_status, polls);
}

RT950_OEM int rt950_flash_spim_wait(uint32_t polls)
{
	return wait_status(rt950_flash_spim_status, polls);
}

RT950_OEM int rt950_flash_word_program(uint32_t address, uint32_t data)
{
	const uint32_t polls = 0x00100000u;
	int status;

	if (address >= 0x08400000u) {
		status = rt950_flash_spim_wait(polls);
		if (status != RT950_FLASH_DONE) {
			return status;
		}
		FLASH->ctrl3 |= 0x1u;
		*(volatile uint32_t *)address = data;
		status = rt950_flash_spim_wait(polls);
		FLASH->ctrl3 &= ~0x1u;
		return status;
	}
	if (address <= 0x0807FFFFu) {
		status = rt950_flash_bank1_wait(polls);
		if (status != RT950_FLASH_DONE) {
			return status;
		}
		FLASH->ctrl |= 0x1u;
		*(volatile uint32_t *)address = data;
		status = rt950_flash_bank1_wait(polls);
		FLASH->ctrl &= ~0x1u;
		return status;
	}
	/* ~0x0807FFFF + address is the offset above 0x08080000. Bank 2 is 512 KB. */
	if ((address + ~0x0807FFFFu) >= 0x00080000u) {
		return RT950_FLASH_DONE;
	}
	status = rt950_flash_bank2_wait(polls);
	if (status != RT950_FLASH_DONE) {
		return status;
	}
	FLASH->ctrl2 |= 0x1u;
	*(volatile uint32_t *)address = data;
	status = rt950_flash_bank2_wait(polls);
	FLASH->ctrl2 &= ~0x1u;
	return status;
}

RT950_OEM void rt950_flash_unlock(void)
{
	FLASH->unlock = FLASH_UNLOCK_KEY1;
	FLASH->unlock = FLASH_UNLOCK_KEY2;
	FLASH->unlock2 = FLASH_UNLOCK_KEY1;
	FLASH->unlock2 = FLASH_UNLOCK_KEY2;
}

RT950_OEM void rt950_flash_lock(void)
{
	FLASH->ctrl |= 0x80u;
	FLASH->ctrl2 |= 0x80u;
}
