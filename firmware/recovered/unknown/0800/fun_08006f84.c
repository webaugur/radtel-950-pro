/**
 * @brief fun_08006f84
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08006f84, Ghidra name FUN_08006f84, 104 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08006f84(void)

{
  undefined1 *puVar1;
  uint uVar2;
  
  FUN_08013d88();
  uVar2 = FUN_08013d88();
  puVar1 = DAT_08006fec;
  *DAT_08006fec = (char)uVar2;
  if ((byte)puVar1[0xb] < uVar2) {
    puVar1[1] = 7;
    return;
  }
  if ((byte)puVar1[10] < uVar2) {
    puVar1[1] = 3;
    return;
  }
  if ((byte)puVar1[9] < uVar2) {
    puVar1[1] = 2;
    return;
  }
  if ((byte)puVar1[8] < uVar2) {
    puVar1[1] = 1;
    return;
  }
  if ((byte)puVar1[7] < uVar2) {
    puVar1[1] = 0;
    return;
  }
  if ((byte)puVar1[6] < uVar2) {
    puVar1[1] = 4;
    return;
  }
  if (uVar2 < (byte)puVar1[5]) {
    puVar1[1] = 6;
    return;
  }
  puVar1[1] = 5;
  return;
}

