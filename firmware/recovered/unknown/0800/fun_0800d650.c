/**
 * @brief fun_0800d650
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800d650, Ghidra name FUN_0800d650, 284 bytes.
 *       Not linked into rt950-firmware.
 */

undefined8 FUN_0800d650(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  iVar1 = DAT_0800d770;
  local_38 = *(undefined4 *)(DAT_0800d76c + 0x58);
  uStack_34 = *(undefined4 *)(DAT_0800d76c + 0x5c);
  local_30 = *(undefined4 *)(DAT_0800d76c + 0x60);
  uStack_2c = *(undefined4 *)(DAT_0800d76c + 100);
  if (6 < *(byte *)(DAT_0800d770 + 0xc)) {
    *(undefined1 *)(DAT_0800d770 + 0xc) = 6;
  }
  iVar3 = DAT_0800d778;
  pcVar2 = DAT_0800d774;
  if (param_1 == 3) {
    *DAT_0800d774 = '\x01';
    pcVar2[1] = '\x01';
    pcVar2[2] = '\t';
    pcVar2[3] = -1;
    FUN_080207ec();
    pcVar2[0x11] = '\x01';
    *(undefined2 *)(pcVar2 + 0x16) =
         *(undefined2 *)((int)&local_38 + (uint)*(byte *)(iVar1 + 0xc) * 2);
  }
  else {
    pcVar5 = DAT_0800d774 + -10;
    if (param_1 == 4) {
      *(undefined4 *)DAT_0800d774 = *(undefined4 *)pcVar5;
      pcVar2[4] = pcVar2[-6];
      pcVar2[5] = -1;
      pcVar2[0x11] = '\x01';
      *(undefined2 *)(pcVar2 + 0x16) =
           *(undefined2 *)((int)&local_38 + (uint)*(byte *)(iVar1 + 0xc) * 2);
    }
    else if (param_1 == 5) {
      FUN_08000ee4(DAT_0800d774,DAT_0800d778 + 0x37,*(undefined1 *)(DAT_0800d778 + 0x36));
      uVar4 = (uint)*(byte *)(iVar3 + 0x36);
      if (uVar4 < 0x10) {
        pcVar2[uVar4] = -1;
      }
      pcVar2[0x11] = '\x01';
      *(undefined2 *)(pcVar2 + 0x16) =
           *(undefined2 *)((int)&local_38 + (uint)*(byte *)(iVar1 + 0xc) * 2);
      *(undefined1 *)(iVar3 + 0x36) = 0;
    }
    else if ((*(short *)(DAT_0800d778 + 0xb) == 0) || (iVar3 = FUN_0800999c(), iVar3 == 0)) {
      if (param_1 == 0) {
        FUN_08021824((uint)*(byte *)(DAT_0800d77c + (uint)*(byte *)(DAT_0800d77c + 0xfa) * 0x58 +
                                    0x137) * 0x10 + 0xa020,DAT_0800d774,8);
      }
      else {
        *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
        pcVar2[4] = pcVar2[-6];
        pcVar2[5] = -1;
      }
      if (*pcVar2 == -1) {
        uVar6 = FUN_080207ec(10);
        return uVar6;
      }
      pcVar2[0x11] = '\x01';
      *(undefined2 *)(pcVar2 + 0x16) =
           *(undefined2 *)((int)&local_38 + (uint)*(byte *)(iVar1 + 0xc) * 2);
    }
  }
  return CONCAT44(uStack_34,local_38);
}

