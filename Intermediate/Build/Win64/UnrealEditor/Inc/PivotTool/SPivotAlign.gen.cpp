// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PivotTool/Private/Widgets/SPivotAlign.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPivotAlign() {}
// Cross Module References
	PIVOTTOOL_API UEnum* Z_Construct_UEnum_PivotTool_EPivotAlignCoord();
	UPackage* Z_Construct_UPackage__Script_PivotTool();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPivotAlignCoord;
	static UEnum* EPivotAlignCoord_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPivotAlignCoord.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPivotAlignCoord.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PivotTool_EPivotAlignCoord, Z_Construct_UPackage__Script_PivotTool(), TEXT("EPivotAlignCoord"));
		}
		return Z_Registration_Info_UEnum_EPivotAlignCoord.OuterSingleton;
	}
	template<> PIVOTTOOL_API UEnum* StaticEnum<EPivotAlignCoord>()
	{
		return EPivotAlignCoord_StaticEnum();
	}
	struct Z_Construct_UEnum_PivotTool_EPivotAlignCoord_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PivotTool_EPivotAlignCoord_Statics::Enumerators[] = {
		{ "EPivotAlignCoord::Auto", (int64)EPivotAlignCoord::Auto },
		{ "EPivotAlignCoord::Local", (int64)EPivotAlignCoord::Local },
		{ "EPivotAlignCoord::World", (int64)EPivotAlignCoord::World },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PivotTool_EPivotAlignCoord_Statics::Enum_MetaDataParams[] = {
		{ "Auto.Name", "EPivotAlignCoord::Auto" },
		{ "Local.Name", "EPivotAlignCoord::Local" },
		{ "ModuleRelativePath", "Private/Widgets/SPivotAlign.h" },
		{ "World.Name", "EPivotAlignCoord::World" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PivotTool_EPivotAlignCoord_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PivotTool,
		nullptr,
		"EPivotAlignCoord",
		"EPivotAlignCoord",
		Z_Construct_UEnum_PivotTool_EPivotAlignCoord_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PivotTool_EPivotAlignCoord_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PivotTool_EPivotAlignCoord_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PivotTool_EPivotAlignCoord_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PivotTool_EPivotAlignCoord()
	{
		if (!Z_Registration_Info_UEnum_EPivotAlignCoord.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPivotAlignCoord.InnerSingleton, Z_Construct_UEnum_PivotTool_EPivotAlignCoord_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPivotAlignCoord.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_PivotTool_Source_PivotTool_Private_Widgets_SPivotAlign_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_PivotTool_Source_PivotTool_Private_Widgets_SPivotAlign_h_Statics::EnumInfo[] = {
		{ EPivotAlignCoord_StaticEnum, TEXT("EPivotAlignCoord"), &Z_Registration_Info_UEnum_EPivotAlignCoord, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 188820079U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_PivotTool_Source_PivotTool_Private_Widgets_SPivotAlign_h_2099574698(TEXT("/Script/PivotTool"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_PivotTool_Source_PivotTool_Private_Widgets_SPivotAlign_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_PivotTool_Source_PivotTool_Private_Widgets_SPivotAlign_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
