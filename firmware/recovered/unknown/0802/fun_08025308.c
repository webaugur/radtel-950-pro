/**
 * @brief fun_08025308
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08025308, Ghidra name FUN_08025308, 180 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x0802539e */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 FUN_08025308(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 in_d0;
  uint uVar3;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 local_20 [2];
  undefined4 local_18;
  int local_10;
  
  uVar3 = (uint)((ulonglong)in_d0 >> 0x20);
  uVar1 = uVar3 & 0x7fffffff;
  if ((int)uVar1 <= DAT_080253c8) {
    uVar2 = 0;
LAB_0802538e:
    uVar2 = FUN_08025a70(uVar2);
    return uVar2;
  }
  local_10 = (int)in_d0;
  if (uVar1 == DAT_080253cc) {
    if (local_10 == 0) {
      FUN_080011c4(1);
      uVar2 = FUN_08025bf8();
      return uVar2;
    }
  }
  else if ((int)uVar1 < (int)DAT_080253cc) {
    uVar1 = FUN_080253d0(local_10,local_20);
    uVar1 = uVar1 & 3;
    if (uVar1 != 0) {
      if (uVar1 == 1) {
        uVar2 = FUN_08025808(local_20[0],uVar3,local_18);
        return uVar2;
      }
      if (uVar1 == 2) {
        uVar2 = FUN_08025a70(1);
        uVar2 = FUN_08027ec0(uVar2,extraout_s1_00);
        return uVar2;
      }
      uVar2 = FUN_08025808(local_20[0],uVar3,local_18);
      uVar2 = FUN_08027ec0(uVar2,extraout_s1);
      return uVar2;
    }
    uVar2 = 1;
    goto LAB_0802538e;
  }
  uVar2 = FUN_08025bd0(local_10);
  return uVar2;
}

