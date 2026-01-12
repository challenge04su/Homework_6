// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "homework6/Public/RotationActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRotationActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
HOMEWORK6_API UClass* Z_Construct_UClass_ARotationActor();
HOMEWORK6_API UClass* Z_Construct_UClass_ARotationActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_homework6();
// End Cross Module References

// Begin Class ARotationActor
void ARotationActor::StaticRegisterNativesARotationActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARotationActor);
UClass* Z_Construct_UClass_ARotationActor_NoRegister()
{
	return ARotationActor::StaticClass();
}
struct Z_Construct_UClass_ARotationActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RotationActor.h" },
		{ "ModuleRelativePath", "Public/RotationActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "RotationActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RotationActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComp_MetaData[] = {
		{ "Category", "RotationActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RotationActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "RotationActor" },
		{ "ModuleRelativePath", "Public/RotationActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARotationActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARotationActor_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotationActor, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARotationActor_Statics::NewProp_StaticMeshComp = { "StaticMeshComp", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotationActor, StaticMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComp_MetaData), NewProp_StaticMeshComp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARotationActor_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotationActor, RotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeed_MetaData), NewProp_RotationSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARotationActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotationActor_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotationActor_Statics::NewProp_StaticMeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotationActor_Statics::NewProp_RotationSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARotationActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARotationActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_homework6,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARotationActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARotationActor_Statics::ClassParams = {
	&ARotationActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ARotationActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ARotationActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARotationActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ARotationActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARotationActor()
{
	if (!Z_Registration_Info_UClass_ARotationActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARotationActor.OuterSingleton, Z_Construct_UClass_ARotationActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARotationActor.OuterSingleton;
}
template<> HOMEWORK6_API UClass* StaticClass<ARotationActor>()
{
	return ARotationActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARotationActor);
ARotationActor::~ARotationActor() {}
// End Class ARotationActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_About_git_Homework_6_homework6_Source_homework6_Public_RotationActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARotationActor, ARotationActor::StaticClass, TEXT("ARotationActor"), &Z_Registration_Info_UClass_ARotationActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARotationActor), 3390453948U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_About_git_Homework_6_homework6_Source_homework6_Public_RotationActor_h_1251731196(TEXT("/Script/homework6"),
	Z_CompiledInDeferFile_FID_About_git_Homework_6_homework6_Source_homework6_Public_RotationActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_About_git_Homework_6_homework6_Source_homework6_Public_RotationActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
