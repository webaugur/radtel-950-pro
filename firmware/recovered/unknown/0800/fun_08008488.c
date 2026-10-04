/**
 * @brief fun_08008488
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08008488, Ghidra name FUN_08008488, 80 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08008488(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_2 != 0) {
    FUN_0801b334();
  }
  iVar1 = DAT_080084d8;
  FUN_0800864c(*(undefined1 *)(DAT_080084d8 + 0xfa),1,*(undefined2 *)(DAT_080084d8 + 0x108));
  if (param_1 == 0) {
    if (param_2 == 0) {
      FUN_08007e90(*(short *)(iVar1 + 0x108) + 1);
    }
    FUN_080084dc(*(undefined1 *)(iVar1 + 0xfa),*(undefined2 *)(iVar1 + 0x108));
  }
  FUN_080089e8();
  if (param_3 != 0) {
    FUN_0801c9a0();
    return;
  }
  return;
}

