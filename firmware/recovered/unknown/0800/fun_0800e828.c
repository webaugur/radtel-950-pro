/**
 * @brief fun_0800e828
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800e828, Ghidra name FUN_0800e828, 94 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800e828(int param_1,int param_2)

{
  int iVar1;
  
  FUN_0800e88c(param_2);
  FUN_0800ea8c(param_2);
  FUN_0800ea60(param_2);
  FUN_0800eab8(param_2);
  FUN_08021104(param_2);
  FUN_0801b334();
  iVar1 = DAT_0800e888;
  if ((*(char *)(DAT_0800e888 + 1) == '\x02') && (FUN_08011928(param_2), param_1 != 0)) {
    FUN_0800ecbc();
  }
  if (*(char *)(iVar1 + 1) != '\x01') {
    if ((*(char *)(iVar1 + 1) != '\0') && (param_2 != 0)) {
      FUN_0800b980();
      return;
    }
    return;
  }
  FUN_0800e95c(param_2);
  return;
}

