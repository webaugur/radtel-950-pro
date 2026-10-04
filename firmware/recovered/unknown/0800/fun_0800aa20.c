/**
 * @brief fun_0800aa20
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800aa20, Ghidra name FUN_0800aa20, 26 bytes.
 *       Not linked into rt950-firmware.
 */

bool FUN_0800aa20(uint param_1)

{
  uint uVar1;
  
  if ((int)(param_1 << 3) < 0) {
    uVar1 = *DAT_0800aa3c;
  }
  else {
    uVar1 = *DAT_0800aa40;
  }
  return (uVar1 & param_1) != 0;
}

