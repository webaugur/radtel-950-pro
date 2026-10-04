/**
 * @brief fun_0801f664
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801f664, Ghidra name FUN_0801f664, 126 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801f664(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_r3;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_080154a4(1,0x1d,0x90,0x9b,1,0,in_r3);
  cVar1 = *(char *)(DAT_0801f6e4 + 8);
  if (cVar1 == '\x01') {
    uVar4 = 0xffff;
    uVar5 = 0;
    uVar3 = DAT_0801f6ec;
    uVar2 = FUN_08027a94(0x90,3,0x18,0xb);
  }
  else if (cVar1 == '\x02') {
    uVar4 = 0xffff;
    uVar5 = 0;
    uVar3 = DAT_0801f6f0;
    uVar2 = FUN_08027a94(0x90,3,0x18,0xb);
  }
  else if (cVar1 == '\x03') {
    uVar4 = 0xffff;
    uVar5 = 0;
    uVar3 = DAT_0801f6f4;
    uVar2 = FUN_08027a94(0x90,3,0x18,0xb);
  }
  else {
    uVar4 = 0xffff;
    uVar5 = 0;
    uVar3 = DAT_0801f6e8;
    uVar2 = FUN_08027a94(0x90,3,0x18,0xb);
  }
  FUN_08015500(uVar2,uVar3,uVar4,uVar5);
  return;
}

