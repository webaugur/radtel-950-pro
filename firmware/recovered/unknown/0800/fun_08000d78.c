/**
 * @brief fun_08000d78
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08000d78, Ghidra name FUN_08000d78, 142 bytes.
 *       Not linked into rt950-firmware.
 */

int FUN_08000d78(uint *param_1,uint *param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  
  puVar3 = (uint *)((int)param_1 + param_3 + -1);
  puVar1 = param_2;
  if ((((uint)param_1 | (uint)param_2) & 3) == 0) {
    while ((uVar2 = *puVar1, param_1 + 1 <= puVar3 &&
           ((uVar2 + 0xfefefeff & ~uVar2 & 0x80808080) == 0))) {
      *param_1 = uVar2;
      param_1 = param_1 + 1;
      puVar1 = puVar1 + 1;
    }
    while ((*puVar1 + 0xfefefeff & ~*puVar1 & 0x80808080) == 0) {
      puVar1 = puVar1 + 1;
    }
    for (; (char)*puVar1 != '\0'; puVar1 = (uint *)((int)puVar1 + 1)) {
    }
    while (param_1 < puVar3) {
      *(char *)param_1 = (char)uVar2;
      if ((uVar2 & 0xff) == 0) goto LAB_08000e02;
      uVar2 = uVar2 >> 8;
      param_1 = (uint *)((int)param_1 + 1);
    }
    if (param_1 == puVar3) {
      *(char *)param_1 = '\0';
    }
  }
  else {
    for (; (param_1 < puVar3 && ((char)*puVar1 != '\0')); puVar1 = (uint *)((int)puVar1 + 1)) {
      *(char *)param_1 = (char)*puVar1;
      param_1 = (uint *)((int)param_1 + 1);
    }
    if (param_1 <= puVar3) {
      *(char *)param_1 = '\0';
    }
    for (; (char)*puVar1 != '\0'; puVar1 = (uint *)((int)puVar1 + 1)) {
    }
  }
LAB_08000e02:
  return (int)puVar1 - (int)param_2;
}

