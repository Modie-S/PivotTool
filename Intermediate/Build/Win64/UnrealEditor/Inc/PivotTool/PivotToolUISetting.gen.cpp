// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PivotTool/Private/EdMode/PivotToolUISetting.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePivotToolUISetting() {}
// Cross Module References
	PIVOTTOOL_API UClass* Z_Construct_UClass_UPivotToolUISetting_NoRegister();
	PIVOTTOOL_API UClass* Z_Construct_UClass_UPivotToolUISetting();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_PivotTool();
// End Cross Module References
	void UPivotToolUISetting::StaticRegisterNativesUPivotToolUISetting()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPivotToolUISetting);
	UClass* Z_Construct_UClass_UPivotToolUISetting_NoRegister()
	{
		return UPivotToolUISetting::StaticClass();
	}
	struct Z_Construct_UClass_UPivotToolUISetting_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPivotToolUISetting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PivotTool,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPivotToolUISetting_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EdMode/PivotToolUISetting.h" },
		{ "ModuleRelativePath", "Private/EdMode/PivotToolUISetting.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPivotToolUISetting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPivotToolUISetting>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPivotToolUISetting_Statics::ClassParams = {
		&UPivotToolUISetting::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPivotToolUISetting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPivotToolUISetting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPivotToolUISetting()
	{
		if (!Z_Registration_Info_UClass_UPivotToolUISetting.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPivotToolUISetting.OuterSingleton, Z_Construct_UClass_UPivotToolUISetting_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPivotToolUISetting.OuterSingleton;
	}
	template<> PIVOTTOOL_API UClass* StaticClass<UPivotToolUISetting>()
	{
		return UPivotToolUISetting::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPivotToolUISetting);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_PivotTool_Source_PivotTool_Private_EdMode_PivotToolUISetting_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_PivotTool_Source_PivotTool_Private_EdMode_PivotToolUISetting_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPivotToolUISetting, UPivotToolUISetting::StaticClass, TEXT("UPivotToolUISetting"), &Z_Registration_Info_UClass_UPivotToolUISetting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPivotToolUISetting), 2694269209U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_PivotTool_Source_PivotTool_Private_EdMode_PivotToolUISetting_h_367015933(TEXT("/Script/PivotTool"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_PivotTool_Source_PivotTool_Private_EdMode_PivotToolUISetting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_PivotTool_Source_PivotTool_Private_EdMode_PivotToolUISetting_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
