/**
 * @brief fun_0801f898
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801f898, Ghidra name FUN_0801f898, 222 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801f898(int param_1)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  
  pbVar2 = DAT_0801f90c;
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 != 0x12) {
    if (iVar3 < 0x13) {
      if (((iVar3 == 3) || (iVar3 == 7)) || (iVar3 == 0x10)) {
        FUN_080073a4(0);
        return;
      }
      if (iVar3 == 0x11) {
        if (*DAT_0801f90c != 6) {
          FUN_0801f600();
          FUN_0801f808(0);
          FUN_080073a4(0);
          return;
        }
        FUN_0800ea8c(0);
        iVar3 = DAT_0800f108;
        *(undefined1 *)(DAT_0800f108 + 1) = 1;
        FUN_080179a0();
        FUN_0800a1a8();
        FUN_0800da50();
        puVar1 = DAT_0800f110;
        *DAT_0800f110 = DAT_0800f10c;
        *(undefined1 *)(iVar3 + 2) = 1;
        *(undefined1 *)(iVar3 + 3) = 1;
        FUN_08001016(puVar1 + 0x14,0x17,extraout_r2,extraout_r3,unaff_r4);
        puVar1[2] = 0;
        FUN_08001016(puVar1 + 3,0x14);
        FUN_08001016(puVar1 + 8,0x14);
        FUN_08001016(puVar1 + 0xd,0x14);
        *(undefined4 *)((int)puVar1 + -0xa3) = 0;
        *(undefined1 *)((int)puVar1 + -0x9f) = 0;
        FUN_08000fd2((int)puVar1 + -0x9e,0x9c);
        FUN_08022df0(1);
        FUN_08019a50();
        return;
      }
    }
    else if ((iVar3 == 0x13) || (iVar3 == 0x15)) {
      if (2 < *DAT_0801f90c) {
        FUN_0801f808(0);
        *pbVar2 = 0;
      }
    }
    else if (iVar3 == 0x1d) goto LAB_0801f8da;
    return;
  }
LAB_0801f8da:
  FUN_0800ea8c(1);
  return;
}

