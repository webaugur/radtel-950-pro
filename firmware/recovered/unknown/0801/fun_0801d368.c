/**
 * @brief fun_0801d368
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801d368, Ghidra name FUN_0801d368, 1010 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801d368(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined2 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined *puVar10;
  uint uVar11;
  
  puVar3 = PTR_DAT_0801d760;
  puVar2 = PTR_DAT_0801d75c;
  if (PTR_DAT_0801d75c[6] != '\0') {
    PTR_DAT_0801d760[1] = 0;
  }
  uVar7 = (uint)(byte)puVar3[1] * 99 + (uint)*(ushort *)(PTR_DAT_0801d764 + 3) & 0xffff;
  iVar8 = FUN_08009138(uVar7);
  if (iVar8 == 1) {
    FUN_0800f364(uVar7);
    if (puVar2[6] != '\0') {
      puVar3[1] = (char)(uVar7 / 99);
    }
    puVar5 = PTR_DAT_0801d770;
    puVar4 = PTR_DAT_0801d768;
    uVar1 = PTR_DAT_0801d768[0xfa];
    if (PTR_DAT_0801d76c[0x4a] == -0x5b) {
      FUN_080158b0(PTR_DAT_0801d768 + 0x3ba,uVar7,0);
      FUN_080158b0(puVar4 + 0x33e,uVar7,0);
      FUN_080158b0(puVar4 + 0x436,puVar3[1],0);
      uVar11 = (uint)(byte)puVar3[1] * 99 >> 3;
      uVar9 = 0;
      do {
        if (puVar4[uVar9 + uVar11 + 0x3ba] != '\0') {
          FUN_080158b0(puVar4 + 0x436,(uint)(byte)puVar3[1],1);
          break;
        }
        uVar9 = uVar9 + 1 & 0xffff;
      } while (uVar9 < 0xc);
      puVar10 = PTR_DAT_0801d774;
      FUN_080158b0(PTR_DAT_0801d774,puVar3[1],0);
      uVar9 = 0;
      do {
        if (puVar4[uVar9 + uVar11 + 0x33e] != '\0') {
          FUN_080158b0(puVar10,puVar3[1],1);
          break;
        }
        uVar9 = uVar9 + 1 & 0xffff;
      } while (uVar9 < 0xc);
      if (((uint)*(ushort *)(puVar4 + 0x436) & 1 << (uint)(byte)puVar3[1]) == 0) {
        FUN_080158b0(PTR_DAT_0801d774 + -0xfc,(uint)(byte)puVar3[1],0);
      }
      if (puVar2[6] == '\0') {
        uVar9 = (uint)(byte)puVar2[0xf];
        if (uVar9 == (byte)puVar3[1]) {
          puVar4[0xfa] = 2;
          if (((uint)*(ushort *)(puVar4 + 0x436) & 1 << uVar9) == 0) {
            puVar5[0x1a] = puVar5[0x1a] & 0xcf;
          }
          else {
            iVar8 = FUN_080090ec(uVar9 * 99 + (uint)*(ushort *)(puVar4 + 0x106) & 0xffff,0);
            if (iVar8 == 0) {
              uVar6 = FUN_0801ffdc(*(undefined2 *)(puVar4 + 0x106),0);
              *(undefined2 *)(puVar4 + 0x106) = uVar6;
            }
          }
          puVar4[0xfa] = uVar1;
        }
      }
      else {
        puVar4[0xfa] = 2;
        if (*(short *)(puVar4 + 0x436) == 0) {
          puVar5[0x1a] = puVar5[0x1a] & 0xcf;
        }
        else {
          iVar8 = FUN_080090ec(*(undefined2 *)(puVar4 + 0x106),0);
          if (iVar8 == 0) {
            uVar6 = FUN_0801ffdc(*(undefined2 *)(puVar4 + 0x106),0);
            *(undefined2 *)(puVar4 + 0x106) = uVar6;
          }
        }
        puVar4[0xfa] = uVar1;
      }
    }
    FUN_080158b0(PTR_DAT_0801d768 + 0x7e,uVar7,0);
    FUN_080158b0(puVar4 + 2,uVar7,0);
    puVar10 = PTR_DAT_0801d768 + 0xfe;
    FUN_080158b0(puVar10,puVar3[1],0);
    uVar9 = (uint)(byte)puVar3[1] * 99 >> 3;
    uVar7 = 0;
    do {
      if (puVar4[uVar7 + uVar9 + 0x7e] != '\0') {
        FUN_080158b0(puVar10,(uint)(byte)puVar3[1],1);
        break;
      }
      uVar7 = uVar7 + 1 & 0xffff;
    } while (uVar7 < 0xc);
    puVar10 = PTR_DAT_0801d778;
    FUN_080158b0(PTR_DAT_0801d778,puVar3[1],0);
    uVar7 = 0;
    do {
      if (puVar4[uVar7 + uVar9 + 0x33e] != '\0') {
        FUN_080158b0(puVar10,puVar3[1],1);
        break;
      }
      uVar7 = uVar7 + 1 & 0xffff;
    } while (uVar7 < 0xc);
    if (((uint)*(ushort *)(puVar4 + 0xfe) & 1 << (uint)(byte)puVar3[1]) == 0) {
      FUN_080158b0(PTR_DAT_0801d768,(uint)(byte)puVar3[1],0);
    }
    if (puVar2[6] == '\0') {
      uVar7 = (uint)(byte)puVar2[0xd];
      if (uVar7 == (byte)puVar3[1]) {
        puVar4[0xfa] = 0;
        if (((uint)*(ushort *)(puVar4 + 0xfe) & 1 << uVar7) == 0) {
          puVar5[0x1a] = puVar5[0x1a] & 0xfc;
        }
        else {
          iVar8 = FUN_080090ec(uVar7 * 99 + (uint)*(ushort *)(puVar4 + 0x102) & 0xffff,0);
          if (iVar8 == 0) {
            uVar6 = FUN_0801ffdc(*(undefined2 *)(puVar4 + 0x102),0);
            *(undefined2 *)(puVar4 + 0x102) = uVar6;
          }
        }
        puVar4[0xfa] = uVar1;
      }
      uVar7 = (uint)(byte)puVar2[0xe];
      if (uVar7 == (byte)puVar3[1]) {
        puVar4[0xfa] = 1;
        if (((uint)*(ushort *)(puVar4 + 0xfe) & 1 << uVar7) == 0) {
          puVar5[0x1a] = puVar5[0x1a] & 0xf3;
        }
        else {
          iVar8 = FUN_080090ec(uVar7 * 99 + (uint)*(ushort *)(puVar4 + 0x104) & 0xffff,0);
          if (iVar8 == 0) {
            uVar6 = FUN_0801ffdc(*(undefined2 *)(puVar4 + 0x104),0);
            *(undefined2 *)(puVar4 + 0x104) = uVar6;
          }
        }
        puVar4[0xfa] = uVar1;
      }
      if ((PTR_DAT_0801d76c[0x4a] != -0x5b) &&
         (uVar7 = (uint)(byte)puVar2[0xf], uVar7 == (byte)puVar3[1])) {
        puVar4[0xfa] = 2;
        if (((uint)*(ushort *)(puVar4 + 0xfe) & 1 << uVar7) == 0) {
          puVar5[0x1a] = puVar5[0x1a] & 0xcf;
        }
        else {
          iVar8 = FUN_080090ec(uVar7 * 99 + (uint)*(ushort *)(puVar4 + 0x106) & 0xffff,0);
          if (iVar8 == 0) {
            uVar6 = FUN_0801ffdc(*(undefined2 *)(puVar4 + 0x106),0);
            *(undefined2 *)(puVar4 + 0x106) = uVar6;
          }
        }
        puVar4[0xfa] = uVar1;
      }
    }
    else {
      puVar4[0xfa] = 0;
      if (*(short *)(puVar4 + 0xfe) == 0) {
        puVar5[0x1a] = puVar5[0x1a] & 0xfc;
      }
      else {
        iVar8 = FUN_080090ec(*(undefined2 *)(puVar4 + 0x102),0);
        if (iVar8 == 0) {
          uVar6 = FUN_0801ffdc(*(undefined2 *)(puVar4 + 0x102),0);
          *(undefined2 *)(puVar4 + 0x102) = uVar6;
        }
      }
      puVar4[0xfa] = 1;
      if (*(short *)(puVar4 + 0xfe) == 0) {
        puVar5[0x1a] = puVar5[0x1a] & 0xf3;
      }
      else {
        iVar8 = FUN_080090ec(*(undefined2 *)(puVar4 + 0x104),0);
        if (iVar8 == 0) {
          uVar6 = FUN_0801ffdc(*(undefined2 *)(puVar4 + 0x104),0);
          *(undefined2 *)(puVar4 + 0x104) = uVar6;
        }
      }
      if (PTR_DAT_0801d76c[0x4a] != -0x5b) {
        puVar4[0xfa] = 2;
        if (*(short *)(puVar4 + 0xfe) == 0) {
          puVar5[0x1a] = puVar5[0x1a] & 0xcf;
        }
        else {
          iVar8 = FUN_080090ec(*(undefined2 *)(puVar4 + 0x106),0);
          if (iVar8 == 0) {
            uVar6 = FUN_0801ffdc(*(undefined2 *)(puVar4 + 0x106),0);
            *(undefined2 *)(puVar4 + 0x106) = uVar6;
          }
        }
      }
      puVar4[0xfa] = uVar1;
    }
    FUN_080099e8();
    FUN_08008970();
  }
  FUN_08018038();
  FUN_0800b604(1);
  return 1;
}

