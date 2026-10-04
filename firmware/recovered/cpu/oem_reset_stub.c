/**
 * @brief oem_reset_stub
 *
 * The OEM reset vector (16 bytes). Ghidra's C uses undefined incoming registers. This is not the AT32 startup linked by firmware/.
 *
 * @note V0.29 address 0x080032a0, Ghidra name Reset_Handler, 16 bytes.
 *       Not linked into rt950-firmware.
 */

void Reset_Handler(int param_1,int param_2,int param_3,int param_4)

{
  uint unaff_r4;
  
  *(uint *)(param_1 + 0x2c) =
       unaff_r4 & ~(param_4 << (param_3 * 5 & 0xffU)) | param_2 << (param_3 * 5 & 0xffU);
  return;
}

