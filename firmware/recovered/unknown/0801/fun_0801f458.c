/**
 * @brief fun_0801f458
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801f458, Ghidra name FUN_0801f458, 238 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801f458(void)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  
  pbVar5 = DAT_0801f55c;
  iVar4 = DAT_0801f558;
  iVar3 = DAT_0801f554;
  puVar2 = DAT_0801f550;
  iVar6 = DAT_0801f54c;
  if (*(char *)(DAT_0801f54c + 1) == '\x03') {
    switch(*DAT_0801f550) {
    case 1:
      iVar6 = FUN_0801f188(**(undefined4 **)(DAT_0801f554 + 0x18));
      if (iVar6 == 0) {
        iVar6 = FUN_0801a91c();
        if (iVar6 == 1) {
          if (*pbVar5 < 3) {
            *pbVar5 = *pbVar5 + 1;
          }
          else {
            cVar1 = *(char *)(iVar4 + 10);
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
          FUN_0801f2f8();
          *pbVar5 = 0;
        }
      }
      else {
        *(undefined2 *)(puVar2 + 2) = 0;
        FUN_0801f2f8();
        *pbVar5 = 0;
      }
      break;
    case 2:
      if ((*(char *)(DAT_0801f558 + 10) == '\x01') && (iVar6 = FUN_0801a91c(), iVar6 == 1)) {
        *(undefined2 *)(puVar2 + 2) = 0x14;
      }
      FUN_0801f2f8();
      *pbVar5 = 0;
      break;
    case 3:
      iVar6 = FUN_0801a91c();
      if (iVar6 == 0) {
        if (*(short *)(puVar2 + 2) == 0) {
          *puVar2 = 4;
        }
      }
      else {
        *(undefined2 *)(puVar2 + 2) = 0x32;
        iVar6 = FUN_0801f188(**(undefined4 **)(iVar3 + 0x18));
        if (iVar6 != 0) {
          *(undefined2 *)(puVar2 + 2) = 0;
          FUN_0801f2f8();
          *pbVar5 = 0;
        }
      }
      break;
    case 4:
      FUN_0801f2f8();
      *pbVar5 = 0;
      break;
    case 5:
      *DAT_0801f550 = 0;
      *(undefined2 *)(puVar2 + 2) = 0;
      *(undefined1 *)(iVar6 + 1) = 0;
      *(undefined1 *)(iVar6 + 0x14) = 0;
      FUN_08008488(0,1);
      *pbVar5 = 0;
      FUN_0800cfc0();
      return;
    }
  }
  return;
}

