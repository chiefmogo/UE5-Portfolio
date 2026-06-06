// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IconCreator/Public/ICItemCreatorWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeICItemCreatorWidget() {}

// Begin Cross Module References
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureCompressionSettings();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureGroup();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureMipGenSettings();
ICONCREATOR_API UClass* Z_Construct_UClass_UICItemCreatorWidget();
ICONCREATOR_API UClass* Z_Construct_UClass_UICItemCreatorWidget_NoRegister();
ICONCREATOR_API UEnum* Z_Construct_UEnum_IconCreator_EICAssetType();
ICONCREATOR_API UEnum* Z_Construct_UEnum_IconCreator_EICBackgroundType();
UPackage* Z_Construct_UPackage__Script_IconCreator();
// End Cross Module References

// Begin Class UICItemCreatorWidget Function CreateTextureFromRenderTarget
struct Z_Construct_UFunction_UICItemCreatorWidget_CreateTextureFromRenderTarget_Statics
{
	struct ICItemCreatorWidget_eventCreateTextureFromRenderTarget_Parms
	{
		UTextureRenderTarget2D* InRenderTarget;
		FString InName;
		FString InSavePath;
		TEnumAsByte<TextureCompressionSettings> InCompressionSettings;
		TEnumAsByte<TextureMipGenSettings> InMipSettings;
		TEnumAsByte<TextureGroup> InTextureGroup;
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Icon Creator" },
		{ "Comment", "/**\n\x09* Creates a new Static Texture from a Render Target 2D.\n\x09* Only works in the editor\n\x09*/" },
		{ "CPP_Default_InCompressionSettings", "TC_EditorIcon" },
		{ "CPP_Default_InMipSettings", "TMGS_FromTextureGroup" },
		{ "CPP_Default_InTextureGroup", "TEXTUREGROUP_UI" },
		{ "ModuleRelativePath", "Public/ICItemCreatorWidget.h" },
		{ "ToolTip", "Creates a new Static Texture from a Render Target 2D.\nOnly works in the editor" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InRenderTarget;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InSavePath;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InCompressionSettings;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InMipSettings;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InTextureGroup;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UICItemCreatorWidget_CreateTextureFromRenderTarget_Statics::NewProp_InRenderTarget = { "InRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ICItemCreatorWidget_eventCreateTextureFromRenderTarget_Parms, InRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UICItemCreatorWidget_CreateTextureFromRenderTarget_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ICItemCreatorWidget_eventCreateTextureFromRenderTarget_Parms, InName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UICItemCreatorWidget_CreateTextureFromRenderTarget_Statics::NewProp_InSavePath = { "InSavePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ICItemCreatorWidget_eventCreateTextureFromRenderTarget_Parms, InSavePath), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UICItemCreatorWidget_CreateTextureFromRenderTarget_Statics::NewProp_InCompressionSettings = { "InCompressionSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ICItemCreatorWidget_eventCreateTextureFromRenderTarget_Parms, InCompressionSettings), Z_Construct_UEnum_Engine_TextureCompressionSettings, METADATA_PARAMS(0, nullptr) }; // 2123615340
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UICItemCreatorWidget_CreateTextureFromRenderTarget_Statics::NewProp_InMipSettings = { "InMipSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ICItemCreatorWidget_eventCreateTextureFromRenderTarget_Parms, InMipSettings), Z_Construct_UEnum_Engine_TextureMipGenSettings, METADATA_PARAMS(0, nullptr) }; // 3164791778
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UICItemCreatorWidget_CreateTextureFromRenderTarget_Statics::NewProp_InTextureGroup = { "InTextureGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ICItemCreatorWidget_eventCreateTextureFromRenderTarget_Parms, InTextureGroup), Z_Construct_UEnum_Engine_TextureGroup, METADATA_PARAMS(0, nullptr) }; // 2065735531
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UICItemCreatorWidget_CreateTextureFromRenderTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ICItemCreatorWidget_eventCreateTextureFromRenderTarget_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UICItemCreatorWidget_CreateTextureFromRenderTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UICItemCreatorWidget_CreateTextureFromRenderTarget_Statics::NewProp_InRenderTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UICItemCreatorWidget_CreateTextureFromRenderTarget_Statics::NewProp_InName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UICItemCreatorWidget_CreateTextureFromRenderTarget_Statics::NewProp_InSavePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UICItemCreatorWidget_CreateTextureFromRenderTarget_Statics::NewProp_InCompressionSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UICItemCreatorWidget_CreateTextureFromRenderTarget_Statics::NewProp_InMipSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UICItemCreatorWidget_CreateTextureFromRenderTarget_Statics::NewProp_InTextureGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UICItemCreatorWidget_CreateTextureFromRenderTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UICItemCreatorWidget_CreateTextureFromRenderTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UICItemCreatorWidget_CreateTextureFromRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UICItemCreatorWidget, nullptr, "CreateTextureFromRenderTarget", nullptr, nullptr, Z_Construct_UFunction_UICItemCreatorWidget_CreateTextureFromRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UICItemCreatorWidget_CreateTextureFromRenderTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UICItemCreatorWidget_CreateTextureFromRenderTarget_Statics::ICItemCreatorWidget_eventCreateTextureFromRenderTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UICItemCreatorWidget_CreateTextureFromRenderTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UICItemCreatorWidget_CreateTextureFromRenderTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UICItemCreatorWidget_CreateTextureFromRenderTarget_Statics::ICItemCreatorWidget_eventCreateTextureFromRenderTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UICItemCreatorWidget_CreateTextureFromRenderTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UICItemCreatorWidget_CreateTextureFromRenderTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UICItemCreatorWidget::execCreateTextureFromRenderTarget)
{
	P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_InRenderTarget);
	P_GET_PROPERTY(FStrProperty,Z_Param_InName);
	P_GET_PROPERTY(FStrProperty,Z_Param_InSavePath);
	P_GET_PROPERTY(FByteProperty,Z_Param_InCompressionSettings);
	P_GET_PROPERTY(FByteProperty,Z_Param_InMipSettings);
	P_GET_PROPERTY(FByteProperty,Z_Param_InTextureGroup);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=P_THIS->CreateTextureFromRenderTarget(Z_Param_InRenderTarget,Z_Param_InName,Z_Param_InSavePath,TextureCompressionSettings(Z_Param_InCompressionSettings),TextureMipGenSettings(Z_Param_InMipSettings),TextureGroup(Z_Param_InTextureGroup));
	P_NATIVE_END;
}
// End Class UICItemCreatorWidget Function CreateTextureFromRenderTarget

// Begin Class UICItemCreatorWidget Function RefreshAnimPosition
struct Z_Construct_UFunction_UICItemCreatorWidget_RefreshAnimPosition_Statics
{
	struct ICItemCreatorWidget_eventRefreshAnimPosition_Parms
	{
		USkeletalMeshComponent* InSkeletalMesh;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Icon Creator" },
		{ "ModuleRelativePath", "Public/ICItemCreatorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSkeletalMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSkeletalMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UICItemCreatorWidget_RefreshAnimPosition_Statics::NewProp_InSkeletalMesh = { "InSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ICItemCreatorWidget_eventRefreshAnimPosition_Parms, InSkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSkeletalMesh_MetaData), NewProp_InSkeletalMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UICItemCreatorWidget_RefreshAnimPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UICItemCreatorWidget_RefreshAnimPosition_Statics::NewProp_InSkeletalMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UICItemCreatorWidget_RefreshAnimPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UICItemCreatorWidget_RefreshAnimPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UICItemCreatorWidget, nullptr, "RefreshAnimPosition", nullptr, nullptr, Z_Construct_UFunction_UICItemCreatorWidget_RefreshAnimPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UICItemCreatorWidget_RefreshAnimPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UICItemCreatorWidget_RefreshAnimPosition_Statics::ICItemCreatorWidget_eventRefreshAnimPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UICItemCreatorWidget_RefreshAnimPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UICItemCreatorWidget_RefreshAnimPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UICItemCreatorWidget_RefreshAnimPosition_Statics::ICItemCreatorWidget_eventRefreshAnimPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UICItemCreatorWidget_RefreshAnimPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UICItemCreatorWidget_RefreshAnimPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UICItemCreatorWidget::execRefreshAnimPosition)
{
	P_GET_OBJECT(USkeletalMeshComponent,Z_Param_InSkeletalMesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RefreshAnimPosition(Z_Param_InSkeletalMesh);
	P_NATIVE_END;
}
// End Class UICItemCreatorWidget Function RefreshAnimPosition

// Begin Class UICItemCreatorWidget
void UICItemCreatorWidget::StaticRegisterNativesUICItemCreatorWidget()
{
	UClass* Class = UICItemCreatorWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateTextureFromRenderTarget", &UICItemCreatorWidget::execCreateTextureFromRenderTarget },
		{ "RefreshAnimPosition", &UICItemCreatorWidget::execRefreshAnimPosition },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UICItemCreatorWidget);
UClass* Z_Construct_UClass_UICItemCreatorWidget_NoRegister()
{
	return UICItemCreatorWidget::StaticClass();
}
struct Z_Construct_UClass_UICItemCreatorWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ICItemCreatorWidget.h" },
		{ "ModuleRelativePath", "Public/ICItemCreatorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetType_MetaData[] = {
		{ "Category", "Asset" },
		{ "ModuleRelativePath", "Public/ICItemCreatorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Asset" },
		{ "EditCondition", "AssetType == EICAssetType::StaticMesh" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ICItemCreatorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Asset" },
		{ "EditCondition", "AssetType == EICAssetType::SkeletalMesh" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ICItemCreatorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Anim_MetaData[] = {
		{ "Category", "Asset" },
		{ "EditCondition", "AssetType == EICAssetType::SkeletalMesh" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ICItemCreatorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimPosition_MetaData[] = {
		{ "Category", "Asset" },
		{ "EditCondition", "AssetType == EICAssetType::SkeletalMesh" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ICItemCreatorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "Category", "Asset" },
		{ "EditCondition", "AssetType == EICAssetType::Actor" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ICItemCreatorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayMaterial_MetaData[] = {
		{ "Category", "Asset" },
		{ "ModuleRelativePath", "Public/ICItemCreatorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[] = {
		{ "Category", "Asset Position" },
		{ "ModuleRelativePath", "Public/ICItemCreatorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetRotation_MetaData[] = {
		{ "Category", "Asset Position" },
		{ "ModuleRelativePath", "Public/ICItemCreatorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetScale_MetaData[] = {
		{ "AllowPreserveRatio", "" },
		{ "Category", "Asset Position" },
		{ "ModuleRelativePath", "Public/ICItemCreatorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldOfView_MetaData[] = {
		{ "Category", "Camera" },
		{ "ClampMax", "360.0" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Camera field of view (in degrees). */" },
		{ "ModuleRelativePath", "Public/ICItemCreatorWidget.h" },
		{ "ToolTip", "Camera field of view (in degrees)." },
		{ "UIMax", "170" },
		{ "UIMin", "5.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/ICItemCreatorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomStep_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/ICItemCreatorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraLocation_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/ICItemCreatorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraRotation_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/ICItemCreatorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CastShadows1_MetaData[] = {
		{ "Category", "Lighting" },
		{ "ModuleRelativePath", "Public/ICItemCreatorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CastShadows2_MetaData[] = {
		{ "Category", "Lighting" },
		{ "ModuleRelativePath", "Public/ICItemCreatorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CastShadows3_MetaData[] = {
		{ "Category", "Lighting" },
		{ "ModuleRelativePath", "Public/ICItemCreatorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconName_MetaData[] = {
		{ "Category", "Save" },
		{ "ModuleRelativePath", "Public/ICItemCreatorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavePath_MetaData[] = {
		{ "Category", "Save" },
		{ "ModuleRelativePath", "Public/ICItemCreatorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTarget_MetaData[] = {
		{ "Category", "Save" },
		{ "ModuleRelativePath", "Public/ICItemCreatorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[] = {
		{ "Category", "Save" },
		{ "ModuleRelativePath", "Public/ICItemCreatorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompressionSettings_MetaData[] = {
		{ "Category", "Save" },
		{ "ModuleRelativePath", "Public/ICItemCreatorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconTextureGroup_MetaData[] = {
		{ "Category", "Save" },
		{ "DisplayName", "TextureGroup" },
		{ "ModuleRelativePath", "Public/ICItemCreatorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewImage_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.Texture,/Script/Engine.MaterialInterface,/Script/Engine.SlateTextureAtlasInterface" },
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Preview" },
		{ "DisallowedClasses", "/Script/MediaAssets.MediaTexture" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Public/ICItemCreatorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconSize_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Public/ICItemCreatorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Background_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Public/ICItemCreatorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Preview" },
		{ "EditCondition", "Background == EICBackgroundType::Color" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ICItemCreatorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[] = {
		{ "Category", "Preview" },
		{ "EditCondition", "Background == EICBackgroundType::Texture" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ICItemCreatorWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AssetType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AssetType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Anim;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimPosition;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlayMaterial;
	static void NewProp_Center_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Center;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FieldOfView;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomStep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraRotation;
	static void NewProp_CastShadows1_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CastShadows1;
	static void NewProp_CastShadows2_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CastShadows2;
	static void NewProp_CastShadows3_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CastShadows3;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IconName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SavePath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Resolution;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CompressionSettings;
	static const UECodeGen_Private::FBytePropertyParams NewProp_IconTextureGroup;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IconSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Background_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Background;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UICItemCreatorWidget_CreateTextureFromRenderTarget, "CreateTextureFromRenderTarget" }, // 3597849314
		{ &Z_Construct_UFunction_UICItemCreatorWidget_RefreshAnimPosition, "RefreshAnimPosition" }, // 929028016
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UICItemCreatorWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_AssetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_AssetType = { "AssetType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UICItemCreatorWidget, AssetType), Z_Construct_UEnum_IconCreator_EICAssetType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetType_MetaData), NewProp_AssetType_MetaData) }; // 2446129730
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UICItemCreatorWidget, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UICItemCreatorWidget, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMesh_MetaData), NewProp_SkeletalMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_Anim = { "Anim", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UICItemCreatorWidget, Anim), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Anim_MetaData), NewProp_Anim_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_AnimPosition = { "AnimPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UICItemCreatorWidget, AnimPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimPosition_MetaData), NewProp_AnimPosition_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UICItemCreatorWidget, Actor), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_OverlayMaterial = { "OverlayMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UICItemCreatorWidget, OverlayMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayMaterial_MetaData), NewProp_OverlayMaterial_MetaData) };
void Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_Center_SetBit(void* Obj)
{
	((UICItemCreatorWidget*)Obj)->Center = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UICItemCreatorWidget), &Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_Center_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Center_MetaData), NewProp_Center_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_AssetRotation = { "AssetRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UICItemCreatorWidget, AssetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetRotation_MetaData), NewProp_AssetRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_AssetScale = { "AssetScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UICItemCreatorWidget, AssetScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetScale_MetaData), NewProp_AssetScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_FieldOfView = { "FieldOfView", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UICItemCreatorWidget, FieldOfView), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldOfView_MetaData), NewProp_FieldOfView_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UICItemCreatorWidget, Distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distance_MetaData), NewProp_Distance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_ZoomStep = { "ZoomStep", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UICItemCreatorWidget, ZoomStep), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomStep_MetaData), NewProp_ZoomStep_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_CameraLocation = { "CameraLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UICItemCreatorWidget, CameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraLocation_MetaData), NewProp_CameraLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_CameraRotation = { "CameraRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UICItemCreatorWidget, CameraRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraRotation_MetaData), NewProp_CameraRotation_MetaData) };
void Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_CastShadows1_SetBit(void* Obj)
{
	((UICItemCreatorWidget*)Obj)->CastShadows1 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_CastShadows1 = { "CastShadows1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UICItemCreatorWidget), &Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_CastShadows1_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CastShadows1_MetaData), NewProp_CastShadows1_MetaData) };
void Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_CastShadows2_SetBit(void* Obj)
{
	((UICItemCreatorWidget*)Obj)->CastShadows2 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_CastShadows2 = { "CastShadows2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UICItemCreatorWidget), &Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_CastShadows2_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CastShadows2_MetaData), NewProp_CastShadows2_MetaData) };
void Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_CastShadows3_SetBit(void* Obj)
{
	((UICItemCreatorWidget*)Obj)->CastShadows3 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_CastShadows3 = { "CastShadows3", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UICItemCreatorWidget), &Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_CastShadows3_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CastShadows3_MetaData), NewProp_CastShadows3_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_IconName = { "IconName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UICItemCreatorWidget, IconName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconName_MetaData), NewProp_IconName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_SavePath = { "SavePath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UICItemCreatorWidget, SavePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavePath_MetaData), NewProp_SavePath_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UICItemCreatorWidget, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTarget_MetaData), NewProp_RenderTarget_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UICItemCreatorWidget, Resolution), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Resolution_MetaData), NewProp_Resolution_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_CompressionSettings = { "CompressionSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UICItemCreatorWidget, CompressionSettings), Z_Construct_UEnum_Engine_TextureCompressionSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompressionSettings_MetaData), NewProp_CompressionSettings_MetaData) }; // 2123615340
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_IconTextureGroup = { "IconTextureGroup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UICItemCreatorWidget, IconTextureGroup), Z_Construct_UEnum_Engine_TextureGroup, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconTextureGroup_MetaData), NewProp_IconTextureGroup_MetaData) }; // 2065735531
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_PreviewImage = { "PreviewImage", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UICItemCreatorWidget, PreviewImage), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewImage_MetaData), NewProp_PreviewImage_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_IconSize = { "IconSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UICItemCreatorWidget, IconSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconSize_MetaData), NewProp_IconSize_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_Background_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_Background = { "Background", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UICItemCreatorWidget, Background), Z_Construct_UEnum_IconCreator_EICBackgroundType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Background_MetaData), NewProp_Background_MetaData) }; // 2586094240
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UICItemCreatorWidget, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UICItemCreatorWidget, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Texture_MetaData), NewProp_Texture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UICItemCreatorWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_AssetType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_AssetType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_SkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_Anim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_AnimPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_OverlayMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_Center,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_AssetRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_AssetScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_FieldOfView,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_ZoomStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_CameraLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_CameraRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_CastShadows1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_CastShadows2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_CastShadows3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_IconName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_SavePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_RenderTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_Resolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_CompressionSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_IconTextureGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_PreviewImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_IconSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_Background_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_Background,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UICItemCreatorWidget_Statics::NewProp_Texture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UICItemCreatorWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UICItemCreatorWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_IconCreator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UICItemCreatorWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UICItemCreatorWidget_Statics::ClassParams = {
	&UICItemCreatorWidget::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UICItemCreatorWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UICItemCreatorWidget_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UICItemCreatorWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UICItemCreatorWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UICItemCreatorWidget()
{
	if (!Z_Registration_Info_UClass_UICItemCreatorWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UICItemCreatorWidget.OuterSingleton, Z_Construct_UClass_UICItemCreatorWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UICItemCreatorWidget.OuterSingleton;
}
template<> ICONCREATOR_API UClass* StaticClass<UICItemCreatorWidget>()
{
	return UICItemCreatorWidget::StaticClass();
}
UICItemCreatorWidget::UICItemCreatorWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UICItemCreatorWidget);
UICItemCreatorWidget::~UICItemCreatorWidget() {}
// End Class UICItemCreatorWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_IconCreator_Source_IconCreator_Public_ICItemCreatorWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UICItemCreatorWidget, UICItemCreatorWidget::StaticClass, TEXT("UICItemCreatorWidget"), &Z_Registration_Info_UClass_UICItemCreatorWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UICItemCreatorWidget), 597961092U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_IconCreator_Source_IconCreator_Public_ICItemCreatorWidget_h_3048493376(TEXT("/Script/IconCreator"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_IconCreator_Source_IconCreator_Public_ICItemCreatorWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_IconCreator_Source_IconCreator_Public_ICItemCreatorWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
