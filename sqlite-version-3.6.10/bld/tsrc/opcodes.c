/* Automatically generated.  Do not edit */
/* See the mkopcodec.awk script for details. */
#if !defined(SQLITE_OMIT_EXPLAIN) || !defined(NDEBUG) || defined(VDBE_PROFILE) || defined(SQLITE_DEBUG)
const char *sqlite3OpcodeName(int i){
 static const char *const azName[] = { "?",
     /*   1 */ "VCreate",
     /*   2 */ "MemMax",
     /*   3 */ "LoadAnalysis",
     /*   4 */ "RowData",
     /*   5 */ "CreateIndex",
     /*   6 */ "Variable",
     /*   7 */ "SeekGt",
     /*   8 */ "SeekLe",
     /*   9 */ "IfNeg",
     /*  10 */ "Clear",
     /*  11 */ "Last",
     /*  12 */ "Savepoint",
     /*  13 */ "Sequence",
     /*  14 */ "Int64",
     /*  15 */ "VBegin",
     /*  16 */ "RowKey",
     /*  17 */ "SCopy",
     /*  18 */ "ResetCount",
     /*  19 */ "Not",
     /*  20 */ "Delete",
     /*  21 */ "Trace",
     /*  22 */ "Rowid",
     /*  23 */ "OpenRead",
     /*  24 */ "Sort",
     /*  25 */ "VerifyCookie",
     /*  26 */ "VColumn",
     /*  27 */ "Next",
     /*  28 */ "Insert",
     /*  29 */ "Prev",
     /*  30 */ "IdxGE",
     /*  31 */ "VRename",
     /*  32 */ "DropTable",
     /*  33 */ "MakeRecord",
     /*  34 */ "Null",
     /*  35 */ "IdxInsert",
     /*  36 */ "SeekLt",
     /*  37 */ "ReadCookie",
     /*  38 */ "VDestroy",
     /*  39 */ "DropIndex",
     /*  40 */ "MustBeInt",
     /*  41 */ "IntegrityCk",
     /*  42 */ "CollSeq",
     /*  43 */ "ResultRow",
     /*  44 */ "Yield",
     /*  45 */ "OpenEphemeral",
     /*  46 */ "VNext",
     /*  47 */ "Seek",
     /*  48 */ "Found",
     /*  49 */ "If",
     /*  50 */ "IfZero",
     /*  51 */ "Goto",
     /*  52 */ "Function",
     /*  53 */ "Copy",
     /*  54 */ "Jump",
     /*  55 */ "Blob",
     /*  56 */ "NullRow",
     /*  57 */ "Transaction",
     /*  58 */ "VUpdate",
     /*  59 */ "TableLock",
     /*  60 */ "IdxRowid",
     /*  61 */ "SetCookie",
     /*  62 */ "ContextPush",
     /*  63 */ "Or",
     /*  64 */ "And",
     /*  65 */ "DropTrigger",
     /*  66 */ "AutoCommit",
     /*  67 */ "Column",
     /*  68 */ "IsNull",
     /*  69 */ "NotNull",
     /*  70 */ "Ne",
     /*  71 */ "Eq",
     /*  72 */ "Gt",
     /*  73 */ "Le",
     /*  74 */ "Lt",
     /*  75 */ "Ge",
     /*  76 */ "AddImm",
     /*  77 */ "BitAnd",
     /*  78 */ "BitOr",
     /*  79 */ "ShiftLeft",
     /*  80 */ "ShiftRight",
     /*  81 */ "Add",
     /*  82 */ "Subtract",
     /*  83 */ "Multiply",
     /*  84 */ "Divide",
     /*  85 */ "Remainder",
     /*  86 */ "Concat",
     /*  87 */ "ContextPop",
     /*  88 */ "IdxDelete",
     /*  89 */ "IncrVacuum",
     /*  90 */ "BitNot",
     /*  91 */ "String8",
     /*  92 */ "AggFinal",
     /*  93 */ "RealAffinity",
     /*  94 */ "Return",
     /*  95 */ "Expire",
     /*  96 */ "Rewind",
     /*  97 */ "Statement",
     /*  98 */ "Integer",
     /*  99 */ "Compare",
     /* 100 */ "Destroy",
     /* 101 */ "IdxLT",
     /* 102 */ "Affinity",
     /* 103 */ "Vacuum",
     /* 104 */ "IfNot",
     /* 105 */ "Move",
     /* 106 */ "Explain",
     /* 107 */ "ParseSchema",
     /* 108 */ "NewRowid",
     /* 109 */ "SetNumColumns",
     /* 110 */ "String",
     /* 111 */ "AggStep",
     /* 112 */ "VRowid",
     /* 113 */ "VOpen",
     /* 114 */ "NotExists",
     /* 115 */ "Close",
     /* 116 */ "Halt",
     /* 117 */ "Noop",
     /* 118 */ "SeekGe",
     /* 119 */ "VFilter",
     /* 120 */ "OpenPseudo",
     /* 121 */ "RowSetRead",
     /* 122 */ "RowSetAdd",
     /* 123 */ "IsUnique",
     /* 124 */ "OpenWrite",
     /* 125 */ "Permutation",
     /* 126 */ "Gosub",
     /* 127 */ "IfPos",
     /* 128 */ "Pagecount",
     /* 129 */ "Real",
     /* 130 */ "NotFound",
     /* 131 */ "CreateTable",
     /* 132 */ "NotUsed_132",
     /* 133 */ "NotUsed_133",
     /* 134 */ "NotUsed_134",
     /* 135 */ "NotUsed_135",
     /* 136 */ "NotUsed_136",
     /* 137 */ "NotUsed_137",
     /* 138 */ "NotUsed_138",
     /* 139 */ "NotUsed_139",
     /* 140 */ "NotUsed_140",
     /* 141 */ "ToText",
     /* 142 */ "ToBlob",
     /* 143 */ "ToNumeric",
     /* 144 */ "ToInt",
     /* 145 */ "ToReal",
  };
  return azName[i];
}
#endif
