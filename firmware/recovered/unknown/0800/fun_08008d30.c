/**
 * @brief fun_08008d30
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08008d30, Ghidra name FUN_08008d30, 482 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08008d30(void)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 local_3c;
  char local_38 [7];
  undefined4 uStack_31;
  undefined1 uStack_2d;
  undefined4 local_2c;
  int local_28;
  
  iVar5 = DAT_08008f18;
  iVar4 = DAT_08008f14;
  local_38[0] = '\0';
  local_38[1] = '\0';
  local_38[2] = '\0';
  local_38[3] = '\0';
  local_38[4] = 0;
  local_38[5] = '\0';
  local_38[6] = '\0';
  uStack_31._0_1_ = '\0';
  uStack_31._1_1_ = '\0';
  uStack_31._2_1_ = '\0';
  uStack_31._3_1_ = '\0';
  uStack_2d = 0;
  local_2c = 0;
  local_3c = 0;
  bVar2 = false;
  bVar3 = false;
  if (*(char *)(DAT_08008f14 + 0x2dd) == '\0') {
    return;
  }
  cVar1 = *(char *)(DAT_08008f18 + 0x29);
  if (cVar1 != '\x01') {
    if (cVar1 != '\x02') {
      if (cVar1 != '\x03') {
        if (cVar1 != '\x04') {
          return;
        }
        if ((*(char *)(DAT_08008f18 + 0x32) != '\0') && (*(char *)(DAT_08008f18 + 0x32) != -1)) {
          uVar8 = 0;
          do {
            cVar1 = *(char *)(DAT_08008f18 + uVar8 + 0x32);
            if ((cVar1 == '\0') || (cVar1 == -1)) {
              *(undefined1 *)(uVar8 + DAT_08008f18 + 0x32) = 0;
              break;
            }
            uVar8 = uVar8 + 1 & 0xff;
          } while (uVar8 < 6);
          FUN_08001064(&uStack_31,DAT_08008f18 + 0x32,6);
          bVar6 = FUN_08000ea6(&uStack_31);
          local_3c = (uint)bVar6 << 8;
          *(undefined1 *)((int)&uStack_31 + (uint)bVar6) = 0;
        }
      }
      if ((*(char *)(iVar5 + 0x2b) != '\0') && (*(char *)(iVar5 + 0x2b) != -1)) {
        uVar8 = 0;
        do {
          cVar1 = *(char *)(iVar5 + uVar8 + 0x2b);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            *(undefined1 *)(uVar8 + iVar5 + 0x2b) = 0;
            break;
          }
          uVar8 = uVar8 + 1 & 0xff;
        } while (uVar8 < 6);
        FUN_08001064(local_38,DAT_08008f18 + 0x2b,6);
        bVar6 = FUN_08000ea6(local_38);
        local_3c = CONCAT31(local_3c._1_3_,bVar6);
        local_38[bVar6] = '\0';
      }
      goto LAB_08008df6;
    }
    uStack_31 = s_WIDE2_08008f20._0_4_;
    uStack_2d = 0x32;
    local_3c = 0x500;
    bVar3 = true;
  }
  local_38._0_4_ = s_WIDE1_08008f28._0_4_;
  local_38[4] = 0x31;
  local_3c = CONCAT31(local_3c._1_3_,5);
LAB_08008df6:
  FUN_08000ee4(DAT_08008f1c + -0xe5,DAT_08008f1c,0xe5);
  local_28 = DAT_08008f1c + -0xd7;
  FUN_08001016(local_28,0x38);
  uVar8 = 1;
  uVar11 = 0;
  do {
    iVar9 = uVar11 * 7 + iVar4;
    if (*(char *)(iVar9 + 0x2dd) == '\0') break;
    if (bVar2) {
      FUN_08001064(uVar8 * 7 + iVar4 + 0x1f8,iVar9 + 0x2dd,7);
    }
    else {
      iVar10 = FUN_080091dc(iVar9 + 0x2dd,local_38,local_3c & 0xff);
      if (iVar10 == 1) {
        bVar2 = true;
        FUN_08001064(uVar8 * 7 + iVar4 + 0x1f8,local_38,7);
      }
      else if (bVar3) {
        iVar9 = FUN_080091dc(iVar9 + 0x2dd,&uStack_31,local_3c._1_1_);
        if (iVar9 == 1) {
          bVar2 = true;
          FUN_08001064(uVar8 * 7 + iVar4 + 0x1f8,&uStack_31,7);
        }
      }
    }
    uVar8 = uVar8 + 1 & 7;
    uVar11 = uVar11 + 1 & 0xff;
  } while (uVar11 < 8);
  if (bVar2) {
    FUN_08001064(local_28,DAT_08008f18 + 0x11,7);
    sVar7 = (ushort)*(byte *)(iVar5 + 0x2a) * 10;
    *(short *)(iVar4 + 0x14) = sVar7;
    *(undefined1 *)(iVar4 + 0xe) = 1;
    if (sVar7 == 0) {
      *(undefined1 *)(iVar4 + 0xf) = 1;
    }
  }
  return;
}

