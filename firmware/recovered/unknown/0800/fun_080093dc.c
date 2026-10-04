/**
 * @brief fun_080093dc
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080093dc, Ghidra name FUN_080093dc, 122 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_080093dc(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_0800945c;
  iVar1 = DAT_08009458;
  param_1 = param_1 / 10000;
  if (0x117 < param_1 - 0x438) {
    FUN_080134cc(param_1 & 0xffff);
    if (*(char *)(iVar1 + 0x62) == '\0') {
      if (param_1 - 0xb4 < 0x1cc) {
        return 1;
      }
    }
    else if ((param_1 - 0x280 < 0x1428) || (param_1 - 0x1db0 < 0x960)) {
      return 1;
    }
    return 0;
  }
  *(undefined1 *)(DAT_0800945c + 0x10a) = 5;
  *(undefined1 *)(iVar2 + 0x10d) = 0;
  if ((*(char *)(iVar1 + 0x49) != -0x5b) && (*(char *)(iVar1 + 0x49) != 'U')) {
    if (*(char *)(iVar1 + 0x62) != '\0') {
      return 1;
    }
    return 0;
  }
  return 0;
}

