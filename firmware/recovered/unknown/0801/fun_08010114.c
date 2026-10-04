/**
 * @brief fun_08010114
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08010114, Ghidra name FUN_08010114, 680 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08010114(void)

{
  bool bVar1;
  bool bVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  ushort uVar7;
  uint uVar8;
  char cVar9;
  uint uVar10;
  int unaff_r6;
  uint uVar11;
  int iVar12;
  undefined1 local_36c [824];
  undefined1 local_34;
  ushort local_33;
  char local_31 [5];
  int local_2c;
  undefined4 local_28;
  
  bVar2 = false;
  FUN_08001016(local_36c,0x338);
  pbVar3 = DAT_080103c0;
  local_28 = DAT_080103c4;
  if (*DAT_080103c0 == 0) {
    *DAT_080103c0 = 1;
    uVar10 = 0;
    pbVar3[1] = 100;
  }
  else {
    uVar10 = 0xff;
    bVar4 = 0;
    uVar8 = 0;
    do {
      if (pbVar3[uVar8 + 1] != 0) {
        FUN_0800f510(uVar8 & 0xff,local_36c,6);
        iVar5 = FUN_08000e06(local_36c,local_28,6);
        if (iVar5 == 0) {
          bVar4 = pbVar3[uVar8 + 1];
          uVar10 = uVar8 & 0xff;
          break;
        }
      }
      uVar8 = uVar8 + 1 & 0xffff;
    } while (uVar8 < 100);
    if (uVar10 == 0xff) {
      uVar8 = 0;
      do {
        if (pbVar3[uVar8 + 1] != 0) {
          pbVar3[uVar8 + 1] = pbVar3[uVar8 + 1] - 1;
        }
        if (pbVar3[uVar8 + 1] == 0) {
          uVar10 = uVar8 & 0xff;
          break;
        }
        uVar8 = uVar8 + 1 & 0xffff;
      } while (uVar8 < 100);
      if (*pbVar3 < 100) {
        *pbVar3 = *pbVar3 + 1;
      }
      if (uVar10 == 0xff) {
        uVar10 = *pbVar3 - 1 & 0xff;
      }
    }
    else {
      uVar8 = 0;
      do {
        if (bVar4 < pbVar3[uVar8 + 1]) {
          pbVar3[uVar8 + 1] = pbVar3[uVar8 + 1] - 1;
        }
        uVar8 = uVar8 + 1 & 0xffff;
      } while (uVar8 < 100);
    }
    pbVar3[uVar10 + 1] = 100;
  }
  iVar5 = (uVar10 >> 2) * 0x1000;
  iVar12 = iVar5 + 0x13000;
  bVar4 = FUN_08007166(iVar12,0x13,8);
  uVar8 = (uint)bVar4;
  uVar11 = uVar10 & 3;
  bVar1 = false;
  if (uVar8 == 0x13) {
    bVar1 = true;
  }
  else {
    unaff_r6 = iVar12 + uVar8 * 8;
    FUN_08021824(unaff_r6,&local_34,8);
    uVar6 = FUN_0800a878(local_31,5);
    if (uVar6 == local_33) {
      if (uVar8 == 0x12) {
        local_2c = iVar5 + 0x130a0;
        uVar10 = 0;
        local_31[0] = '\0';
        cVar9 = '\0';
        uVar8 = 0;
        do {
          if ((byte)local_31[uVar8 + 1] < 0x13) {
            if (uVar8 == uVar11) {
              FUN_08000ee4(local_36c + uVar10,local_28,0xcd);
            }
            else {
              FUN_08021824((uint)(byte)local_31[uVar8 + 1] * 0xcd + local_2c,local_36c + uVar10,0xcd
                          );
            }
            uVar10 = uVar10 + 0xcd & 0xffff;
            local_31[0] = local_31[0] + '\x01';
            local_31[uVar8 + 1] = cVar9;
            cVar9 = cVar9 + '\x01';
          }
          else {
            local_31[uVar8 + 1] = -1;
          }
          uVar8 = uVar8 + 1 & 0xffff;
        } while (uVar8 < 4);
        if (local_31[uVar11 + 1] == -1) {
          local_31[0] = local_31[0] + '\x01';
          FUN_08000ee4(local_36c + uVar10,local_28,0xcd);
          uVar10 = uVar10 + 0xcd & 0xffff;
          local_31[uVar11 + 1] = cVar9;
        }
        if (0x334 < uVar10) {
          uVar10 = 0x334;
        }
        uVar8 = 0;
        if (cVar9 != '\0') {
          uVar8 = (uint)(byte)(cVar9 - 1);
        }
        unaff_r6 = iVar12 + uVar8 * 8;
        FUN_08021764(iVar12);
        FUN_080219b8(local_2c,local_36c,uVar10);
        bVar2 = true;
      }
      else {
        if (local_31[uVar11 + 1] == -1) {
          local_31[0] = local_31[0] + '\x01';
        }
        local_31[uVar11 + 1] = bVar4 + 1;
        local_36c[0] = 0;
        FUN_080219b8(unaff_r6,local_36c,1);
        unaff_r6 = unaff_r6 + 8;
      }
    }
    else {
      bVar1 = true;
      uVar7 = 0;
      uVar8 = 0;
      do {
        iVar5 = uVar8 + (uVar10 & 0xfffffffc);
        if (pbVar3[iVar5 + 1] != 0) {
          pbVar3[iVar5 + 1] = 0;
          uVar7 = uVar7 + 1;
        }
        uVar8 = uVar8 + 1 & 0xffff;
      } while (uVar8 < 4);
      if (*pbVar3 < uVar7) {
        *pbVar3 = 1;
      }
      else {
        *pbVar3 = *pbVar3 - (char)uVar7;
      }
    }
  }
  if (bVar1) {
    uVar11 = 0;
    local_31[0] = '\x01';
    FUN_08000bca(local_31 + 1,4,0xff);
    local_31[1] = 0;
    FUN_08021764(iVar12);
    unaff_r6 = iVar12;
  }
  local_34 = 0xa5;
  local_33 = FUN_0800a878(local_31,5);
  FUN_080219b8(unaff_r6,&local_34,8);
  if (!bVar2) {
    FUN_080219b8((short)(ushort)(byte)local_31[uVar11 + 1] * 0xcd + iVar12 + 0xa0,local_28,0xcd);
  }
  FUN_0800fe58();
  return;
}

