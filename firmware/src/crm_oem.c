#include "crm_oem.h"

#include "at32f403a_407.h"

/* .rt950_oem is KEEP'd. main does not call these. */
#define RT950_OEM __attribute__((used, section(".rt950_oem")))

static void set_bits(volatile uint32_t *reg, uint32_t mask, int enable)
{
	if (enable != 0) {
		*reg |= mask;
	} else {
		*reg &= ~mask;
	}
}

RT950_OEM void rt950_crm_adc_div_set(uint32_t adcdiv_bits)
{
	CRM->cfg = (CRM->cfg & 0xEFFF3FFFu) | adcdiv_bits;
}

RT950_OEM void rt950_crm_ahb_clock(uint32_t mask, int enable)
{
	set_bits(&CRM->ahben, mask, enable);
}

RT950_OEM void rt950_crm_apb1_clock(uint32_t mask, int enable)
{
	set_bits(&CRM->apb1en, mask, enable);
}

RT950_OEM void rt950_crm_apb2_clock(uint32_t mask, int enable)
{
	set_bits(&CRM->apb2en, mask, enable);
}

RT950_OEM void rt950_crm_apb1_reset(uint32_t mask, int enable)
{
	set_bits(&CRM->apb1rst, mask, enable);
}

RT950_OEM void rt950_crm_apb2_reset(uint32_t mask, int enable)
{
	set_bits(&CRM->apb2rst, mask, enable);
}

RT950_OEM void rt950_crm_auto_step(int enable)
{
	if (enable == 1) {
		CRM->misc3 |= 0x30u;
	} else {
		CRM->misc3 &= ~0x30u;
	}
}

RT950_OEM void rt950_crm_use_hext_pll(void)
{
	uint32_t polls = 0;

	CRM->ctrl |= 0x00010000u; /* hexten */
	do {
		polls++;
		if ((CRM->ctrl & 0x00020000u) != 0) { /* hextstbl */
			break;
		}
	} while (polls != 0x3000u);
	if ((CRM->ctrl & 0x00020000u) == 0) {
		return;
	}

	CRM->cfg = CRM->cfg;
	CRM->cfg = (CRM->cfg & ~0x3800u) | 0x2000u; /* apb2div = 4, divide by 2 */
	CRM->cfg = (CRM->cfg & ~0x0700u) | 0x0400u; /* apb1div = 4, divide by 2 */
	/* Clear pllrcs, pllhextdiv, pllmult_l, pllmult_h, and pllrange. */
	CRM->cfg &= 0x1FC0FFFFu;
	/* pllrcs, pllmult_l = 13 (CRM_PLL_MULT_15), pllrange. */
	CRM->cfg |= 0x80350000u;
	CRM->ctrl |= 0x01000000u; /* pllen */
	while ((CRM->ctrl & 0x02000000u) == 0) { /* pllstbl; the image does not cap this */
	}
	rt950_crm_auto_step(1);
	CRM->cfg = (CRM->cfg & ~0x3u) | 0x2u; /* sclksel = PLL */
	while (((CRM->cfg >> 2) & 0x3u) != 2u) { /* sclksts; the image does not cap this */
	}
	rt950_crm_auto_step(0);
}

RT950_OEM void rt950_crm_bringup(void)
{
	SCB->CPACR |= 0x00F00000u;
	CRM->ctrl |= 0x1u; /* hicken */
	CRM->cfg &= 0xE8FF000Cu;
	CRM->ctrl &= 0xFEF6FFFFu; /* hexten, cfden, pllen */
	CRM->ctrl &= ~0x00040000u; /* hextbyps */
	CRM->cfg &= 0x1700FFFFu;
	CRM->misc1 &= 0xFEFEFF00u;
	CRM->clkint = 0x009F0000u;
	rt950_crm_use_hext_pll();
	SCB->VTOR = 0x08000000u;
}

/* Bytes at 0x0802C92E. AHB uses [0..7] as a shift. APB uses [0..3]. ADC divides by [8..15]. */
static const uint8_t rt950_div_bytes[16] = {
	0xf2u, 0x75u, 0x0cu, 0xc0u, 0xc1u, 0x2au, 0x16u, 0x25u,
	0xb5u, 0x62u, 0xf7u, 0xf2u, 0x01u, 0xd2u, 0x16u, 0xb0u
};

/* Thumb LSR by a register uses the low 8 bits. A shift of 32 or more yields 0. */
static uint32_t lsr_reg(uint32_t value, uint32_t shift)
{
	shift &= 0xffu;
	if (shift >= 32u) {
		return 0u;
	}
	return value >> shift;
}

/* Cortex-M4 UDIV of a zero divisor returns 0. */
static uint32_t udiv_reg(uint32_t numer, uint32_t denom)
{
	if (denom == 0u) {
		return 0u;
	}
	return numer / denom;
}

RT950_OEM void rt950_crm_clocks_get(rt950_crm_clocks *clocks)
{
	const uint32_t cfg = CRM->cfg;
	const uint32_t source = cfg & 0xcu;
	uint32_t sclk;
	uint32_t ahb_shift = 0u;
	uint32_t apb1_shift = 0u;
	uint32_t apb2_shift = 0u;
	uint32_t adc_index;

	if (source == 0u) {
		if ((CRM->misc1 & (1u << 25)) != 0u && (CRM->misc3 & (1u << 9)) != 0u) {
			sclk = 0x02DC6C00u; /* 48 MHz */
		} else {
			sclk = 0x007A1200u; /* 8 MHz */
		}
	} else if (source == 8u) {
		const uint32_t fields = cfg & 0x603C0000u;
		uint32_t factor = ((fields >> 18) & 0xfu) | (fields >> 25);
		uint32_t extra = 1u;

		if ((fields & 0x60000000u) == 0u && ((fields >> 18) & 0xfu) != 0xfu) {
			extra = 2u;
		}
		factor += extra;
		if ((cfg & 0x00010000u) == 0u) {
			sclk = 0x003D0900u * factor; /* 4 MHz */
		} else if ((cfg & (1u << 17)) != 0u) {
			const uint32_t div = ((CRM->misc3 & 0x3000u) >> 12) + 2u;

			sclk = factor * udiv_reg(0x007A1200u, div);
		} else {
			sclk = 0x007A1200u * factor;
		}
		if ((cfg & 0x80000000u) == 0u && sclk > 0x044AA200u) {
			sclk = 0x044AA200u; /* 72 MHz */
		}
	} else {
		sclk = 0x007A1200u;
	}

	if ((cfg & (1u << 7)) != 0u) {
		ahb_shift = rt950_div_bytes[(cfg >> 4) & 7u];
	}
	clocks->sclk_hz = sclk;
	clocks->ahb_hz = lsr_reg(sclk, ahb_shift);

	if ((cfg & (1u << 10)) != 0u) {
		apb1_shift = rt950_div_bytes[(cfg >> 8) & 3u];
	}
	clocks->apb1_hz = lsr_reg(clocks->ahb_hz, apb1_shift);

	if ((cfg & (1u << 13)) != 0u) {
		apb2_shift = rt950_div_bytes[(cfg >> 11) & 3u];
	}
	clocks->apb2_hz = lsr_reg(clocks->ahb_hz, apb2_shift);

	adc_index = (cfg >> 14) & 3u;
	if ((cfg & (1u << 28)) != 0u) {
		adc_index |= 4u;
	}
	clocks->adc_hz = udiv_reg(clocks->apb2_hz, rt950_div_bytes[8u + adc_index]);
}
