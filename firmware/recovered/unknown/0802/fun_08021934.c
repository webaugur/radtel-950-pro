/**
 * @brief fun_08021934
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08021934, Ghidra name FUN_08021934, 128 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08021934(uint param_1,undefined1 *param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  short sVar4;
  bool bVar5;
  
  sVar4 = 10000;
  FUN_08021a20();
  uVar1 = DAT_080219b4;
  FUN_08012ae2(DAT_080219b4,0x1000);
  FUN_0800ad22(1);
  FUN_080218d8(2);
  FUN_080218d8((param_1 & 0xffffff) >> 0x10);
  FUN_080218d8((param_1 & 0xffff) >> 8);
  FUN_080218d8(param_1 & 0xff);
  for (uVar3 = 0; uVar3 < param_3; uVar3 = uVar3 + 1 & 0xffff) {
    FUN_080218d8(*param_2);
    param_2 = param_2 + 1;
  }
  FUN_08012ae6(uVar1,0x1000);
  FUN_0800ad22(1);
  do {
    bVar5 = sVar4 == 0;
    sVar4 = sVar4 + -1;
    if (bVar5) {
      return;
    }
    FUN_0800ad22(2);
    iVar2 = FUN_08021610();
  } while (iVar2 != 0);
  return;
}

