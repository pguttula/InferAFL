/* Automatically generated.  Do not edit */
/* See the mkopcodeh.awk script for details */
#define OP_VCreate                              1
#define OP_MemMax                               2
#define OP_LoadAnalysis                         3
#define OP_RowData                              4
#define OP_CreateIndex                          5
#define OP_Variable                             6
#define OP_SeekGt                               7
#define OP_SeekLe                               8
#define OP_IfNeg                                9
#define OP_Clear                               10
#define OP_Last                                11
#define OP_Add                                 81   /* same as TK_PLUS     */
#define OP_Savepoint                           12
#define OP_Sequence                            13
#define OP_Int64                               14
#define OP_VBegin                              15
#define OP_RowKey                              16
#define OP_Divide                              84   /* same as TK_SLASH    */
#define OP_SCopy                               17
#define OP_ResetCount                          18
#define OP_Delete                              20
#define OP_Trace                               21
#define OP_Rowid                               22
#define OP_OpenRead                            23
#define OP_Sort                                24
#define OP_VerifyCookie                        25
#define OP_VColumn                             26
#define OP_Next                                27
#define OP_Insert                              28
#define OP_Prev                                29
#define OP_IdxGE                               30
#define OP_Not                                 19   /* same as TK_NOT      */
#define OP_Ge                                  75   /* same as TK_GE       */
#define OP_VRename                             31
#define OP_DropTable                           32
#define OP_MakeRecord                          33
#define OP_Null                                34
#define OP_IdxInsert                           35
#define OP_SeekLt                              36
#define OP_ReadCookie                          37
#define OP_VDestroy                            38
#define OP_DropIndex                           39
#define OP_IsNull                              68   /* same as TK_ISNULL   */
#define OP_MustBeInt                           40
#define OP_IntegrityCk                         41
#define OP_CollSeq                             42
#define OP_ResultRow                           43
#define OP_Yield                               44
#define OP_OpenEphemeral                       45
#define OP_VNext                               46
#define OP_Seek                                47
#define OP_Eq                                  71   /* same as TK_EQ       */
#define OP_String8                             91   /* same as TK_STRING   */
#define OP_Found                               48
#define OP_If                                  49
#define OP_ToBlob                             142   /* same as TK_TO_BLOB  */
#define OP_Multiply                            83   /* same as TK_STAR     */
#define OP_IfZero                              50
#define OP_ShiftRight                          80   /* same as TK_RSHIFT   */
#define OP_Goto                                51
#define OP_Function                            52
#define OP_Copy                                53
#define OP_Jump                                54
#define OP_Blob                                55
#define OP_BitNot                              90   /* same as TK_BITNOT   */
#define OP_Gt                                  72   /* same as TK_GT       */
#define OP_Le                                  73   /* same as TK_LE       */
#define OP_NullRow                             56
#define OP_Transaction                         57
#define OP_VUpdate                             58
#define OP_TableLock                           59
#define OP_IdxRowid                            60
#define OP_SetCookie                           61
#define OP_And                                 64   /* same as TK_AND      */
#define OP_ToNumeric                          143   /* same as TK_TO_NUMERIC*/
#define OP_ToText                             141   /* same as TK_TO_TEXT  */
#define OP_ContextPush                         62
#define OP_DropTrigger                         65
#define OP_AutoCommit                          66
#define OP_Column                              67
#define OP_AddImm                              76
#define OP_Remainder                           85   /* same as TK_REM      */
#define OP_ContextPop                          87
#define OP_IdxDelete                           88
#define OP_Ne                                  70   /* same as TK_NE       */
#define OP_ToInt                              144   /* same as TK_TO_INT   */
#define OP_IncrVacuum                          89
#define OP_AggFinal                            92
#define OP_RealAffinity                        93
#define OP_Concat                              86   /* same as TK_CONCAT   */
#define OP_Return                              94
#define OP_Expire                              95
#define OP_Rewind                              96
#define OP_Statement                           97
#define OP_BitOr                               78   /* same as TK_BITOR    */
#define OP_Integer                             98
#define OP_Compare                             99
#define OP_Destroy                            100
#define OP_IdxLT                              101
#define OP_Affinity                           102
#define OP_Lt                                  74   /* same as TK_LT       */
#define OP_Subtract                            82   /* same as TK_MINUS    */
#define OP_Vacuum                             103
#define OP_IfNot                              104
#define OP_Move                               105
#define OP_Explain                            106
#define OP_ParseSchema                        107
#define OP_NewRowid                           108
#define OP_SetNumColumns                      109
#define OP_BitAnd                              77   /* same as TK_BITAND   */
#define OP_String                             110
#define OP_AggStep                            111
#define OP_VRowid                             112
#define OP_VOpen                              113
#define OP_NotExists                          114
#define OP_Close                              115
#define OP_Halt                               116
#define OP_Noop                               117
#define OP_SeekGe                             118
#define OP_VFilter                            119
#define OP_OpenPseudo                         120
#define OP_Or                                  63   /* same as TK_OR       */
#define OP_ShiftLeft                           79   /* same as TK_LSHIFT   */
#define OP_ToReal                             145   /* same as TK_TO_REAL  */
#define OP_RowSetRead                         121
#define OP_RowSetAdd                          122
#define OP_IsUnique                           123
#define OP_OpenWrite                          124
#define OP_Permutation                        125
#define OP_Gosub                              126
#define OP_IfPos                              127
#define OP_Real                               129   /* same as TK_FLOAT    */
#define OP_NotNull                             69   /* same as TK_NOTNULL  */
#define OP_Pagecount                          128
#define OP_NotFound                           130
#define OP_CreateTable                        131

/* The following opcode values are never used */
#define OP_NotUsed_132                        132
#define OP_NotUsed_133                        133
#define OP_NotUsed_134                        134
#define OP_NotUsed_135                        135
#define OP_NotUsed_136                        136
#define OP_NotUsed_137                        137
#define OP_NotUsed_138                        138
#define OP_NotUsed_139                        139
#define OP_NotUsed_140                        140


/* Properties such as "out2" or "jump" that are specified in
** comments following the "case" for each opcode in the vdbe.c
** are encoded into bitvectors as follows:
*/
#define OPFLG_JUMP            0x0001  /* jump:  P2 holds jmp target */
#define OPFLG_OUT2_PRERELEASE 0x0002  /* out2-prerelease: */
#define OPFLG_IN1             0x0004  /* in1:   P1 is an input */
#define OPFLG_IN2             0x0008  /* in2:   P2 is an input */
#define OPFLG_IN3             0x0010  /* in3:   P3 is an input */
#define OPFLG_OUT3            0x0020  /* out3:  P3 is an output */
#define OPFLG_INITIALIZER {\
/*   0 */ 0x00, 0x00, 0x0c, 0x00, 0x00, 0x02, 0x02, 0x11,\
/*   8 */ 0x11, 0x05, 0x00, 0x01, 0x00, 0x02, 0x02, 0x00,\
/*  16 */ 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x02, 0x00,\
/*  24 */ 0x01, 0x00, 0x00, 0x01, 0x00, 0x01, 0x11, 0x00,\
/*  32 */ 0x00, 0x00, 0x02, 0x08, 0x11, 0x02, 0x00, 0x00,\
/*  40 */ 0x05, 0x00, 0x00, 0x00, 0x04, 0x00, 0x01, 0x08,\
/*  48 */ 0x11, 0x05, 0x05, 0x01, 0x00, 0x04, 0x01, 0x02,\
/*  56 */ 0x00, 0x00, 0x00, 0x00, 0x02, 0x10, 0x00, 0x2c,\
/*  64 */ 0x2c, 0x00, 0x00, 0x00, 0x05, 0x05, 0x15, 0x15,\
/*  72 */ 0x15, 0x15, 0x15, 0x15, 0x04, 0x2c, 0x2c, 0x2c,\
/*  80 */ 0x2c, 0x2c, 0x2c, 0x2c, 0x2c, 0x2c, 0x2c, 0x00,\
/*  88 */ 0x00, 0x01, 0x04, 0x02, 0x00, 0x04, 0x04, 0x00,\
/*  96 */ 0x01, 0x00, 0x02, 0x00, 0x02, 0x11, 0x00, 0x00,\
/* 104 */ 0x05, 0x00, 0x00, 0x00, 0x02, 0x00, 0x02, 0x00,\
/* 112 */ 0x02, 0x00, 0x11, 0x00, 0x00, 0x00, 0x11, 0x01,\
/* 120 */ 0x00, 0x21, 0x08, 0x11, 0x00, 0x00, 0x01, 0x05,\
/* 128 */ 0x02, 0x02, 0x11, 0x02, 0x00, 0x00, 0x00, 0x00,\
/* 136 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04,\
/* 144 */ 0x04, 0x04,}
