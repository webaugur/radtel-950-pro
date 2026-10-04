/**
 * @brief fun_08016028
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08016028, Ghidra name FUN_08016028, 68 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08016028(void)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = DAT_08016070;
  uVar1 = *(ushort *)(DAT_0801606c + (uint)*(byte *)(DAT_0801606c + 0xfa) * 0x58 + 0x118);
  *(ushort *)(DAT_08016070 + 6) = uVar1;
  if (uVar1 < *DAT_08016074) {
    *(undefined4 *)(iVar2 + 8) = 1;
    return;
  }
  uVar3 = 1;
  do {
    if (uVar1 < DAT_08016074[uVar3]) {
      uVar3 = uVar3 - 1;
      break;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x33);
  *(uint *)(iVar2 + 8) = uVar3;
  return;
}

