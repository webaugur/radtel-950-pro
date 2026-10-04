/**
 * @brief fun_0800eff0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800eff0, Ghidra name FUN_0800eff0, 70 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800eff0(uint param_1)

{
  byte bVar1;
  
  bVar1 = *DAT_0800f038;
  if (bVar1 != param_1) {
    *DAT_0800f038 = (byte)param_1;
    if (param_1 < 2) {
      FUN_0800ed5c();
      FUN_0800ad06(3000);
      FUN_0802767c(param_1);
    }
    else if (bVar1 < 2) {
      FUN_0800ed5c();
      FUN_0800ad06(3000);
      FUN_08027600();
    }
    FUN_0800ed30(1);
    return;
  }
  return;
}

