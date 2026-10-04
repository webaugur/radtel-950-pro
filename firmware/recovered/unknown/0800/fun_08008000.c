/**
 * @brief fun_08008000
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08008000, Ghidra name FUN_08008000, 64 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08008000(char param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  char cVar3;
  
  puVar1 = DAT_08008044;
  if (*(char *)(DAT_08008040 + 7) != '\0') {
    cVar3 = param_1 + '\x10';
    if (*(char *)(DAT_08008040 + 8) != '\x01') {
      cVar3 = param_1 + 'L';
    }
    uVar2 = (uint)(byte)DAT_08008044[2];
    if (uVar2 != 0) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1 & 0xff) {
        puVar1[uVar2 + 3] = puVar1[uVar2 + 2];
      }
    }
    *puVar1 = 1;
    puVar1[3] = cVar3;
    if ((byte)puVar1[2] < 5) {
      puVar1[2] = puVar1[2] + 1;
    }
  }
  return;
}

