/**
 * @brief fun_0801cd70
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801cd70, Ghidra name FUN_0801cd70, 52 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801cd70(void)

{
  char cVar1;
  
  cVar1 = *(char *)(DAT_0801cda4 + 3);
  *(char *)(DAT_0801cda8 + 1) = cVar1;
  if (cVar1 == '\0') {
    FUN_08012ae6(DAT_0801cdac,0x100);
  }
  else {
    FUN_08012ae2();
    FUN_08014534();
  }
  *(undefined1 *)(DAT_0801cdb0 + 2) = 0;
  FUN_08018038();
  FUN_0800cfc0();
  return 1;
}

