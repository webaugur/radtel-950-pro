/**
 * @brief fun_08025e84
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08025e84, Ghidra name FUN_08025e84, 154 bytes.
 *       Not linked into rt950-firmware.
 */

undefined8 FUN_08025e84(int param_1,int param_2)

{
  dword dVar1;
  ushort uVar2;
  uint uVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  for (uVar5 = 0;
      (uVar3 = FUN_08000ea6(param_1), uVar6 = 0, uVar5 < uVar3 &&
      (uVar6 = uVar5, *(char *)(param_1 + uVar5) != '-')); uVar5 = uVar5 + 1 & 0xffff) {
  }
  if (uVar6 == 0) {
    FUN_08001064(&local_20,param_1,6);
    if (param_2 == 0) {
      uVar4 = *(undefined1 *)(param_1 + 6);
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    FUN_08000ee4(&local_20,param_1,uVar6);
    uVar4 = *(undefined1 *)(param_1 + uVar6 + 1);
  }
  uVar2 = FUN_08000ea6(&local_20);
  dVar1 = DWORD_08025f20;
  if (uVar2 < 7) {
    FUN_08000bca(DWORD_08025f20,7,0x20);
    FUN_08000ee4(DWORD_08025f20,&local_20,uVar2);
  }
  else {
    *(undefined4 *)DWORD_08025f20 = local_20;
    *(undefined2 *)(dVar1 + 4) = (undefined2)local_1c;
    *(undefined1 *)(dVar1 + 6) = 0x20;
  }
  dVar1 = DWORD_08025f20;
  *(undefined1 *)(DWORD_08025f20 + 6) = uVar4;
  uVar5 = 0;
  do {
    *(char *)(dVar1 + uVar5) = *(char *)(dVar1 + uVar5) << 1;
    uVar5 = uVar5 + 1 & 0xffff;
  } while (uVar5 < 8);
  return CONCAT44(local_20,DWORD_08025f20);
}

