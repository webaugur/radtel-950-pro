/**
 * @brief fun_0801d77c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801d77c, Ghidra name FUN_0801d77c, 1256 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801d77c(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte bVar8;
  undefined2 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined *puVar13;
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [4];
  undefined2 local_64;
  undefined2 local_62;
  byte local_60;
  undefined1 local_5e;
  byte local_5d;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined *local_40;
  undefined *local_3c;
  undefined *local_38;
  undefined *local_34;
  undefined *local_30;
  undefined *local_2c;
  undefined *local_28;
  
  puVar4 = PTR_DAT_0801db84;
  puVar2 = PTR_DAT_0801db80;
  if (PTR_DAT_0801db80[6] != '\0') {
    PTR_DAT_0801db84[1] = 0;
  }
  puVar6 = PTR_DAT_0801db8c;
  puVar5 = PTR_DAT_0801db88;
  uVar12 = (uint)(ushort)((ushort)(byte)puVar4[1] * 99 + *(short *)(PTR_DAT_0801db88 + 3));
  uVar10 = (uint)(byte)PTR_DAT_0801db8c[0xfa];
  if (PTR_DAT_0801db8c[uVar10 * 0x58 + 0x130] == '\x01') {
    local_4c = *(undefined4 *)(PTR_DAT_0801db8c + uVar10 * 0x58 + 0x149);
    local_48 = *(undefined4 *)(PTR_DAT_0801db8c + uVar10 * 0x58 + 0x14d);
    local_44 = *(undefined4 *)(PTR_DAT_0801db8c + uVar10 * 0x58 + 0x151);
    FUN_08000f6e(auStack_6c,PTR_DAT_0801db8c + uVar10 * 0x20 + 0x270,0x20);
  }
  else {
    FUN_08021824(uVar12 * 0x20 + 0x14,&local_4c,0xc);
    FUN_08001016(auStack_6c,0x20);
    uVar10 = (uint)(byte)puVar6[0xfa];
    local_62 = *(undefined2 *)(puVar6 + uVar10 * 0x24 + 0x2da);
    local_64 = *(undefined2 *)(puVar6 + uVar10 * 0x24 + 0x2d8);
    local_60 = puVar6[uVar10 * 0x24 + 0x2de] & 0xf;
    local_5e = puVar6[uVar10 * 0x24 + 0x2e0];
    bVar8 = local_5d | 2;
    if ((int)((uint)(byte)puVar6[uVar10 * 0x24 + 0x2e1] << 0x19) < 0) {
      bVar8 = local_5d | 0x42;
    }
    local_5d = bVar8;
    if (puVar6[uVar10 * 0x24 + 0x2dd] != '\0') {
      local_5d = local_5d | 8;
    }
    local_5d = local_5d | 6 | puVar6[uVar10 * 0x24 + 0x2e1] & 0x30;
    FUN_08017124(auStack_6c,*(undefined4 *)(puVar6 + uVar10 * 0x58 + 0x110));
    FUN_08017124(auStack_68,*(undefined4 *)(puVar6 + (uint)(byte)puVar6[0xfa] * 0x58 + 0x11c));
  }
  FUN_0800f3c0(uVar12,auStack_6c,&local_4c);
  if (puVar2[6] != '\0') {
    puVar4[1] = (char)(uVar12 / 99);
  }
  puVar7 = PTR_DAT_0801db94;
  puVar3 = PTR_DAT_0801db80;
  local_28 = PTR_DAT_0801db8c + 0x33c;
  local_2c = PTR_DAT_0801db8c + 0x33e;
  local_30 = PTR_DAT_0801db8c + 0x7e;
  local_34 = PTR_DAT_0801db8c + 0xfe;
  local_38 = PTR_DAT_0801db8c + 0x100;
  puVar13 = PTR_DAT_0801db8c + 0x3ba;
  local_3c = PTR_DAT_0801db8c + 0x436;
  local_40 = PTR_DAT_0801db8c + 0x438;
  if ((PTR_DAT_0801db90[0x4a] == -0x5b) && (puVar6[0xfa] == '\x02')) {
    FUN_080158b0(puVar13,uVar12,1);
    FUN_080158b0(local_28,puVar4[1],1);
    FUN_080158b0(local_3c,puVar4[1],1);
    if ((int)((uint)local_5d << 0x1d) < 0) {
      FUN_080158b0(local_2c,uVar12,1);
      FUN_080158b0(local_40,puVar4[1],1);
    }
    if (puVar3[(byte)puVar6[0xfa] + 0xd] == puVar4[1]) {
      *(undefined2 *)(puVar6 + 0x108) = *(undefined2 *)(puVar5 + 3);
      FUN_080084dc();
    }
    FUN_080158b0(local_30,uVar12,0);
    FUN_080158b0(puVar6 + 2,uVar12,0);
    FUN_080158b0(local_34,puVar4[1],0);
    uVar12 = (uint)(byte)puVar4[1] * 99 >> 3;
    uVar10 = 0;
    do {
      if (puVar6[uVar10 + uVar12 + 0x7e] != '\0') {
        FUN_080158b0(local_34,(uint)(byte)puVar4[1],1);
        break;
      }
      uVar10 = uVar10 + 1 & 0xffff;
    } while (uVar10 < 0xc);
    FUN_080158b0(local_38,puVar4[1],0);
    uVar10 = 0;
    do {
      if (puVar6[uVar10 + uVar12 + 2] != '\0') {
        FUN_080158b0(local_38,puVar4[1],1);
        break;
      }
      uVar10 = uVar10 + 1 & 0xffff;
    } while (uVar10 < 0xc);
    if (((uint)*(ushort *)(puVar6 + 0xfe) & 1 << (uint)(byte)puVar4[1]) == 0) {
      FUN_080158b0(PTR_DAT_0801db8c,(uint)(byte)puVar4[1],0);
    }
    if (puVar2[6] == '\0') {
      uVar10 = (uint)(byte)puVar2[0xd];
      if (uVar10 == (byte)puVar4[1]) {
        if (((uint)*(ushort *)(puVar6 + 0xfe) & 1 << uVar10) == 0) {
          puVar7[0x1a] = puVar7[0x1a] & 0xfc;
        }
        else {
          iVar11 = FUN_080090ec(uVar10 * 99 + (uint)*(ushort *)(puVar6 + 0x102) & 0xffff,0);
          if (iVar11 == 0) {
            uVar9 = FUN_0801ffdc(*(undefined2 *)(puVar6 + 0x102),0);
            *(undefined2 *)(puVar6 + 0x102) = uVar9;
          }
        }
      }
      uVar10 = (uint)(byte)puVar2[0xe];
      if (uVar10 == (byte)puVar4[1]) {
        if (((uint)*(ushort *)(puVar6 + 0xfe) & 1 << uVar10) == 0) {
          puVar7[0x1a] = puVar7[0x1a] & 0xf3;
        }
        else {
          iVar11 = FUN_080090ec(uVar10 * 99 + (uint)*(ushort *)(puVar6 + 0x104) & 0xffff,0);
          if (iVar11 == 0) {
            uVar9 = FUN_0801ffdc(*(undefined2 *)(puVar6 + 0x104),0);
            *(undefined2 *)(puVar6 + 0x104) = uVar9;
          }
        }
      }
    }
    else {
      uVar1 = puVar6[0xfa];
      puVar6[0xfa] = 0;
      if (*(short *)(puVar6 + 0xfe) == 0) {
        puVar7[0x1a] = puVar7[0x1a] & 0xfc;
      }
      else {
        iVar11 = FUN_080090ec(*(undefined2 *)(puVar6 + 0x102),0);
        if (iVar11 == 0) {
          uVar9 = FUN_0801ffdc(*(undefined2 *)(puVar6 + 0x102),0);
          *(undefined2 *)(puVar6 + 0x102) = uVar9;
        }
      }
      puVar6[0xfa] = 1;
      if (*(short *)(puVar6 + 0xfe) == 0) {
        puVar7[0x1a] = puVar7[0x1a] & 0xf3;
      }
      else {
        iVar11 = FUN_080090ec(*(undefined2 *)(puVar6 + 0x104),0);
        if (iVar11 == 0) {
          uVar9 = FUN_0801ffdc(*(undefined2 *)(puVar6 + 0x104),0);
          *(undefined2 *)(puVar6 + 0x104) = uVar9;
        }
      }
      puVar6[0xfa] = uVar1;
    }
  }
  else {
    FUN_080158b0(local_30,uVar12,1);
    FUN_080158b0(PTR_DAT_0801db8c,puVar4[1],1);
    FUN_080158b0(local_34,puVar4[1],1);
    if ((int)((uint)local_5d << 0x1d) < 0) {
      FUN_080158b0(puVar6 + 2,uVar12,1);
      FUN_080158b0(local_38,puVar4[1],1);
    }
    if (puVar3[(byte)puVar6[0xfa] + 0xd] == puVar4[1]) {
      *(undefined2 *)(puVar6 + 0x108) = *(undefined2 *)(puVar5 + 3);
      FUN_080084dc();
    }
    if (PTR_DAT_0801db90[0x4a] == -0x5b) {
      FUN_080158b0(puVar13,uVar12,0);
      FUN_080158b0(local_2c,uVar12,0);
      FUN_080158b0(local_3c,puVar4[1],0);
      uVar12 = (uint)(byte)puVar4[1] * 99 >> 3;
      uVar10 = 0;
      do {
        if (puVar6[uVar10 + uVar12 + 0x3ba] != '\0') {
          FUN_080158b0(local_3c,(uint)(byte)puVar4[1],1);
          break;
        }
        uVar10 = uVar10 + 1 & 0xffff;
      } while (uVar10 < 0xc);
      FUN_080158b0(local_40,puVar4[1],0);
      uVar10 = 0;
      do {
        if (puVar6[uVar10 + uVar12 + 0x33e] != '\0') {
          FUN_080158b0(local_40,puVar4[1],1);
          break;
        }
        uVar10 = uVar10 + 1 & 0xffff;
      } while (uVar10 < 0xc);
      if (((uint)*(ushort *)(puVar6 + 0x436) & 1 << (uint)(byte)puVar4[1]) == 0) {
        FUN_080158b0(local_28,(uint)(byte)puVar4[1],0);
      }
      if (puVar2[6] == '\0') {
        uVar10 = (uint)(byte)puVar2[0xf];
        if (uVar10 == (byte)puVar4[1]) {
          if (((uint)*(ushort *)(puVar6 + 0x436) & 1 << uVar10) == 0) {
            puVar7[0x1a] = puVar7[0x1a] & 0xcf;
          }
          else {
            iVar11 = FUN_080090ec(uVar10 * 99 + (uint)*(ushort *)(puVar6 + 0x106) & 0xffff,0);
            if (iVar11 == 0) {
              uVar9 = FUN_0801ffdc(*(undefined2 *)(puVar6 + 0x106),0);
              *(undefined2 *)(puVar6 + 0x106) = uVar9;
            }
          }
        }
      }
      else {
        uVar1 = puVar6[0xfa];
        puVar6[0xfa] = 2;
        if (*(short *)(puVar6 + 0x436) == 0) {
          puVar7[0x1a] = puVar7[0x1a] & 0xcf;
        }
        else {
          iVar11 = FUN_080090ec(*(undefined2 *)(puVar6 + 0x106),0);
          if (iVar11 == 0) {
            uVar9 = FUN_0801ffdc(*(undefined2 *)(puVar6 + 0x106),0);
            *(undefined2 *)(puVar6 + 0x106) = uVar9;
          }
        }
        puVar6[0xfa] = uVar1;
      }
    }
  }
  FUN_080099e8();
  FUN_08008970();
  FUN_08018038();
  return 1;
}

