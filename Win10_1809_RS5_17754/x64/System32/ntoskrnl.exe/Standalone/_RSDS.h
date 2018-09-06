typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _RSDS
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0004 */ struct _GUID Guid;
  /* 0x0014 */ unsigned long Age;
  /* 0x0018 */ char PdbName[1];
  /* 0x0019 */ char __PADDING__[3];
} RSDS, *PRSDS; /* size: 0x001c */
