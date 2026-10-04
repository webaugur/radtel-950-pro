/**
 * @brief fun_080070d4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080070d4, Ghidra name FUN_080070d4, 146 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_080070d4(char *param_1)

{
  int iVar1;
  
  if ((param_1[3] == '/') && (iVar1 = FUN_08026e58(param_1,3,7), iVar1 == 1)) {
    return 1;
  }
  if ((((*param_1 == 'P') && (param_1[1] == 'H')) && (param_1[2] == 'G')) &&
     (iVar1 = FUN_08026e58(param_1 + 3,4), iVar1 == 1)) {
    return 1;
  }
  if (((*param_1 == 'R') && (param_1[1] == 'N')) &&
     ((param_1[2] == 'G' && (iVar1 = FUN_08026e58(param_1 + 3,4), iVar1 == 1)))) {
    return 1;
  }
  if (((*param_1 == 'D') && (param_1[1] == 'F')) &&
     ((param_1[2] == 'S' && (iVar1 = FUN_08026e58(param_1 + 3,4), iVar1 == 1)))) {
    return 1;
  }
  return 0;
}

