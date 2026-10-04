/**
 * @brief fun_0800999c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800999c, Ghidra name FUN_0800999c, 64 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0800999c(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = DAT_080099dc;
  iVar2 = FUN_08012ace(DAT_080099dc,8);
  if ((((iVar2 != 0) && (iVar2 = FUN_08012ace(uVar1,4), iVar2 != 0)) &&
      ((*(char *)(DAT_080099e4 + (uint)*(byte *)(DAT_080099e0 + 9)) != '\x01' ||
       (iVar2 = FUN_08012ace(uVar1,0x20), iVar2 != 0)))) &&
     (iVar2 = FUN_08012ace(uVar1,0x40), iVar2 != 0)) {
    return 1;
  }
  return 0;
}

