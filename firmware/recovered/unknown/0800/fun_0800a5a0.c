/**
 * @brief fun_0800a5a0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800a5a0, Ghidra name FUN_0800a5a0, 100 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800a5a0(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uStack_6c;
  undefined1 auStack_6b [27];
  undefined1 auStack_50 [64];
  
  FUN_08000f6e(&uStack_6c,s__PCAS03_5_0_0_0_0_3_7_60__0800a604,0x1c);
  bVar1 = FUN_08000ea6(&uStack_6c);
  uVar4 = (uint)bVar1;
  uVar2 = FUN_08007cc4(uVar4 - 2 & 0xff,auStack_6b);
  FUN_08000f6e(auStack_50,&uStack_6c,uVar4);
  uVar3 = uVar4 + 1 & 0xff;
  auStack_50[uVar4] = *(undefined1 *)(DAT_0800a620 + (uVar2 >> 4));
  uVar4 = uVar3 + 1 & 0xff;
  auStack_50[uVar3] = *(undefined1 *)(DAT_0800a620 + (uVar2 & 0xf));
  uVar2 = uVar4 + 1 & 0xff;
  auStack_50[uVar4] = 0xd;
  auStack_50[uVar2] = 10;
  FUN_08022dbe(auStack_50,uVar2 + 1 & 0xff);
  return;
}

