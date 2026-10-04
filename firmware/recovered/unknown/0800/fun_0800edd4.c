/**
 * @brief fun_0800edd4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800edd4, Ghidra name FUN_0800edd4, 40 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0800edd4(void)

{
  undefined1 *puVar1;
  
  puVar1 = DAT_0800edfc;
  *DAT_0800edfc = 0x14;
  FUN_080277c6(1,puVar1,1,puVar1 + 7);
  if ((DAT_0800edfc[7] & 1) != 0) {
    FUN_0800ee00();
    return 2;
  }
  return 0;
}

