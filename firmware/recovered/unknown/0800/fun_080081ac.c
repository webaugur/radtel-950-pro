/**
 * @brief fun_080081ac
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080081ac, Ghidra name FUN_080081ac, 26 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080081ac(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < param_3; uVar1 = uVar1 + 1) {
    *(short *)(param_1 + uVar1 * 2) = *(short *)(param_2 + uVar1 * 2) + 0x800;
  }
  return;
}

