/**
 * @brief fun_0802007e
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802007e, Ghidra name FUN_0802007e, 50 bytes.
 *       Not linked into rt950-firmware.
 */

uint FUN_0802007e(uint param_1)

{
  int iVar1;
  byte bVar2;
  
  bVar2 = 0;
  do {
    param_1 = (param_1 + 1) % 0xf;
    iVar1 = FUN_08009384(param_1);
    if (iVar1 != 0) {
      return param_1;
    }
    bVar2 = bVar2 + 1;
  } while (bVar2 < 0xf);
  return 0xff;
}

