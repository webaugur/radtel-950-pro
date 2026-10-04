/**
 * @brief fun_08022f80
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08022f80, Ghidra name FUN_08022f80, 128 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08022f80(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_1c;
  undefined1 local_18;
  undefined1 local_17;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  FUN_0801a5dc(0x8000);
  FUN_0801a648(0x600,1);
  FUN_080032dc(&local_1c);
  uVar1 = DAT_08023000;
  local_1c = 0;
  local_18 = 0;
  local_17 = 0;
  local_14 = 0xe0000;
  local_10 = 0;
  local_c = 1;
  FUN_080031f4(DAT_08023000,&local_1c);
  FUN_0800323c(uVar1,1,2,7);
  FUN_0800317c(uVar1,1);
  FUN_080032b0(uVar1);
  do {
    iVar2 = FUN_080031e6(uVar1);
  } while (iVar2 != 0);
  FUN_080032d2(uVar1);
  do {
    iVar2 = FUN_080031c4(uVar1);
  } while (iVar2 != 0);
  FUN_080032ba(uVar1,1);
  return;
}

