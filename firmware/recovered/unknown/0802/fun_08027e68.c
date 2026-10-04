/**
 * @brief fun_08027e68
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08027e68, Ghidra name FUN_08027e68, 34 bytes.
 *       Not linked into rt950-firmware.
 */

byte * FUN_08027e68(undefined4 param_1,char *param_2)

{
  int iVar1;
  
  if (((param_2 != (char *)0x0) && (*param_2 != '\0')) &&
     (iVar1 = FUN_0800230c(DAT_08027e8c + 0x8027e7a), iVar1 != 0)) {
    return (byte *)0x0;
  }
  return BYTE_ARRAY_08027e8a + DAT_08027e90;
}

