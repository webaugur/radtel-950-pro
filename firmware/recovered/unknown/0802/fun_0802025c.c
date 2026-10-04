/**
 * @brief fun_0802025c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802025c, Ghidra name FUN_0802025c, 60 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0802025c(int param_1,int param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = DAT_08020298;
  uVar5 = 0;
  uVar4 = 0;
  do {
    if (param_3 <= uVar4) {
      return;
    }
    bVar1 = *(byte *)(iVar3 + uVar5);
    if (bVar1 == 0x20) {
LAB_08020280:
      *(undefined1 *)(param_2 + uVar4) = *(undefined1 *)(param_1 + uVar4);
    }
    else {
      bVar2 = *(byte *)(param_1 + uVar4);
      if ((((bVar2 == 0) || (bVar2 == 0xff)) || (bVar2 == bVar1)) || (bVar2 == (bVar1 ^ 0xff)))
      goto LAB_08020280;
      *(byte *)(param_2 + uVar4) = bVar2 ^ bVar1;
    }
    uVar5 = uVar5 + 1 & 3;
    uVar4 = uVar4 + 1;
  } while( true );
}

