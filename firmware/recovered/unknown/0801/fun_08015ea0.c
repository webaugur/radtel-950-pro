/**
 * @brief fun_08015ea0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08015ea0, Ghidra name FUN_08015ea0, 168 bytes.
 *       Not linked into rt950-firmware.
 */

undefined8 FUN_08015ea0(int param_1,uint param_2,char *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = DAT_08015f48;
  iVar4 = 0;
  iVar5 = 0;
  iVar2 = DAT_08015f48 + param_1 * 0x48;
  FUN_08001016(iVar2 + 8,0x40);
  if (param_4 == 1) {
    if (*param_3 != '\x02') {
      *(undefined1 *)(iVar2 + 8) = 2;
      *(undefined1 *)(iVar2 + 9) = 0x11;
      *(undefined1 *)(iVar2 + 10) = 0x20;
      iVar4 = 3;
    }
  }
  else if (param_4 == 2) {
    if (*param_3 != '\x02') {
      *(undefined1 *)(iVar2 + 8) = 2;
      *(undefined1 *)(iVar2 + 9) = 0x10;
      *(undefined1 *)(iVar2 + 10) = 0x20;
      iVar4 = 3;
    }
  }
  else if (*param_3 == '\a') {
    if (param_2 < 10) {
      *(char *)(iVar2 + 8) = (char)param_2 + '0';
      iVar4 = 1;
    }
    else {
      *(char *)(iVar2 + 8) = (char)(param_2 / 10) + '0';
      *(char *)(iVar2 + 9) = (char)param_2 + (char)(param_2 / 10) * -10 + '0';
      iVar4 = 2;
    }
    iVar5 = 1;
  }
  FUN_08001064(iVar2 + iVar4 + 8,param_3 + iVar5,0x40 - iVar4);
  uVar3 = FUN_08000ea6(iVar2 + 8);
  *(undefined4 *)(iVar1 + param_1 * 0x48) = uVar3;
  *(undefined4 *)(iVar2 + 4) = 0;
  return CONCAT44(param_2,param_1);
}

