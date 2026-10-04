/**
 * @brief fun_0801c41c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801c41c, Ghidra name FUN_0801c41c, 40 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801c41c(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = DAT_0801c444;
  if (param_1 != 0) {
    uVar2 = (**(code **)(DAT_0801c444 + 4))(0x7d);
                    /* WARNING: Could not recover jumptable at 0x0801c43a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 8))(0x7d,uVar2 & 0xffffffe0 | 0x34);
    return;
  }
  FUN_0801b8d0();
  return;
}

