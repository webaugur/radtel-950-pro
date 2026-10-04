/**
 * @brief fun_0800e174
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800e174, Ghidra name FUN_0800e174, 78 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0800e174(void)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_0800e828(0,1);
  iVar1 = DAT_0800e1c4;
  *(undefined1 *)(DAT_0800e1c4 + 0x1f) = 1;
  *(undefined1 *)(iVar1 + 1) = 5;
  iVar2 = FUN_0801a91c();
  if (iVar2 == 1) {
    FUN_0801ac32(1);
    FUN_08015824(1);
    FUN_0801acce(1);
    FUN_080207ec(5);
    *(undefined1 *)(iVar1 + 0x14) = 5;
  }
  else {
    FUN_0801ac82(0);
    FUN_0801ad58();
    FUN_0800da50();
  }
  uVar4 = 0x2965;
  FUN_080154a4(0x76,0x93,299,0x13a,1,0x2965,unaff_r4,unaff_lr);
  uVar3 = _DAT_0800bcb8;
  FUN_08027b14(299,0x78,0x19,0xf);
  FUN_08015500();
  FUN_0800c098(10,extraout_r1,uVar3,uVar4);
  return;
}

