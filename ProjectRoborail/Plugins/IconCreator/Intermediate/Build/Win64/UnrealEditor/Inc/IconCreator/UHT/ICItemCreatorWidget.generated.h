// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ICItemCreatorWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMeshComponent;
class UTexture2D;
class UTextureRenderTarget2D;
#ifdef ICONCREATOR_ICItemCreatorWidget_generated_h
#error "ICItemCreatorWidget.generated.h already included, missing '#pragma once' in ICItemCreatorWidget.h"
#endif
#define ICONCREATOR_ICItemCreatorWidget_generated_h

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_IconCreator_Source_IconCreator_Public_ICItemCreatorWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRefreshAnimPosition); \
	DECLARE_FUNCTION(execCreateTextureFromRenderTarget);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_IconCreator_Source_IconCreator_Public_ICItemCreatorWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUICItemCreatorWidget(); \
	friend struct Z_Construct_UClass_UICItemCreatorWidget_Statics; \
public: \
	DECLARE_CLASS(UICItemCreatorWidget, UEditorUtilityWidget, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IconCreator"), NO_API) \
	DECLARE_SERIALIZER(UICItemCreatorWidget)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_IconCreator_Source_IconCreator_Public_ICItemCreatorWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UICItemCreatorWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UICItemCreatorWidget(UICItemCreatorWidget&&); \
	UICItemCreatorWidget(const UICItemCreatorWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UICItemCreatorWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UICItemCreatorWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UICItemCreatorWidget) \
	NO_API virtual ~UICItemCreatorWidget();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_IconCreator_Source_IconCreator_Public_ICItemCreatorWidget_h_13_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_IconCreator_Source_IconCreator_Public_ICItemCreatorWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_IconCreator_Source_IconCreator_Public_ICItemCreatorWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_IconCreator_Source_IconCreator_Public_ICItemCreatorWidget_h_16_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_IconCreator_Source_IconCreator_Public_ICItemCreatorWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ICONCREATOR_API UClass* StaticClass<class UICItemCreatorWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_IconCreator_Source_IconCreator_Public_ICItemCreatorWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
