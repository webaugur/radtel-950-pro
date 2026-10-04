/**
 * @brief fun_080159f0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080159f0, Ghidra name FUN_080159f0, 52 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080159f0(void)

{
  ushort uVar1;
  undefined *puVar2;
  int iVar3;
  
  FUN_0800e0dc();
  puVar2 = PTR_DAT_08015a24;
  *(undefined2 *)(PTR_DAT_08015a24 + 1) = 2;
  *puVar2 = 1;
  if (PTR_DAT_08015a28[7] == 'S') {
    *(undefined2 *)(puVar2 + 7) = 1;
  }
  else {
    *(undefined2 *)(puVar2 + 7) = 0;
  }
  *(undefined **)(puVar2 + 0x13) = PTR_DAT_08015a2c;
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

