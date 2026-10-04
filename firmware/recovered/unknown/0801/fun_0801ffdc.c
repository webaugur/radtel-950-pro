/**
 * @brief fun_0801ffdc
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801ffdc, Ghidra name FUN_0801ffdc, 104 bytes.
 *       Not linked into rt950-firmware.
 */

uint FUN_0801ffdc(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (*(char *)(DAT_08020044 + 6) == '\0') {
    iVar5 = (uint)*(byte *)((uint)*(byte *)(DAT_08020048 + 0xfa) + DAT_08020044 + 0xd) * 99;
    uVar4 = 99;
  }
  else {
    iVar5 = 0;
    uVar4 = 0x3de;
  }
  uVar1 = (param_1 + 1U) - uVar4 * ((param_1 + 1U) / uVar4);
  uVar3 = 0;
  while( true ) {
    uVar1 = uVar1 & 0xffff;
    if (uVar4 <= uVar3) {
      return 0xffff;
    }
    iVar2 = FUN_080090ec(uVar1 + iVar5 & 0xffff,param_2);
    if (iVar2 != 0) break;
    uVar1 = (uVar1 + 1) - uVar4 * ((uVar1 + 1) / uVar4);
    uVar3 = uVar3 + 1 & 0xffff;
  }
  return uVar1;
}

