/**
 * @brief fun_08021708
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08021708, Ghidra name FUN_08021708, 82 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08021708(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_0802175c;
  FUN_08021a20();
  uVar1 = DAT_08021760;
  FUN_08012ae2(DAT_08021760,0x1000);
  FUN_0800ad22(1);
  FUN_080218d8(199);
  FUN_08012ae6(uVar1,0x1000);
  FUN_0800ad22(1);
  FUN_0800ad06(100);
  do {
    iVar3 = iVar3 + -1;
    if (iVar3 == -1) {
      return;
    }
    FUN_0800ad22(500);
    iVar2 = FUN_08021610();
  } while (iVar2 != 0);
  return;
}

