/**
 * @brief fun_08016e94
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08016e94, Ghidra name FUN_08016e94, 136 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08016e94(void)

{
  ushort uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined2 uVar6;
  
  puVar3 = DAT_08016f24;
  uVar4 = 0x33;
  uVar5 = (uint)*(byte *)(DAT_08016f1c + 0xfa);
  if (*(char *)(DAT_08016f1c + uVar5 * 0x58 + 0x130) == '\x01') {
    uVar1 = *(ushort *)(DAT_08016f1c + uVar5 * 0x20 + 0x27a);
  }
  else {
    uVar1 = *(ushort *)(DAT_08016f1c + uVar5 * 0x24 + 0x2da);
  }
  if ((uVar1 < *DAT_08016f20) || (0xa28 < uVar1)) {
    uVar6 = 0;
  }
  else {
    uVar5 = 1;
    do {
      if (uVar1 < DAT_08016f20[uVar5]) break;
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x33);
    if (DAT_08016f20[uVar5 - 1] == uVar1) {
      uVar6 = (undefined2)(uVar5 - 1);
      *(undefined2 *)(DAT_08016f24 + 4) = 0;
      *puVar3 = 0;
    }
    else {
      *DAT_08016f24 = (char)uVar5;
      *(ushort *)(puVar3 + 4) = uVar1;
      uVar6 = (undefined2)uVar5;
      uVar4 = 0x34;
    }
  }
  FUN_08016004(uVar4);
  *(undefined2 *)(DAT_08016f28 + 7) = uVar6;
  iVar2 = DAT_08016d14;
  uVar1 = *(ushort *)(DAT_08016d14 + 7);
  *(uint *)(DAT_08016d14 + 3) = (uint)uVar1;
  if (uVar1 < 3) {
    *(ushort *)(iVar2 + 9) = uVar1;
    *(undefined2 *)(iVar2 + -4) = 0;
    return;
  }
  *(undefined2 *)(iVar2 + 9) = 3;
  *(ushort *)(iVar2 + -4) = uVar1 - 3;
  return;
}

