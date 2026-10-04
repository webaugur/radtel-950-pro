/**
 * @brief fun_0801a3ac
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801a3ac, Ghidra name FUN_0801a3ac, 204 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801a3ac(uint param_1,uint param_2,int param_3)

{
  char cVar1;
  short sVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  FUN_080154a4(0,0xf0,0xfa,0x113,1,0);
  if (param_1 < 2) {
    if (param_1 == 1) {
      cVar1 = FUN_08000850(&local_28,s__d__0_1d_0801a48c,param_2 / 10,param_2 % 10);
      if (cVar1 == '\v') {
        sVar2 = 6;
      }
      else {
        sVar2 = 0;
      }
      FUN_08014d88(0xfa,0x37 - sVar2,&local_28,0x18,0,0xffff);
    }
    else {
      FUN_08000850(&local_28,s_NONE_0801a49c);
      FUN_08014d88(0xfa,0x37,&local_28,0x18,0,0xffff);
    }
  }
  else if (param_3 == 1) {
    FUN_08000850(&local_28,s_D_03oN_0801a480,param_2);
    FUN_08014d88(0xfa,0x3d,&local_28,0x18,0,0xffff);
  }
  else {
    FUN_08000850(&local_28,s__6X_0801a478,param_2);
    FUN_08014d88(0xfa,0x37,&local_28,0x18,0,0xffff);
  }
  FUN_08015500();
  return;
}

