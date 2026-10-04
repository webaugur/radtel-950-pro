/**
 * @brief fun_08027d40
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08027d40, Ghidra name FUN_08027d40, 214 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08027d40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  short sVar8;
  uint in_stack_000000a8;
  int in_stack_000000ac;
  char local_a94 [2656];
  undefined2 local_34;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uVar6 = 0;
  sVar8 = 0;
  local_10 = param_1;
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_08000fd2(in_stack_000000ac,0x150);
  uVar5 = (in_stack_000000a8 >> 0x10) - 1;
  for (uVar4 = 0; uVar4 < in_stack_000000a8 >> 0x10; uVar4 = uVar4 + 1 & 0xffff) {
    uVar3 = 0;
    bVar1 = *(byte *)((int)&local_10 + uVar4);
    do {
      if (((uint)bVar1 & 1 << (uVar3 & 0xff)) == 0) {
        if ((uVar4 != 0) && (uVar5 != uVar4)) {
          sVar8 = 0;
        }
        cVar2 = '\0';
      }
      else {
        if ((uVar4 != 0) && (uVar5 != uVar4)) {
          sVar8 = sVar8 + 1;
        }
        cVar2 = '\x01';
      }
      uVar7 = uVar6 + 1 & 0xffff;
      local_a94[uVar6] = cVar2;
      uVar6 = uVar7;
      if (sVar8 == 5) {
        sVar8 = 0;
        uVar6 = uVar7 + 1 & 0xffff;
        local_a94[uVar7] = '\0';
      }
      uVar3 = uVar3 + 1 & 0xffff;
    } while (uVar3 < 8);
  }
  local_34 = (short)uVar6;
  sVar8 = (short)(uVar6 >> 3);
  *(short *)(in_stack_000000ac + 0x14c) = sVar8;
  *(short *)(in_stack_000000ac + 0x14e) = (short)uVar6;
  if ((uVar6 & 7) != 0) {
    *(short *)(in_stack_000000ac + 0x14c) = sVar8 + 1;
  }
  uVar4 = 0;
  do {
    if (*(ushort *)(in_stack_000000ac + 0x14c) <= uVar4) {
      return;
    }
    uVar5 = 0;
    do {
      uVar3 = uVar5 + uVar4 * 8;
      if (uVar6 <= uVar3) break;
      *(byte *)(in_stack_000000ac + uVar4) =
           *(byte *)(in_stack_000000ac + uVar4) | local_a94[uVar3] << (uVar5 & 0xff);
      uVar5 = uVar5 + 1 & 0xffff;
    } while (uVar5 < 8);
    uVar4 = uVar4 + 1 & 0xffff;
  } while( true );
}

