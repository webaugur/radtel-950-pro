/**
 * @brief fun_08013e84
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08013e84, Ghidra name FUN_08013e84, 470 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08013e84(void)

{
  undefined4 uVar1;
  undefined4 in_r3;
  undefined4 local_20;
  
  local_20 = (undefined *)in_r3;
  FUN_0801a648(0x7d,1);
  FUN_0801a610(DAT_0801405c,1);
  FUN_0801a5f4(3,1);
  FUN_0801267c(0x2000000);
  FUN_08012aea(&local_20);
  uVar1 = DAT_08014060;
  local_20 = (undefined *)0x10018dc8;
  FUN_080125d4(DAT_08014060,&local_20);
  FUN_08012ae6(uVar1,0x8000);
  FUN_08012ae6(uVar1,0x800);
  FUN_08012ae6(uVar1,0x100);
  local_20 = &UNK_48011000;
  FUN_080125d4(uVar1,&local_20);
  local_20 = (undefined *)0x20037;
  FUN_080125d4(uVar1,&local_20);
  FUN_08012aea(&local_20);
  uVar1 = DAT_08014064;
  local_20 = (undefined *)0x10021bcf;
  FUN_080125d4(DAT_08014064,&local_20);
  FUN_08012afa(uVar1,0x11a0);
  local_20 = &UNK_48010030;
  FUN_080125d4(uVar1,&local_20);
  local_20 = (undefined *)0x1802a000;
  FUN_080125d4(uVar1,&local_20);
  local_20 = (undefined *)CONCAT22(local_20._2_2_,0x4000);
  local_20 = (undefined *)CONCAT13(4,(undefined3)local_20);
  FUN_080125d4(uVar1,&local_20);
  FUN_08012aea(&local_20);
  uVar1 = DAT_08014068;
  local_20 = (undefined *)0x10027e7f;
  FUN_080125d4(DAT_08014068,&local_20);
  FUN_08012ae2(uVar1,0x10);
  FUN_08012ae2(uVar1,0x40);
  FUN_08012ae2(uVar1,0x1000);
  FUN_08012ae6(uVar1,0x400);
  local_20 = (undefined *)CONCAT22(local_20._2_2_,0x8180);
  local_20 = (undefined *)CONCAT13(0x48,(undefined3)local_20);
  FUN_080125d4(uVar1,&local_20);
  FUN_08012aea(&local_20);
  uVar1 = DAT_0801406c;
  local_20 = (undefined *)0x1002ff0f;
  FUN_080125d4(DAT_0801406c,&local_20);
  FUN_08012afa(uVar1,0xff0f);
  local_20 = (undefined *)CONCAT22(local_20._2_2_,0xf0);
  local_20 = (undefined *)CONCAT13(0x48,(undefined3)local_20);
  FUN_080125d4(uVar1,&local_20);
  FUN_08012aea(&local_20);
  uVar1 = DAT_08014070;
  local_20 = (undefined *)0x1001ff92;
  FUN_080125d4(DAT_08014070,&local_20);
  FUN_08012afa(uVar1,0x8d00);
  local_20 = (undefined *)CONCAT22(local_20._2_2_,0x6d);
  local_20 = (undefined *)CONCAT13(0x48,(undefined3)local_20);
  FUN_080125d4(uVar1,&local_20);
  return;
}

