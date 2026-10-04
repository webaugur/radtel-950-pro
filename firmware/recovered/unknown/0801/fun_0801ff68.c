/**
 * @brief fun_0801ff68
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801ff68, Ghidra name FUN_0801ff68, 108 bytes.
 *       Not linked into rt950-firmware.
 */

uint FUN_0801ff68(uint param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  if (*(char *)(DAT_0801ffd4 + 6) == '\0') {
    iVar6 = (uint)*(byte *)((uint)*(byte *)(DAT_0801ffd8 + 0xfa) + DAT_0801ffd4 + 0xd) * 99;
    uVar5 = 99;
  }
  else {
    iVar6 = 0;
    uVar5 = 0x3de;
  }
  uVar1 = uVar5;
  if (param_1 != 0) {
    uVar1 = param_1;
  }
  uVar4 = 0;
  while( true ) {
    uVar3 = uVar1 - 1 & 0xffff;
    if (uVar5 <= uVar4) {
      return 0xffff;
    }
    iVar2 = FUN_080090ec(uVar3 + iVar6 & 0xffff,param_2);
    if (iVar2 != 0) break;
    uVar1 = uVar5;
    if (uVar3 != 0) {
      uVar1 = uVar3;
    }
    uVar4 = uVar4 + 1 & 0xffff;
  }
  return uVar3;
}

