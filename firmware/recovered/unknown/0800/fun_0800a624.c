/**
 * @brief fun_0800a624
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800a624, Ghidra name FUN_0800a624, 162 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800a624(undefined1 *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_1 + 4);
  uVar3 = (uint)*(byte *)(DAT_0800a6c8 + 9);
  if (iVar2 == 0x50) {
    if (7 < uVar3) {
      uVar3 = 0;
    }
    bVar1 = *(byte *)(DAT_0800a6cc + uVar3);
    *(uint *)(param_2 + 4) = (uint)bVar1;
    if (bVar1 == 1) {
      *(undefined4 *)(param_2 + 4) = 0xff;
    }
  }
  else {
    if (iVar2 == 0x51) {
      if (*(char *)(DAT_0800a6cc + uVar3) != '\x01') {
        uVar3 = (uint)*(byte *)(DAT_0800a6c8 + 10);
        if (7 < uVar3) {
          uVar3 = 0;
        }
        *(uint *)(param_2 + 4) = (uint)*(byte *)(DAT_0800a6cc + uVar3);
        return;
      }
      *(undefined4 *)(param_2 + 4) = 0xff;
      return;
    }
    if (iVar2 == 0x52) {
      if (*DAT_0800a6d0 == '\x01') {
        *(undefined4 *)(param_2 + 4) = 8;
        return;
      }
      if (DAT_0800a6d0[1] != '\a') {
        uVar3 = (uint)*(byte *)(DAT_0800a6c8 + 0xb);
        if (7 < uVar3) {
          uVar3 = 0;
        }
        *(uint *)(param_2 + 4) = (uint)*(byte *)(DAT_0800a6cc + uVar3);
        return;
      }
      *(undefined4 *)(param_2 + 4) = 0x69;
      return;
    }
    if (iVar2 == 0x53) {
      uVar3 = (uint)*(byte *)(DAT_0800a6c8 + 0xc);
      if (7 < uVar3) {
        uVar3 = 0;
      }
      *(uint *)(param_2 + 4) = (uint)*(byte *)(DAT_0800a6cc + uVar3);
      return;
    }
    if ((iVar2 == 0x33) && (uVar3 = FUN_08013548(*param_1), uVar3 < 7)) {
      uVar3 = (uint)*(byte *)(DAT_0800a6cc + -7 + uVar3);
      *(uint *)(param_2 + 4) = uVar3;
      if (uVar3 == 0xff) {
        FUN_080073a4(7);
        return;
      }
    }
  }
  return;
}

