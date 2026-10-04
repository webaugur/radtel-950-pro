/**
 * @brief fun_08006d54
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08006d54, Ghidra name FUN_08006d54, 372 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08006d54(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_20 [8];
  
  iVar3 = FUN_08013560();
  iVar4 = DAT_08006e24;
  if (iVar3 == 8) {
    cVar1 = *(char *)(DAT_08006e24 + 0x4a);
    if (cVar1 == -0x5b) {
      *(undefined1 *)(DAT_08006e24 + 0x4a) = 0;
    }
    else {
      *(undefined1 *)(DAT_08006e24 + 0x4a) = 0xa5;
    }
    if (*(char *)(iVar4 + 0x4a) != cVar1) {
      FUN_0800f5fc();
    }
    FUN_08010520();
  }
  if (*(char *)(iVar4 + 0x4a) == -0x5b) {
    FUN_0800ad60();
  }
  uVar2 = DAT_08006e28;
  iVar3 = FUN_08012ace(DAT_08006e28,8);
  if ((iVar3 == 0) && (iVar3 = FUN_08013560(), iVar3 == 0xb)) {
    if (*(char *)(iVar4 + 0x49) != -0x5b) {
      *(undefined1 *)(iVar4 + 0x49) = 0xa5;
      FUN_08010520();
    }
    iVar4 = 0xa5;
  }
  else {
    iVar3 = FUN_08012ace(uVar2,8);
    if ((iVar3 == 0) && (iVar3 = FUN_08013560(), iVar3 == 0x13)) {
      if (*(char *)(iVar4 + 0x49) != 'V') {
        *(undefined1 *)(iVar4 + 0x49) = 0x56;
        FUN_08010520();
      }
      iVar4 = 0x56;
    }
    else {
      iVar3 = FUN_08012ace(uVar2,8);
      if ((iVar3 != 0) || (iVar3 = FUN_08013560(), iVar3 != 6)) {
        return;
      }
      if (*(char *)(iVar4 + 0x49) != '\0') {
        *(undefined1 *)(iVar4 + 0x49) = 0;
        FUN_08010520();
      }
      iVar4 = 0;
    }
  }
  FUN_08000f6e(auStack_20,DAT_0800ae8c,0x20);
  FUN_0800a1c4(0);
  FUN_080154a4(0,0xf0,0x4f,0x6d,1,0);
  if (iVar4 == 0xa5) {
    FUN_08000850(auStack_20,s_144_146_430_440_0800ae98);
    FUN_08014d88(0x4f,0x18,auStack_20,0x18,0,0xffff);
  }
  else if (iVar4 == 0x56) {
    FUN_08000850(auStack_20,s_Super_Mode_0800aea8);
    FUN_08014d88(0x4f,0x34,auStack_20,0x18,0,0xffff);
  }
  else {
    FUN_08014d88(0x4f,0x46,auStack_20,0x18,0,0xffff);
  }
  FUN_08015500();
  FUN_080151cc(1);
  FUN_08025f44(2000);
  DataSynchronizationBarrier(0xf);
  *DAT_0800ae90 = *DAT_0800ae90 & 0x700 | DAT_0800ae94;
  DataSynchronizationBarrier(0xf);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

