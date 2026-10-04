/**
 * @brief fun_0800bac0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800bac0, Ghidra name FUN_0800bac0, 110 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800bac0(void)

{
  int iVar1;
  undefined1 auStack_18 [10];
  undefined1 local_e;
  
  FUN_08000bca(auStack_18,10,0x2d);
  FUN_08000ee4(auStack_18,DAT_0800bb30 + 0x12,*(undefined4 *)(DAT_0800bb30 + 4));
  local_e = 0;
  if (*(char *)(DAT_0800bb34 + 0xfa) == '\x01') {
    iVar1 = 0xab;
  }
  else if (*(char *)(DAT_0800bb34 + 0xfa) == '\x02') {
    iVar1 = 0x104;
  }
  else {
    iVar1 = 0x52;
  }
  FUN_080154a4(0x36,0xb8,iVar1,iVar1 + 0x19,1,0);
  FUN_08014d88(iVar1,0x36,auStack_18,0x18,0,0xffff);
  FUN_08015500();
  return;
}

