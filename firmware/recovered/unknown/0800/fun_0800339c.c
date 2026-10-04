/**
 * @brief fun_0800339c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800339c, Ghidra name FUN_0800339c, 70 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800339c(void)

{
  char *pcVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  
  pcVar1 = DAT_080033c4;
  if (*DAT_080033c0 != '\0') {
    if (*DAT_080033c4 == '\0') {
      FUN_080032f0();
      *pcVar1 = '\x01';
      FUN_0800a9ec(4);
      FUN_0800a9ec(1);
      FUN_0800a9b8(DAT_0800350c,1,extraout_r2,extraout_r3,unaff_r4,unaff_lr);
      FUN_08022102(0x40000000);
      return;
    }
  }
  return;
}

