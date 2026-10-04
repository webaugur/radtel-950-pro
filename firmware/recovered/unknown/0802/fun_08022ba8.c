/**
 * @brief fun_08022ba8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08022ba8, Ghidra name FUN_08022ba8, 54 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08022ba8(int param_1,uint param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (param_2 & 0xff) >> 5;
  uVar2 = 1 << (param_2 & 0x1f);
  if (uVar3 == 1) {
    puVar1 = (uint *)(param_1 + 0xc);
  }
  else if (uVar3 == 2) {
    puVar1 = (uint *)(param_1 + 0x10);
  }
  else {
    puVar1 = (uint *)(param_1 + 0x14);
  }
  if (param_3 != 0) {
    *puVar1 = *puVar1 | uVar2;
    return;
  }
  *puVar1 = *puVar1 & ~uVar2;
  return;
}

