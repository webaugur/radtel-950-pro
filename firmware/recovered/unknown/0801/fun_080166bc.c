/**
 * @brief fun_080166bc
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080166bc, Ghidra name FUN_080166bc, 96 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080166bc(int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = DAT_08016720;
  if (param_2 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else if (*(char *)(DAT_080166d8 + 8) == '\x01') {
    puVar2 = *(undefined1 **)(param_2 + 0x18);
  }
  else {
    puVar2 = *(undefined1 **)(param_2 + 0x14);
  }
  *(undefined2 *)(DAT_08016720 + param_1 * 0xd + 6) = 0;
  if (puVar2 == (undefined1 *)0x0) {
    puVar1[param_1 * 0xd + 6] = 0;
    puVar1[param_1 * 0xd + 7] = 0;
    return;
  }
  if (param_3 == 0) {
    puVar1[param_1 * 0xd + 6] = *puVar2;
    puVar1[param_1 * 0xd + 7] = puVar2[1];
  }
  else {
    puVar1[param_1 * 0xd + 6] = *puVar2;
    puVar1[param_1 * 0xd + 7] = puVar2[1] + '(';
    *puVar1 = (char)param_1;
  }
  FUN_08001064(puVar1 + param_1 * 0xd + 8,puVar2 + 3,10);
  return;
}

