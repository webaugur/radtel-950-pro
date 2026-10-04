/**
 * @brief fun_0800aeb8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800aeb8, Ghidra name FUN_0800aeb8, 78 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800aeb8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  iVar1 = param_1;
  local_20 = param_2;
  local_1c = param_3;
  if (param_2 != 0) {
    local_20 = 1;
    local_1c = 0x2965;
    iVar1 = FUN_080154a4(199,0xea,7,0x16);
  }
  uStack_18 = param_4;
  if (param_1 != 0xff) {
    local_20 = *(int *)(DAT_0800af08 + param_1 * 4);
    local_1c = 0x2965;
    uStack_18 = 0xffff;
    iVar1 = FUN_08027a94(7,0xc9,0x1f,0xf);
  }
  if (param_2 != 0) {
    FUN_08015500(iVar1,local_20,local_1c,uStack_18);
    return;
  }
  return;
}

