// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjektNaMWR/Public/WriteDataToFile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWriteDataToFile() {}
// Cross Module References
	PROJEKTNAMWR_API UClass* Z_Construct_UClass_UWriteDataToFile_NoRegister();
	PROJEKTNAMWR_API UClass* Z_Construct_UClass_UWriteDataToFile();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ProjektNaMWR();
	PROJEKTNAMWR_API UFunction* Z_Construct_UFunction_UWriteDataToFile_FileLoadString();
	PROJEKTNAMWR_API UFunction* Z_Construct_UFunction_UWriteDataToFile_FileSaveString();
// End Cross Module References
	void UWriteDataToFile::StaticRegisterNativesUWriteDataToFile()
	{
		UClass* Class = UWriteDataToFile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FileLoadString", &UWriteDataToFile::execFileLoadString },
			{ "FileSaveString", &UWriteDataToFile::execFileSaveString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWriteDataToFile_FileLoadString_Statics
	{
		struct WriteDataToFile_eventFileLoadString_Parms
		{
			FString FileNameA;
			FString SaveTextA;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveTextA;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileNameA;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWriteDataToFile_FileLoadString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WriteDataToFile_eventFileLoadString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWriteDataToFile_FileLoadString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WriteDataToFile_eventFileLoadString_Parms), &Z_Construct_UFunction_UWriteDataToFile_FileLoadString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWriteDataToFile_FileLoadString_Statics::NewProp_SaveTextA = { "SaveTextA", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WriteDataToFile_eventFileLoadString_Parms, SaveTextA), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWriteDataToFile_FileLoadString_Statics::NewProp_FileNameA = { "FileNameA", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WriteDataToFile_eventFileLoadString_Parms, FileNameA), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWriteDataToFile_FileLoadString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWriteDataToFile_FileLoadString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWriteDataToFile_FileLoadString_Statics::NewProp_SaveTextA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWriteDataToFile_FileLoadString_Statics::NewProp_FileNameA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWriteDataToFile_FileLoadString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Save" },
		{ "ModuleRelativePath", "Public/WriteDataToFile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWriteDataToFile_FileLoadString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWriteDataToFile, nullptr, "FileLoadString", nullptr, nullptr, sizeof(WriteDataToFile_eventFileLoadString_Parms), Z_Construct_UFunction_UWriteDataToFile_FileLoadString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWriteDataToFile_FileLoadString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWriteDataToFile_FileLoadString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWriteDataToFile_FileLoadString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWriteDataToFile_FileLoadString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWriteDataToFile_FileLoadString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWriteDataToFile_FileSaveString_Statics
	{
		struct WriteDataToFile_eventFileSaveString_Parms
		{
			FString SaveTextB;
			FString FileNameB;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileNameB;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveTextB;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWriteDataToFile_FileSaveString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WriteDataToFile_eventFileSaveString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWriteDataToFile_FileSaveString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WriteDataToFile_eventFileSaveString_Parms), &Z_Construct_UFunction_UWriteDataToFile_FileSaveString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWriteDataToFile_FileSaveString_Statics::NewProp_FileNameB = { "FileNameB", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WriteDataToFile_eventFileSaveString_Parms, FileNameB), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWriteDataToFile_FileSaveString_Statics::NewProp_SaveTextB = { "SaveTextB", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WriteDataToFile_eventFileSaveString_Parms, SaveTextB), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWriteDataToFile_FileSaveString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWriteDataToFile_FileSaveString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWriteDataToFile_FileSaveString_Statics::NewProp_FileNameB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWriteDataToFile_FileSaveString_Statics::NewProp_SaveTextB,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWriteDataToFile_FileSaveString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Save" },
		{ "ModuleRelativePath", "Public/WriteDataToFile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWriteDataToFile_FileSaveString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWriteDataToFile, nullptr, "FileSaveString", nullptr, nullptr, sizeof(WriteDataToFile_eventFileSaveString_Parms), Z_Construct_UFunction_UWriteDataToFile_FileSaveString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWriteDataToFile_FileSaveString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWriteDataToFile_FileSaveString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWriteDataToFile_FileSaveString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWriteDataToFile_FileSaveString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWriteDataToFile_FileSaveString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWriteDataToFile_NoRegister()
	{
		return UWriteDataToFile::StaticClass();
	}
	struct Z_Construct_UClass_UWriteDataToFile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWriteDataToFile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjektNaMWR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWriteDataToFile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWriteDataToFile_FileLoadString, "FileLoadString" }, // 1909142537
		{ &Z_Construct_UFunction_UWriteDataToFile_FileSaveString, "FileSaveString" }, // 457627239
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWriteDataToFile_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "WriteDataToFile.h" },
		{ "ModuleRelativePath", "Public/WriteDataToFile.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWriteDataToFile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWriteDataToFile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWriteDataToFile_Statics::ClassParams = {
		&UWriteDataToFile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWriteDataToFile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWriteDataToFile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWriteDataToFile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWriteDataToFile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWriteDataToFile, 1044012426);
	template<> PROJEKTNAMWR_API UClass* StaticClass<UWriteDataToFile>()
	{
		return UWriteDataToFile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWriteDataToFile(Z_Construct_UClass_UWriteDataToFile, &UWriteDataToFile::StaticClass, TEXT("/Script/ProjektNaMWR"), TEXT("UWriteDataToFile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWriteDataToFile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
