/**
 * @brief fun_0801ed44
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801ed44, Ghidra name FUN_0801ed44, 116 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801ed44(undefined2 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = DAT_0801edb8;
  uVar2 = (uint)*(byte *)(DAT_0801edb8 + 0xfa);
  if (*(char *)(DAT_0801edb8 + uVar2 * 0x58 + 0x130) == '\x01') {
    iVar3 = DAT_0801edb8 + uVar2 * 0x20;
    *(byte *)(iVar3 + 0x27f) = *(byte *)(iVar3 + 0x27f) & 0x7f;
    *(undefined2 *)(iVar1 + (uint)*(byte *)(iVar1 + 0xfa) * 0x20 + 0x27a) = param_1;
  }
  else {
    iVar3 = DAT_0801edb8 + uVar2 * 0x24;
    *(byte *)(iVar3 + 0x2e1) = *(byte *)(iVar3 + 0x2e1) & 0xcf;
    *(undefined2 *)(iVar1 + (uint)*(byte *)(iVar1 + 0xfa) * 0x24 + 0x2da) = param_1;
  }
  FUN_080083cc();
  FUN_08018038();
  FUN_0800cb78(*(undefined1 *)(iVar1 + 0xfa),1);
  return;
}

