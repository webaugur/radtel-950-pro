/**
 * @brief fun_080073a4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080073a4, Ghidra name FUN_080073a4, 70 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080073a4(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  if (((*DAT_080073ec != '\x01') && (iVar2 = FUN_08008aa8(), puVar1 = DAT_080073f4, iVar2 == 0)) &&
     (*(char *)(DAT_080073f0 + 6) != '\0')) {
    if (param_1 == 9) {
      *DAT_080073f4 = 1;
      puVar1[3] = 0x91;
      puVar1[4] = 0xff;
      puVar1[5] = 0x91;
      puVar1[2] = 3;
      puVar1[1] = 0;
      return;
    }
    *DAT_080073f4 = 1;
    puVar1[3] = (char)param_1 + -0x6f;
    puVar1[2] = 1;
    puVar1[1] = 0;
  }
  return;
}

