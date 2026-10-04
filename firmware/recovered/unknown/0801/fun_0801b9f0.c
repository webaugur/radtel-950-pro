/**
 * @brief fun_0801b9f0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801b9f0, Ghidra name FUN_0801b9f0, 34 bytes.
 *       Not linked into rt950-firmware.
 */

int FUN_0801b9f0(void)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = DAT_0801ba14;
  uVar1 = (**(code **)(DAT_0801ba14 + 4))(0xd);
  if ((int)(uVar1 << 0x10) < 0) {
    return 0;
  }
  iVar2 = (**(code **)(iVar2 + 4))(0xe);
  return iVar2 + (uVar1 & 0x7ff) * 0x10000;
}

