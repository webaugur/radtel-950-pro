/**
 * @brief fun_0801ab3c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801ab3c, Ghidra name FUN_0801ab3c, 144 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801ab3c(void)

{
  int iVar1;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  
  iVar1 = DAT_0801ab90;
  FUN_0801acde(*(undefined1 *)(DAT_0801ab90 + 0x10d));
  if ((*(char *)(DAT_0801ab94 + 0x38) == '\x01') ||
     ((uint)(**(int **)(DAT_0801ab94 + 0x18) + DAT_0801ab98) < DAT_0801ab9c)) {
    if (*(char *)(DAT_0801aba0 + 1) == '\v') {
      FUN_0801ac14(0);
    }
    else {
      FUN_0801ac14(1);
    }
  }
  else {
    FUN_0801ac14(0);
  }
  FUN_0801a9a4(*(undefined1 *)(iVar1 + 0x10a),0);
  (**(code **)(DAT_0801c088 + 8))
            (0x37,0x9f1f,*(code **)(DAT_0801c088 + 8),extraout_r3,unaff_r4,unaff_lr);
  FUN_0801c150(0);
  iVar1 = DAT_0801c088;
  FUN_0801b910(*(undefined4 *)(DAT_0801c088 + 0xc));
  FUN_0801c1d0();
  FUN_08007bf0();
  FUN_0801c548(*(undefined1 *)(iVar1 + 0x26));
  FUN_0801c150(1);
  FUN_0801c3b0(0);
  return;
}

