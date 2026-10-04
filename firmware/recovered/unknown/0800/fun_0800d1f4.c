/**
 * @brief fun_0800d1f4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800d1f4, Ghidra name FUN_0800d1f4, 164 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800d1f4(void)

{
  int iVar1;
  
  iVar1 = DAT_0800d29c;
  if (*(char *)(DAT_0800d298 + 0x1e) == '\0') {
    if (*(char *)(DAT_0800d29c + 0xfa) == '\0') {
      FUN_0800c710(0,0,0,1);
      FUN_0800b05c(0,0,3);
      FUN_0800b328(0,0xffff);
      FUN_08015500();
    }
    else if (*(char *)(DAT_0800d29c + 0xfa) == '\x01') {
      FUN_0800c710(0,0,1);
      FUN_0800b05c(0,1,3);
      FUN_0800b328(0,0xffff,1);
      FUN_08015500();
    }
    else {
      FUN_0800c710(0,0,2,1);
      FUN_0800b05c(0,2,3);
      FUN_0800b328(0,0xffff,2);
      FUN_08015500();
    }
  }
  else {
    FUN_0800b604(0);
  }
  *DAT_0800d2a0 = 0xffff;
  FUN_0800cb78(*(undefined1 *)(iVar1 + 0xfa),0);
  return;
}

