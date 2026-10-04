/**
 * @brief fun_0801b2a8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801b2a8, Ghidra name FUN_0801b2a8, 78 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801b2a8(void)

{
  int iVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 auStack_24 [32];
  
  FUN_08001016(auStack_24,0x20);
  iVar1 = DAT_0801b2f8;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  *(undefined1 *)(DAT_0801b2f8 + 0xd) = 0;
  *(undefined1 *)(iVar1 + 0xe) = 0;
  *(undefined1 *)(iVar1 + 0xf) = 0;
  FUN_08021624();
  FUN_08000ee4(auStack_24,DAT_0801b2fc,0x14);
  FUN_0800f3c0(0,auStack_24,&local_30);
  FUN_08000ee4(auStack_24,DAT_0801b2fc + 0x14,0x14);
  FUN_0800f3c0(0x3f,auStack_24,&local_30);
  return;
}

