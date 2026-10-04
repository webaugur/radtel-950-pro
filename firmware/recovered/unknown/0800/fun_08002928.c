/**
 * @brief fun_08002928
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08002928, Ghidra name FUN_08002928, 50 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08002928(char *param_1,char *param_2)

{
  char cVar1;
  
  cVar1 = '\n';
  for (; (thunk_FUN_08027588(cVar1), param_1 != (char *)0x0 && (cVar1 = *param_1, cVar1 != '\0'));
      param_1 = param_1 + 1) {
  }
  for (; (param_2 != (char *)0x0 && (*param_2 != '\0')); param_2 = param_2 + 1) {
    thunk_FUN_08027588();
  }
  thunk_FUN_08027588(10);
  return;
}

