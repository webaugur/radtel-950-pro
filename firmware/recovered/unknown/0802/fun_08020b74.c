/**
 * @brief fun_08020b74
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08020b74, Ghidra name FUN_08020b74, 62 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08020b74(void)

{
  int iVar1;
  int iVar2;
  
  FUN_0800ca18();
  FUN_0800a1c4(5);
  iVar1 = DAT_08020bb4;
  FUN_08020b48(*(undefined4 *)(DAT_08020bb4 + 0x1c));
  FUN_08020ce8(*(undefined4 *)(iVar1 + 0x1c));
  iVar2 = DAT_08020bb8;
  FUN_08020a40(*(undefined1 *)(DAT_08020bb8 + 4),*(undefined1 *)(DAT_08020bb8 + 5));
  FUN_08020ae0(*(undefined1 *)(iVar2 + 0xb));
  FUN_08020bbc(0xffffff7e);
  FUN_08020da8(*(undefined4 *)(iVar1 + 0x24),*(undefined4 *)(iVar1 + 0x20));
  return;
}

