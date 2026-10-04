/**
 * @brief fun_08008404
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08008404, Ghidra name FUN_08008404, 116 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08008404(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_08008478;
  iVar2 = FUN_0801ff68(*(undefined2 *)(DAT_08008478 + 0x108),param_1);
  *(short *)(iVar1 + 0x108) = (short)iVar2;
  if (iVar2 != 0xffff) {
    FUN_08008488(param_1,param_2,0);
    if (param_1 == 0) {
      FUN_0800af94(1);
    }
    else {
      FUN_0800c16c();
    }
    FUN_0801c9a0();
    return;
  }
  if ((*(char *)(DAT_0800847c + 0x4a) == -0x5b) && (*(char *)(iVar1 + 0xfa) == '\x02')) {
    FUN_080158b0(DAT_08008484,*(undefined1 *)(DAT_08008480 + 2),0);
    return;
  }
  FUN_080158b0(DAT_08008478 + 0xfe,*(undefined1 *)((uint)*(byte *)(iVar1 + 0xfa) + DAT_08008480),0);
  return;
}

