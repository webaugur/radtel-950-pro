/**
 * @brief fun_08013c50
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08013c50, Ghidra name FUN_08013c50, 86 bytes.
 *       Not linked into rt950-firmware.
 */

int FUN_08013c50(int param_1)

{
  uint uVar1;
  
  FUN_08021824(param_1 * 0x10 + 0xc000,DAT_08013ca8,0xc);
  uVar1 = 0;
  do {
    if (*(char *)(DAT_08013ca8 + uVar1) == -1) {
      *(undefined1 *)(DAT_08013ca8 + uVar1) = 0;
      break;
    }
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 0xc);
  if (uVar1 == 0) {
    if (*(char *)(DAT_08013cac + 8) == '\x01') {
      FUN_08000850(DAT_08013ca8,s__s__d_08013cb8,&DAT_08013cc0,param_1 + 1);
    }
    else {
      FUN_08000850(DAT_08013ca8,s__s__d_08013cb8,&DAT_08013cb0,param_1 + 1);
    }
  }
  return DAT_08013ca8;
}

