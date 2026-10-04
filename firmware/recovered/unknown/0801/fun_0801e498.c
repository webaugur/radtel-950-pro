/**
 * @brief fun_0801e498
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801e498, Ghidra name FUN_0801e498, 496 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801e498(void)

{
  undefined2 uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = DAT_0801e68c;
  uVar4 = (uint)*(byte *)(DAT_0801e68c + 0xfa);
  iVar7 = DAT_0801e68c + uVar4 * 0x58;
  iVar5 = DAT_0801e68c + uVar4 * 0x20;
  iVar6 = DAT_0801e68c + uVar4 * 0x24;
  if (*(char *)(DAT_0801e688 + 4) == '\x01') {
    uVar1 = *(undefined2 *)(DAT_0801e688 + 8);
    if (*(char *)(iVar7 + 0x130) == '\0') {
      *(undefined2 *)(iVar6 + 0x2d8) = uVar1;
      *(undefined2 *)(iVar3 + (uint)*(byte *)(iVar3 + 0xfa) * 0x24 + 0x2da) = uVar1;
      iVar5 = iVar3 + (uint)*(byte *)(iVar3 + 0xfa) * 0x24;
      *(byte *)(iVar5 + 0x2e1) = *(byte *)(iVar5 + 0x2e1) & 0xfe;
    }
    else {
      *(undefined2 *)(iVar5 + 0x278) = uVar1;
      *(undefined2 *)(iVar3 + (uint)*(byte *)(iVar3 + 0xfa) * 0x20 + 0x27a) = uVar1;
      iVar5 = iVar3 + (uint)*(byte *)(iVar3 + 0xfa) * 0x20;
      *(byte *)(iVar5 + 0x27f) = *(byte *)(iVar5 + 0x27f) & 0xfe;
    }
  }
  else if (*(char *)(DAT_0801e688 + 4) == '\x02') {
    if (*(char *)(DAT_0801e688 + 0xc) == '\x01') {
      uVar2 = *(ushort *)(DAT_0801e688 + 0xe);
      if (*(char *)(iVar7 + 0x130) == '\0') {
        if (uVar2 < 0xd3) {
          *(byte *)(iVar6 + 0x2e1) = *(byte *)(iVar6 + 0x2e1) & 0xfe;
          *(ushort *)(iVar3 + (uint)*(byte *)(iVar3 + 0xfa) * 0x24 + 0x2d8) = uVar2;
          *(ushort *)(iVar3 + (uint)*(byte *)(iVar3 + 0xfa) * 0x24 + 0x2da) = uVar2;
        }
      }
      else if (uVar2 < 0xd3) {
        *(byte *)(iVar5 + 0x27f) = *(byte *)(iVar5 + 0x27f) & 0xfe;
        *(ushort *)(iVar3 + (uint)*(byte *)(iVar3 + 0xfa) * 0x20 + 0x278) = uVar2;
        *(ushort *)(iVar3 + (uint)*(byte *)(iVar3 + 0xfa) * 0x20 + 0x27a) = uVar2;
      }
    }
    else {
      uVar4 = *(uint *)(DAT_0801e688 + 8) & 0x7fffff;
      if (*(char *)(iVar7 + 0x130) == '\x01') {
        *(undefined4 *)(iVar5 + 0x280) = *(undefined4 *)(DAT_0801e688 + 8);
        *(uint *)(iVar3 + (uint)*(byte *)(iVar3 + 0xfa) * 0x20 + 0x280) = uVar4;
        *(uint *)(iVar3 + (uint)*(byte *)(iVar3 + 0xfa) * 0x20 + 0x280) = uVar4 | 0xa0000000;
        iVar5 = iVar3 + (uint)*(byte *)(iVar3 + 0xfa) * 0x20;
        *(byte *)(iVar5 + 0x27f) = *(byte *)(iVar5 + 0x27f) | 1;
      }
      else {
        *(undefined4 *)(iVar6 + 0x2ec) = *(undefined4 *)(DAT_0801e688 + 8);
        *(uint *)(iVar3 + (uint)*(byte *)(iVar3 + 0xfa) * 0x24 + 0x2ec) = uVar4;
        *(uint *)(iVar3 + (uint)*(byte *)(iVar3 + 0xfa) * 0x24 + 0x2ec) = uVar4 | 0xa0000000;
        iVar5 = iVar3 + (uint)*(byte *)(iVar3 + 0xfa) * 0x24;
        *(byte *)(iVar5 + 0x2e1) = *(byte *)(iVar5 + 0x2e1) | 1;
      }
    }
  }
  FUN_080083cc();
  uVar4 = (uint)*(byte *)(iVar3 + 0xfa);
  iVar5 = iVar3 + uVar4 * 0x58;
  if (*(char *)(iVar5 + 0x130) == '\x01') {
    if (*(char *)(DAT_0801e690 + 6) == '\0') {
      FUN_0800fee8((ushort)*(byte *)(uVar4 + DAT_0801e690 + 0xd) * 99 + *(short *)(iVar3 + 0x108),
                   iVar3 + uVar4 * 0x20 + 0x270,iVar5 + 0x149);
      return;
    }
    FUN_0800fee8(*(undefined2 *)(iVar3 + 0x108),iVar3 + uVar4 * 0x20 + 0x270,iVar5 + 0x149);
    return;
  }
  FUN_080105cc();
  return;
}

