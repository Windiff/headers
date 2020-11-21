typedef enum _TAG_UNNAMED_129
{
  KTMOH_CommitTransaction_Result = 1,
  KTMOH_RollbackTransaction_Result = 2,
} TAG_UNNAMED_129, *PTAG_UNNAMED_129;

typedef struct _KTRANSACTION_HISTORY
{
  /* 0x0000 */ enum _TAG_UNNAMED_129 RecordType;
  /* 0x0004 */ unsigned long Payload;
} KTRANSACTION_HISTORY, *PKTRANSACTION_HISTORY; /* size: 0x0008 */

