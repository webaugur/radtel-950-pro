/**
 * @brief fun_08001d9c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08001d9c, Ghidra name FUN_08001d9c, 112 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08001d9c(uint *param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = 3;
  uVar1 = *param_1 & 0x800;
  if (param_3 < 7) {
    if (uVar1 == 0) {
      puVar2 = (undefined1 *)0x8001e18;
    }
    else {
      puVar2 = (undefined1 *)0x8001e14;
    }
  }
  else if (uVar1 == 0) {
    puVar2 = (undefined1 *)0x8001e10;
  }
  else {
    puVar2 = &DAT_08001e0c;
  }
  *param_1 = *param_1 & 0xffffffef;
  uVar1 = param_1[6];
  param_1[6] = uVar1 - 3;
  if (param_4 != 0) {
    param_1[6] = uVar1 - 4;
  }
  FUN_0800087c(param_1);
  if (param_4 == 0) {
    uVar1 = param_1[8];
  }
  else {
    (*(code *)param_1[1])(param_4,param_1[2]);
    uVar1 = param_1[8] + 1;
    param_1[8] = uVar1;
  }
  param_1[8] = uVar1 + 3;
  while (bVar4 = iVar3 != 0, iVar3 = iVar3 + -1, bVar4) {
    (*(code *)param_1[1])(*puVar2,param_1[2]);
    puVar2 = puVar2 + 1;
  }
  FUN_080008a8(param_1);
  return;
}

