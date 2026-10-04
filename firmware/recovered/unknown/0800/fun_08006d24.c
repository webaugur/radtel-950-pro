/**
 * @brief fun_08006d24
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08006d24, Ghidra name FUN_08006d24, 34 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08006d24(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  uint uVar5;
  
  iVar3 = DAT_08006d50;
  iVar2 = DAT_08006d4c;
  iVar1 = DAT_08006d48;
  uVar5 = 0;
  do {
    uVar4 = (**(code **)(iVar2 + 4))(*(undefined1 *)(iVar1 + uVar5));
    *(undefined2 *)(iVar3 + uVar5 * 2) = uVar4;
    uVar5 = uVar5 + 1 & 0xff;
  } while (uVar5 < 0xb);
  return;
}

