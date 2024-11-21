// Copyright Epic Games, Inc. All Rights Reserved.
// generated
#ifndef _SYMS_META_DWARF_H
#define _SYMS_META_DWARF_H
//~ generated from code at syms/metaprogram/syms_metaprogram_serial.c:885
typedef enum SYMS_DwMode{
SYMS_DwMode_Null,
SYMS_DwMode_32Bit,
SYMS_DwMode_64Bit,
SYMS_DwMode_COUNT = 3
} SYMS_DwMode;
typedef enum SYMS_DwVersion{
SYMS_DwVersion_Null,
SYMS_DwVersion_V1,
SYMS_DwVersion_V2,
SYMS_DwVersion_V3,
SYMS_DwVersion_V4,
SYMS_DwVersion_V5,
SYMS_DwVersion_LastVersion = SYMS_DwVersion_V5,
SYMS_DwVersion_COUNT = 7
} SYMS_DwVersion;
typedef enum SYMS_DwSectionKind{
SYMS_DwSectionKind_Null,
SYMS_DwSectionKind_Abbrev,
SYMS_DwSectionKind_ARanges,
SYMS_DwSectionKind_Frame,
SYMS_DwSectionKind_Info,
SYMS_DwSectionKind_Line,
SYMS_DwSectionKind_Loc,
SYMS_DwSectionKind_MacInfo,
SYMS_DwSectionKind_PubNames,
SYMS_DwSectionKind_PubTypes,
SYMS_DwSectionKind_Ranges,
SYMS_DwSectionKind_Str,
SYMS_DwSectionKind_Addr,
SYMS_DwSectionKind_LocLists,
SYMS_DwSectionKind_RngLists,
SYMS_DwSectionKind_StrOffsets,
SYMS_DwSectionKind_LineStr,
SYMS_DwSectionKind_Names,
SYMS_DwSectionKind_COUNT = 18
} SYMS_DwSectionKind;
typedef enum SYMS_DwLanguage{
SYMS_DwLanguage_INVALID = 0x00,
//  TODO(nick): rename invalid to null
SYMS_DwLanguage_C89 = 0x01,
SYMS_DwLanguage_C = 0x02,
SYMS_DwLanguage_Ada83 = 0x03,
SYMS_DwLanguage_CPlusPlus = 0x04,
SYMS_DwLanguage_Cobol74 = 0x05,
SYMS_DwLanguage_Cobol85 = 0x06,
SYMS_DwLanguage_Fortran77 = 0x07,
SYMS_DwLanguage_Fortran90 = 0x08,
SYMS_DwLanguage_Pascal83 = 0x09,
SYMS_DwLanguage_Modula2 = 0x0A,
SYMS_DwLanguage_Java = 0x0B,
SYMS_DwLanguage_C99 = 0x0C,
SYMS_DwLanguage_Ada95 = 0x0D,
SYMS_DwLanguage_Fortran95 = 0x0E,
SYMS_DwLanguage_PLI = 0x0F,
SYMS_DwLanguage_ObjectiveC = 0x10,
SYMS_DwLanguage_ObjectiveCPlusPlus = 0x11,
SYMS_DwLanguage_UPC = 0x12,
SYMS_DwLanguage_D = 0x13,
SYMS_DwLanguage_Python = 0x14,
SYMS_DwLanguage_OpenCL = 0x15,
SYMS_DwLanguage_Go = 0x16,
SYMS_DwLanguage_Modula3 = 0x17,
SYMS_DwLanguage_Haskell = 0x18,
SYMS_DwLanguage_CPlusPlus03 = 0x19,
SYMS_DwLanguage_CPlusPlus11 = 0x1a,
SYMS_DwLanguage_OCaml = 0x1b,
SYMS_DwLanguage_Rust = 0x1c,
SYMS_DwLanguage_C11 = 0x1d,
SYMS_DwLanguage_Swift = 0x1e,
SYMS_DwLanguage_Julia = 0x1f,
SYMS_DwLanguage_Dylan = 0x20,
SYMS_DwLanguage_CPlusPlus14 = 0x21,
SYMS_DwLanguage_Fortran03 = 0x22,
SYMS_DwLanguage_Fortran08 = 0x23,
SYMS_DwLanguage_RenderScript = 0x24,
SYMS_DwLanguage_BLISS = 0x25,
SYMS_DwLanguage_LO_USER = 0x8000,
SYMS_DwLanguage_HI_USER = 0xffff,
SYMS_DwLanguage_COUNT = 40
} SYMS_DwLanguage;
typedef enum SYMS_DwStdOpcode{
SYMS_DwStdOpcode_EXTENDED_OPCODE = 0x00,
SYMS_DwStdOpcode_COPY = 0x01,
SYMS_DwStdOpcode_ADVANCE_PC = 0x02,
SYMS_DwStdOpcode_ADVANCE_LINE = 0x03,
SYMS_DwStdOpcode_SET_FILE = 0x04,
SYMS_DwStdOpcode_SET_COLUMN = 0x05,
SYMS_DwStdOpcode_NEGATE_STMT = 0x06,
SYMS_DwStdOpcode_SET_BASIC_BLOCK = 0x07,
SYMS_DwStdOpcode_CONST_ADD_PC = 0x08,
SYMS_DwStdOpcode_FIXED_ADVANCE_PC = 0x09,
SYMS_DwStdOpcode_SET_PROLOGUE_END = 0x0A,
SYMS_DwStdOpcode_SET_EPILOGUE_BEGIN = 0x0B,
SYMS_DwStdOpcode_SET_ISA = 0x0C,
SYMS_DwStdOpcode_COUNT = 13
} SYMS_DwStdOpcode;
typedef enum SYMS_DwExtOpcode{
SYMS_DwExtOpcode_UNDEFINED = 0x00,
SYMS_DwExtOpcode_END_SEQUENCE = 0x01,
SYMS_DwExtOpcode_SET_ADDRESS = 0x02,
SYMS_DwExtOpcode_DEFINE_FILE = 0x03,
SYMS_DwExtOpcode_SET_DISCRIMINATOR = 0x04,
SYMS_DwExtOpcode_LO_USER = 0x80,
SYMS_DwExtOpcode_HI_USER = 0xff,
SYMS_DwExtOpcode_COUNT = 7
} SYMS_DwExtOpcode;
typedef enum SYMS_DwNameCase{
SYMS_DwNameCase_Sensitive = 0x00,
SYMS_DwNameCase_Upper = 0x01,
SYMS_DwNameCase_Lower = 0x02,
SYMS_DwNameCase_Insensitive = 0x03,
SYMS_DwNameCase_COUNT = 4
} SYMS_DwNameCase;
typedef enum SYMS_DwTagKind{
SYMS_DwTagKind_NULL,
SYMS_DwTagKind_ARRAY_TYPE = 0x01,
SYMS_DwTagKind_CLASS_TYPE = 0x02,
SYMS_DwTagKind_ENTRY_POINT = 0x03,
SYMS_DwTagKind_ENUMERATION_TYPE = 0x04,
SYMS_DwTagKind_FORMAL_PARAMETER = 0x05,
SYMS_DwTagKind_IMPORTED_DECLARATION = 0x08,
SYMS_DwTagKind_LABEL = 0x0a,
SYMS_DwTagKind_LEXICAL_BLOCK = 0x0b,
SYMS_DwTagKind_MEMBER = 0x0d,
SYMS_DwTagKind_POINTER_TYPE = 0x0f,
SYMS_DwTagKind_REFERENCE_TYPE = 0x10,
SYMS_DwTagKind_COMPILE_UNIT = 0x11,
SYMS_DwTagKind_STRING_TYPE = 0x12,
SYMS_DwTagKind_STRUCTURE_TYPE = 0x13,
SYMS_DwTagKind_SUBROUTINE_TYPE = 0x15,
SYMS_DwTagKind_TYPEDEF = 0x16,
SYMS_DwTagKind_UNION_TYPE = 0x17,
SYMS_DwTagKind_UNSPECIFIED_PARAMETERS = 0x18,
SYMS_DwTagKind_VARIANT = 0x19,
SYMS_DwTagKind_COMMON_BLOCK = 0x1a,
SYMS_DwTagKind_COMMON_INCLUSION = 0x1b,
SYMS_DwTagKind_INHERITANCE = 0x1c,
SYMS_DwTagKind_INLINED_SUBROUTINE = 0x1d,
SYMS_DwTagKind_MODULE = 0x1e,
SYMS_DwTagKind_PTR_TO_MEMBER_TYPE = 0x1f,
SYMS_DwTagKind_SET_TYPE = 0x20,
SYMS_DwTagKind_SUBRANGE_TYPE = 0x21,
SYMS_DwTagKind_WITH_STMT = 0x22,
SYMS_DwTagKind_ACCESS_DECLARATION = 0x23,
SYMS_DwTagKind_BASE_TYPE = 0x24,
SYMS_DwTagKind_CATCH_BLOCK = 0x25,
SYMS_DwTagKind_CONST_TYPE = 0x26,
SYMS_DwTagKind_CONSTANT = 0x27,
SYMS_DwTagKind_ENUMERATOR = 0x28,
SYMS_DwTagKind_FILE_TYPE = 0x29,
SYMS_DwTagKind_FRIEND = 0x2a,
SYMS_DwTagKind_NAMELIST = 0x2b,
SYMS_DwTagKind_NAMELIST_ITEM = 0x2c,
SYMS_DwTagKind_PACKED_TYPE = 0x2d,
SYMS_DwTagKind_SUBPROGRAM = 0x2e,
SYMS_DwTagKind_TEMPLATE_TYPE_PARAMETER = 0x2f,
SYMS_DwTagKind_TEMPLATE_VALUE_PARAMETER = 0x30,
SYMS_DwTagKind_THROWN_TYPE = 0x31,
SYMS_DwTagKind_TRY_BLOCK = 0x32,
SYMS_DwTagKind_VARIANT_PART = 0x33,
SYMS_DwTagKind_VARIABLE = 0x34,
SYMS_DwTagKind_VOLATILE_TYPE = 0x35,
SYMS_DwTagKind_DWARF_PROCEDURE = 0x36,
SYMS_DwTagKind_RESTRICT_TYPE = 0x37,
SYMS_DwTagKind_INTERFACE_TYPE = 0x38,
SYMS_DwTagKind_NAMESPACE = 0x39,
SYMS_DwTagKind_IMPORTED_MODULE = 0x3a,
SYMS_DwTagKind_UNSPECIFIED_TYPE = 0x3b,
SYMS_DwTagKind_PARTIAL_UNIT = 0x3c,
SYMS_DwTagKind_IMPORTED_UNIT = 0x3d,
SYMS_DwTagKind_CONDITION = 0x3f,
SYMS_DwTagKind_SHARED_TYPE = 0x40,
SYMS_DwTagKind_TYPE_UNIT = 0x41,
SYMS_DwTagKind_RVALUE_REFERENCE_TYPE = 0x42,
SYMS_DwTagKind_TEMPLATE_ALIAS = 0x43,
SYMS_DwTagKind_COARRAY_TYPE = 0x44,
SYMS_DwTagKind_GENERIC_SUBRANGE = 0x45,
SYMS_DwTagKind_DYNAMIC_TYPE = 0x46,
SYMS_DwTagKind_ATOMIC_TYPE = 0x47,
SYMS_DwTagKind_CALL_SITE = 0x48,
SYMS_DwTagKind_CALL_SITE_PARAMETER = 0x49,
SYMS_DwTagKind_SKELETON_UNIT = 0x4A,
SYMS_DwTagKind_IMMUTABLE_TYPE = 0x4B,
SYMS_DwTagKind_GNU_CALL_SITE = 0x4109,
SYMS_DwTagKind_GNU_CALL_SITE_PARAMETER = 0x410a,
SYMS_DwTagKind_LO_USER = 0x4080,
SYMS_DwTagKind_HI_USER = 0xffff,
SYMS_DwTagKind_COUNT = 73
} SYMS_DwTagKind;
typedef SYMS_U32 SYMS_DwAttribClass;
enum{
SYMS_DwAttribClass_ADDRESS = (1 << 0),
SYMS_DwAttribClass_BLOCK = (1 << 1),
SYMS_DwAttribClass_CONST = (1 << 2),
SYMS_DwAttribClass_EXPRLOC = (1 << 3),
SYMS_DwAttribClass_FLAG = (1 << 4),
SYMS_DwAttribClass_LINEPTR = (1 << 5),
SYMS_DwAttribClass_LOCLIST = (1 << 6),
SYMS_DwAttribClass_LOCLISTPTR = (1 << 7),
SYMS_DwAttribClass_MACPTR = (1 << 8),
SYMS_DwAttribClass_RNGLISTPTR = (1 << 9),
SYMS_DwAttribClass_RNGLIST = (1 << 10),
SYMS_DwAttribClass_REFERENCE = (1 << 11),
SYMS_DwAttribClass_STRING = (1 << 12),
SYMS_DwAttribClass_STROFFSETSPTR = (1 << 13),
SYMS_DwAttribClass_ADDRPTR = (1 << 14),
SYMS_DwAttribClass_UNDEFINED = (1 << 15),
};
typedef enum SYMS_DwFormKind{
SYMS_DwFormKind_ADDR = 0x01,
SYMS_DwFormKind_BLOCK2 = 0x03,
SYMS_DwFormKind_BLOCK4 = 0x04,
SYMS_DwFormKind_DATA2 = 0x05,
SYMS_DwFormKind_DATA4 = 0x06,
SYMS_DwFormKind_DATA8 = 0x07,
SYMS_DwFormKind_STRING = 0x08,
SYMS_DwFormKind_BLOCK = 0x09,
SYMS_DwFormKind_BLOCK1 = 0x0a,
SYMS_DwFormKind_DATA1 = 0x0b,
SYMS_DwFormKind_FLAG = 0x0c,
SYMS_DwFormKind_SDATA = 0x0d,
SYMS_DwFormKind_STRP = 0x0e,
SYMS_DwFormKind_UDATA = 0x0f,
SYMS_DwFormKind_REF_ADDR = 0x10,
SYMS_DwFormKind_REF1 = 0x11,
SYMS_DwFormKind_REF2 = 0x12,
SYMS_DwFormKind_REF4 = 0x13,
SYMS_DwFormKind_REF8 = 0x14,
SYMS_DwFormKind_REF_UDATA = 0x15,
SYMS_DwFormKind_INDIRECT = 0x16,
SYMS_DwFormKind_SEC_OFFSET = 0x17,
SYMS_DwFormKind_EXPRLOC = 0x18,
SYMS_DwFormKind_FLAG_PRESENT = 0x19,
SYMS_DwFormKind_REF_SIG8 = 0x20,
SYMS_DwFormKind_STRX = 0x1a,
SYMS_DwFormKind_ADDRX = 0x1b,
SYMS_DwFormKind_REF_SUP4 = 0x1c,
SYMS_DwFormKind_STRP_SUP = 0x1d,
SYMS_DwFormKind_DATA16 = 0x1e,
SYMS_DwFormKind_LINE_STRP = 0x1f,
SYMS_DwFormKind_IMPLICIT_CONST = 0x21,
SYMS_DwFormKind_LOCLISTX = 0x22,
SYMS_DwFormKind_RNGLISTX = 0x23,
SYMS_DwFormKind_REF_SUP8 = 0x24,
SYMS_DwFormKind_STRX1 = 0x25,
SYMS_DwFormKind_STRX2 = 0x26,
SYMS_DwFormKind_STRX3 = 0x27,
SYMS_DwFormKind_STRX4 = 0x28,
SYMS_DwFormKind_ADDRX1 = 0x29,
SYMS_DwFormKind_ADDRX2 = 0x2a,
SYMS_DwFormKind_ADDRX3 = 0x2b,
SYMS_DwFormKind_ADDRX4 = 0x2c,
SYMS_DwFormKind_INVALID,
SYMS_DwFormKind_COUNT = 44
} SYMS_DwFormKind;
typedef enum SYMS_DwAttribKind{
SYMS_DwAttribKind_SIBLING = 0x01,
SYMS_DwAttribKind_LOCATION = 0x02,
SYMS_DwAttribKind_NAME = 0x03,
SYMS_DwAttribKind_ORDERING = 0x09,
SYMS_DwAttribKind_BYTE_SIZE = 0x0B,
SYMS_DwAttribKind_BIT_OFFSET = 0x0C,
SYMS_DwAttribKind_BIT_SIZE = 0x0D,
SYMS_DwAttribKind_STMT_LIST = 0x10,
SYMS_DwAttribKind_LOW_PC = 0x11,
SYMS_DwAttribKind_HIGH_PC = 0x12,
SYMS_DwAttribKind_LANGUAGE = 0x13,
SYMS_DwAttribKind_DISCR = 0x15,
SYMS_DwAttribKind_DISCR_VALUE = 0x16,
SYMS_DwAttribKind_VISIBILITY = 0x17,
SYMS_DwAttribKind_IMPORT = 0x18,
SYMS_DwAttribKind_STRING_LENGTH = 0x19,
SYMS_DwAttribKind_COMMON_REFERENCE = 0x1a,
SYMS_DwAttribKind_COMP_DIR = 0x1b,
SYMS_DwAttribKind_CONST_VALUE = 0x1c,
SYMS_DwAttribKind_CONTAINING_TYPE = 0x1d,
SYMS_DwAttribKind_DEFAULT_VALUE = 0x1e,
SYMS_DwAttribKind_INLINE = 0x20,
SYMS_DwAttribKind_IS_OPTIONAL = 0x21,
SYMS_DwAttribKind_LOWER_BOUND = 0x22,
SYMS_DwAttribKind_PRODUCER = 0x25,
SYMS_DwAttribKind_PROTOTYPED = 0x27,
SYMS_DwAttribKind_RETURN_ADDR = 0x2a,
SYMS_DwAttribKind_START_SCOPE = 0x2c,
SYMS_DwAttribKind_BIT_STRIDE = 0x2e,
SYMS_DwAttribKind_UPPER_BOUND = 0x2f,
SYMS_DwAttribKind_ABSTRACT_ORIGIN = 0x31,
SYMS_DwAttribKind_ACCESSIBILITY = 0x32,
SYMS_DwAttribKind_ADDRESS_CLASS = 0x33,
SYMS_DwAttribKind_ARTIFICIAL = 0x34,
SYMS_DwAttribKind_BASE_TYPES = 0x35,
SYMS_DwAttribKind_CALLING_CONVENTION = 0x36,
SYMS_DwAttribKind_ARR_COUNT = 0x37,
SYMS_DwAttribKind_DATA_MEMBER_LOCATION = 0x38,
SYMS_DwAttribKind_DECL_COLUMN = 0x39,
SYMS_DwAttribKind_DECL_FILE = 0x3a,
SYMS_DwAttribKind_DECL_LINE = 0x3b,
SYMS_DwAttribKind_DECLARATION = 0x3c,
SYMS_DwAttribKind_DISCR_LIST = 0x3d,
SYMS_DwAttribKind_ENCODING = 0x3e,
SYMS_DwAttribKind_EXTERNAL = 0x3f,
SYMS_DwAttribKind_FRAME_BASE = 0x40,
SYMS_DwAttribKind_FRIEND = 0x41,
SYMS_DwAttribKind_IDENTIFIER_CASE = 0x42,
SYMS_DwAttribKind_MACRO_INFO = 0x43,
SYMS_DwAttribKind_NAMELIST_ITEM = 0x44,
SYMS_DwAttribKind_PRIORITY = 0x45,
SYMS_DwAttribKind_SEGMENT = 0x46,
SYMS_DwAttribKind_SPECIFICATION = 0x47,
SYMS_DwAttribKind_STATIC_LINK = 0x48,
SYMS_DwAttribKind_TYPE = 0x49,
SYMS_DwAttribKind_USE_LOCATION = 0x4a,
SYMS_DwAttribKind_VARIABLE_PARAMETER = 0x4b,
SYMS_DwAttribKind_VIRTUALITY = 0x4c,
SYMS_DwAttribKind_VTABLE_ELEM_LOCATION = 0x4d,
SYMS_DwAttribKind_ALLOCATED = 0x4e,
SYMS_DwAttribKind_ASSOCIATED = 0x4f,
SYMS_DwAttribKind_DATA_LOCATION = 0x50,
SYMS_DwAttribKind_BYTE_STRIDE = 0x51,
SYMS_DwAttribKind_ENTRY_PC = 0x52,
SYMS_DwAttribKind_USE_UTF8 = 0x53,
SYMS_DwAttribKind_EXTENSION = 0x54,
SYMS_DwAttribKind_RANGES = 0x55,
SYMS_DwAttribKind_TRAMPOLINE = 0x56,
SYMS_DwAttribKind_CALL_COLUMN = 0x57,
SYMS_DwAttribKind_CALL_FILE = 0x58,
SYMS_DwAttribKind_CALL_LINE = 0x59,
SYMS_DwAttribKind_DESCRIPTION = 0x5a,
SYMS_DwAttribKind_BINARY_SCALE = 0x5b,
SYMS_DwAttribKind_DECIMAL_SCALE = 0x5c,
SYMS_DwAttribKind_SMALL = 0x5d,
SYMS_DwAttribKind_DECIMAL_SIGN = 0x5e,
SYMS_DwAttribKind_DIGIT_COUNT = 0x5f,
SYMS_DwAttribKind_PICTURE_STRING = 0x60,
SYMS_DwAttribKind_MUTABLE = 0x61,
SYMS_DwAttribKind_THREADS_SCALED = 0x62,
SYMS_DwAttribKind_EXPLICIT = 0x63,
SYMS_DwAttribKind_OBJECT_POINTER = 0x64,
SYMS_DwAttribKind_ENDIANITY = 0x65,
SYMS_DwAttribKind_ELEMENTAL = 0x66,
SYMS_DwAttribKind_PURE = 0x67,
SYMS_DwAttribKind_RECURSIVE = 0x68,
SYMS_DwAttribKind_SIGNATURE = 0x69,
SYMS_DwAttribKind_MAIN_SUBPROGRAM = 0x6a,
SYMS_DwAttribKind_DATA_BIT_OFFSET = 0x6b,
SYMS_DwAttribKind_CONST_EXPR = 0x6c,
SYMS_DwAttribKind_ENUM_CLASS = 0x6d,
SYMS_DwAttribKind_LINKAGE_NAME = 0x6e,
SYMS_DwAttribKind_STRING_LENGTH_BIT_SIZE = 0x6f,
SYMS_DwAttribKind_STRING_LENGTH_BYTE_SIZE = 0x70,
SYMS_DwAttribKind_RANK = 0x71,
SYMS_DwAttribKind_STR_OFFSETS_BASE = 0x72,
SYMS_DwAttribKind_ADDR_BASE = 0x73,
SYMS_DwAttribKind_RNGLISTS_BASE = 0x74,
SYMS_DwAttribKind_DWO_NAME = 0x76,
SYMS_DwAttribKind_REFERENCE = 0x77,
SYMS_DwAttribKind_RVALUE_REFERENCE = 0x78,
SYMS_DwAttribKind_MACROS = 0x79,
SYMS_DwAttribKind_CALL_ALL_CALLS = 0x7a,
SYMS_DwAttribKind_CALL_ALL_SOURCE_CALLS = 0x7b,
SYMS_DwAttribKind_CALL_ALL_TAIL_CALLS = 0x7c,
SYMS_DwAttribKind_CALL_RETURN_PC = 0x7d,
SYMS_DwAttribKind_CALL_VALUE = 0x7e,//  NOTE(nick): According to spec this is attribute has EXPRLOC class, but in newton_ps5.elf these are defined as REFERENCE
SYMS_DwAttribKind_CALL_ORIGIN = 0x7f,
SYMS_DwAttribKind_CALL_PARAMETER = 0x80,
SYMS_DwAttribKind_CALL_PC = 0x81,
SYMS_DwAttribKind_CALL_TAIL_CALL = 0x82,
SYMS_DwAttribKind_CALL_TARGET = 0x83,
SYMS_DwAttribKind_CALL_TARGET_CLOBBERED = 0x84,
SYMS_DwAttribKind_CALL_DATA_LOCATION = 0x85,
SYMS_DwAttribKind_CALL_DATA_VALUE = 0x86,
SYMS_DwAttribKind_NORETURN = 0x87,
SYMS_DwAttribKind_ALIGNMENT = 0x88,
SYMS_DwAttribKind_EXPORT_SYMBOLS = 0x89,
SYMS_DwAttribKind_DELETED = 0x8a,
SYMS_DwAttribKind_DEFAULTED = 0x8b,
SYMS_DwAttribKind_LOCLISTS_BASE = 0x8c,
SYMS_DwAttribKind_GNU_VECTOR = 0x2107,
SYMS_DwAttribKind_GNU_GUARDED_BY = 0x2108,
SYMS_DwAttribKind_GNU_PT_GUARDED_BY = 0x2109,
SYMS_DwAttribKind_GNU_GUARDED = 0x210a,
SYMS_DwAttribKind_GNU_PT_GUARDED = 0x210b,
SYMS_DwAttribKind_GNU_LOCKS_EXCLUDED = 0x210c,
SYMS_DwAttribKind_GNU_EXCLUSIVE_LOCKS_REQUIRED = 0x210d,
SYMS_DwAttribKind_GNU_SHARED_LOCKS_REQUIRED = 0x210e,
SYMS_DwAttribKind_GNU_ODR_SIGNATURE = 0x210f,
SYMS_DwAttribKind_GNU_TEMPLATE_NAME = 0x2110,
SYMS_DwAttribKind_GNU_CALL_SITE_VALUE = 0x2111,
SYMS_DwAttribKind_GNU_CALL_SITE_DATA_VALUE = 0x2112,
SYMS_DwAttribKind_GNU_CALL_SITE_TARGET = 0x2113,
SYMS_DwAttribKind_GNU_CALL_SITE_TARGET_CLOBBERED = 0x2114,
SYMS_DwAttribKind_GNU_TAIL_CALL = 0x2115,
SYMS_DwAttribKind_GNU_ALL_TAIL_CALL_SITES = 0x2116,
SYMS_DwAttribKind_GNU_ALL_CALL_SITES = 0x2117,
SYMS_DwAttribKind_GNU_ALL_SOURCE_CALL_SITES = 0x2118,
SYMS_DwAttribKind_GNU_MACROS = 0x2119,
SYMS_DwAttribKind_GNU_DELETED = 0x211a,
SYMS_DwAttribKind_GNU_DWO_NAME = 0x2130,
SYMS_DwAttribKind_GNU_DWO_ID = 0x2131,
SYMS_DwAttribKind_GNU_RANGES_BASE = 0x2132,
SYMS_DwAttribKind_GNU_ADDR_BASE = 0x2133,
SYMS_DwAttribKind_GNU_PUBNAMES = 0x2134,
SYMS_DwAttribKind_GNU_PUBTYPES = 0x2135,
SYMS_DwAttribKind_GNU_DISCRIMINATOR = 0x2136,
SYMS_DwAttribKind_GNU_LOCVIEWS = 0x2137,
SYMS_DwAttribKind_GNU_ENTRY_VIEW = 0x2138,
SYMS_DwAttribKind_VMS_RTNBEG_PD_ADDRESS = 0x2201,
SYMS_DwAttribKind_USE_GNAT_DESCRIPTIVE_TYPE = 0x2301,
SYMS_DwAttribKind_GNAT_DESCRIPTIVE_TYPE = 0x2302,
SYMS_DwAttribKind_GNU_NUMERATOR = 0x2303,
SYMS_DwAttribKind_GNU_DENOMINATOR = 0x2304,
SYMS_DwAttribKind_GNU_BIAS = 0x2305,
SYMS_DwAttribKind_UPC_THREADS_SCALED = 0x3210,
SYMS_DwAttribKind_PGI_LBASE = 0x3a00,
SYMS_DwAttribKind_PGI_SOFFSET = 0x3a01,
SYMS_DwAttribKind_PGI_LSTRIDE = 0x3a02,
SYMS_DwAttribKind_LLVM_INCLUDE_PATH = 0x3e00,
SYMS_DwAttribKind_LLVM_CONFIG_MACROS = 0x3e01,
SYMS_DwAttribKind_LLVM_SYSROOT = 0x3e02,
SYMS_DwAttribKind_LLVM_API_NOTES = 0x3e07,
SYMS_DwAttribKind_LLVM_TAG_OFFSET = 0x3e03,
SYMS_DwAttribKind_APPLE_OPTIMIZED = 0x3fe1,
SYMS_DwAttribKind_APPLE_FLAGS = 0x3fe2,
SYMS_DwAttribKind_APPLE_ISA = 0x3fe3,
SYMS_DwAttribKind_APPLE_BLOCK = 0x3fe4,
SYMS_DwAttribKind_APPLE_MAJOR_RUNTIME_VERS = 0x3fe5,
SYMS_DwAttribKind_APPLE_RUNTIME_CLASS = 0x3fe6,
SYMS_DwAttribKind_APPLE_OMIT_FRAME_PTR = 0x3fe7,
SYMS_DwAttribKind_APPLE_PROPERTY_NAME = 0x3fe8,
SYMS_DwAttribKind_APPLE_PROPERTY_GETTER = 0x3fe9,
SYMS_DwAttribKind_APPLE_PROPERTY_SETTER = 0x3fea,
SYMS_DwAttribKind_APPLE_PROPERTY_ATTRIBUTE = 0x3feb,
SYMS_DwAttribKind_APPLE_OBJC_COMPLETE_TYPE = 0x3fec,
SYMS_DwAttribKind_APPLE_PROPERTY = 0x3fed,
SYMS_DwAttribKind_APPLE_OBJ_DIRECT = 0x3fee,
SYMS_DwAttribKind_APPLE_SDK = 0x3fef,
SYMS_DwAttribKind_LO_USER = 0x2000,
SYMS_DwAttribKind_HI_USER = 0x3fff,
SYMS_DwAttribKind_COUNT = 182
} SYMS_DwAttribKind;
typedef enum SYMS_DwAttribTypeEncoding{
SYMS_DwAttribTypeEncoding_Null,
SYMS_DwAttribTypeEncoding_ADDRESS = 0X01,
SYMS_DwAttribTypeEncoding_BOOLEAN = 0X02,
SYMS_DwAttribTypeEncoding_COMPLEX_FLOAT = 0X03,
SYMS_DwAttribTypeEncoding_FLOAT = 0X04,
SYMS_DwAttribTypeEncoding_SIGNED = 0X05,
SYMS_DwAttribTypeEncoding_SIGNED_CHAR = 0X06,
SYMS_DwAttribTypeEncoding_UNSIGNED = 0X07,
SYMS_DwAttribTypeEncoding_UNSIGNED_CHAR = 0X08,
SYMS_DwAttribTypeEncoding_IMAGINARY_FLOAT = 0X09,
SYMS_DwAttribTypeEncoding_PACKED_DECIMAL = 0X0A,
SYMS_DwAttribTypeEncoding_NUMERIC_STRING = 0X0B,
SYMS_DwAttribTypeEncoding_EDITED = 0X0C,
SYMS_DwAttribTypeEncoding_SIGNED_FIXED = 0X0D,
SYMS_DwAttribTypeEncoding_UNSIGNED_FIXED = 0X0E,
SYMS_DwAttribTypeEncoding_DECIMAL_FLOAT = 0X0F,
SYMS_DwAttribTypeEncoding_UTF = 0X10,
SYMS_DwAttribTypeEncoding_UCS = 0X11,
SYMS_DwAttribTypeEncoding_ASCII = 0X12,
SYMS_DwAttribTypeEncoding_COUNT = 19
} SYMS_DwAttribTypeEncoding;
typedef enum SYMS_DwCallingConvention{
SYMS_DwCallingConvention_Normal = 0x0,
SYMS_DwCallingConvention_Program = 0x1,
SYMS_DwCallingConvention_NoCall = 0x2,
SYMS_DwCallingConvention_PassByValue = 0x1,
SYMS_DwCallingConvention_PassByReference = 0x2,
SYMS_DwCallingConvention_COUNT = 5
} SYMS_DwCallingConvention;
typedef enum SYMS_DwAccess{
SYMS_DwAccess_Public = 0x00,
SYMS_DwAccess_Private = 0x01,
SYMS_DwAccess_Protected = 0x02,
SYMS_DwAccess_COUNT = 3
} SYMS_DwAccess;
typedef enum SYMS_DwVirtuality{
SYMS_DwVirtuality_None = 0x00,
SYMS_DwVirtuality_Virtual = 0x01,
SYMS_DwVirtuality_PureVirtual = 0x02,
SYMS_DwVirtuality_COUNT = 3
} SYMS_DwVirtuality;
typedef enum SYMS_DwRngListEntryKind{
SYMS_DwRngListEntryKind_EndOfList = 0x00,
SYMS_DwRngListEntryKind_BaseAddressX = 0x01,
SYMS_DwRngListEntryKind_StartxEndx = 0x02,
SYMS_DwRngListEntryKind_StartxLength = 0x03,
SYMS_DwRngListEntryKind_OffsetPair = 0x04,
SYMS_DwRngListEntryKind_BaseAddress = 0x05,
SYMS_DwRngListEntryKind_StartEnd = 0x06,
SYMS_DwRngListEntryKind_StartLength = 0x07,
SYMS_DwRngListEntryKind_COUNT = 8
} SYMS_DwRngListEntryKind;
typedef enum SYMS_DwLocListEntryKind{
SYMS_DwLocListEntryKind_EndOfList = 0x00,
SYMS_DwLocListEntryKind_BaseAddressX = 0x01,
SYMS_DwLocListEntryKind_StartXEndX = 0x02,
SYMS_DwLocListEntryKind_StartXLength = 0x03,
SYMS_DwLocListEntryKind_OffsetPair = 0x04,
SYMS_DwLocListEntryKind_DefaultLocation = 0x05,
SYMS_DwLocListEntryKind_BaseAddress = 0x06,
SYMS_DwLocListEntryKind_StartEnd = 0x07,
SYMS_DwLocListEntryKind_StartLength = 0x08,
SYMS_DwLocListEntryKind_COUNT = 9
} SYMS_DwLocListEntryKind;

//~ generated from code at syms/metaprogram/syms_metaprogram_serial.c:1133
SYMS_C_LINKAGE_BEGIN
SYMS_API SYMS_Language syms_dw_base_language_from_dw_language(SYMS_DwLanguage v);
SYMS_API SYMS_DwVersion syms_dw_version_from_form_kind(SYMS_DwFormKind v);
SYMS_API SYMS_DwAttribClass syms_dw_attrib_class_from_form_kind(SYMS_DwFormKind v);
SYMS_API SYMS_DwVersion syms_dw_version_from_attrib_kind(SYMS_DwAttribKind v);
SYMS_API SYMS_DwAttribClass syms_dw_attrib_class_from_attrib_kind(SYMS_DwAttribKind v);
SYMS_API SYMS_DwVersion syms_dw_version_from_attrib_type_encoding(SYMS_DwAttribTypeEncoding v);
SYMS_API SYMS_CallConvention syms_dw_base_call_convention_from_dw_calling_convention(SYMS_DwCallingConvention v);
SYMS_API SYMS_MemVisibility syms_dw_mem_visibility_from_access(SYMS_DwAccess v);
SYMS_C_LINKAGE_END

//~ generated from code at syms/metaprogram/syms_metaprogram_serial.c:1588
SYMS_C_LINKAGE_BEGIN
SYMS_C_LINKAGE_END

//~ generated from code at syms/metaprogram/syms_metaprogram_serial.c:1694
#endif
