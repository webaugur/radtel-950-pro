/**
 * @brief fun_0800cb78
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800cb78, Ghidra name FUN_0800cb78, 750 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800cb78(uint param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar4 = FUN_08013e30(param_1);
  pcVar1 = DAT_0800ce68;
  if (DAT_0800ce68[0x51] == '\0') {
    if ((param_2 == 0) && (param_1 != 0)) {
      if (param_1 == 1) {
        iVar5 = 0x59;
      }
      else {
        iVar5 = 0xb2;
      }
    }
    else {
      iVar5 = 0;
    }
  }
  else if ((param_2 == 0) && (param_1 != 0)) {
    if (param_1 == 1) {
      iVar5 = 0x5a;
    }
    else {
      iVar5 = 0xb4;
    }
  }
  else {
    iVar5 = 0;
  }
  local_30 = 1;
  FUN_080154a4(0,0xf0,iVar5 + 0x1c,iVar5 + 0x31);
  FUN_0800d088(param_1,param_2,0);
  iVar6 = DAT_0800ce6c + param_1 * 0x58;
  if (*(char *)(iVar6 + 0x131) != '\0') {
    if (iVar4 == 0x105) {
      local_30 = DAT_0800ce70;
      FUN_08027b14(iVar5 + 0x21,0x4e,9,0xb);
    }
    else {
      local_30 = DAT_0800ce74;
      FUN_08027b14(iVar5 + 0x21,0x4e,9,0xb);
    }
  }
  if (*(char *)(iVar6 + 0x134) != '\0') {
    if (iVar4 == 0x105) {
      local_30 = DAT_0800ce78;
      FUN_08027b14(iVar5 + 0x21,0xb6,0x1b,0xb);
    }
    else {
      local_30 = DAT_0800ce7c;
      FUN_08027b14(iVar5 + 0x21,0xb6,0x1b,0xb);
    }
  }
  if (*(char *)(iVar6 + 0x138) == '\x01') {
    local_28 = 0xffff;
    local_24 = 5;
    local_30 = DAT_0800ce80;
    FUN_08014120(iVar5 + 0x21,99,10);
  }
  else {
    local_28 = param_3;
    local_24 = param_4;
    if (*(char *)(iVar6 + 0x138) == '\x02') {
      local_28 = 0xffff;
      local_24 = 5;
      local_30 = DAT_0800ce84;
      FUN_08014120(iVar5 + 0x21,99,10);
    }
  }
  if (*(char *)(iVar6 + 0x140) == '\x01') {
    if (iVar4 == 0x105) {
      local_30 = DAT_0800ce88;
      FUN_08027b14(iVar5 + 0x21,0x75,9,0xb);
    }
    else {
      local_30 = DAT_0800ce8c;
      FUN_08027b14(iVar5 + 0x21,0x75,9,0xb);
    }
  }
  else if (*(char *)(iVar6 + 0x140) == '\x02') {
    if (iVar4 == 0x105) {
      local_30 = DAT_0800ce90;
      FUN_08027b14(iVar5 + 0x21,0x75,10,0xb);
    }
    else {
      local_30 = DAT_0800ce94;
      FUN_08027b14(iVar5 + 0x21,0x75,10,0xb);
    }
  }
  pcVar2 = DAT_0800cea8;
  local_2c = iVar4;
  if ((uint)(**(int **)(iVar6 + 0x128) + DAT_0800ce98) < DAT_0800ce9c) {
    if (iVar4 == 0x105) {
      local_30 = DAT_0800cea0;
      FUN_08027b14(iVar5 + 0x21,0x99,0x13,0xb);
    }
    else {
      local_30 = DAT_0800cea4;
      FUN_08027b14(iVar5 + 0x21,0x99,0x13,0xb);
    }
  }
  else if (*(char *)(iVar6 + 0x148) == '\x01') {
    if (iVar4 == 0x105) {
      local_30 = DAT_0800cea0;
      FUN_08027b14(iVar5 + 0x21,0x99,0x13,0xb);
    }
    else {
      local_30 = DAT_0800cea4;
      FUN_08027b14(iVar5 + 0x21,0x99,0x13,0xb);
    }
  }
  else {
    if (*pcVar1 == '\0') {
      if ((*DAT_0800cea8 == '\0') || ((byte)DAT_0800cea8[0x1c] != param_1)) {
        cVar3 = (char)(*(int **)(iVar6 + 0x128))[1];
      }
      else {
        cVar3 = '\0';
      }
    }
    else {
      cVar3 = *(char *)(*(int *)(iVar6 + 300) + 4);
    }
    if (cVar3 != '\0') {
      if (cVar3 == '\x01') {
        if (iVar4 == 0x105) {
          local_30 = DAT_0800ceb0;
          FUN_08027b14(iVar5 + 0x21,0x18,0x14,0xb);
        }
        else {
          local_30 = DAT_0800ceb4;
          FUN_08027b14(iVar5 + 0x21,0x18,0x14,0xb);
        }
      }
      else if (iVar4 == 0x105) {
        local_30 = DAT_0800ceac;
        FUN_08027b14(iVar5 + 0x21,0x18,0x1b,0xb);
      }
      else {
        local_30 = DAT_0800ceb8;
        FUN_08027b14(iVar5 + 0x21,0x18,0x1b,0xb);
      }
    }
    if (*(char *)(iVar6 + 0x133) != '\0') {
      if (iVar4 == 0x105) {
        local_30 = DAT_0800cebc;
        FUN_08027b14(iVar5 + 0x21,0x87,10,0xb);
      }
      else {
        local_30 = DAT_0800cec0;
        FUN_08027b14(iVar5 + 0x21,0x87,10,0xb);
      }
    }
    if ((*pcVar2 == '\x01') && ((byte)pcVar2[0x1c] == param_1)) {
      local_2c = 0xffe0;
      local_28 = 0;
      FUN_08014f44(iVar5 + 0x21,0xd2,&DAT_0800cec4,0xc);
      local_30 = iVar4;
      if (pcVar2[0x1f] != '\0') {
        local_30 = DAT_0800cecc;
        local_28 = 0xe0a3;
        FUN_08027a94(iVar5 + 0x21,7,0xd,0xb);
        local_2c = iVar4;
      }
    }
  }
  FUN_08015500(local_30,local_2c,local_28,local_24);
  return;
}

