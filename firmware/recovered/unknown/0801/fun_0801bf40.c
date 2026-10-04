/**
 * @brief fun_0801bf40
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801bf40, Ghidra name FUN_0801bf40, 218 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801bf40(void)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  undefined2 local_40 [14];
  undefined4 local_24;
  uint local_20;
  
  local_24 = DAT_0801c01c;
  local_20 = DAT_0801c020;
  FUN_08000f6e(local_40,DAT_0801c024,0x1c);
  iVar1 = DAT_0801c028;
  cVar3 = -0x38;
  (**(code **)(DAT_0801c028 + 8))(0x3f,0x8000);
  (**(code **)(iVar1 + 8))(0x59,41000);
  (**(code **)(iVar1 + 8))(0x59,0x2028);
  (**(code **)(iVar1 + 8))(0x5a,CONCAT11((undefined1)local_24,local_24._1_1_));
  (**(code **)(iVar1 + 8))(0x5b,local_24._3_1_);
  uVar4 = (local_20 & 0xff) << 8 | 0x30;
  (**(code **)(iVar1 + 8))(0x5c,uVar4);
  uVar2 = 0;
  do {
    (**(code **)(iVar1 + 8))(0x5f,local_40[uVar2]);
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 0xe);
  FUN_0800ad06(0x14);
  (**(code **)(iVar1 + 8))(0x59,0x2828);
  while ((cVar3 != '\0' && ((uVar4 & 1) == 0))) {
    FUN_0800ad06(5);
    uVar4 = (**(code **)(iVar1 + 4))(0xc);
    cVar3 = cVar3 + -1;
  }
  (**(code **)(iVar1 + 8))(2,0);
  (**(code **)(iVar1 + 8))(0x3f,0);
  (**(code **)(iVar1 + 8))(0x59,0x2028);
  return;
}

