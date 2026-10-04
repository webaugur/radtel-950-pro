/**
 * @brief fun_0801d288
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801d288, Ghidra name FUN_0801d288, 118 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801d288(void)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_0801d304;
  iVar4 = *(int *)(DAT_0801d300 + 3);
  uVar1 = (undefined1)iVar4;
  *(undefined1 *)(DAT_0801d304 + (uint)*(byte *)(DAT_0801d304 + 0xfa) * 0x58 + 0x136) = uVar1;
  uVar2 = (uint)*(byte *)(iVar3 + 0xfa);
  if (*(char *)(iVar3 + uVar2 * 0x58 + 0x130) == '\x01') {
    if (iVar4 == 0) {
      iVar3 = iVar3 + uVar2 * 0x20;
      *(byte *)(iVar3 + 0x27f) = *(byte *)(iVar3 + 0x27f) & 0xf7;
    }
    else {
      iVar3 = iVar3 + uVar2 * 0x20;
      *(byte *)(iVar3 + 0x27f) = *(byte *)(iVar3 + 0x27f) | 8;
    }
  }
  else {
    *(undefined1 *)(iVar3 + uVar2 * 0x24 + 0x2dd) = uVar1;
  }
  FUN_080083cc();
  FUN_08018038();
  return 1;
}

