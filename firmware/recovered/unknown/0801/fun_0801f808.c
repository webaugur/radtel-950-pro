/**
 * @brief fun_0801f808
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801f808, Ghidra name FUN_0801f808, 134 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801f808(int param_1)

{
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  uStack_20 = *(undefined4 *)(DAT_0801f890 + 0x54);
  uStack_1c = *(undefined4 *)(DAT_0801f890 + 0x58);
  local_24 = *(undefined4 *)(DAT_0801f890 + 0x50);
  local_18 = *(undefined4 *)(DAT_0801f890 + 0x5c);
  FUN_080154a4(0,0xf0,0xea,0x11c,1,0);
  if (param_1 == 0) {
    FUN_08014d88(0xea,0x2e,&local_24,0x18,0,0xffff);
    FUN_08000bca(&local_24,0xe,0x20);
    FUN_08014d88(0x107,0x23,&local_24,0x18,0,0xffff);
  }
  else {
    FUN_08014d88(0x107,0x23,&local_24,0x18,0,0xffff);
    FUN_0800c270(0x3e,0xea,*(undefined4 *)(DAT_0801f894 + 4),0xffff);
  }
  FUN_08015500();
  return;
}

