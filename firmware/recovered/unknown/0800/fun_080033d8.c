/**
 * @brief fun_080033d8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080033d8, Ghidra name FUN_080033d8, 260 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080033d8(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined2 local_74;
  undefined2 local_72;
  undefined4 local_6c;
  undefined2 local_68;
  undefined2 local_60 [2];
  undefined4 local_5c;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined1 local_1f;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  
  FUN_0801a610(1);
  local_58 = 0x30d4;
  local_60[0] = 0;
  local_54 = 0;
  local_5c = 0;
  local_52 = 0;
  FUN_080222fc(0x40000000,local_60);
  local_74 = 0x60;
  local_72 = 0;
  local_6c = 0xff;
  local_68 = 2;
  FUN_08022120(0x40000000,&local_74);
  FUN_080220ec(0x40000000,4,1);
  FUN_0800aa04(&local_50);
  uVar1 = DAT_080034e4;
  local_50 = DAT_080034dc;
  local_4c = DAT_080034e0;
  local_48 = 0;
  local_44 = 0x1000;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0x100;
  local_34 = 0x400;
  local_30 = 0x20;
  local_2c = 0x2000;
  local_28 = 0;
  FUN_0800aa58(DAT_080034e4,&local_50);
  FUN_0800aa44(uVar1,6,1);
  FUN_0800a9b8(uVar1,1);
  FUN_080032dc(&local_24);
  local_24 = 0;
  local_20 = 0;
  local_1f = 0;
  local_1c = 0x60000;
  local_18 = 0;
  local_14 = 1;
  iVar3 = DAT_080034dc + -0x4c;
  FUN_080031f4(iVar3,&local_24);
  FUN_0800323c(iVar3,2,1,3);
  FUN_08003194(iVar3,1);
  FUN_080031ac(iVar3,1);
  FUN_0800317c(iVar3,1);
  FUN_080032b0(iVar3);
  do {
    iVar2 = FUN_080031e6(iVar3);
  } while (iVar2 != 0);
  FUN_08022102(0x40000000,0);
  return;
}

