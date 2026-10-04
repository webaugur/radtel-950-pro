/**
 * @brief fun_0800c098
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800c098, Ghidra name FUN_0800c098, 58 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800c098(void)

{
  undefined4 uVar1;
  undefined1 extraout_r3;
  undefined1 extraout_r3_00;
  
  if (*DAT_0800c0d4 != '\x02') {
    uVar1 = FUN_0801328c();
    FUN_0800c710(2,extraout_r3,uVar1,1);
    return;
  }
  uVar1 = FUN_0801328c();
  FUN_0800c710(0,extraout_r3_00,uVar1,1);
  return;
}

