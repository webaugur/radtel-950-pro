/**
 * @brief fun_0801cc80
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801cc80, Ghidra name FUN_0801cc80, 90 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801cc80(undefined2 param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = DAT_0801ccdc;
  uVar2 = (uint)*(byte *)(DAT_0801ccdc + 0xfa);
  if (*(char *)(DAT_0801ccdc + uVar2 * 0x58 + 0x130) == '\x01') {
    *(undefined2 *)(DAT_0801ccdc + uVar2 * 0x20 + 0x278) = param_1;
    *(undefined2 *)(iVar1 + (uint)*(byte *)(iVar1 + 0xfa) * 0x20 + 0x27a) = param_1;
  }
  else {
    *(undefined2 *)(DAT_0801ccdc + uVar2 * 0x24 + 0x2d8) = param_1;
    *(undefined2 *)(iVar1 + (uint)*(byte *)(iVar1 + 0xfa) * 0x24 + 0x2da) = param_1;
  }
  FUN_080083cc();
  FUN_08018038();
  return;
}

