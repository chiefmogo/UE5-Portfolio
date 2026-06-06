// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IconCreator/Public/ICEnums.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeICEnums() {}

// Begin Cross Module References
ICONCREATOR_API UEnum* Z_Construct_UEnum_IconCreator_EICAssetType();
ICONCREATOR_API UEnum* Z_Construct_UEnum_IconCreator_EICBackgroundType();
UPackage* Z_Construct_UPackage__Script_IconCreator();
// End Cross Module References

// Begin Enum EICAssetType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EICAssetType;
static UEnum* EICAssetType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EICAssetType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EICAssetType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_IconCreator_EICAssetType, (UObject*)Z_Construct_UPackage__Script_IconCreator(), TEXT("EICAssetType"));
	}
	return Z_Registration_Info_UEnum_EICAssetType.OuterSingleton;
}
template<> ICONCREATOR_API UEnum* StaticEnum<EICAssetType>()
{
	return EICAssetType_StaticEnum();
}
struct Z_Construct_UEnum_IconCreator_EICAssetType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Actor.Name", "EICAssetType::Actor" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ICEnums.h" },
		{ "SkeletalMesh.DisplayName", "Skeletal Mesh" },
		{ "SkeletalMesh.Name", "EICAssetType::SkeletalMesh" },
		{ "StaticMesh.DisplayName", "Static Mesh" },
		{ "StaticMesh.Name", "EICAssetType::StaticMesh" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EICAssetType::StaticMesh", (int64)EICAssetType::StaticMesh },
		{ "EICAssetType::SkeletalMesh", (int64)EICAssetType::SkeletalMesh },
		{ "EICAssetType::Actor", (int64)EICAssetType::Actor },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_IconCreator_EICAssetType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_IconCreator,
	nullptr,
	"EICAssetType",
	"EICAssetType",
	Z_Construct_UEnum_IconCreator_EICAssetType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_IconCreator_EICAssetType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_IconCreator_EICAssetType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_IconCreator_EICAssetType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_IconCreator_EICAssetType()
{
	if (!Z_Registration_Info_UEnum_EICAssetType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EICAssetType.InnerSingleton, Z_Construct_UEnum_IconCreator_EICAssetType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EICAssetType.InnerSingleton;
}
// End Enum EICAssetType

// Begin Enum EICBackgroundType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EICBackgroundType;
static UEnum* EICBackgroundType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EICBackgroundType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EICBackgroundType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_IconCreator_EICBackgroundType, (UObject*)Z_Construct_UPackage__Script_IconCreator(), TEXT("EICBackgroundType"));
	}
	return Z_Registration_Info_UEnum_EICBackgroundType.OuterSingleton;
}
template<> ICONCREATOR_API UEnum* StaticEnum<EICBackgroundType>()
{
	return EICBackgroundType_StaticEnum();
}
struct Z_Construct_UEnum_IconCreator_EICBackgroundType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Color.Name", "EICBackgroundType::Color" },
		{ "ModuleRelativePath", "Public/ICEnums.h" },
		{ "Texture.Name", "EICBackgroundType::Texture" },
		{ "Transparent.Name", "EICBackgroundType::Transparent" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EICBackgroundType::Transparent", (int64)EICBackgroundType::Transparent },
		{ "EICBackgroundType::Color", (int64)EICBackgroundType::Color },
		{ "EICBackgroundType::Texture", (int64)EICBackgroundType::Texture },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_IconCreator_EICBackgroundType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_IconCreator,
	nullptr,
	"EICBackgroundType",
	"EICBackgroundType",
	Z_Construct_UEnum_IconCreator_EICBackgroundType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_IconCreator_EICBackgroundType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_IconCreator_EICBackgroundType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_IconCreator_EICBackgroundType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_IconCreator_EICBackgroundType()
{
	if (!Z_Registration_Info_UEnum_EICBackgroundType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EICBackgroundType.InnerSingleton, Z_Construct_UEnum_IconCreator_EICBackgroundType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EICBackgroundType.InnerSingleton;
}
// End Enum EICBackgroundType

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_IconCreator_Source_IconCreator_Public_ICEnums_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EICAssetType_StaticEnum, TEXT("EICAssetType"), &Z_Registration_Info_UEnum_EICAssetType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2446129730U) },
		{ EICBackgroundType_StaticEnum, TEXT("EICBackgroundType"), &Z_Registration_Info_UEnum_EICBackgroundType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2586094240U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_IconCreator_Source_IconCreator_Public_ICEnums_h_1638516637(TEXT("/Script/IconCreator"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_IconCreator_Source_IconCreator_Public_ICEnums_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_IconCreator_Source_IconCreator_Public_ICEnums_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
