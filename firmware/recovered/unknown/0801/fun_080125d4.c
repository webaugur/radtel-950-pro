/**
 * @brief fun_080125d4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080125d4, Ghidra name FUN_080125d4, 166 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080125d4(uint *param_1,ushort *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = 0;
  uVar2 = *(byte *)((int)param_2 + 3) & 0xf;
  if ((int)((uint)*(byte *)((int)param_2 + 3) << 0x1b) < 0) {
    uVar2 = uVar2 | (byte)param_2[1];
  }
  if ((char)*param_2 != '\0') {
    uVar4 = *param_1;
    do {
      uVar3 = 1 << (uVar1 & 0xff);
      if ((*param_2 & uVar3) == uVar3) {
        uVar4 = uVar2 << (uVar1 << 2 & 0xff) | uVar4 & ~(0xf << (uVar1 << 2 & 0xff));
        if (*(char *)((int)param_2 + 3) == '(') {
          param_1[5] = uVar3;
        }
        else if (*(char *)((int)param_2 + 3) == 'H') {
          param_1[4] = uVar3;
        }
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 8);
    *param_1 = uVar4;
  }
  if (0xff < *param_2) {
    uVar4 = param_1[1];
    uVar1 = 0;
    do {
      uVar3 = 1 << (uVar1 + 8 & 0xff);
      if ((*param_2 & uVar3) == uVar3) {
        uVar4 = uVar2 << (uVar1 << 2 & 0xff) | uVar4 & ~(0xf << (uVar1 << 2 & 0xff));
        if (*(char *)((int)param_2 + 3) == '(') {
          param_1[5] = uVar3;
        }
        if (*(char *)((int)param_2 + 3) == 'H') {
          param_1[4] = uVar3;
        }
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 8);
    param_1[1] = uVar4;
  }
  return;
}

