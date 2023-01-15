// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PivotTool/Public/PivotToolTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePivotToolTypes() {}
// Cross Module References
	PIVOTTOOL_API UEnum* Z_Construct_UEnum_PivotTool_EPivotPreset();
	UPackage* Z_Construct_UPackage__Script_PivotTool();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPivotPreset;
	static UEnum* EPivotPreset_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPivotPreset.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPivotPreset.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PivotTool_EPivotPreset, Z_Construct_UPackage__Script_PivotTool(), TEXT("EPivotPreset"));
		}
		return Z_Registration_Info_UEnum_EPivotPreset.OuterSingleton;
	}
	template<> PIVOTTOOL_API UEnum* StaticEnum<EPivotPreset>()
	{
		return EPivotPreset_StaticEnum();
	}
	struct Z_Construct_UEnum_PivotTool_EPivotPreset_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PivotTool_EPivotPreset_Statics::Enumerators[] = {
		{ "EPivotPreset::BoundingBoxCenter", (int64)EPivotPreset::BoundingBoxCenter },
		{ "EPivotPreset::BoundingBoxCenterTop", (int64)EPivotPreset::BoundingBoxCenterTop },
		{ "EPivotPreset::BoundingBoxCenterBottom", (int64)EPivotPreset::BoundingBoxCenterBottom },
		{ "EPivotPreset::BoundingBoxCenterLeft", (int64)EPivotPreset::BoundingBoxCenterLeft },
		{ "EPivotPreset::BoundingBoxCenterRight", (int64)EPivotPreset::BoundingBoxCenterRight },
		{ "EPivotPreset::BoundingBoxCenterFront", (int64)EPivotPreset::BoundingBoxCenterFront },
		{ "EPivotPreset::BoundingBoxCenterBack", (int64)EPivotPreset::BoundingBoxCenterBack },
		{ "EPivotPreset::BoundingBoxCornerTop1", (int64)EPivotPreset::BoundingBoxCornerTop1 },
		{ "EPivotPreset::BoundingBoxCornerTop2", (int64)EPivotPreset::BoundingBoxCornerTop2 },
		{ "EPivotPreset::BoundingBoxCornerTop3", (int64)EPivotPreset::BoundingBoxCornerTop3 },
		{ "EPivotPreset::BoundingBoxCornerTop4", (int64)EPivotPreset::BoundingBoxCornerTop4 },
		{ "EPivotPreset::BoundingBoxCornerBottom1", (int64)EPivotPreset::BoundingBoxCornerBottom1 },
		{ "EPivotPreset::BoundingBoxCornerBottom2", (int64)EPivotPreset::BoundingBoxCornerBottom2 },
		{ "EPivotPreset::BoundingBoxCornerBottom3", (int64)EPivotPreset::BoundingBoxCornerBottom3 },
		{ "EPivotPreset::BoundingBoxCornerBottom4", (int64)EPivotPreset::BoundingBoxCornerBottom4 },
		{ "EPivotPreset::BoundingBoxEdgeTop1", (int64)EPivotPreset::BoundingBoxEdgeTop1 },
		{ "EPivotPreset::BoundingBoxEdgeTop2", (int64)EPivotPreset::BoundingBoxEdgeTop2 },
		{ "EPivotPreset::BoundingBoxEdgeTop3", (int64)EPivotPreset::BoundingBoxEdgeTop3 },
		{ "EPivotPreset::BoundingBoxEdgeTop4", (int64)EPivotPreset::BoundingBoxEdgeTop4 },
		{ "EPivotPreset::BoundingBoxEdgeMid1", (int64)EPivotPreset::BoundingBoxEdgeMid1 },
		{ "EPivotPreset::BoundingBoxEdgeMid2", (int64)EPivotPreset::BoundingBoxEdgeMid2 },
		{ "EPivotPreset::BoundingBoxEdgeMid3", (int64)EPivotPreset::BoundingBoxEdgeMid3 },
		{ "EPivotPreset::BoundingBoxEdgeMid4", (int64)EPivotPreset::BoundingBoxEdgeMid4 },
		{ "EPivotPreset::BoundingBoxEdgeBottom1", (int64)EPivotPreset::BoundingBoxEdgeBottom1 },
		{ "EPivotPreset::BoundingBoxEdgeBottom2", (int64)EPivotPreset::BoundingBoxEdgeBottom2 },
		{ "EPivotPreset::BoundingBoxEdgeBottom3", (int64)EPivotPreset::BoundingBoxEdgeBottom3 },
		{ "EPivotPreset::BoundingBoxEdgeBottom4", (int64)EPivotPreset::BoundingBoxEdgeBottom4 },
		{ "EPivotPreset::MAX", (int64)EPivotPreset::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PivotTool_EPivotPreset_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BoundingBoxCenter.DisplayName", "Center" },
		{ "BoundingBoxCenter.Name", "EPivotPreset::BoundingBoxCenter" },
		{ "BoundingBoxCenterBack.DisplayName", "CenterBack" },
		{ "BoundingBoxCenterBack.Name", "EPivotPreset::BoundingBoxCenterBack" },
		{ "BoundingBoxCenterBottom.DisplayName", "CenterBottom" },
		{ "BoundingBoxCenterBottom.Name", "EPivotPreset::BoundingBoxCenterBottom" },
		{ "BoundingBoxCenterFront.DisplayName", "CenterFront" },
		{ "BoundingBoxCenterFront.Name", "EPivotPreset::BoundingBoxCenterFront" },
		{ "BoundingBoxCenterLeft.DisplayName", "CenterLeft" },
		{ "BoundingBoxCenterLeft.Name", "EPivotPreset::BoundingBoxCenterLeft" },
		{ "BoundingBoxCenterRight.DisplayName", "CenterRight" },
		{ "BoundingBoxCenterRight.Name", "EPivotPreset::BoundingBoxCenterRight" },
		{ "BoundingBoxCenterTop.DisplayName", "CenterTop" },
		{ "BoundingBoxCenterTop.Name", "EPivotPreset::BoundingBoxCenterTop" },
		{ "BoundingBoxCornerBottom1.DisplayName", "BottomLeftFront" },
		{ "BoundingBoxCornerBottom1.Name", "EPivotPreset::BoundingBoxCornerBottom1" },
		{ "BoundingBoxCornerBottom2.DisplayName", "BottomLeftBack" },
		{ "BoundingBoxCornerBottom2.Name", "EPivotPreset::BoundingBoxCornerBottom2" },
		{ "BoundingBoxCornerBottom3.DisplayName", "BottomRightFront" },
		{ "BoundingBoxCornerBottom3.Name", "EPivotPreset::BoundingBoxCornerBottom3" },
		{ "BoundingBoxCornerBottom4.DisplayName", "BottomRightBack" },
		{ "BoundingBoxCornerBottom4.Name", "EPivotPreset::BoundingBoxCornerBottom4" },
		{ "BoundingBoxCornerTop1.Comment", "/*******************\n\x09   2 _________ 3\n\x09    /        /\n\x09   /        /\n\x09""1 /________/ 4\n\n\x09******************/" },
		{ "BoundingBoxCornerTop1.DisplayName", "TopLeftFront" },
		{ "BoundingBoxCornerTop1.Name", "EPivotPreset::BoundingBoxCornerTop1" },
		{ "BoundingBoxCornerTop1.ToolTip", "2 _________ 3\n /        /\n/        /\n1 /________/ 4" },
		{ "BoundingBoxCornerTop2.DisplayName", "TopLeftBack" },
		{ "BoundingBoxCornerTop2.Name", "EPivotPreset::BoundingBoxCornerTop2" },
		{ "BoundingBoxCornerTop3.DisplayName", "TopRightFront" },
		{ "BoundingBoxCornerTop3.Name", "EPivotPreset::BoundingBoxCornerTop3" },
		{ "BoundingBoxCornerTop4.DisplayName", "TopRightBack" },
		{ "BoundingBoxCornerTop4.Name", "EPivotPreset::BoundingBoxCornerTop4" },
		{ "BoundingBoxEdgeBottom1.DisplayName", "BottomEdgeLeft" },
		{ "BoundingBoxEdgeBottom1.Name", "EPivotPreset::BoundingBoxEdgeBottom1" },
		{ "BoundingBoxEdgeBottom2.DisplayName", "BottomEdgeBack" },
		{ "BoundingBoxEdgeBottom2.Name", "EPivotPreset::BoundingBoxEdgeBottom2" },
		{ "BoundingBoxEdgeBottom3.DisplayName", "BottomEdgeRight" },
		{ "BoundingBoxEdgeBottom3.Name", "EPivotPreset::BoundingBoxEdgeBottom3" },
		{ "BoundingBoxEdgeBottom4.DisplayName", "BottomEdgeFront" },
		{ "BoundingBoxEdgeBottom4.Name", "EPivotPreset::BoundingBoxEdgeBottom4" },
		{ "BoundingBoxEdgeMid1.DisplayName", "MidEdgeLeft" },
		{ "BoundingBoxEdgeMid1.Name", "EPivotPreset::BoundingBoxEdgeMid1" },
		{ "BoundingBoxEdgeMid2.DisplayName", "MidEdgeBack" },
		{ "BoundingBoxEdgeMid2.Name", "EPivotPreset::BoundingBoxEdgeMid2" },
		{ "BoundingBoxEdgeMid3.DisplayName", "MidEdgeRight" },
		{ "BoundingBoxEdgeMid3.Name", "EPivotPreset::BoundingBoxEdgeMid3" },
		{ "BoundingBoxEdgeMid4.DisplayName", "MidEdgeFront" },
		{ "BoundingBoxEdgeMid4.Name", "EPivotPreset::BoundingBoxEdgeMid4" },
		{ "BoundingBoxEdgeTop1.Comment", "/*******************\n\x09    ___ 2____\n\x09   /        /\n\x09  1        3\n\x09 /___ 4 __/ \n\n\x09******************/" },
		{ "BoundingBoxEdgeTop1.DisplayName", "TopEdgeLeft" },
		{ "BoundingBoxEdgeTop1.Name", "EPivotPreset::BoundingBoxEdgeTop1" },
		{ "BoundingBoxEdgeTop1.ToolTip", "___ 2____\n/        /\n1        3\n/___ 4 __/" },
		{ "BoundingBoxEdgeTop2.DisplayName", "TopEdgeBack" },
		{ "BoundingBoxEdgeTop2.Name", "EPivotPreset::BoundingBoxEdgeTop2" },
		{ "BoundingBoxEdgeTop3.DisplayName", "TopEdgeRight" },
		{ "BoundingBoxEdgeTop3.Name", "EPivotPreset::BoundingBoxEdgeTop3" },
		{ "BoundingBoxEdgeTop4.DisplayName", "TopEdgeFront" },
		{ "BoundingBoxEdgeTop4.Name", "EPivotPreset::BoundingBoxEdgeTop4" },
		{ "MAX.Name", "EPivotPreset::MAX" },
		{ "ModuleRelativePath", "Public/PivotToolTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PivotTool_EPivotPreset_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PivotTool,
		nullptr,
		"EPivotPreset",
		"EPivotPreset",
		Z_Construct_UEnum_PivotTool_EPivotPreset_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PivotTool_EPivotPreset_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PivotTool_EPivotPreset_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PivotTool_EPivotPreset_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PivotTool_EPivotPreset()
	{
		if (!Z_Registration_Info_UEnum_EPivotPreset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPivotPreset.InnerSingleton, Z_Construct_UEnum_PivotTool_EPivotPreset_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPivotPreset.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_PivotTool_Source_PivotTool_Public_PivotToolTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_PivotTool_Source_PivotTool_Public_PivotToolTypes_h_Statics::EnumInfo[] = {
		{ EPivotPreset_StaticEnum, TEXT("EPivotPreset"), &Z_Registration_Info_UEnum_EPivotPreset, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 909951346U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_PivotTool_Source_PivotTool_Public_PivotToolTypes_h_465657136(TEXT("/Script/PivotTool"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_PivotTool_Source_PivotTool_Public_PivotToolTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_PivotTool_Source_PivotTool_Public_PivotToolTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
