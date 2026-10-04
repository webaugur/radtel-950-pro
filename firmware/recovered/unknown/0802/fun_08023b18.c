/**
 * @brief fun_08023b18
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08023b18, Ghidra name FUN_08023b18, 622 bytes.
 *       Not linked into rt950-firmware.
 */

int FUN_08023b18(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong in_d0;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 local_18;
  
  local_18._4_4_ = (uint)((ulonglong)in_d0 >> 0x20);
  uVar5 = local_18._4_4_ & 0x7fffffff;
  local_18._0_4_ = (int)in_d0;
  if ((int)uVar5 < DAT_08023d88) {
    if ((int)uVar5 < DAT_08023da0) {
      if ((int)uVar5 < DAT_08023da4) {
        iVar6 = FUN_08023abc((int)local_18,local_18._4_4_);
        if (iVar6 != 4) {
          return (int)local_18;
        }
        FUN_08025c38();
        return (int)local_18;
      }
      iVar6 = -1;
      local_18 = in_d0;
    }
    else {
      uVar9 = FUN_08026002((int)local_18,local_18._4_4_);
      uVar2 = (undefined4)((ulonglong)uVar9 >> 0x20);
      uVar1 = (undefined4)uVar9;
      uVar4 = (undefined4)DAT_08023db0;
      uVar8 = (undefined4)((ulonglong)DAT_08023db0 >> 0x20);
      if ((int)uVar5 < DAT_08023da8) {
        if ((int)uVar5 < DAT_08023db8) {
          iVar6 = 0;
          uVar3 = (undefined4)((ulonglong)DAT_08023dc0 >> 0x20);
          uVar7 = (undefined4)DAT_08023dc0;
          uVar9 = FUN_0802819c(uVar1,uVar2,uVar7,uVar3);
          uVar10 = FUN_08028a98(uVar1,uVar2,uVar7,uVar3);
          uVar10 = FUN_080291f8((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar4,uVar8);
          local_18 = FUN_0802841c((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
                                  (int)((ulonglong)uVar9 >> 0x20));
        }
        else {
          iVar6 = 1;
          uVar9 = FUN_0802819c(uVar1,uVar2,uVar4,uVar8);
          uVar10 = FUN_080291f8(uVar1,uVar2,uVar4,uVar8);
          local_18 = FUN_0802841c((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
                                  (int)((ulonglong)uVar9 >> 0x20));
        }
      }
      else if ((int)uVar5 < DAT_08023dc8) {
        iVar6 = 2;
        uVar3 = (undefined4)((ulonglong)DAT_08023dd0 >> 0x20);
        uVar7 = (undefined4)DAT_08023dd0;
        uVar9 = FUN_08028a98(uVar1,uVar2,uVar7,uVar3);
        uVar9 = FUN_0802819c((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar4,uVar8);
        uVar10 = FUN_080291f8(uVar1,uVar2,uVar7,uVar3);
        local_18 = FUN_0802841c((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
                                (int)((ulonglong)uVar9 >> 0x20));
      }
      else {
        iVar6 = 3;
        local_18 = FUN_0802841c((int)DAT_08023dd8,(int)((ulonglong)DAT_08023dd8 >> 0x20),uVar1,uVar2
                               );
      }
    }
    uVar4 = (undefined4)((ulonglong)local_18 >> 0x20);
    uVar3 = (undefined4)local_18;
    uVar9 = FUN_08028a98(uVar3,uVar4,uVar3,uVar4);
    uVar8 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uVar1 = (undefined4)uVar9;
    uVar9 = FUN_08028a98(uVar1,uVar8,uVar1,uVar8);
    uVar2 = (undefined4)uVar9;
    uVar7 = FUN_08025978(uVar2,DAT_08023de0 + 0x8023cb6,6);
    uVar10 = FUN_08028a98(uVar7,extraout_s1,uVar1,uVar8);
    uVar1 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uVar8 = FUN_08025978(uVar2,DAT_08023de4 + 0x8023cd8,5);
    uVar9 = FUN_08028a98(uVar8,extraout_s1_00,uVar2,(int)((ulonglong)uVar9 >> 0x20));
    uVar2 = (undefined4)((ulonglong)uVar9 >> 0x20);
    if (iVar6 < 0) {
      uVar9 = FUN_0802819c((int)uVar10,uVar1,(int)uVar9,uVar2);
      uVar9 = FUN_08028a98((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar3,uVar4);
      iVar6 = FUN_08028fa0((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar3,uVar4);
    }
    else {
      uVar9 = FUN_0802819c((int)uVar10,uVar1,(int)uVar9,uVar2);
      uVar10 = FUN_08028a98((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar3,uVar4);
      uVar9 = *(undefined8 *)(DAT_08023de8 + 0x8023d2e + iVar6 * 8);
      uVar9 = FUN_080291f8((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
                           (int)((ulonglong)uVar9 >> 0x20));
      uVar10 = FUN_080291f8((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar3,uVar4);
      uVar9 = *(undefined8 *)(DAT_08023dec + 0x8023d56 + iVar6 * 8);
      uVar9 = FUN_08028fa0((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
                           (int)((ulonglong)uVar9 >> 0x20));
      if (-1 < in_d0) {
        return (int)uVar9;
      }
      iVar6 = FUN_08027ec0((int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
    }
    return iVar6;
  }
  if (((int)uVar5 <= (int)DAT_08023d8c) && ((uVar5 != DAT_08023d8c || ((int)local_18 == 0)))) {
    if ((int)local_18._4_4_ < 1) {
      iVar6 = (int)DAT_08023d98;
    }
    else {
      iVar6 = (int)DAT_08023d90;
    }
    return iVar6;
  }
  iVar6 = FUN_08025bd0((int)local_18);
  return iVar6;
}

