/**
 * @brief fun_08021dd4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08021dd4, Ghidra name FUN_08021dd4, 94 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08021dd4(int param_1)

{
  char *pcVar1;
  undefined4 extraout_r3;
  int unaff_r6;
  
  FUN_0800a1c4(4);
  FUN_080154a4(0,0xf0,0xa5,0xbe,0,0);
  if (*(char *)(iRam08021e30 + 8) == '\x01') {
    pcVar1 = &DAT_08021e44;
  }
  else {
    pcVar1 = (char *)((int)(BADSPACEBASE *)0x0 + 0x8021e33) + 1;
  }
  FUN_08014d88(0xa5,0x18,pcVar1,0x18,0,0xffff);
  FUN_08015500();
  if (param_1 == 0) {
    FUN_0801b41c();
    FUN_0801b394();
  }
  else {
    FUN_0801b37c();
  }
  FUN_0800ad06(2000);
  FUN_08018fa0();
  _BusFault = param_1;
  *(undefined4 *)(unaff_r6 + 0x54) = extraout_r3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

