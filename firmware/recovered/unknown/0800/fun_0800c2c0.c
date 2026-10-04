/**
 * @brief fun_0800c2c0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800c2c0, Ghidra name FUN_0800c2c0, 140 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800c2c0(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_34 [16];
  undefined1 local_24;
  undefined1 local_23;
  
  iVar2 = DAT_0800c350;
  iVar1 = DAT_0800c34c;
  uVar4 = 0;
  do {
    if (*(char *)(iVar1 + uVar4 * 0x12) == '\b') {
      FUN_08000850(auStack_34,s______s_0800c354,0x11,0x11,iVar1 + uVar4 * 0x12);
      local_23 = 0;
    }
    else {
      FUN_08000850(auStack_34,s______s_0800c354,0x10,0x10,iVar1 + uVar4 * 0x12);
      local_24 = 0;
    }
    uVar3 = (uint)*(byte *)(iVar2 + uVar4);
    FUN_080154a4(9,0xe6,uVar3,uVar3 + 0x18,1,0xd086);
    FUN_08014d88(*(undefined1 *)(iVar2 + uVar4),0xc,auStack_34,0x18,0xd086,0xffff);
    FUN_08015500();
    uVar4 = uVar4 + 1;
  } while (uVar4 < 2);
  return;
}

