// Licensed to the .NET Foundation under one or more agreements.
// The .NET Foundation licenses this file to you under the MIT license.
// See the LICENSE file in the project root for more information.

/*****************************************************************************/
#ifndef HARDWARE_INTRINSIC
#error Define HARDWARE_INTRINSIC before including this file
#endif
/*****************************************************************************/

// clang-format off

#ifdef FEATURE_HW_INTRINSICS
// ***************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************
//                 ISA              Function name                            ival        SIMD size       NumArg                                                                                                     instructions                                                                                                     Category                            Flags
//                                                                                                                   {TYP_BYTE,              TYP_UBYTE,          TYP_SHORT,          TYP_USHORT,         TYP_INT,            TYP_UINT,           TYP_LONG,           TYP_ULONG,          TYP_FLOAT,          TYP_DOUBLE}
// ***************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************
//  Vector64 Intrinsics
HARDWARE_INTRINSIC(Vector64,        AsByte,                                    -1,               8,           1,     {INS_invalid,           INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid},           HW_Category_Helper,                 HW_Flag_SpecialImport|HW_Flag_NoCodeGen|HW_Flag_BaseTypeFromFirstArg)
HARDWARE_INTRINSIC(Vector64,        AsInt16,                                   -1,               8,           1,     {INS_invalid,           INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid},           HW_Category_Helper,                 HW_Flag_SpecialImport|HW_Flag_NoCodeGen|HW_Flag_BaseTypeFromFirstArg)
HARDWARE_INTRINSIC(Vector64,        AsInt32,                                   -1,               8,           1,     {INS_invalid,           INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid},           HW_Category_Helper,                 HW_Flag_SpecialImport|HW_Flag_NoCodeGen|HW_Flag_BaseTypeFromFirstArg)
HARDWARE_INTRINSIC(Vector64,        AsSByte,                                   -1,               8,           1,     {INS_invalid,           INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid},           HW_Category_Helper,                 HW_Flag_SpecialImport|HW_Flag_NoCodeGen|HW_Flag_BaseTypeFromFirstArg)
HARDWARE_INTRINSIC(Vector64,        AsSingle,                                  -1,               8,           1,     {INS_invalid,           INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid},           HW_Category_Helper,                 HW_Flag_SpecialImport|HW_Flag_NoCodeGen|HW_Flag_BaseTypeFromFirstArg)
HARDWARE_INTRINSIC(Vector64,        AsUInt16,                                  -1,               8,           1,     {INS_invalid,           INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid},           HW_Category_Helper,                 HW_Flag_SpecialImport|HW_Flag_NoCodeGen|HW_Flag_BaseTypeFromFirstArg)
HARDWARE_INTRINSIC(Vector64,        AsUInt32,                                  -1,               8,           1,     {INS_invalid,           INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid},           HW_Category_Helper,                 HW_Flag_SpecialImport|HW_Flag_NoCodeGen|HW_Flag_BaseTypeFromFirstArg)
HARDWARE_INTRINSIC(Vector64,        get_Count,                                 -1,               8,           0,     {INS_invalid,           INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid},           HW_Category_Helper,                 HW_Flag_SpecialImport|HW_Flag_NoCodeGen)

// ***************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************
//                 ISA              Function name                            ival        SIMD size       NumArg                                                                                                     instructions                                                                                                     Category                            Flags
//                                                                                                                   {TYP_BYTE,              TYP_UBYTE,          TYP_SHORT,          TYP_USHORT,         TYP_INT,            TYP_UINT,           TYP_LONG,           TYP_ULONG,          TYP_FLOAT,          TYP_DOUBLE}
// ***************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************
//  Vector128 Intrinsics
HARDWARE_INTRINSIC(Vector128,       As,                                        -1,              16,           1,     {INS_invalid,           INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid},           HW_Category_Helper,                 HW_Flag_SpecialImport|HW_Flag_NoCodeGen|HW_Flag_BaseTypeFromFirstArg)
HARDWARE_INTRINSIC(Vector128,       AsByte,                                    -1,              16,           1,     {INS_invalid,           INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid},           HW_Category_Helper,                 HW_Flag_SpecialImport|HW_Flag_NoCodeGen|HW_Flag_BaseTypeFromFirstArg)
HARDWARE_INTRINSIC(Vector128,       AsDouble,                                  -1,              16,           1,     {INS_invalid,           INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid},           HW_Category_Helper,                 HW_Flag_SpecialImport|HW_Flag_NoCodeGen|HW_Flag_BaseTypeFromFirstArg)
HARDWARE_INTRINSIC(Vector128,       AsInt16,                                   -1,              16,           1,     {INS_invalid,           INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid},           HW_Category_Helper,                 HW_Flag_SpecialImport|HW_Flag_NoCodeGen|HW_Flag_BaseTypeFromFirstArg)
HARDWARE_INTRINSIC(Vector128,       AsInt32,                                   -1,              16,           1,     {INS_invalid,           INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid},           HW_Category_Helper,                 HW_Flag_SpecialImport|HW_Flag_NoCodeGen|HW_Flag_BaseTypeFromFirstArg)
HARDWARE_INTRINSIC(Vector128,       AsInt64,                                   -1,              16,           1,     {INS_invalid,           INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid},           HW_Category_Helper,                 HW_Flag_SpecialImport|HW_Flag_NoCodeGen|HW_Flag_BaseTypeFromFirstArg)
HARDWARE_INTRINSIC(Vector128,       AsSByte,                                   -1,              16,           1,     {INS_invalid,           INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid},           HW_Category_Helper,                 HW_Flag_SpecialImport|HW_Flag_NoCodeGen|HW_Flag_BaseTypeFromFirstArg)
HARDWARE_INTRINSIC(Vector128,       AsSingle,                                  -1,              16,           1,     {INS_invalid,           INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid},           HW_Category_Helper,                 HW_Flag_SpecialImport|HW_Flag_NoCodeGen|HW_Flag_BaseTypeFromFirstArg)
HARDWARE_INTRINSIC(Vector128,       AsUInt16,                                  -1,              16,           1,     {INS_invalid,           INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid},           HW_Category_Helper,                 HW_Flag_SpecialImport|HW_Flag_NoCodeGen|HW_Flag_BaseTypeFromFirstArg)
HARDWARE_INTRINSIC(Vector128,       AsUInt32,                                  -1,              16,           1,     {INS_invalid,           INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid},           HW_Category_Helper,                 HW_Flag_SpecialImport|HW_Flag_NoCodeGen|HW_Flag_BaseTypeFromFirstArg)
HARDWARE_INTRINSIC(Vector128,       AsUInt64,                                  -1,              16,           1,     {INS_invalid,           INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid},           HW_Category_Helper,                 HW_Flag_SpecialImport|HW_Flag_NoCodeGen|HW_Flag_BaseTypeFromFirstArg)
HARDWARE_INTRINSIC(Vector128,       get_Count,                                 -1,              16,           0,     {INS_invalid,           INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid},           HW_Category_Helper,                 HW_Flag_SpecialImport|HW_Flag_NoCodeGen)

// ***************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************
//                 ISA              Function name                            ival        SIMD size       NumArg                                                                                                     instructions                                                                                                     Category                            Flags
//                                                                                                                   {TYP_BYTE,              TYP_UBYTE,          TYP_SHORT,          TYP_USHORT,         TYP_INT,            TYP_UINT,           TYP_LONG,           TYP_ULONG,          TYP_FLOAT,          TYP_DOUBLE}
// ***************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************
//  AdvSimd Intrinsics
HARDWARE_INTRINSIC(AdvSimd,         Abs,                                       -1,              -1,           1,     {INS_invalid,           INS_abs,            INS_invalid,        INS_abs,            INS_invalid,        INS_abs,            INS_invalid,        INS_invalid,        INS_fabs,           INS_invalid},           HW_Category_SimpleSIMD,             HW_Flag_NoContainment|HW_Flag_UnfixedSIMDSize)
HARDWARE_INTRINSIC(AdvSimd,         AbsScalar,                                 -1,               8,           1,     {INS_invalid,           INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_fabs,           INS_fabs},              HW_Category_SIMDScalar,             HW_Flag_NoContainment)
HARDWARE_INTRINSIC(AdvSimd,         Add,                                       -1,              -1,           2,     {INS_add,               INS_add,            INS_add,            INS_add,            INS_add,            INS_add,            INS_add,            INS_add,            INS_fadd,           INS_invalid},           HW_Category_SimpleSIMD,             HW_Flag_NoContainment|HW_Flag_Commutative|HW_Flag_UnfixedSIMDSize)
HARDWARE_INTRINSIC(AdvSimd,         AddScalar,                                 -1,               8,           2,     {INS_add,               INS_add,            INS_add,            INS_add,            INS_add,            INS_add,            INS_add,            INS_add,            INS_fadd,           INS_fadd},              HW_Category_SIMDScalar,             HW_Flag_NoContainment|HW_Flag_Commutative)
HARDWARE_INTRINSIC(AdvSimd,         LeadingSignCount,                          -1,              -1,           1,     {INS_cls,               INS_invalid,        INS_cls,            INS_invalid,        INS_cls,            INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid},           HW_Category_SimpleSIMD,             HW_Flag_NoContainment|HW_Flag_UnfixedSIMDSize)
HARDWARE_INTRINSIC(AdvSimd,         LeadingZeroCount,                          -1,              -1,           1,     {INS_clz,               INS_clz,            INS_clz,            INS_clz,            INS_clz,            INS_clz,            INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid},           HW_Category_SimpleSIMD,             HW_Flag_NoContainment|HW_Flag_UnfixedSIMDSize)
HARDWARE_INTRINSIC(AdvSimd,         LoadVector64,                              -1,               8,           1,     {INS_ld1,               INS_ld1,            INS_ld1,            INS_ld1,            INS_ld1,            INS_ld1,            INS_ld1,            INS_ld1,            INS_ld1,            INS_ld1},               HW_Category_MemoryLoad,             HW_Flag_NoRMWSemantics)
HARDWARE_INTRINSIC(AdvSimd,         LoadVector128,                             -1,              16,           1,     {INS_ld1,               INS_ld1,            INS_ld1,            INS_ld1,            INS_ld1,            INS_ld1,            INS_ld1,            INS_ld1,            INS_ld1,            INS_ld1},               HW_Category_MemoryLoad,             HW_Flag_NoRMWSemantics)
HARDWARE_INTRINSIC(AdvSimd,         PopCount,                                  -1,              -1,           1,     {INS_cnt,               INS_cnt,            INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid},           HW_Category_SimpleSIMD,             HW_Flag_NoContainment|HW_Flag_UnfixedSIMDSize)

// ***************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************
//                 ISA              Function name                            ival        SIMD size       NumArg                                                                                                     instructions                                                                                                     Category                            Flags
//                                                                                                                   {TYP_BYTE,              TYP_UBYTE,          TYP_SHORT,          TYP_USHORT,         TYP_INT,            TYP_UINT,           TYP_LONG,           TYP_ULONG,          TYP_FLOAT,          TYP_DOUBLE}
// ***************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************
//  AdvSimd 64-bit only Intrinsics
HARDWARE_INTRINSIC(AdvSimd_Arm64,   Abs,                                       -1,              -1,           1,     {INS_invalid,           INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_abs,            INS_invalid,        INS_fabs},              HW_Category_SimpleSIMD,             HW_Flag_NoContainment|HW_Flag_UnfixedSIMDSize)
HARDWARE_INTRINSIC(AdvSimd_Arm64,   AbsScalar,                                 -1,               8,           1,     {INS_invalid,           INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_abs,            INS_invalid,        INS_invalid},           HW_Category_SIMDScalar,             HW_Flag_NoContainment)
HARDWARE_INTRINSIC(AdvSimd_Arm64,   Add,                                       -1,              16,           2,     {INS_invalid,           INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_fadd},              HW_Category_SIMDScalar,             HW_Flag_NoContainment|HW_Flag_Commutative)

// ***************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************
//                 ISA              Function name                            ival        SIMD size       NumArg                                                                                                     instructions                                                                                                     Category                            Flags
//                                                                                                                   {TYP_BYTE,              TYP_UBYTE,          TYP_SHORT,          TYP_USHORT,         TYP_INT,            TYP_UINT,           TYP_LONG,           TYP_ULONG,          TYP_FLOAT,          TYP_DOUBLE}
// ***************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************
//  AES Intrinsics
HARDWARE_INTRINSIC(Aes,             Decrypt,                                   -1,              16,           2,     {INS_invalid,           INS_aesd,           INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid},           HW_Category_SimpleSIMD,             HW_Flag_NoContainment|HW_Flag_SpecialCodeGen)
HARDWARE_INTRINSIC(Aes,             Encrypt,                                   -1,              16,           2,     {INS_invalid,           INS_aese,           INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid},           HW_Category_SimpleSIMD,             HW_Flag_NoContainment|HW_Flag_SpecialCodeGen)
HARDWARE_INTRINSIC(Aes,             InverseMixColumns,                         -1,              16,           1,     {INS_invalid,           INS_aesimc,         INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid},           HW_Category_SimpleSIMD,             HW_Flag_NoContainment)
HARDWARE_INTRINSIC(Aes,             MixColumns,                                -1,              16,           1,     {INS_invalid,           INS_aesmc,          INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid},           HW_Category_SimpleSIMD,             HW_Flag_NoContainment)

// ***************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************
//                 ISA              Function name                            ival        SIMD size       NumArg                                                                                                     instructions                                                                                                     Category                            Flags
//                                                                                                                   {TYP_BYTE,              TYP_UBYTE,          TYP_SHORT,          TYP_USHORT,         TYP_INT,            TYP_UINT,           TYP_LONG,           TYP_ULONG,          TYP_FLOAT,          TYP_DOUBLE}
// ***************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************
//  Base Intrinsics
HARDWARE_INTRINSIC(ArmBase,         LeadingZeroCount,                          -1,               0,           1,     {INS_invalid,           INS_invalid,        INS_invalid,        INS_invalid,        INS_clz,            INS_clz,            INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid},           HW_Category_Scalar,                 HW_Flag_NoContainment|HW_Flag_BaseTypeFromFirstArg)

// ***************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************
//                 ISA              Function name                            ival        SIMD size       NumArg                                                                                                     instructions                                                                                                     Category                            Flags
//                                                                                                                   {TYP_BYTE,              TYP_UBYTE,          TYP_SHORT,          TYP_USHORT,         TYP_INT,            TYP_UINT,           TYP_LONG,           TYP_ULONG,          TYP_FLOAT,          TYP_DOUBLE}
// ***************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************
//  Base 64-bit only Intrinsics
HARDWARE_INTRINSIC(ArmBase_Arm64,   LeadingSignCount,                          -1,               0,           1,     {INS_invalid,           INS_invalid,        INS_invalid,        INS_invalid,        INS_cls,            INS_invalid,        INS_cls,            INS_invalid,        INS_invalid,        INS_invalid},           HW_Category_Scalar,                 HW_Flag_NoContainment|HW_Flag_BaseTypeFromFirstArg)
HARDWARE_INTRINSIC(ArmBase_Arm64,   LeadingZeroCount,                          -1,               0,           1,     {INS_invalid,           INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_clz,            INS_clz,            INS_invalid,        INS_invalid},           HW_Category_Scalar,                 HW_Flag_NoContainment|HW_Flag_BaseTypeFromFirstArg)

// ***************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************
//                 ISA              Function name                            ival        SIMD size       NumArg                                                                                                     instructions                                                                                                     Category                            Flags
//                                                                                                                   {TYP_BYTE,              TYP_UBYTE,          TYP_SHORT,          TYP_USHORT,         TYP_INT,            TYP_UINT,           TYP_LONG,           TYP_ULONG,          TYP_FLOAT,          TYP_DOUBLE}
// ***************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************
//  CRC32 Intrinsics
HARDWARE_INTRINSIC(Crc32,           ComputeCrc32,                              -1,               0,           2,     {INS_invalid,           INS_crc32b,         INS_invalid,        INS_crc32h,         INS_invalid,        INS_crc32w,         INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid},           HW_Category_Scalar,                 HW_Flag_SpecialImport|HW_Flag_NoContainment|HW_Flag_SpecialCodeGen|HW_Flag_BaseTypeFromSecondArg)
HARDWARE_INTRINSIC(Crc32,           ComputeCrc32C,                             -1,               0,           2,     {INS_invalid,           INS_crc32cb,        INS_invalid,        INS_crc32ch,        INS_invalid,        INS_crc32cw,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid},           HW_Category_Scalar,                 HW_Flag_SpecialImport|HW_Flag_NoContainment|HW_Flag_SpecialCodeGen|HW_Flag_BaseTypeFromSecondArg)

// ***************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************
//                 ISA              Function name                            ival        SIMD size       NumArg                                                                                                     instructions                                                                                                     Category                            Flags
//                                                                                                                   {TYP_BYTE,              TYP_UBYTE,          TYP_SHORT,          TYP_USHORT,         TYP_INT,            TYP_UINT,           TYP_LONG,           TYP_ULONG,          TYP_FLOAT,          TYP_DOUBLE}
// ***************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************
//  CRC32 64-bit only Intrinsics
HARDWARE_INTRINSIC(Crc32_Arm64,     ComputeCrc32,                              -1,               0,           2,     {INS_invalid,           INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_crc32x,         INS_invalid,        INS_invalid},           HW_Category_Scalar,                 HW_Flag_SpecialImport|HW_Flag_NoContainment|HW_Flag_SpecialCodeGen|HW_Flag_BaseTypeFromSecondArg)
HARDWARE_INTRINSIC(Crc32_Arm64,     ComputeCrc32C,                             -1,               0,           2,     {INS_invalid,           INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_crc32cx,        INS_invalid,        INS_invalid},           HW_Category_Scalar,                 HW_Flag_SpecialImport|HW_Flag_NoContainment|HW_Flag_SpecialCodeGen|HW_Flag_BaseTypeFromSecondArg)

// ***************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************
//                 ISA              Function name                            ival        SIMD size       NumArg                                                                                                     instructions                                                                                                     Category                            Flags
//                                                                                                                   {TYP_BYTE,              TYP_UBYTE,          TYP_SHORT,          TYP_USHORT,         TYP_INT,            TYP_UINT,           TYP_LONG,           TYP_ULONG,          TYP_FLOAT,          TYP_DOUBLE}
// ***************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************
//  SHA1 Intrinsics
HARDWARE_INTRINSIC(Sha1,            HashUpdateChoose,                          -1,              16,           3,     {INS_invalid,           INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_sha1c,          INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid},           HW_Category_SimpleSIMD,             HW_Flag_NoContainment)
HARDWARE_INTRINSIC(Sha1,            HashUpdateMajority,                        -1,              16,           3,     {INS_invalid,           INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_sha1m,          INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid},           HW_Category_SimpleSIMD,             HW_Flag_NoContainment)
HARDWARE_INTRINSIC(Sha1,            HashUpdateParity,                          -1,              16,           3,     {INS_invalid,           INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_sha1p,          INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid},           HW_Category_SimpleSIMD,             HW_Flag_NoContainment)
HARDWARE_INTRINSIC(Sha1,            FixedRotate,                               -1,               0,           1,     {INS_invalid,           INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_sha1h,          INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid},           HW_Category_Scalar,                 HW_Flag_NoContainment)
HARDWARE_INTRINSIC(Sha1,            ScheduleUpdate0,                           -1,              16,           3,     {INS_invalid,           INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_sha1su0,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid},           HW_Category_SimpleSIMD,             HW_Flag_NoContainment)
HARDWARE_INTRINSIC(Sha1,            ScheduleUpdate1,                           -1,              16,           2,     {INS_invalid,           INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_sha1su1,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid},           HW_Category_SimpleSIMD,             HW_Flag_NoContainment)

// ***************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************
//                 ISA              Function name                            ival        SIMD size       NumArg                                                                                                     instructions                                                                                                     Category                            Flags
//                                                                                                                   {TYP_BYTE,              TYP_UBYTE,          TYP_SHORT,          TYP_USHORT,         TYP_INT,            TYP_UINT,           TYP_LONG,           TYP_ULONG,          TYP_FLOAT,          TYP_DOUBLE}
// ***************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************
//  SHA256 Intrinsics
HARDWARE_INTRINSIC(Sha256,          HashUpdate1,                               -1,              16,           3,     {INS_invalid,           INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_sha256h,        INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid},           HW_Category_SimpleSIMD,             HW_Flag_NoContainment)
HARDWARE_INTRINSIC(Sha256,          HashUpdate2,                               -1,              16,           3,     {INS_invalid,           INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_sha256h2,       INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid},           HW_Category_SimpleSIMD,             HW_Flag_NoContainment)
HARDWARE_INTRINSIC(Sha256,          ScheduleUpdate0,                           -1,              16,           2,     {INS_invalid,           INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_sha256su0,      INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid},           HW_Category_SimpleSIMD,             HW_Flag_NoContainment)
HARDWARE_INTRINSIC(Sha256,          ScheduleUpdate1,                           -1,              16,           3,     {INS_invalid,           INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid,        INS_sha256su1,      INS_invalid,        INS_invalid,        INS_invalid,        INS_invalid},           HW_Category_SimpleSIMD,             HW_Flag_NoContainment)

#endif // FEATURE_HW_INTRINSIC

#undef HARDWARE_INTRINSIC

// clang-format on
