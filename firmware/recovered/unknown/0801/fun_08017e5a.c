/**
 * @brief fun_08017e5a
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08017e5a, Ghidra name FUN_08017e5a, 8 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08017e5a(void)

{
  undefined4 uVar1;
  int unaff_r7;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  FUN_08014d88();
  FUN_08015500();
  FUN_08023510(0x47,6);
  if (*(char *)(unaff_r7 + 7) == '\0') {
    FUN_08025f44(0x514);
  }
  else {
    FUN_08025f44(800);
  }
  uVar1 = FUN_0800a1c4(4);
  FUN_0801b334(uVar1,in_stack_00000000,in_stack_00000004,in_stack_00000008);
  return;
}

