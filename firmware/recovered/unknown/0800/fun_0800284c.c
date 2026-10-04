/**
 * @brief fun_0800284c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800284c, Ghidra name FUN_0800284c, 38 bytes.
 *       Not linked into rt950-firmware.
 */

longlong FUN_0800284c(uint param_1,int param_2,uint param_3)

{
  if ((int)(param_3 - 0x20) < 0) {
    return CONCAT44(param_2 << (param_3 & 0xff) | param_1 >> (0x20 - param_3 & 0xff),
                    param_1 << (param_3 & 0xff));
  }
  return (ulonglong)(param_1 << (param_3 - 0x20 & 0xff)) << 0x20;
}

