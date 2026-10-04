/**
 * @brief fun_0801f600
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801f600, Ghidra name FUN_0801f600, 96 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801f600(void)

{
  char cVar1;
  undefined1 *puVar2;
  
  puVar2 = DAT_0801f660;
  cVar1 = DAT_0801f660[8];
  if (cVar1 == '\x01') {
    DAT_0801f660[8] = 0;
    FUN_0801a9a4(0,1);
    FUN_0801acde(0);
  }
  else if (cVar1 == '\0') {
    DAT_0801f660[8] = 2;
    FUN_0801a9a4(0,1);
  }
  else if (cVar1 == '\x02') {
    DAT_0801f660[8] = 3;
    FUN_0801a9a4(1);
    FUN_0801acde(1);
  }
  else {
    DAT_0801f660[8] = 1;
    FUN_0801a9a4(1);
    FUN_0801acde(1);
  }
  FUN_0801f664();
  *puVar2 = 0;
  return;
}

