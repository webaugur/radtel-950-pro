/**
 * @brief fun_0801a91c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801a91c, Ghidra name FUN_0801a91c, 34 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801a91c(void)

{
  int iVar1;
  
  if (*DAT_0801a940 == '\0') {
    return 1;
  }
  iVar1 = (**(code **)(DAT_0801a944 + 4))(0xc);
  if (iVar1 << 0x1e < 0) {
    return 1;
  }
  return 0;
}

