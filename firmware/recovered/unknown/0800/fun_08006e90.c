/**
 * @brief fun_08006e90
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08006e90, Ghidra name FUN_08006e90, 92 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08006e90(void)

{
  ushort uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  
  uVar4 = (uint)(byte)PTR_DAT_08006ef0[0xfa];
  if ((PTR_DAT_08006eec[0x4a] == -0x5b) && (uVar4 == 2)) {
    uVar1 = *(ushort *)(PTR_DAT_08006ef0 + 0x33c);
  }
  else {
    uVar1 = *(ushort *)PTR_DAT_08006ef0;
  }
  uVar2 = (uint)(byte)PTR_DAT_08006ef4[uVar4];
  bVar3 = 0;
  do {
    uVar2 = (uVar2 + 1 & 0xff) % 10;
    if ((1 << uVar2 & (uint)uVar1) != 0) {
      PTR_DAT_08006ef4[uVar4] = (char)uVar2;
      break;
    }
    bVar3 = bVar3 + 1;
  } while (bVar3 < 10);
  FUN_08008c28();
  FUN_08008970();
  FUN_0800b604(0);
  return;
}

