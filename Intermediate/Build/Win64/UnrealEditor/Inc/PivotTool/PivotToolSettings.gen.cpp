// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PivotTool/Private/EdMode/PivotToolSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePivotToolSettings() {}
// Cross Module References
	PIVOTTOOL_API UEnum* Z_Construct_UEnum_PivotTool_EPivotToolPreviewShape();
	UPackage* Z_Construct_UPackage__Script_PivotTool();
	PIVOTTOOL_API UClass* Z_Construct_UClass_UPivotToolSettings_NoRegister();
	PIVOTTOOL_API UClass* Z_Construct_UClass_UPivotToolSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPivotToolPreviewShape;
	static UEnum* EPivotToolPreviewShape_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPivotToolPreviewShape.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPivotToolPreviewShape.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PivotTool_EPivotToolPreviewShape, Z_Construct_UPackage__Script_PivotTool(), TEXT("EPivotToolPreviewShape"));
		}
		return Z_Registration_Info_UEnum_EPivotToolPreviewShape.OuterSingleton;
	}
	template<> PIVOTTOOL_API UEnum* StaticEnum<EPivotToolPreviewShape>()
	{
		return EPivotToolPreviewShape_StaticEnum();
	}
	struct Z_Construct_UEnum_PivotTool_EPivotToolPreviewShape_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PivotTool_EPivotToolPreviewShape_Statics::Enumerators[] = {
		{ "EPivotToolPreviewShape::None", (int64)EPivotToolPreviewShape::None },
		{ "EPivotToolPreviewShape::Point", (int64)EPivotToolPreviewShape::Point },
		{ "EPivotToolPreviewShape::Sphere", (int64)EPivotToolPreviewShape::Sphere },
		{ "EPivotToolPreviewShape::Coordinate", (int64)EPivotToolPreviewShape::Coordinate },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PivotTool_EPivotToolPreviewShape_Statics::Enum_MetaDataParams[] = {
		{ "Coordinate.Name", "EPivotToolPreviewShape::Coordinate" },
		{ "ModuleRelativePath", "Private/EdMode/PivotToolSettings.h" },
		{ "None.Name", "EPivotToolPreviewShape::None" },
		{ "Point.Name", "EPivotToolPreviewShape::Point" },
		{ "Sphere.Name", "EPivotToolPreviewShape::Sphere" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PivotTool_EPivotToolPreviewShape_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PivotTool,
		nullptr,
		"EPivotToolPreviewShape",
		"EPivotToolPreviewShape",
		Z_Construct_UEnum_PivotTool_EPivotToolPreviewShape_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PivotTool_EPivotToolPreviewShape_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PivotTool_EPivotToolPreviewShape_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PivotTool_EPivotToolPreviewShape_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PivotTool_EPivotToolPreviewShape()
	{
		if (!Z_Registration_Info_UEnum_EPivotToolPreviewShape.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPivotToolPreviewShape.InnerSingleton, Z_Construct_UEnum_PivotTool_EPivotToolPreviewShape_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPivotToolPreviewShape.InnerSingleton;
	}
	void UPivotToolSettings::StaticRegisterNativesUPivotToolSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPivotToolSettings);
	UClass* Z_Construct_UClass_UPivotToolSettings_NoRegister()
	{
		return UPivotToolSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPivotToolSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayPivotPresetPreview_MetaData[];
#endif
		static void NewProp_bDisplayPivotPresetPreview_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayPivotPresetPreview;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PivotPresetPreviewShape_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotPresetPreviewShape_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PivotPresetPreviewShape;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotPresetPreviewColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PivotPresetPreviewColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPivotToolSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PivotTool,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPivotToolSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EdMode/PivotToolSettings.h" },
		{ "ModuleRelativePath", "Private/EdMode/PivotToolSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPivotToolSettings_Statics::NewProp_bDisplayPivotPresetPreview_MetaData[] = {
		{ "Category", "PivotPreset" },
		{ "ModuleRelativePath", "Private/EdMode/PivotToolSettings.h" },
	};
#endif
	void Z_Construct_UClass_UPivotToolSettings_Statics::NewProp_bDisplayPivotPresetPreview_SetBit(void* Obj)
	{
		((UPivotToolSettings*)Obj)->bDisplayPivotPresetPreview = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPivotToolSettings_Statics::NewProp_bDisplayPivotPresetPreview = { "bDisplayPivotPresetPreview", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPivotToolSettings), &Z_Construct_UClass_UPivotToolSettings_Statics::NewProp_bDisplayPivotPresetPreview_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPivotToolSettings_Statics::NewProp_bDisplayPivotPresetPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPivotToolSettings_Statics::NewProp_bDisplayPivotPresetPreview_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPivotToolSettings_Statics::NewProp_PivotPresetPreviewShape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPivotToolSettings_Statics::NewProp_PivotPresetPreviewShape_MetaData[] = {
		{ "Category", "PivotPreset" },
		{ "ModuleRelativePath", "Private/EdMode/PivotToolSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPivotToolSettings_Statics::NewProp_PivotPresetPreviewShape = { "PivotPresetPreviewShape", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPivotToolSettings, PivotPresetPreviewShape), Z_Construct_UEnum_PivotTool_EPivotToolPreviewShape, METADATA_PARAMS(Z_Construct_UClass_UPivotToolSettings_Statics::NewProp_PivotPresetPreviewShape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPivotToolSettings_Statics::NewProp_PivotPresetPreviewShape_MetaData)) }; // 1214684611
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPivotToolSettings_Statics::NewProp_PivotPresetPreviewColor_MetaData[] = {
		{ "Category", "PivotPreset" },
		{ "ModuleRelativePath", "Private/EdMode/PivotToolSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPivotToolSettings_Statics::NewProp_PivotPresetPreviewColor = { "PivotPresetPreviewColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPivotToolSettings, PivotPresetPreviewColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UPivotToolSettings_Statics::NewProp_PivotPresetPreviewColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPivotToolSettings_Statics::NewProp_PivotPresetPreviewColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPivotToolSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPivotToolSettings_Statics::NewProp_bDisplayPivotPresetPreview,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPivotToolSettings_Statics::NewProp_PivotPresetPreviewShape_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPivotToolSettings_Statics::NewProp_PivotPresetPreviewShape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPivotToolSettings_Statics::NewProp_PivotPresetPreviewColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPivotToolSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPivotToolSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPivotToolSettings_Statics::ClassParams = {
		&UPivotToolSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPivotToolSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPivotToolSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UPivotToolSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPivotToolSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPivotToolSettings()
	{
		if (!Z_Registration_Info_UClass_UPivotToolSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPivotToolSettings.OuterSingleton, Z_Construct_UClass_UPivotToolSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPivotToolSettings.OuterSingleton;
	}
	template<> PIVOTTOOL_API UClass* StaticClass<UPivotToolSettings>()
	{
		return UPivotToolSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPivotToolSettings);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_PivotTool_Source_PivotTool_Private_EdMode_PivotToolSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_PivotTool_Source_PivotTool_Private_EdMode_PivotToolSettings_h_Statics::EnumInfo[] = {
		{ EPivotToolPreviewShape_StaticEnum, TEXT("EPivotToolPreviewShape"), &Z_Registration_Info_UEnum_EPivotToolPreviewShape, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1214684611U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_PivotTool_Source_PivotTool_Private_EdMode_PivotToolSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPivotToolSettings, UPivotToolSettings::StaticClass, TEXT("UPivotToolSettings"), &Z_Registration_Info_UClass_UPivotToolSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPivotToolSettings), 1091400792U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_PivotTool_Source_PivotTool_Private_EdMode_PivotToolSettings_h_90854109(TEXT("/Script/PivotTool"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_PivotTool_Source_PivotTool_Private_EdMode_PivotToolSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_PivotTool_Source_PivotTool_Private_EdMode_PivotToolSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_PivotTool_Source_PivotTool_Private_EdMode_PivotToolSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_PivotTool_Source_PivotTool_Private_EdMode_PivotToolSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
