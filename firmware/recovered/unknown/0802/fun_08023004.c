/**
 * @brief fun_08023004
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08023004, Ghidra name FUN_08023004, 112 bytes.
 *       Not linked into rt950-firmware.
 */

int FUN_08023004(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar1 = 0;
  do {
    iVar3 = (uint)*(byte *)(param_1 + uVar1) + iVar3 * 10;
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 8);
  iVar2 = FUN_0800a07c(iVar3,param_3);
  if ((iVar2 == 0) &&
     ((*(char *)(DAT_08023074 + 0x4a) != -0x5b || (iVar3 = DAT_0802307c, param_3 != 2)))) {
    if (param_2 == 0) {
      iVar3 = *(int *)(DAT_08023078 + 0x14);
    }
    else if (param_2 == 1) {
      iVar3 = *(int *)(DAT_08023078 + 0x1c);
    }
    else if (param_2 == 2) {
      iVar3 = *(int *)(DAT_08023078 + 0x24);
    }
    else if (param_2 == 3) {
      iVar3 = *(int *)(DAT_08023078 + 0x2c);
    }
    else {
      iVar3 = DAT_08023080;
      if (param_2 != 5) {
        if (param_2 == 4) {
          iVar3 = *(int *)(DAT_08023078 + 0x34);
        }
        else {
          iVar3 = *(int *)(DAT_08023078 + 0x14);
        }
      }
    }
  }
  return iVar3;
}

