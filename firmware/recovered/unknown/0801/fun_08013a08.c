/**
 * @brief fun_08013a08
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08013a08, Ghidra name FUN_08013a08, 82 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_08013a08(uint param_1)

{
  if ((param_1 == 0) || (0xd2 < param_1)) {
    if (*(char *)(DAT_08013a5c + 8) == '\x01') {
      FUN_08000850(DAT_08013a68,&DAT_08013a64,&DAT_08013a6c);
    }
    else {
      FUN_08000850(DAT_08013a68,&DAT_08013a64,&DAT_08013a60);
    }
  }
  else if (param_1 < 0x6a) {
    FUN_08000850(DAT_08013a68,s_D_03oN_08013a80,*(undefined2 *)(DAT_08013a74 + (param_1 - 1) * 2));
  }
  else {
    FUN_08000850(DAT_08013a68,s_D_03oI_08013a78,*(undefined2 *)(DAT_08013a74 + (param_1 - 0x6a) * 2)
                );
  }
  return DAT_08013a68;
}

