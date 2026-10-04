/**
 * @brief fun_08021610
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08021610, Ghidra name FUN_08021610, 20 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_08021610(void)

{
  uint uVar1;
  
  uVar1 = FUN_0802188c(1);
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  return 0;
}

