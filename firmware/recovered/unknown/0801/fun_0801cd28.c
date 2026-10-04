/**
 * @brief fun_0801cd28
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801cd28, Ghidra name FUN_0801cd28, 34 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801cd28(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = DAT_0801cd4c;
  *DAT_0801cd4c = 0;
  *(undefined2 *)(puVar1 + 1) = 0;
  iVar2 = DAT_0801cd50;
  *(undefined4 *)(DAT_0801cd50 + 4) = 6;
  FUN_08000ee4(DAT_0801cd4c,iVar2 + 0x12);
  FUN_08018038();
  return 1;
}

