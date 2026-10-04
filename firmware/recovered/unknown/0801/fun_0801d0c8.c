/**
 * @brief fun_0801d0c8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801d0c8, Ghidra name FUN_0801d0c8, 138 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801d0c8(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0801d154;
  if (*(char *)(DAT_0801d154 + (uint)*(byte *)(DAT_0801d154 + 0xfa) * 0x58 + 0x130) == '\x01') {
    iVar2 = DAT_0801d154 + (uint)*(byte *)(DAT_0801d154 + 0xfa) * 0x20;
    if (*(int *)(DAT_0801d158 + 3) == 0) {
      *(byte *)(iVar2 + 0x27f) = *(byte *)(iVar2 + 0x27f) & 0xbf;
    }
    else {
      *(byte *)(iVar2 + 0x27f) = *(byte *)(iVar2 + 0x27f) | 0x40;
    }
  }
  else {
    iVar2 = DAT_0801d154 + (uint)*(byte *)(DAT_0801d154 + 0xfa) * 0x24;
    if (*(int *)(DAT_0801d158 + 3) == 0) {
      *(byte *)(iVar2 + 0x2e1) = *(byte *)(iVar2 + 0x2e1) & 0xbf;
    }
    else {
      *(byte *)(iVar2 + 0x2e1) = *(byte *)(iVar2 + 0x2e1) | 0x40;
    }
  }
  FUN_080083cc();
  FUN_08018038();
  FUN_0800cb78(*(undefined1 *)(iVar1 + 0xfa),1);
  return 1;
}

