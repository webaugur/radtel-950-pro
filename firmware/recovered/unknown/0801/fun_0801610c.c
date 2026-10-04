/**
 * @brief fun_0801610c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801610c, Ghidra name FUN_0801610c, 36 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801610c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  
  puVar2 = PTR_DAT_08016134;
  puVar1 = PTR_DAT_08016130;
  uVar3 = 0;
  do {
    if (puVar1[uVar3 + 0x2b] == '\0') break;
    puVar2[uVar3 + 0x12] = puVar1[uVar3 + 0x2b];
    uVar3 = uVar3 + 1;
  } while (uVar3 < 6);
  *(uint *)(puVar2 + 4) = uVar3;
  puVar2[uVar3 + 0x12] = 0;
  return;
}

