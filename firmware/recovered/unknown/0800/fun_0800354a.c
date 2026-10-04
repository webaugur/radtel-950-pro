/**
 * @brief fun_0800354a
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800354a, Ghidra name FUN_0800354a, 36 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800354a(int param_1,uint param_2,uint param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)(param_1 + param_2);
  for (; param_2 != 0; param_2 = param_2 - 1 & 0xff) {
    pcVar1 = pcVar1 + -1;
    *pcVar1 = (char)param_3 + (char)(param_3 / 0x5b) * -0x5b + '!';
    param_3 = param_3 / 0x5b;
  }
  return;
}

