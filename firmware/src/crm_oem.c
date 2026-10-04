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
