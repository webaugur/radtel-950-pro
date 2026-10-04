/**
 * @brief fun_0800282c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800282c, Ghidra name FUN_0800282c, 24 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Possible PIC construction at 0x0800017c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x08000180) */
/* WARNING: Removing unreachable block (ram,0x0800006e) */

void FUN_0800282c(uint param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  code *UNRECOVERED_JUMPTABLE;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  iVar1 = iRam080001b0;
  uVar2 = param_1 >> 0x1e;
  bVar5 = (int)param_1 >> 0xb < 0;
  while (!bVar5) {
    uVar2 = 0x3a7;
    bVar5 = false;
  }
  puVar4 = (undefined4 *)(iRam080001b0 + 0x80001b0);
  iVar3 = iRam080001b0 + 0x80001af;
  if (puVar4 == (undefined4 *)(iRam080001b4 + 0x80001b0)) {
    FUN_08000280(0x80001b0,param_2,uVar2 + 0xbb0);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(BYTE_ARRAY_080001bc + iVar1);
  if (((uint)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE = (code *)(iVar3 - (int)UNRECOVERED_JUMPTABLE);
  }
                    /* WARNING: Could not recover jumptable at 0x080001ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*puVar4,*(undefined4 *)(iVar1 + 0x80001b4),*(undefined4 *)(iVar1 + 0x80001b8));
  return;
}

