/**
 * @brief fun_0800db1c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800db1c, Ghidra name FUN_0800db1c, 318 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800db1c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte *pbVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  undefined4 local_28;
  undefined4 local_24;
  
  pbVar1 = DAT_0800dc60;
  if (*DAT_0800dc5c != '\x01') {
    bVar3 = DAT_0800dc60[4];
    local_28 = param_3;
    local_24 = param_4;
    if ((bVar3 != 0) && (DAT_0800dc60[4] = bVar3 - 1, bVar3 == 1)) {
      if (pbVar1[6] == 0) {
        FUN_0800dc68();
        pbVar1[5] = 0;
      }
      else {
        if (pbVar1[6] == 1) {
          local_24 = 0x13;
        }
        else {
          local_24 = 0x15;
        }
        local_28 = 0;
        pbVar1[6] = 0;
        FUN_08023aa0(&local_28);
      }
    }
    uVar2 = DAT_0800dc64;
    bVar3 = pbVar1[5];
    if (bVar3 == 0) {
      uVar4 = FUN_08012ace(DAT_0800dc64,0x10);
      if (uVar4 == *pbVar1) {
        uVar4 = FUN_08012ace(uVar2,0x20);
        if (uVar4 == pbVar1[1]) {
          pbVar1[5] = 0;
        }
        else {
          bVar3 = FUN_08012ace(uVar2,0x20);
          pbVar1[1] = bVar3;
          pbVar1[5] = 2;
        }
      }
      else {
        bVar3 = FUN_08012ace(uVar2,0x10);
        *pbVar1 = bVar3;
        pbVar1[5] = 1;
      }
    }
    else {
      if (bVar3 == 1) {
        uVar4 = FUN_08012ace(DAT_0800dc64,0x10);
        if (uVar4 != *pbVar1) {
          FUN_0800dc68();
          pbVar1[5] = 0;
          return;
        }
        uVar4 = FUN_08012ace(uVar2,0x20);
        if ((uVar4 == pbVar1[1]) && ((uint)*pbVar1 != (uint)pbVar1[1])) {
          return;
        }
        FUN_0800dc68();
        pbVar1[5] = 0;
        if (pbVar1[4] == 0) {
          if (pbVar1[6] == 0) {
            pbVar1[6] = 1;
          }
        }
        else {
          local_28 = 0x20;
          local_24 = 0x14;
          FUN_08023aa0(&local_28);
        }
      }
      else {
        if (bVar3 != 2) {
          return;
        }
        uVar4 = FUN_08012ace(DAT_0800dc64,0x20);
        if (uVar4 != pbVar1[1]) {
          FUN_0800dc68();
          pbVar1[5] = 0;
          return;
        }
        uVar4 = FUN_08012ace(uVar2,0x10);
        if ((uVar4 == *pbVar1) && ((uint)*pbVar1 != (uint)pbVar1[1])) {
          return;
        }
        pbVar1[5] = 0;
        FUN_0800dc68();
        if (pbVar1[4] == 0) {
          if (pbVar1[6] == 0) {
            pbVar1[6] = 2;
          }
        }
        else {
          local_28 = 0x20;
          local_24 = 0x16;
          FUN_08023aa0(&local_28);
        }
      }
      pbVar1[4] = 200;
      FUN_08014964();
      FUN_0801b3fc();
    }
  }
  return;
}

