/**
 * @brief fun_08021764
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08021764, Ghidra name FUN_08021764, 102 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08021764(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  short sVar3;
  bool bVar4;
  
  sVar3 = -0x15a0;
  FUN_08021a20();
  uVar1 = DAT_080217cc;
  FUN_08012ae2(DAT_080217cc,0x1000);
  FUN_0800ad22(1);
  FUN_080218d8(0x20);
  FUN_080218d8((param_1 & 0xffffff) >> 0x10);
  FUN_080218d8((param_1 & 0xffff) >> 8);
  FUN_080218d8(param_1 & 0xff);
  FUN_08012ae6(uVar1,0x1000);
  FUN_0800ad22(1);
  do {
    bVar4 = sVar3 == 0;
    sVar3 = sVar3 + -1;
    if (bVar4) {
      return;
    }
    FUN_0800ad22(2);
    iVar2 = FUN_08021610();
  } while (iVar2 != 0);
  return;
}

