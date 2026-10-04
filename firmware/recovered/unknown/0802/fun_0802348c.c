/**
 * @brief fun_0802348c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802348c, Ghidra name FUN_0802348c, 30 bytes.
 *       Not linked into rt950-firmware.
 */

int FUN_0802348c(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = 0;
  do {
    iVar2 = (uint)*(byte *)(param_1 + uVar1) + iVar2 * 10;
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 7);
  return iVar2 * 10;
}

