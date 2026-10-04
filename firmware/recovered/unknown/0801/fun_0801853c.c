/**
 * @brief fun_0801853c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801853c, Ghidra name FUN_0801853c, 80 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801853c(void)

{
  int iVar1;
  uint uVar2;
  int extraout_r3;
  
  FUN_08018340();
  iVar1 = DAT_0801858c;
  if (*(int *)(DAT_0801858c + 8) != 0) {
    return 1;
  }
  if (extraout_r3 == 0) {
    uVar2 = *(uint *)(DAT_0801858c + 0xc);
    if (uVar2 < 10) {
      uVar2 = uVar2 + 3 & 0xff;
    }
    else {
      uVar2 = uVar2 - 9 & 0xff;
    }
  }
  else {
    uVar2 = *(uint *)(DAT_0801858c + 0xc);
    if (uVar2 < 4) {
      uVar2 = uVar2 + 9 & 0xff;
    }
    else {
      uVar2 = uVar2 - 3 & 0xff;
    }
  }
  *(uint *)(DAT_0801858c + 0x53) = uVar2;
  *(uint *)(iVar1 + 0xc) = uVar2;
  *(char *)(iVar1 + -0xa3) = (char)uVar2 + -1;
  FUN_08019a50();
  return 0;
}

