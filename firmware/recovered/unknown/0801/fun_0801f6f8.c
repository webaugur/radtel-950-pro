/**
 * @brief fun_0801f6f8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801f6f8, Ghidra name FUN_0801f6f8, 206 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801f6f8(uint param_1,uint param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  FUN_080154a4(0,0xf0,0x107,0x120,1,0);
  if (param_1 < 2) {
    if (param_1 == 1) {
      cVar1 = FUN_08000850(&local_2c,s__d__0_1d_0801f7e4,param_2 / 10,param_2 % 10);
      if (cVar1 == '\r') {
        iVar2 = 0;
      }
      else {
        iVar2 = 6;
      }
      FUN_08014d88(0x107,iVar2 + 0x23,&local_2c,0x18,0,0xffff);
    }
    else {
      FUN_08000850(&local_2c,s_NONE_0801f7f8);
      FUN_08014d88(0x107,0x1d,&local_2c,0x18,0,0xffff);
    }
  }
  else if (param_3 == 1) {
    FUN_08000850(&local_2c,s_D_03oN_0801f7d4,param_2);
    FUN_08014d88(0x107,0x23,&local_2c,0x18,0,0xffff);
  }
  else {
    FUN_08000850(&local_2c,s__6X_0801f7c8,param_2);
    FUN_08014d88(0x107,0x1d,&local_2c,0x18,0,0xffff);
  }
  FUN_08015500();
  return;
}

