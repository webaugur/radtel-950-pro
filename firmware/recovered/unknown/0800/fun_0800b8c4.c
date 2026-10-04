/**
 * @brief fun_0800b8c4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800b8c4, Ghidra name FUN_0800b8c4, 164 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800b8c4(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  undefined1 auStack_24 [20];
  
  iVar2 = DAT_0800b96c;
  iVar1 = DAT_0800b968;
  if (((*(char *)(DAT_0800b968 + 1) != '\0') && (*(char *)(DAT_0800b96c + 0x21) != '\0')) &&
     (iVar6 = FUN_08000e06(DAT_0800b970,DAT_0800b96c + 0x1b,6), puVar3 = DAT_0800b970, iVar6 != 0))
  {
    *DAT_0800b970 = *(undefined4 *)(iVar2 + 0x1b);
    *(undefined2 *)(puVar3 + 1) = *(undefined2 *)(iVar2 + 0x1f);
    FUN_080154a4(0x18,0x40,0,0x18,1,0x2965);
    puVar3 = DAT_0800b970;
    cVar4 = FUN_08006278(*(undefined1 *)((int)DAT_0800b970 + 3),*(undefined1 *)(iVar1 + 6));
    *(char *)((int)puVar3 + 3) = cVar4;
    if (*(char *)(iVar1 + 0x4d) == '\x01') {
      bVar5 = *(char *)(puVar3 + 1) + 0x1e;
      *(byte *)(puVar3 + 1) = bVar5;
      if (0x3b < bVar5) {
        *(byte *)(puVar3 + 1) = bVar5 % 0x3c;
        *(char *)((int)puVar3 + 3) = cVar4 + '\x01';
      }
    }
    FUN_08000850(auStack_24,s__02d__02d_0800b974,*(undefined1 *)((int)puVar3 + 3),
                 *(undefined1 *)(puVar3 + 1));
    FUN_08014d88(8,0x18,auStack_24,0x10,0x2965,0xffff);
    FUN_08015500();
  }
  return;
}

