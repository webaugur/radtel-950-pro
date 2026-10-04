/**
 * @brief fun_0802767c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802767c, Ghidra name FUN_0802767c, 130 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0802767c(int param_1)

{
  dword dVar1;
  
  FUN_08027848();
  dVar1 = DWORD_08027700;
  if (param_1 == 1) {
    *(undefined1 *)DWORD_08027700 = 1;
    *(undefined1 *)(dVar1 + 1) = 0x11;
    *(undefined1 *)(dVar1 + 2) = 5;
    FUN_080277a0(3,DWORD_08027700);
    FUN_0800ad06(0x78);
    FUN_08027848();
    FUN_08027820(1);
    FUN_08027820(0x3202,0);
    FUN_08027820(0x3103,0x7800);
    *(undefined1 *)(DWORD_08027708 + 0x17) = *(undefined1 *)(DWORD_08027704 + 0x44);
    FUN_0800efd0();
  }
  else {
    *(undefined1 *)DWORD_08027700 = 1;
    *(undefined1 *)(dVar1 + 1) = 0x10;
    *(undefined1 *)(dVar1 + 2) = 5;
    FUN_080277a0(3);
    FUN_0800ad06(0x78);
    FUN_08027848();
    FUN_08027820(1);
  }
  FUN_0800eec0();
  return;
}

