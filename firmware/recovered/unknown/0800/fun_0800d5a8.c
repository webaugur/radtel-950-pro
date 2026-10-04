/**
 * @brief fun_0800d5a8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800d5a8, Ghidra name FUN_0800d5a8, 214 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800d5a8(undefined1 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  int iVar4;
  
  puVar2 = DAT_08014600;
  puVar1 = DAT_0800d64c;
  iVar4 = *(int *)(param_1 + 4);
  if (iVar4 == 0x13) {
    uVar3 = 0x42;
  }
  else if (iVar4 < 0x14) {
    if (iVar4 == 8) {
      FUN_0800e8d0();
      return;
    }
    if (iVar4 == 0x10) {
      uVar3 = *param_1;
    }
    else if (iVar4 == 0x11) {
      uVar3 = 0x41;
    }
    else {
      if (iVar4 != 0x12) {
        return;
      }
      uVar3 = 0x44;
    }
  }
  else if (iVar4 == 0x15) {
    uVar3 = 0x43;
  }
  else if (iVar4 == 0x17) {
    uVar3 = 0x2a;
  }
  else {
    if (iVar4 != 0x18) {
      if (iVar4 != 0x69) {
        return;
      }
      iVar4 = DAT_0800d64c[1];
      if (iVar4 == 0) {
        FUN_0800e8d0();
        return;
      }
      DAT_0800d64c[1] = iVar4 + -1;
      *puVar1 = 100;
      *(undefined1 *)((int)puVar1 + iVar4 + 0x11) = 0;
      FUN_0800bac0();
      FUN_080073a4(3);
      return;
    }
    uVar3 = 0x23;
  }
  *DAT_08014600 = 100;
  if (9 < (uint)puVar2[1]) {
    FUN_080073a4(3);
    return;
  }
  *(undefined1 *)((int)puVar2 + puVar2[1] + 0x12) = uVar3;
  puVar2[1] = puVar2[1] + 1;
  FUN_080073a4(0);
  FUN_0800bac0();
  return;
}

