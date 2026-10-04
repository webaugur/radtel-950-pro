/**
 * @brief fun_08022b84
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08022b84, Ghidra name FUN_08022b84, 32 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08022b84(void)

{
  int *piVar1;
  
  piVar1 = DAT_08022ba4;
  if (((DAT_08022ba4[2] == 0) && (*DAT_08022ba4 != 0)) &&
     (DAT_08022ba4[1] = DAT_08022ba4[1] + 1, 10 < (uint)piVar1[1])) {
    piVar1[2] = 1;
  }
  return;
}

