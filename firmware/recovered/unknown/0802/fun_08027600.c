/**
 * @brief fun_08027600
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08027600, Ghidra name FUN_08027600, 106 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08027600(void)

{
  dword dVar1;
  undefined8 uVar2;
  
  FUN_08027848();
  dVar1 = DWORD_0802766c;
  *(undefined1 *)DWORD_0802766c = 1;
  *(undefined1 *)(dVar1 + 1) = 0x31;
  *(undefined1 *)(dVar1 + 2) = 5;
  FUN_080277a0(3,dVar1);
  FUN_0800ad06(0x226);
  FUN_080277ec();
  dVar1 = DWORD_08027670;
  FUN_0802776c(*(undefined1 *)(DWORD_08027674 + *(byte *)(DWORD_08027670 + 0x16)),1,0);
  FUN_08027820(0x3302,0);
  FUN_08027820(0x3103,0x7800);
  *(undefined1 *)(dVar1 + 0x17) = *(undefined1 *)(DWORD_08027678 + 0x98);
  uVar2 = FUN_0800efd0();
  FUN_0800eec0((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0,1);
  return;
}

