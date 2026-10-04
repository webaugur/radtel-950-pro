/**
 * @brief fun_0800ff30
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800ff30, Ghidra name FUN_0800ff30, 74 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800ff30(void)

{
  undefined4 local_12c;
  undefined4 local_128;
  undefined2 local_124;
  
  FUN_08001016(&local_128,0x11c);
  local_12c = *DAT_0800ff7c;
  FUN_08021824(0xa000,&local_12c,0x120);
  local_12c = *DAT_0800ff80;
  local_128 = DAT_0800ff80[1];
  local_124 = *(undefined2 *)(DAT_0800ff80 + 2);
  FUN_08021764(0xa000);
  FUN_080219b8(0xa000,&local_12c,0x120);
  return;
}

