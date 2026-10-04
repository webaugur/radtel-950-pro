/**
 * @brief fun_080237cc
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080237cc, Ghidra name FUN_080237cc, 96 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080237cc(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar1 = DAT_0802382c;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  FUN_08000850(&local_18,s_WX__02d_08023830,*(byte *)(DAT_0802382c + 5) + 1);
  FUN_080154a4(0,0xf0,0xe6,0x11e,1,0);
  FUN_08014f44(0xe6,0x57,&local_18,0x18,0,0xffff,0);
  uVar2 = FUN_0802387c(*(undefined1 *)(iVar1 + 5));
  FUN_0800b448(0x28,0x104,uVar2,0);
  FUN_08015500();
  return;
}

