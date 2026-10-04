/**
 * @brief fun_0800b328
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800b328, Ghidra name FUN_0800b328, 252 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800b328(int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  short sVar4;
  char local_40 [16];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_40[0] = '\0';
  local_40[1] = '\0';
  local_40[2] = '\0';
  local_40[3] = '\0';
  local_40[4] = '\0';
  local_40[5] = '\0';
  local_40[6] = '\0';
  local_40[7] = '\0';
  local_40[8] = '\0';
  local_40[9] = '\0';
  local_40[10] = '\0';
  local_40[0xb] = '\0';
  local_40[0xc] = '\0';
  local_40[0xd] = '\0';
  local_40[0xe] = '\0';
  local_40[0xf] = '\0';
  if (param_2 == 0xffff) {
    FUN_08000850(&local_30,&DAT_0800b424);
  }
  else {
    FUN_08000850(&local_30,&DAT_0800b428,param_2 + 1);
  }
  uVar2 = FUN_08013e30(param_3);
  if ((param_3 == 0) || (param_1 == 1)) {
    sVar4 = 0x54;
  }
  else if (param_3 == 1) {
    sVar4 = 0xad;
  }
  else {
    sVar4 = 0x106;
  }
  FUN_08014c68(sVar4 + 2,0xca,&local_30,uVar2);
  if ((param_2 == 0xffff) || (*(char *)(DAT_0800b430 + 6) != '\0')) {
    FUN_08014114(sVar4 + -2,0x69,0x28,0x10,uVar2,0x14);
  }
  else {
    param_3 = param_3 + DAT_0800b430;
    FUN_08021824((uint)*(byte *)(param_3 + 0xd) * 0x10 + 0xc000,local_40,0xc);
    uVar3 = 0;
    do {
      cVar1 = local_40[uVar3];
      if ((cVar1 == -1) || (cVar1 == '\0')) break;
      *(char *)((int)&local_30 + uVar3) = cVar1;
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < 0xc);
    *(undefined1 *)((int)&local_30 + uVar3) = 0;
    if (uVar3 == 0) {
      if (*(char *)(DAT_0800b434 + 8) == '\0') {
        FUN_08000850(&local_30,s_Zone_d_0800b440,*(byte *)(param_3 + 0xd) + 1);
      }
      else {
        FUN_08000850(&local_30,&DAT_0800b438,*(byte *)(param_3 + 0xd) + 1);
      }
    }
    FUN_08022908(local_40,&local_30,0xc);
    FUN_08014134(sVar4 + -2,0x69,local_40,0x10,uVar2,0xffff,0x14);
  }
  return;
}

