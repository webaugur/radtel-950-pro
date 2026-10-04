/**
 * @brief fun_0800a908
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800a908, Ghidra name FUN_0800a908, 36 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800a908(uint param_1,uint *param_2)

{
  *DAT_0800a92c =
       (*param_2 | param_2[1] | param_2[2] | param_2[3]) << (param_1 & 0xff) |
       *DAT_0800a92c & ~(0xffe << (param_1 & 0xff));
  return;
}

