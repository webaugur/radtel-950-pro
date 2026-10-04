/**
 * @brief fun_0801a0c0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801a0c0, Ghidra name FUN_0801a0c0, 112 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801a0c0(undefined1 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined1 local_54;
  char local_53;
  undefined1 local_52;
  undefined1 local_51;
  undefined1 local_50;
  undefined1 auStack_4f [59];
  
  FUN_08001016(&local_54,0x40);
  FUN_08001016(&local_54,0x40);
  local_54 = 0xa5;
  local_53 = (char)param_3 + '\x05';
  local_51 = 0;
  local_50 = (undefined1)param_2;
  local_52 = param_1;
  if (param_3 != 0) {
    FUN_08000ee4(auStack_4f,DAT_0801a130,param_3);
  }
  uVar2 = FUN_0800a878(&local_52,param_3 + 3);
  iVar1 = DAT_0801a130;
  auStack_4f[param_3] = (char)((ushort)uVar2 >> 8);
  auStack_4f[param_3 + 1] = (char)uVar2;
  *(char *)(DAT_0801a130 + -0x13) = *(char *)(DAT_0801a130 + -0x13) + '\x01';
  if (param_2 == 6) {
    *(undefined1 *)(iVar1 + -0x13) = 0;
  }
  FUN_08022dd6(&local_54,param_3 + 7);
  *(undefined2 *)(iVar1 + -0x10) = 0;
  return;
}

