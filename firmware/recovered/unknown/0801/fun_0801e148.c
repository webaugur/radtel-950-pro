/**
 * @brief fun_0801e148
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801e148, Ghidra name FUN_0801e148, 42 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801e148(void)

{
  undefined1 uVar1;
  
  uVar1 = PTR_DAT_0801e178[3];
  if (PTR_DAT_0801e174[0x43] == '\x01') {
    PTR_DAT_0801e174[0x44] = uVar1;
  }
  else {
    PTR_DAT_0801e174[0x98] = uVar1;
  }
  PTR_DAT_0801e17c[0x17] = uVar1;
  FUN_0800efd0();
  FUN_08018038();
  return 1;
}

