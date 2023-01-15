// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PivotTool/Public/PivotToolBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePivotToolBlueprintLibrary() {}
// Cross Module References
	PIVOTTOOL_API UClass* Z_Construct_UClass_UPivotToolBlueprintLibrary_NoRegister();
	PIVOTTOOL_API UClass* Z_Construct_UClass_UPivotToolBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_PivotTool();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	PIVOTTOOL_API UEnum* Z_Construct_UEnum_PivotTool_EPivotPreset();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UPivotToolBlueprintLibrary::execBakeMeshPivotRelative)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_STRUCT(FVector,Z_Param_PivotLocation);
		P_GET_STRUCT(FRotator,Z_Param_PivotRotaion);
		P_GET_STRUCT(FVector,Z_Param_Scale);
		P_GET_UBOOL(Z_Param_bBakeLocation);
		P_GET_UBOOL(Z_Param_bBakeRotation);
		P_GET_UBOOL(Z_Param_bBakeScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPivotToolBlueprintLibrary::BakeMeshPivotRelative(Z_Param_StaticMesh,Z_Param_PivotLocation,Z_Param_PivotRotaion,Z_Param_Scale,Z_Param_bBakeLocation,Z_Param_bBakeRotation,Z_Param_bBakeScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPivotToolBlueprintLibrary::execBakeMeshPivot)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_ENUM(EPivotPreset,Z_Param_PivotPreset);
		P_GET_STRUCT(FRotator,Z_Param_Rotaion);
		P_GET_STRUCT(FVector,Z_Param_Scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPivotToolBlueprintLibrary::BakeMeshPivot(Z_Param_StaticMesh,EPivotPreset(Z_Param_PivotPreset),Z_Param_Rotaion,Z_Param_Scale);
		P_NATIVE_END;
	}
	void UPivotToolBlueprintLibrary::StaticRegisterNativesUPivotToolBlueprintLibrary()
	{
		UClass* Class = UPivotToolBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BakeMeshPivot", &UPivotToolBlueprintLibrary::execBakeMeshPivot },
			{ "BakeMeshPivotRelative", &UPivotToolBlueprintLibrary::execBakeMeshPivotRelative },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivot_Statics
	{
		struct PivotToolBlueprintLibrary_eventBakeMeshPivot_Parms
		{
			UStaticMesh* StaticMesh;
			EPivotPreset PivotPreset;
			FRotator Rotaion;
			FVector Scale;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PivotPreset_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PivotPreset;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotaion;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivot_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PivotToolBlueprintLibrary_eventBakeMeshPivot_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivot_Statics::NewProp_PivotPreset_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivot_Statics::NewProp_PivotPreset = { "PivotPreset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PivotToolBlueprintLibrary_eventBakeMeshPivot_Parms, PivotPreset), Z_Construct_UEnum_PivotTool_EPivotPreset, METADATA_PARAMS(nullptr, 0) }; // 909951346
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivot_Statics::NewProp_Rotaion = { "Rotaion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PivotToolBlueprintLibrary_eventBakeMeshPivot_Parms, Rotaion), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivot_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PivotToolBlueprintLibrary_eventBakeMeshPivot_Parms, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivot_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivot_Statics::NewProp_PivotPreset_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivot_Statics::NewProp_PivotPreset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivot_Statics::NewProp_Rotaion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivot_Statics::NewProp_Scale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Bake Pivot" },
		{ "CPP_Default_PivotPreset", "BoundingBoxCenterBottom" },
		{ "CPP_Default_Rotaion", "" },
		{ "CPP_Default_Scale", "1.000000,1.000000,1.000000" },
		{ "ModuleRelativePath", "Public/PivotToolBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPivotToolBlueprintLibrary, nullptr, "BakeMeshPivot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivot_Statics::PivotToolBlueprintLibrary_eventBakeMeshPivot_Parms), Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivotRelative_Statics
	{
		struct PivotToolBlueprintLibrary_eventBakeMeshPivotRelative_Parms
		{
			UStaticMesh* StaticMesh;
			FVector PivotLocation;
			FRotator PivotRotaion;
			FVector Scale;
			bool bBakeLocation;
			bool bBakeRotation;
			bool bBakeScale;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PivotLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PivotRotaion;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
		static void NewProp_bBakeLocation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBakeLocation;
		static void NewProp_bBakeRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBakeRotation;
		static void NewProp_bBakeScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBakeScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivotRelative_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PivotToolBlueprintLibrary_eventBakeMeshPivotRelative_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivotRelative_Statics::NewProp_PivotLocation = { "PivotLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PivotToolBlueprintLibrary_eventBakeMeshPivotRelative_Parms, PivotLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivotRelative_Statics::NewProp_PivotRotaion = { "PivotRotaion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PivotToolBlueprintLibrary_eventBakeMeshPivotRelative_Parms, PivotRotaion), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivotRelative_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PivotToolBlueprintLibrary_eventBakeMeshPivotRelative_Parms, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivotRelative_Statics::NewProp_bBakeLocation_SetBit(void* Obj)
	{
		((PivotToolBlueprintLibrary_eventBakeMeshPivotRelative_Parms*)Obj)->bBakeLocation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivotRelative_Statics::NewProp_bBakeLocation = { "bBakeLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PivotToolBlueprintLibrary_eventBakeMeshPivotRelative_Parms), &Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivotRelative_Statics::NewProp_bBakeLocation_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivotRelative_Statics::NewProp_bBakeRotation_SetBit(void* Obj)
	{
		((PivotToolBlueprintLibrary_eventBakeMeshPivotRelative_Parms*)Obj)->bBakeRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivotRelative_Statics::NewProp_bBakeRotation = { "bBakeRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PivotToolBlueprintLibrary_eventBakeMeshPivotRelative_Parms), &Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivotRelative_Statics::NewProp_bBakeRotation_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivotRelative_Statics::NewProp_bBakeScale_SetBit(void* Obj)
	{
		((PivotToolBlueprintLibrary_eventBakeMeshPivotRelative_Parms*)Obj)->bBakeScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivotRelative_Statics::NewProp_bBakeScale = { "bBakeScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PivotToolBlueprintLibrary_eventBakeMeshPivotRelative_Parms), &Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivotRelative_Statics::NewProp_bBakeScale_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivotRelative_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivotRelative_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivotRelative_Statics::NewProp_PivotLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivotRelative_Statics::NewProp_PivotRotaion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivotRelative_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivotRelative_Statics::NewProp_bBakeLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivotRelative_Statics::NewProp_bBakeRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivotRelative_Statics::NewProp_bBakeScale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivotRelative_Statics::Function_MetaDataParams[] = {
		{ "Category", "Bake Pivot" },
		{ "CPP_Default_bBakeLocation", "true" },
		{ "CPP_Default_bBakeRotation", "false" },
		{ "CPP_Default_bBakeScale", "false" },
		{ "CPP_Default_PivotLocation", "" },
		{ "CPP_Default_PivotRotaion", "" },
		{ "CPP_Default_Scale", "1.000000,1.000000,1.000000" },
		{ "ModuleRelativePath", "Public/PivotToolBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivotRelative_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPivotToolBlueprintLibrary, nullptr, "BakeMeshPivotRelative", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivotRelative_Statics::PivotToolBlueprintLibrary_eventBakeMeshPivotRelative_Parms), Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivotRelative_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivotRelative_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivotRelative_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivotRelative_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivotRelative()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivotRelative_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPivotToolBlueprintLibrary);
	UClass* Z_Construct_UClass_UPivotToolBlueprintLibrary_NoRegister()
	{
		return UPivotToolBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UPivotToolBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPivotToolBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PivotTool,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPivotToolBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivot, "BakeMeshPivot" }, // 3915463404
		{ &Z_Construct_UFunction_UPivotToolBlueprintLibrary_BakeMeshPivotRelative, "BakeMeshPivotRelative" }, // 3724811874
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPivotToolBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PivotToolBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/PivotToolBlueprintLibrary.h" },
		{ "ScriptName", "PivotToolLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPivotToolBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPivotToolBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPivotToolBlueprintLibrary_Statics::ClassParams = {
		&UPivotToolBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPivotToolBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPivotToolBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPivotToolBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UPivotToolBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPivotToolBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UPivotToolBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPivotToolBlueprintLibrary.OuterSingleton;
	}
	template<> PIVOTTOOL_API UClass* StaticClass<UPivotToolBlueprintLibrary>()
	{
		return UPivotToolBlueprintLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPivotToolBlueprintLibrary);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_PivotTool_Source_PivotTool_Public_PivotToolBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_PivotTool_Source_PivotTool_Public_PivotToolBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPivotToolBlueprintLibrary, UPivotToolBlueprintLibrary::StaticClass, TEXT("UPivotToolBlueprintLibrary"), &Z_Registration_Info_UClass_UPivotToolBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPivotToolBlueprintLibrary), 3737053710U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_PivotTool_Source_PivotTool_Public_PivotToolBlueprintLibrary_h_3912553934(TEXT("/Script/PivotTool"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_PivotTool_Source_PivotTool_Public_PivotToolBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_PivotTool_Source_PivotTool_Public_PivotToolBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
