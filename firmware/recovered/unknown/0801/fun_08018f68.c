/**
 * @brief fun_08018f68
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08018f68, Ghidra name FUN_08018f68, 12 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08018f68(uint param_1,uint param_2)

{
  *DAT_08018f78 = param_2 & DAT_08018f74 | param_1;
  return;
}

