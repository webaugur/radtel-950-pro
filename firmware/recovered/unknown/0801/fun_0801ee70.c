/**
 * @brief fun_0801ee70
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801ee70, Ghidra name FUN_0801ee70, 48 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801ee70(void)

{
  int iVar1;
  int extraout_r2;
  
  *(char *)(DAT_0801eea4 + 0x1b) = (char)*(undefined4 *)(DAT_0801eea0 + 3);
  iVar1 = FUN_08012d50();
  if ((((iVar1 != 0x5b) && (iVar1 != 0x62)) && (iVar1 != 0x3e)) &&
     ((iVar1 != 0x65 && (iVar1 != 0x20)))) {
    *(undefined1 *)(extraout_r2 + 0x1a) = 4;
  }
  FUN_08018038();
  return 1;
}

