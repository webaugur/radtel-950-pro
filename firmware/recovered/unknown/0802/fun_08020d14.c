/**
 * @brief fun_08020d14
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08020d14, Ghidra name FUN_08020d14, 146 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08020d14(int param_1,int param_2,int param_3)

{
  short sVar1;
  uint uVar2;
  ushort uVar3;
  byte bVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  uVar2 = param_2 * 0x30;
  FUN_080154a4(uVar2,(param_2 + 1) * 0x30,0x7a,0xfa,1);
  uVar5 = param_2 * 0xc0;
  bVar4 = 0;
  do {
    sVar1 = FUN_08021140(param_1 + uVar5,4);
    uVar5 = uVar5 + 4 & 0xffff;
    uVar3 = sVar1 * 2;
    if (0x80 < uVar3) {
      uVar3 = 0x80;
    }
    FUN_080153bc(uVar2,uVar2,0x80,0x80 - uVar3,0x3b15);
    uVar2 = uVar2 + 1 & 0xffff;
    bVar4 = bVar4 + 1;
  } while (bVar4 < 0x30);
  uVar7 = 0x7e0;
  sVar1 = 0x80 - (ushort)(byte)((uint)(param_3 << 0x19) >> 0x18);
  uVar6 = FUN_080153bc(0,0x2f,sVar1,sVar1);
  FUN_08015500((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar7,0);
  return;
}

