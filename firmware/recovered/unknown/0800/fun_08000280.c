/**
 * @brief fun_08000280
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08000280, Ghidra name FUN_08000280, 40 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08000280(void)

{
  undefined4 uVar1;
  undefined4 extraout_r2;
  undefined8 uVar2;
  
  uVar1 = FUN_08001f8c();
  FUN_08000258(uVar1,extraout_r2);
  FUN_08026f80();
  uVar2 = func_0x0800242c();
  FUN_0800027c();
  func_0x08025962((int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
  (*(code *)DWORD_080002c8)();
  (*(code *)DWORD_080002cc)();
  return;
}

