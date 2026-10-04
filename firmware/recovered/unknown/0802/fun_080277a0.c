/**
 * @brief fun_080277a0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080277a0, Ghidra name FUN_080277a0, 38 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080277a0(uint param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 uVar2;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  bool bVar3;
  
  FUN_08026c74(0x22,0);
  uVar2 = extraout_r3;
  while (uVar1 = ram0x08026db4, bVar3 = param_1 != 0, param_1 = param_1 - 1 & 0xff, bVar3) {
    FUN_08026db8(*param_2);
    param_2 = param_2 + 1;
    uVar2 = extraout_r3_00;
  }
  FUN_08013e5c(ram0x08026db4,0x80,1,uVar2,unaff_r4,unaff_lr);
  FUN_0800ad22(10);
  FUN_08012ae2(uVar1,0x40);
  FUN_0800ad22(5);
  FUN_08012ae2(uVar1,0x80);
  FUN_0800ad22(5);
  FUN_08012ae6(uVar1,0x40);
  FUN_0800ad22(5);
  FUN_08012ae6(uVar1,0x80);
  FUN_0800ad22(5);
  FUN_08012ae2(uVar1,0x40);
  FUN_0800ad22(5);
  return;
}

