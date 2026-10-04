/**
 * @brief fun_08014854
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08014854, Ghidra name FUN_08014854, 258 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08014854(int param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined2 local_21c;
  undefined1 local_21a;
  undefined1 local_219;
  char local_218 [512];
  
  FUN_08001016(local_218,0x200);
  if (param_2 < 0x1f5) {
    local_218[0] = -0x40;
    local_218[1] = 0;
    uVar4 = 2;
    for (uVar5 = 0; uVar5 < param_2; uVar5 = uVar5 + 1 & 0xffff) {
      cVar1 = *(char *)(param_1 + uVar5);
      if (cVar1 == -0x40) {
        uVar6 = uVar4 + 1 & 0xffff;
        local_218[uVar4] = -0x25;
        uVar3 = uVar6 + 1 & 0xffff;
        local_218[uVar6] = -0x24;
      }
      else if (cVar1 == -0x25) {
        uVar6 = uVar4 + 1 & 0xffff;
        local_218[uVar4] = -0x25;
        uVar3 = uVar6 + 1 & 0xffff;
        local_218[uVar6] = -0x23;
      }
      else {
        uVar3 = uVar4 + 1 & 0xffff;
        local_218[uVar4] = cVar1;
      }
      uVar4 = uVar3;
    }
    uVar5 = uVar4 + 1 & 0xffff;
    local_218[uVar4] = -0x40;
    if (*(char *)(DAT_08014958 + 0x27) == '\x01') {
      if (*(char *)(DAT_08014960 + 0x1d) == '\x01') {
        FUN_08021b10(0x2580);
        FUN_08025e58(local_218,uVar5);
        FUN_08021b10(0x1c200);
      }
    }
    else {
      FUN_08012aea(&local_21c);
      uVar2 = DAT_0801495c;
      local_21c = 0x400;
      local_21a = 2;
      local_219 = 0x18;
      FUN_080125d4(DAT_0801495c,&local_21c);
      FUN_0800ad06(2);
      FUN_08022dd6(local_218,uVar5);
      FUN_08012aea(&local_21c);
      local_21c = 0x400;
      local_21a = 2;
      local_219 = 0x10;
      FUN_080125d4(uVar2,&local_21c);
    }
  }
  return;
}

