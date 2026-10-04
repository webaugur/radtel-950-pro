/**
 * @brief fun_0802004c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802004c, Ghidra name FUN_0802004c, 50 bytes.
 *       Not linked into rt950-firmware.
 */

uint FUN_0802004c(int param_1)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  
  if (param_1 == 0) {
    uVar2 = 0xe;
  }
  else {
    uVar2 = param_1 - 1U & 0xff;
  }
  bVar3 = 0;
  do {
    iVar1 = FUN_08009384(uVar2);
    if (iVar1 != 0) {
      return uVar2;
    }
    if (uVar2 == 0) {
      uVar2 = 0xe;
    }
    else {
      uVar2 = uVar2 - 1 & 0xff;
    }
    bVar3 = bVar3 + 1;
  } while (bVar3 < 0xf);
  return 0xff;
}

