/**
 * @brief fun_0800a6d4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800a6d4, Ghidra name FUN_0800a6d4, 134 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800a6d4(void)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  uint uVar3;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  
  iVar2 = FUN_08008214();
  if (iVar2 == 0) {
    return;
  }
  FUN_0800a77c();
  if (DAT_08007890[2] == 1) {
    uVar3 = *DAT_08007890;
    FUN_08000f6e(DAT_08007890 + -0x39,DAT_08007890 + 4,*DAT_08007890,extraout_r3_00,unaff_r4,
                 unaff_lr);
    FUN_0800a134();
    if (0x40 < uVar3) {
      uVar3 = 0x40;
    }
    FUN_08000ee4(DAT_080092c8,DAT_08007890 + -0x39,uVar3,extraout_r3,unaff_r4);
    iVar2 = DAT_080092c8;
    *(undefined2 *)(DAT_080092c8 + -10) = 2000;
    *(short *)(iVar2 + -0xc) = (short)uVar3;
    iVar1 = FUN_080097ac();
    if (iVar1 == 1) {
      FUN_08012ae6(DAT_080092cc,0x100);
      *(undefined1 *)(DAT_080092d0 + 0x47) = 1;
      *(undefined1 *)(iVar2 + -0xe) = 1;
      FUN_08019c98();
      return;
    }
    return;
  }
  return;
}

