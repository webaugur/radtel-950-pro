/**
 * @brief fun_0800f228
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800f228, Ghidra name FUN_0800f228, 104 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0800f228(char *param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  char local_18 [16];
  
  local_18[0] = '\0';
  local_18[1] = '\0';
  local_18[2] = '\0';
  local_18[3] = '\0';
  local_18[4] = '\0';
  local_18[5] = '\0';
  local_18[6] = '\0';
  local_18[7] = '\0';
  local_18[8] = '\0';
  local_18[9] = '\0';
  local_18[10] = '\0';
  local_18[0xb] = '\0';
  local_18[0xc] = '\0';
  local_18[0xd] = '\0';
  local_18[0xe] = '\0';
  local_18[0xf] = '\0';
  if ((*param_1 == -1) || (*param_1 == '\0')) {
    if (*(char *)(_DAT_0800f290 + 8) == '\x01') {
      FUN_08000850(local_18,&DAT_0800f2a0);
    }
    else {
      FUN_08000850(local_18,s_Unnamed_CH_0800f293 + 1);
    }
  }
  else {
    uVar2 = 0;
    do {
      cVar1 = param_1[uVar2];
      if ((cVar1 == -1) || (cVar1 == '\0')) break;
      local_18[uVar2] = cVar1;
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0xc);
  }
  FUN_08000bca(param_2,0xc,0x20);
  uVar3 = FUN_08000ea6(local_18);
  FUN_08000ee4(param_2,local_18,uVar3);
  return 1;
}

