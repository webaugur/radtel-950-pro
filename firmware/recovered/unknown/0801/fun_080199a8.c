/**
 * @brief fun_080199a8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080199a8, Ghidra name FUN_080199a8, 148 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080199a8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = FUN_08008aa8();
  iVar2 = DAT_08019a48;
  iVar1 = DAT_08019a3c;
  if ((((iVar3 == 0) && (*(char *)(DAT_08019a3c + 1) != '\x03')) &&
      (uVar4 = (uint)*(byte *)(DAT_08019a40 + 1), uVar4 != 0)) &&
     ((*DAT_08019a44 != '\x01' && (*(short *)(DAT_08019a3c + 0x24) == 0)))) {
    if (*(char *)(DAT_08019a3c + 0x22) != '\x01') {
      *(undefined1 *)(DAT_08019a3c + 0x22) = 1;
      if (*(short *)(iVar1 + 0x26) == 0) {
        *(ushort *)(iVar1 + 0x24) = (ushort)*(byte *)(uVar4 + DAT_08019a4c + -4);
      }
      else {
        *(undefined2 *)(iVar1 + 0x24) = 0x1e;
      }
      FUN_0801a9a4(*(undefined1 *)(iVar2 + 0x10a),0);
      thunk_FUN_0801c150(0);
      FUN_0801ac82(1);
      return;
    }
    *(undefined1 *)(DAT_08019a3c + 0x22) = 0;
    if (*(short *)(iVar1 + 0x26) == 0) {
      *(ushort *)(iVar1 + 0x24) = (ushort)*(byte *)(uVar4 + DAT_08019a4c);
    }
    else {
      *(undefined2 *)(iVar1 + 0x24) = 0x1e;
    }
    FUN_0801a9a4(*(undefined1 *)(iVar2 + 0x10a),1);
    FUN_0801ac82(0);
    thunk_FUN_0801c150(1);
    return;
  }
  return;
}

