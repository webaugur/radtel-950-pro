/**
 * @brief fun_08022dd6
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08022dd6, Ghidra name FUN_08022dd6, 24 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08022dd6(int param_1,uint param_2)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < param_2; uVar1 = uVar1 + 1) {
    FUN_08027e2c(*(undefined1 *)(param_1 + uVar1));
  }
  return;
}

