/**
 * @brief fun_0801f910
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801f910, Ghidra name FUN_0801f910, 798 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801f910(void)

{
  char cVar1;
  byte bVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  iVar4 = DAT_0801fc6c;
  puVar3 = DAT_0801fc44;
  iVar7 = DAT_0801fc40;
  if (*(char *)(DAT_0801fc40 + 1) != '\x04') {
    return;
  }
  switch(*DAT_0801fc44) {
  case 0:
    if (DAT_0801fc44[0x21] == '\x01') {
      FUN_080207ec(6);
      FUN_0801acce(0);
      FUN_08015824(0);
    }
    puVar3[0x21] = 0;
    FUN_0801bd4c();
    puVar3[0x20] = 0;
    puVar3[0x14] = 0;
    *puVar3 = 1;
    break;
  case 1:
    iVar7 = FUN_0801b9f0();
    if (iVar7 != 0) {
      FUN_0801bd3c();
      bVar2 = puVar3[0x20];
      puVar3[0x20] = bVar2 + 1;
      *(int *)(puVar3 + (uint)bVar2 * 4 + 0x18) = iVar7;
      if (1 < (byte)puVar3[0x20]) {
        puVar3[0x20] = 0;
        uVar8 = *(uint *)(puVar3 + 0x18);
        uVar9 = *(uint *)(puVar3 + 0x1c);
        if (uVar9 < uVar8) {
          uVar10 = uVar8 - uVar9;
        }
        else {
          uVar10 = uVar9 - uVar8;
        }
        if (uVar10 < 0x32) {
          uVar9 = uVar9 + uVar8;
          uVar5 = uVar9 >> 1;
          *(uint *)(puVar3 + 4) = uVar5;
          uVar10 = DAT_0801fc4c;
          uVar8 = DAT_0801fc48;
          cVar1 = puVar3[8];
          if (cVar1 == '\0') {
            if (uVar5 < DAT_0801fc54) {
              if (DAT_0801fc58 < uVar5) {
                *(uint *)(puVar3 + 4) = uVar9 >> 2;
              }
              else if (uVar5 < DAT_0801fc5c) {
                *puVar3 = 0;
                return;
              }
            }
            else {
              *(uint *)(puVar3 + 4) = uVar5 / 3;
            }
            if (uVar8 < *(uint *)(puVar3 + 4)) {
              *puVar3 = 0;
              return;
            }
          }
          else {
            uVar8 = DAT_0801fc48 * 2;
            if (cVar1 == '\x01') {
              if (DAT_0801fc50 < uVar5) {
                *(uint *)(puVar3 + 4) = uVar9 >> 2;
              }
              if (*(uint *)(puVar3 + 4) < uVar8) {
                *puVar3 = 0;
                return;
              }
            }
            else if (cVar1 == '\x02') {
              if (uVar5 < uVar8) {
                if (uVar5 < DAT_0801fc48) {
                  *puVar3 = 0;
                  return;
                }
              }
              else {
                *(uint *)(puVar3 + 4) = uVar9 >> 2;
              }
              if (uVar10 < *(uint *)(puVar3 + 4)) {
                *puVar3 = 0;
                return;
              }
            }
            else if (cVar1 == '\x03') {
              if (uVar5 < DAT_0801fc60) {
                if (uVar5 < DAT_0801fc4c) {
                  *puVar3 = 0;
                  return;
                }
              }
              else {
                *(uint *)(puVar3 + 4) = uVar9 >> 2;
              }
              if (uVar8 < *(uint *)(puVar3 + 4)) {
                *puVar3 = 0;
                return;
              }
            }
          }
          *puVar3 = 2;
          return;
        }
        *(uint *)(puVar3 + 0x18) = uVar9;
        puVar3[0x20] = 1;
      }
      FUN_0801bd4c();
      return;
    }
    break;
  case 2:
    *(uint *)(DAT_0801fc44 + 4) = ((*(int *)(DAT_0801fc44 + 4) + 0xdU) / 0x19) * 0x19;
    FUN_0801baf4();
    *puVar3 = 3;
    FUN_0801f808(1);
    return;
  case 3:
    *(undefined2 *)(DAT_0801fc44 + 10) = 0xf;
    *puVar3 = 4;
    break;
  case 4:
    iVar7 = FUN_0801bd68();
    *(int *)(puVar3 + 0x10) = iVar7;
    if (iVar7 == 0) {
      if (*(short *)(puVar3 + 10) == 0) {
        FUN_0801f6f8(0,0);
        *(undefined4 *)(puVar3 + 0x10) = 0;
        puVar3[0x14] = 0;
        *puVar3 = 5;
      }
      else {
        *(short *)(puVar3 + 10) = *(short *)(puVar3 + 10) + -1;
      }
    }
    else {
      iVar7 = FUN_0801be20();
      puVar3[0x14] = (char)iVar7;
      if (iVar7 == 1) {
        uVar9 = (uint)(DAT_0801fc64 * *(int *)(puVar3 + 0x10)) / DAT_0801fc68;
        *(uint *)(puVar3 + 0x10) = uVar9;
        FUN_08007984(uVar9,0);
        FUN_0800ad06(200);
        iVar7 = FUN_0801c674(0);
        if (iVar7 == 0) {
          FUN_0801f6f8(0,0);
          puVar3[0x14] = 0;
        }
        else if (*(uint *)(puVar3 + 0x10) < 0x259) {
          FUN_0801f6f8(0,0);
          puVar3[0x14] = 0;
        }
        else {
          uVar6 = FUN_080096a0();
          *(undefined4 *)(puVar3 + 0x10) = uVar6;
          FUN_0801f6f8(1,uVar6,0);
        }
      }
      else {
        FUN_0800ab8c(*(undefined4 *)(puVar3 + 0x10),iVar7,1,0);
        FUN_0800ad06(200);
        iVar7 = FUN_0801c674(0);
        if (iVar7 == 0) {
          FUN_0801f6f8(0,0);
          puVar3[0x14] = 0;
        }
        else {
          iVar7 = FUN_080096dc(*(undefined4 *)(puVar3 + 0x10));
          if (iVar7 == 0) {
            puVar3[0xc] = 0;
            FUN_0801f6f8(2,*(uint *)(puVar3 + 0x10) & 0x7fffff,0);
          }
          else {
            puVar3[0xc] = 1;
            FUN_0801f6f8(2,iVar7,1);
          }
        }
      }
      *puVar3 = 5;
    }
    break;
  case 5:
    **(int **)(DAT_0801fc6c + 0x18) = *(int *)(DAT_0801fc44 + 4);
    if ((puVar3[0xc] == '\x01') || (puVar3[0x14] == '\x01')) {
      *(undefined4 *)(*(int *)(iVar4 + 0x18) + 8) = *(undefined4 *)(puVar3 + 0x10);
    }
    else {
      uVar9 = *(uint *)(puVar3 + 0x10);
      *(uint *)(*(int *)(iVar4 + 0x18) + 8) = uVar9 & 0x7fffff;
      *(uint *)(*(int *)(iVar4 + 0x18) + 8) = uVar9 & 0x7fffff | 0xa0000000;
    }
    *(undefined1 *)(*(int *)(iVar4 + 0x18) + 4) = puVar3[0x14];
    **(undefined4 **)(iVar4 + 0x1c) = *(undefined4 *)(puVar3 + 4);
    *(undefined4 *)(*(int *)(iVar4 + 0x1c) + 8) = *(undefined4 *)(*(int *)(iVar4 + 0x18) + 8);
    *(undefined1 *)(*(int *)(iVar4 + 0x1c) + 4) = puVar3[0x14];
    *(undefined1 *)(iVar7 + 0x14) = 1;
    *puVar3 = 6;
    FUN_080073f8(5);
    FUN_0801bd3c();
    goto LAB_0801fbba;
  case 6:
LAB_0801fbba:
    iVar7 = FUN_0801a91c();
    if (iVar7 == 1) {
      if ((puVar3[0x14] != '\0') && (iVar7 = FUN_0801c674(0), iVar7 == 0)) {
        puVar3[0x21] = 0;
        FUN_080207ec(6);
        FUN_0801acce(0);
        FUN_08015824(0);
        return;
      }
      if (puVar3[0x21] == '\0') {
        puVar3[0x21] = 1;
        FUN_0801acce(1);
        FUN_080207ec(5);
        FUN_08015824(1);
        return;
      }
    }
    else if (puVar3[0x21] == '\x01') {
      puVar3[0x21] = 0;
      FUN_080207ec(6);
      FUN_0801acce(0);
      FUN_08015824(0);
      return;
    }
    break;
  default:
    FUN_0800ea8c(1);
    return;
  }
  return;
}

