/**
 * @brief fun_0801b490
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801b490, Ghidra name FUN_0801b490, 34 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801b490(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = DAT_0801b4bc;
  iVar2 = DAT_0801b4b8;
  iVar1 = DAT_0801b4b4;
  uVar4 = 0;
  do {
    (**(code **)(iVar3 + 8))(*(undefined1 *)(iVar2 + uVar4),*(undefined2 *)(iVar1 + uVar4 * 2));
    uVar4 = uVar4 + 1 & 0xff;
  } while (uVar4 < 0xb);
  return;
}

