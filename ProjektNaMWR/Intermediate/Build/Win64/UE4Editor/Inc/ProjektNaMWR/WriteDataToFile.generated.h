// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJEKTNAMWR_WriteDataToFile_generated_h
#error "WriteDataToFile.generated.h already included, missing '#pragma once' in WriteDataToFile.h"
#endif
#define PROJEKTNAMWR_WriteDataToFile_generated_h

#define ProjektNaMWR_Source_ProjektNaMWR_Public_WriteDataToFile_h_12_SPARSE_DATA
#define ProjektNaMWR_Source_ProjektNaMWR_Public_WriteDataToFile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFileLoadString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameA); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_SaveTextA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UWriteDataToFile::FileLoadString(Z_Param_FileNameA,Z_Param_Out_SaveTextA); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFileSaveString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveTextB); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UWriteDataToFile::FileSaveString(Z_Param_SaveTextB,Z_Param_FileNameB); \
		P_NATIVE_END; \
	}


#define ProjektNaMWR_Source_ProjektNaMWR_Public_WriteDataToFile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFileLoadString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameA); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_SaveTextA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UWriteDataToFile::FileLoadString(Z_Param_FileNameA,Z_Param_Out_SaveTextA); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFileSaveString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveTextB); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UWriteDataToFile::FileSaveString(Z_Param_SaveTextB,Z_Param_FileNameB); \
		P_NATIVE_END; \
	}


#define ProjektNaMWR_Source_ProjektNaMWR_Public_WriteDataToFile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWriteDataToFile(); \
	friend struct Z_Construct_UClass_UWriteDataToFile_Statics; \
public: \
	DECLARE_CLASS(UWriteDataToFile, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjektNaMWR"), NO_API) \
	DECLARE_SERIALIZER(UWriteDataToFile)


#define ProjektNaMWR_Source_ProjektNaMWR_Public_WriteDataToFile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUWriteDataToFile(); \
	friend struct Z_Construct_UClass_UWriteDataToFile_Statics; \
public: \
	DECLARE_CLASS(UWriteDataToFile, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjektNaMWR"), NO_API) \
	DECLARE_SERIALIZER(UWriteDataToFile)


#define ProjektNaMWR_Source_ProjektNaMWR_Public_WriteDataToFile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWriteDataToFile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWriteDataToFile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWriteDataToFile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWriteDataToFile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWriteDataToFile(UWriteDataToFile&&); \
	NO_API UWriteDataToFile(const UWriteDataToFile&); \
public:


#define ProjektNaMWR_Source_ProjektNaMWR_Public_WriteDataToFile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWriteDataToFile(UWriteDataToFile&&); \
	NO_API UWriteDataToFile(const UWriteDataToFile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWriteDataToFile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWriteDataToFile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWriteDataToFile)


#define ProjektNaMWR_Source_ProjektNaMWR_Public_WriteDataToFile_h_12_PRIVATE_PROPERTY_OFFSET
#define ProjektNaMWR_Source_ProjektNaMWR_Public_WriteDataToFile_h_9_PROLOG
#define ProjektNaMWR_Source_ProjektNaMWR_Public_WriteDataToFile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjektNaMWR_Source_ProjektNaMWR_Public_WriteDataToFile_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjektNaMWR_Source_ProjektNaMWR_Public_WriteDataToFile_h_12_SPARSE_DATA \
	ProjektNaMWR_Source_ProjektNaMWR_Public_WriteDataToFile_h_12_RPC_WRAPPERS \
	ProjektNaMWR_Source_ProjektNaMWR_Public_WriteDataToFile_h_12_INCLASS \
	ProjektNaMWR_Source_ProjektNaMWR_Public_WriteDataToFile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjektNaMWR_Source_ProjektNaMWR_Public_WriteDataToFile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjektNaMWR_Source_ProjektNaMWR_Public_WriteDataToFile_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjektNaMWR_Source_ProjektNaMWR_Public_WriteDataToFile_h_12_SPARSE_DATA \
	ProjektNaMWR_Source_ProjektNaMWR_Public_WriteDataToFile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjektNaMWR_Source_ProjektNaMWR_Public_WriteDataToFile_h_12_INCLASS_NO_PURE_DECLS \
	ProjektNaMWR_Source_ProjektNaMWR_Public_WriteDataToFile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJEKTNAMWR_API UClass* StaticClass<class UWriteDataToFile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjektNaMWR_Source_ProjektNaMWR_Public_WriteDataToFile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
