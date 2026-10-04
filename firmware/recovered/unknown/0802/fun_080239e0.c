/**
 * @brief fun_080239e0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080239e0, Ghidra name FUN_080239e0, 170 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080239e0(void)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = DAT_08023a9c;
  iVar3 = DAT_08023a98;
  puVar2 = DAT_08023a94;
  iVar5 = DAT_08023a90;
  if (*(char *)(DAT_08023a90 + 1) == '\v') {
    switch(*DAT_08023a94) {
    case 1:
      iVar5 = FUN_0801a91c();
      if (iVar5 == 1) {
        if (*(byte *)(iVar4 + 2) < 3) {
          *(byte *)(iVar4 + 2) = *(byte *)(iVar4 + 2) + 1;
        }
        else {
          cVar1 = *(char *)(iVar3 + 10);
          if (cVar1 == '\0') {
            *puVar2 = 2;
            *(undefined2 *)(puVar2 + 2) = 0x32;
          }
          else if (cVar1 == '\x01') {
            *puVar2 = 3;
            *(undefined2 *)(puVar2 + 2) = 0x32;
          }
          else if (cVar1 == '\x02') {
            *puVar2 = 5;
            *(undefined2 *)(puVar2 + 2) = 10;
          }
        }
      }
      else {
        FUN_08023964();
        *(undefined1 *)(iVar4 + 2) = 0;
      }
      break;
    case 2:
      if ((*(char *)(DAT_08023a98 + 10) == '\x01') && (iVar5 = FUN_0801a91c(), iVar5 == 1)) {
        *(undefined2 *)(puVar2 + 2) = 0x32;
      }
      FUN_08023964();
      *(undefined1 *)(iVar4 + 2) = 0;
      break;
    case 3:
      iVar5 = FUN_0801a91c();
      if (iVar5 == 0) {
        if (*(short *)(puVar2 + 2) == 0) {
          *puVar2 = 4;
        }
      }
      else {
        *(undefined2 *)(puVar2 + 2) = 0x32;
      }
      break;
    case 4:
      FUN_08023964();
      *(undefined1 *)(iVar4 + 2) = 0;
      break;
    case 5:
      *DAT_08023a94 = 0;
      *(undefined2 *)(puVar2 + 2) = 0;
      *(undefined1 *)(iVar5 + 0x14) = 0;
      *(undefined1 *)(iVar4 + 2) = 0;
    }
  }
  return;
}

