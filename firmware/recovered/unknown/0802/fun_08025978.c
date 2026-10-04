/**
 * @brief fun_08025978
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08025978, Ghidra name FUN_08025978, 248 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_08025978(undefined8 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 in_d0;
  undefined8 uVar5;
  undefined4 uVar6;
  
  uVar3 = param_2 - 1;
  uVar5 = param_1[uVar3];
  while( true ) {
    uVar4 = (undefined4)uVar5;
    uVar1 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if ((uVar3 & 0xfffffff9) == 0) break;
    uVar5 = FUN_08028a98(uVar4,uVar1);
    uVar3 = uVar3 - 1;
    uVar5 = FUN_0802819c((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(int)param_1[uVar3],
                         (int)((ulonglong)param_1[uVar3] >> 0x20));
  }
  uVar6 = (undefined4)in_d0;
  uVar2 = (undefined4)((ulonglong)in_d0 >> 0x20);
  if (uVar3 != 2) {
    if (uVar3 != 4) {
      if (uVar3 != 6) {
        return uVar4;
      }
      uVar5 = FUN_08028a98(uVar4,uVar1,uVar6,uVar2);
      uVar5 = FUN_0802819c((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(int)param_1[5],
                           (int)((ulonglong)param_1[5] >> 0x20));
      uVar5 = FUN_08028a98((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),uVar6,uVar2);
      uVar5 = FUN_0802819c((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(int)param_1[4],
                           (int)((ulonglong)param_1[4] >> 0x20));
    }
    uVar5 = FUN_08028a98((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),uVar6,uVar2);
    uVar5 = FUN_0802819c((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(int)param_1[3],
                         (int)((ulonglong)param_1[3] >> 0x20));
    uVar5 = FUN_08028a98((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),uVar6,uVar2);
    uVar5 = FUN_0802819c((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(int)param_1[2],
                         (int)((ulonglong)param_1[2] >> 0x20));
  }
  uVar5 = FUN_08028a98((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),uVar6,uVar2);
  uVar5 = FUN_0802819c((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(int)param_1[1],
                       (int)((ulonglong)param_1[1] >> 0x20));
  uVar5 = FUN_08028a98((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),uVar6,uVar2);
  uVar1 = FUN_0802819c((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(int)*param_1,
                       (int)((ulonglong)*param_1 >> 0x20));
  return uVar1;
}

