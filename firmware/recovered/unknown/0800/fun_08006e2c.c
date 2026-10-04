/**
 * @brief fun_08006e2c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08006e2c, Ghidra name FUN_08006e2c, 86 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08006e2c(void)

{
  ushort uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  
  uVar4 = (uint)(byte)DAT_08006e88[0x7d];
  if ((*(char *)(DAT_08006e84 + 0x4a) == -0x5b) && (uVar4 == 2)) {
    uVar1 = DAT_08006e88[0x19e];
  }
  else {
    uVar1 = *DAT_08006e88;
  }
  uVar2 = (uint)*(byte *)(uVar4 + DAT_08006e8c);
  bVar3 = 0;
  while( true ) {
    if (uVar2 == 0) {
      uVar2 = 9;
    }
    else {
      uVar2 = uVar2 - 1 & 0xff;
    }
    if ((1 << uVar2 & (uint)uVar1) != 0) break;
    bVar3 = bVar3 + 1;
    if (9 < bVar3) {
LAB_08006e70:
      FUN_08008c28();
      FUN_08008970();
      FUN_0800b604(0);
      return;
    }
  }
  *(char *)(uVar4 + DAT_08006e8c) = (char)uVar2;
  goto LAB_08006e70;
}

