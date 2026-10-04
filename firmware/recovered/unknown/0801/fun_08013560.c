/**
 * @brief fun_08013560
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08013560, Ghidra name FUN_08013560, 184 bytes.
 *       Not linked into rt950-firmware.
 */

undefined1 FUN_08013560(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  uVar6 = 0;
  iVar4 = FUN_08012ace(DAT_08013618,0x20);
  if (iVar4 == 0) {
    uVar3 = 0;
  }
  else {
    iVar4 = FUN_08012ace(DAT_0801361c,0x1000);
    uVar1 = DAT_08013620;
    if (iVar4 == 0) {
      uVar3 = 1;
    }
    else {
      FUN_08012ae2(DAT_08013620,0xf);
      FUN_0800ad22(10);
      uVar2 = DAT_08013624;
      uVar5 = FUN_08012ac8(DAT_08013624);
      iVar4 = DAT_08013628;
      if ((uVar5 & 0xff) >> 4 == 0xf) {
        uVar3 = 0xff;
      }
      else {
        iVar7 = DAT_08013628 + -0x14;
        iVar8 = DAT_08013628 + -10;
        do {
          FUN_08012ae6(uVar1,*(undefined2 *)(iVar7 + uVar6 * 2));
          FUN_08012ae2(uVar1,*(undefined2 *)(iVar8 + uVar6 * 2));
          FUN_0800ad22(10);
          uVar5 = FUN_08012ac8(uVar2);
          uVar5 = uVar5 & 0xf0;
          if (uVar5 == 0x70) {
            return *(undefined1 *)(iVar4 + uVar6 * 4);
          }
          if (uVar5 == 0xb0) {
            return *(undefined1 *)(iVar4 + uVar6 * 4 + 1);
          }
          if (uVar5 == 0xd0) {
            return *(undefined1 *)(iVar4 + uVar6 * 4 + 2);
          }
          if (uVar5 == 0xe0) {
            return *(undefined1 *)(iVar4 + uVar6 * 4 + 3);
          }
          uVar6 = uVar6 + 1 & 0xff;
        } while (uVar6 < 5);
        uVar3 = 0xff;
      }
    }
  }
  return uVar3;
}

