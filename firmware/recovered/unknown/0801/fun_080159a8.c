/**
 * @brief fun_080159a8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080159a8, Ghidra name FUN_080159a8, 54 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080159a8(void)

{
  ushort uVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  
  FUN_0800e0dc();
  puVar2 = PTR_DAT_080159e0;
  *(undefined2 *)(PTR_DAT_080159e0 + 1) = 3;
  *puVar2 = 1;
  *(ushort *)(puVar2 + 7) = (ushort)(byte)PTR_DAT_080159e4[2];
  puVar4 = PTR_DAT_080159ec;
  if (PTR_DAT_080159e8[8] == '\x01') {
    puVar4 = PTR_DAT_080159ec + -0xc;
  }
  *(undefined **)(puVar2 + 0x13) = puVar4;
  iVar3 = DAT_08016d14;
  uVar1 = *(ushort *)(DAT_08016d14 + 7);
  *(uint *)(DAT_08016d14 + 3) = (uint)uVar1;
  if (2 < uVar1) {
    *(undefined2 *)(iVar3 + 9) = 3;
    *(ushort *)(iVar3 + -4) = uVar1 - 3;
    return;
  }
  *(ushort *)(iVar3 + 9) = uVar1;
  *(undefined2 *)(iVar3 + -4) = 0;
  return;
}

