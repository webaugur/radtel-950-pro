/**
 * @brief fun_08023df0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08023df0, Ghidra name FUN_08023df0, 432 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_08023df0(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  ulonglong in_d0;
  ulonglong uVar10;
  ulonglong in_d1;
  undefined4 uVar11;
  undefined8 uVar12;
  ulonglong local_30;
  undefined8 local_20;
  undefined8 local_18;
  
  uVar10 = DAT_08023fa8;
  local_18._4_4_ = (uint)(in_d1 >> 0x20);
  local_20._4_4_ = (uint)(in_d0 >> 0x20);
  local_18._0_4_ = (uint)in_d1;
  uVar5 = local_18._4_4_ & 0x7fffffff;
  local_20._0_4_ = (uint)in_d0;
  uVar3 = local_20._4_4_ & 0x7fffffff;
  if ((DAT_08023fa0 < (uVar5 | (-(uint)local_18 | (uint)local_18) >> 0x1f)) ||
     (DAT_08023fa0 < (uVar3 | (-(uint)local_20 | (uint)local_20) >> 0x1f))) {
    uVar3 = FUN_0802819c((uint)local_20,local_20._4_4_,(uint)local_18,local_18._4_4_);
    return uVar3;
  }
  if (local_18._4_4_ == 0x3ff00000 && (uint)local_18 == 0) {
    uVar3 = FUN_08025e48((uint)local_20,local_20._4_4_);
LAB_08023ef8:
    local_30 = (ulonglong)uVar3;
  }
  else {
    uVar9 = (int)local_18._4_4_ >> 0x1e & 2U | local_20._4_4_ >> 0x1f;
    uVar11 = (undefined4)DAT_08023fa8;
    if ((uint)local_20 == 0 && (in_d0 & 0x7fffffff00000000) == 0) {
      if (uVar9 < 2) {
        return (uint)local_20;
      }
      if (uVar9 != 2) {
        if (uVar9 != 3) goto LAB_08023e90;
LAB_08023f08:
        local_30 = DAT_08023fb0 & 0xffffffff;
        goto LAB_08023ee2;
      }
LAB_08023efe:
      local_30 = DAT_08023fa8 & 0xffffffff;
      goto LAB_08023ee2;
    }
LAB_08023e90:
    if ((uint)local_18 != 0 || (in_d1 & 0x7fffffff00000000) != 0) {
      uVar1 = in_d0;
      uVar2 = in_d1;
      if (uVar5 == DAT_08023fa0) {
        if (uVar3 == DAT_08023fa0) {
          uVar5 = local_18._4_4_ & 0x3fffffff;
          uVar3 = local_20._4_4_ & 0x3fffffff;
          local_18 = in_d1 & 0x3fffffffffffffff;
          local_20 = in_d0 & 0x3fffffffffffffff;
          uVar1 = local_20;
          uVar2 = local_18;
        }
        else {
          if (uVar9 == 0) {
            local_30 = *(ulonglong *)(DAT_08023fc8 + 0x8023ebe);
            goto LAB_08023ee2;
          }
          if (uVar9 == 1) {
            uVar10 = *(ulonglong *)(DAT_08023fc8 + 0x8023ebe);
            uVar3 = FUN_08027ec0((int)uVar10,(int)(uVar10 >> 0x20));
            goto LAB_08023ef8;
          }
          if (uVar9 == 2) goto LAB_08023efe;
          uVar1 = in_d0;
          uVar2 = in_d1;
          if (uVar9 == 3) goto LAB_08023f08;
        }
      }
      local_18 = uVar2;
      local_20 = uVar1;
      if (uVar3 != DAT_08023fa0) {
        iVar4 = (int)(uVar3 - uVar5) >> 0x14;
        if (iVar4 < 0x3d) {
          if ((longlong)in_d1 < 0 && iVar4 < -0x3c) {
            local_30 = DAT_08023fd0;
          }
          else {
            FUN_0802841c((int)local_20,(int)(local_20 >> 0x20),(int)local_18,(int)(local_18 >> 0x20)
                        );
            FUN_08026002();
            local_30 = FUN_08025e48();
          }
        }
        else {
          local_30 = DAT_08023fc0;
        }
        if (uVar9 == 0) goto LAB_08023ee2;
        if (uVar9 == 1) {
          local_30 = local_30 & 0xffffffff;
          goto LAB_08023ee2;
        }
        uVar7 = (undefined4)((ulonglong)DAT_08023fd8 >> 0x20);
        uVar6 = (undefined4)(local_30 >> 0x20);
        uVar8 = (undefined4)(uVar10 >> 0x20);
        if (uVar9 == 2) {
          uVar12 = FUN_080291f8((undefined4)local_30,uVar6,(int)DAT_08023fd8,uVar7);
          uVar3 = FUN_08028fa0((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),uVar11,uVar8);
        }
        else {
          uVar12 = FUN_080291f8((undefined4)local_30,uVar6,(int)DAT_08023fd8,uVar7);
          uVar3 = FUN_080291f8((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),uVar11,uVar8);
        }
        goto LAB_08023ef8;
      }
    }
    local_30 = DAT_08023fc0;
    if ((longlong)in_d0 < 0) {
      local_30 = DAT_08023fb8 & 0xffffffff;
    }
  }
LAB_08023ee2:
  return (uint)local_30;
}

