/**
 * @brief fun_08016a40
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08016a40, Ghidra name FUN_08016a40, 154 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08016a40(void)

{
  ushort uVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined2 uVar6;
  
  puVar2 = PTR_DAT_08016ae8;
  uVar4 = 0x33;
  uVar5 = (uint)*(byte *)(DAT_08016adc + 0xfa);
  if (*(char *)(DAT_08016adc + uVar5 * 0x58 + 0x130) == '\x01') {
    uVar1 = *(ushort *)(DAT_08016adc + uVar5 * 0x20 + 0x278);
  }
  else {
    uVar1 = *(ushort *)(DAT_08016adc + uVar5 * 0x24 + 0x2d8);
  }
  if (((uVar1 < *DAT_08016ae0) || (0xa28 < uVar1)) ||
     ((*PTR_DAT_08016ae4 != '\0' && (uVar5 == (byte)PTR_DAT_08016ae4[0x1c])))) {
    uVar6 = 0;
  }
  else {
    uVar5 = 1;
    do {
      if (uVar1 < DAT_08016ae0[uVar5]) break;
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x33);
    if ((DAT_08016ae0[uVar5 - 1] == uVar1) && (*DAT_08016ae0 != uVar1)) {
      uVar6 = (undefined2)(uVar5 - 1);
      *(undefined2 *)(PTR_DAT_08016ae8 + 4) = 0;
      *puVar2 = 0;
    }
    else {
      *PTR_DAT_08016ae8 = (char)uVar5;
      *(ushort *)(puVar2 + 4) = uVar1;
      uVar6 = (undefined2)uVar5;
      uVar4 = 0x34;
    }
  }
  FUN_08016004(uVar4);
  *(undefined2 *)(PTR_DAT_08016aec + 7) = uVar6;
  iVar3 = DAT_08016d14;
  uVar1 = *(ushort *)(DAT_08016d14 + 7);
  *(uint *)(DAT_08016d14 + 3) = (uint)uVar1;
  if (uVar1 < 3) {
    *(ushort *)(iVar3 + 9) = uVar1;
    *(undefined2 *)(iVar3 + -4) = 0;
    return;
  }
  *(undefined2 *)(iVar3 + 9) = 3;
  *(ushort *)(iVar3 + -4) = uVar1 - 3;
  return;
}

