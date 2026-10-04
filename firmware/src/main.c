#include "crc16.h"

/**
 * @brief Clock comes from SystemInit, which the AT32 startup calls before main.
 *
 * The OEM image's reset vector is 0x080032A0 and is not this entry. This
 * image is linked at 0x08000000 with the AT32 vector table. It is not flashed.
 */
int main(void)
{
	static const uint8_t sample[] = {0x01, 0x02};
	(void)crc16_xmodem(sample, sizeof sample);
	for (;;) {
	}
}
