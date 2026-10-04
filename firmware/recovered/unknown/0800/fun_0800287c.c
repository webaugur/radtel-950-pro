/**
 * @brief fun_0800287c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800287c, Ghidra name FUN_0800287c, 62 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0800287c(int param_1)

{
  char *pcVar1;
  
  if (param_1 != 2) {
    if (param_1 << 5 < 0) {
      pcVar1 = s_Invalid_Operation_080028bc;
    }
    else if (param_1 << 4 < 0) {
      pcVar1 = s_Divide_By_Zero_080028d0;
    }
    else if (param_1 << 3 < 0) {
      pcVar1 = s_Overflow_080028e0;
    }
    else if (param_1 << 2 < 0) {
      pcVar1 = s_Underflow_080028ec;
    }
    else if (param_1 << 1 < 0) {
      pcVar1 = s_Inexact_Result_080028f8;
    }
    else {
      pcVar1 = (char *)0x0;
    }
    FUN_08002928(s_SIGFPE__Arithmetic_exception__08002908,pcVar1);
    return 1;
  }
  return 0;
}

