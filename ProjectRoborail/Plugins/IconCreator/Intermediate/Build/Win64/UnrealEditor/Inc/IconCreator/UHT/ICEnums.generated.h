// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ICEnums.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ICONCREATOR_ICEnums_generated_h
#error "ICEnums.generated.h already included, missing '#pragma once' in ICEnums.h"
#endif
#define ICONCREATOR_ICEnums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_IconCreator_Source_IconCreator_Public_ICEnums_h


#define FOREACH_ENUM_EICASSETTYPE(op) \
	op(EICAssetType::StaticMesh) \
	op(EICAssetType::SkeletalMesh) \
	op(EICAssetType::Actor) 

enum class EICAssetType : uint8;
template<> struct TIsUEnumClass<EICAssetType> { enum { Value = true }; };
template<> ICONCREATOR_API UEnum* StaticEnum<EICAssetType>();

#define FOREACH_ENUM_EICBACKGROUNDTYPE(op) \
	op(EICBackgroundType::Transparent) \
	op(EICBackgroundType::Color) \
	op(EICBackgroundType::Texture) 

enum class EICBackgroundType : uint8;
template<> struct TIsUEnumClass<EICBackgroundType> { enum { Value = true }; };
template<> ICONCREATOR_API UEnum* StaticEnum<EICBackgroundType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
