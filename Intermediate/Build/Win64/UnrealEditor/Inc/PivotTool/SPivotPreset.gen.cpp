// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PivotTool/Private/Widgets/SPivotPreset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPivotPreset() {}
// Cross Module References
	PIVOTTOOL_API UEnum* Z_Construct_UEnum_PivotTool_EPivotToolPresetType();
	UPackage* Z_Construct_UPackage__Script_PivotTool();
	PIVOTTOOL_API UEnum* Z_Construct_UEnum_PivotTool_EPivotToolPresetUIOrientation();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPivotToolPresetType;
	static UEnum* EPivotToolPresetType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPivotToolPresetType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPivotToolPresetType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PivotTool_EPivotToolPresetType, Z_Construct_UPackage__Script_PivotTool(), TEXT("EPivotToolPresetType"));
		}
		return Z_Registration_Info_UEnum_EPivotToolPresetType.OuterSingleton;
	}
	template<> PIVOTTOOL_API UEnum* StaticEnum<EPivotToolPresetType>()
	{
		return EPivotToolPresetType_StaticEnum();
	}
	struct Z_Construct_UEnum_PivotTool_EPivotToolPresetType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PivotTool_EPivotToolPresetType_Statics::Enumerators[] = {
		{ "PresetType_BoundCenter", (int64)PresetType_BoundCenter },
		{ "PresetType_Center", (int64)PresetType_Center },
		{ "PresetType_Corner", (int64)PresetType_Corner },
		{ "PresetType_Edge", (int64)PresetType_Edge },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PivotTool_EPivotToolPresetType_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Widgets/SPivotPreset.h" },
		{ "PresetType_BoundCenter.DisplayName", "Boudnig Box Center" },
		{ "PresetType_BoundCenter.Name", "PresetType_BoundCenter" },
		{ "PresetType_Center.DisplayName", "Center" },
		{ "PresetType_Center.Name", "PresetType_Center" },
		{ "PresetType_Corner.DisplayName", "Corner" },
		{ "PresetType_Corner.Name", "PresetType_Corner" },
		{ "PresetType_Edge.DisplayName", "Edge" },
		{ "PresetType_Edge.Name", "PresetType_Edge" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PivotTool_EPivotToolPresetType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PivotTool,
		nullptr,
		"EPivotToolPresetType",
		"EPivotToolPresetType",
		Z_Construct_UEnum_PivotTool_EPivotToolPresetType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PivotTool_EPivotToolPresetType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_PivotTool_EPivotToolPresetType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PivotTool_EPivotToolPresetType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PivotTool_EPivotToolPresetType()
	{
		if (!Z_Registration_Info_UEnum_EPivotToolPresetType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPivotToolPresetType.InnerSingleton, Z_Construct_UEnum_PivotTool_EPivotToolPresetType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPivotToolPresetType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPivotToolPresetUIOrientation;
	static UEnum* EPivotToolPresetUIOrientation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPivotToolPresetUIOrientation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPivotToolPresetUIOrientation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PivotTool_EPivotToolPresetUIOrientation, Z_Construct_UPackage__Script_PivotTool(), TEXT("EPivotToolPresetUIOrientation"));
		}
		return Z_Registration_Info_UEnum_EPivotToolPresetUIOrientation.OuterSingleton;
	}
	template<> PIVOTTOOL_API UEnum* StaticEnum<EPivotToolPresetUIOrientation>()
	{
		return EPivotToolPresetUIOrientation_StaticEnum();
	}
	struct Z_Construct_UEnum_PivotTool_EPivotToolPresetUIOrientation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PivotTool_EPivotToolPresetUIOrientation_Statics::Enumerators[] = {
		{ "Horizontal", (int64)Horizontal },
		{ "Vertical", (int64)Vertical },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PivotTool_EPivotToolPresetUIOrientation_Statics::Enum_MetaDataParams[] = {
		{ "Horizontal.Name", "Horizontal" },
		{ "ModuleRelativePath", "Private/Widgets/SPivotPreset.h" },
		{ "Vertical.Name", "Vertical" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PivotTool_EPivotToolPresetUIOrientation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PivotTool,
		nullptr,
		"EPivotToolPresetUIOrientation",
		"EPivotToolPresetUIOrientation",
		Z_Construct_UEnum_PivotTool_EPivotToolPresetUIOrientation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PivotTool_EPivotToolPresetUIOrientation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_PivotTool_EPivotToolPresetUIOrientation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PivotTool_EPivotToolPresetUIOrientation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PivotTool_EPivotToolPresetUIOrientation()
	{
		if (!Z_Registration_Info_UEnum_EPivotToolPresetUIOrientation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPivotToolPresetUIOrientation.InnerSingleton, Z_Construct_UEnum_PivotTool_EPivotToolPresetUIOrientation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPivotToolPresetUIOrientation.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_PivotTool_Source_PivotTool_Private_Widgets_SPivotPreset_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_PivotTool_Source_PivotTool_Private_Widgets_SPivotPreset_h_Statics::EnumInfo[] = {
		{ EPivotToolPresetType_StaticEnum, TEXT("EPivotToolPresetType"), &Z_Registration_Info_UEnum_EPivotToolPresetType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1646209U) },
		{ EPivotToolPresetUIOrientation_StaticEnum, TEXT("EPivotToolPresetUIOrientation"), &Z_Registration_Info_UEnum_EPivotToolPresetUIOrientation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4013337717U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_PivotTool_Source_PivotTool_Private_Widgets_SPivotPreset_h_3891779685(TEXT("/Script/PivotTool"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_PivotTool_Source_PivotTool_Private_Widgets_SPivotPreset_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_PivotTool_Source_PivotTool_Private_Widgets_SPivotPreset_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
