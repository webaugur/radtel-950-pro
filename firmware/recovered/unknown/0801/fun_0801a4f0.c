/**
 * @brief fun_0801a4f0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801a4f0, Ghidra name FUN_0801a4f0, 174 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801a4f0(int param_1)

{
  int iVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  iVar1 = 0;
  FUN_080154a4(0,0xf0,0xd6,0xef,1,0);
  if (*(char *)(DAT_0801a5a0 + 8) == '\x01') {
    FUN_08000850(&local_28,&DAT_0801a5c0);
    FUN_08014d88(0xd6,0x2d,&local_28,0x18,0,0xffff);
  }
  else {
    FUN_08000850(&local_28,s_SCANQT_0801a5a4);
    FUN_08014d88(0xd6,0x2a,&local_28,0x18,0,0xffff);
  }
  FUN_08015500();
  if (param_1 == 0) {
    FUN_08000850(&local_28,s_STOP_0801a5d0);
  }
  else {
    FUN_08000850(&local_28,s_RUNNING_0801a5b4);
    iVar1 = 6;
  }
  FUN_080154a4(0,0xf0,0xfa,0x113,1,0);
  FUN_08014d88(0xfa,iVar1 + 0x37,&local_28,0x18,0,0xffff);
  FUN_08015500();
  return;
}

