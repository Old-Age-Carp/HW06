// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "hw06/RotatingActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRotatingActor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
HW06_API UClass* Z_Construct_UClass_ARotatingActor();
HW06_API UClass* Z_Construct_UClass_ARotatingActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_hw06();
// End Cross Module References

// Begin Class ARotatingActor
void ARotatingActor::StaticRegisterNativesARotatingActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARotatingActor);
UClass* Z_Construct_UClass_ARotatingActor_NoRegister()
{
	return ARotatingActor::StaticClass();
}
struct Z_Construct_UClass_ARotatingActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RotatingActor.h" },
		{ "ModuleRelativePath", "RotatingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[] = {
		{ "Category", "RotatingActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RotatingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationRate_MetaData[] = {
		{ "Category", "RotatingActor" },
		{ "ModuleRelativePath", "RotatingActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARotatingActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARotatingActor_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotatingActor, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComponent_MetaData), NewProp_StaticMeshComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARotatingActor_Statics::NewProp_RotationRate = { "RotationRate", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotatingActor, RotationRate), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationRate_MetaData), NewProp_RotationRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARotatingActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotatingActor_Statics::NewProp_StaticMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotatingActor_Statics::NewProp_RotationRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARotatingActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARotatingActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_hw06,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARotatingActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARotatingActor_Statics::ClassParams = {
	&ARotatingActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ARotatingActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ARotatingActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARotatingActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ARotatingActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARotatingActor()
{
	if (!Z_Registration_Info_UClass_ARotatingActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARotatingActor.OuterSingleton, Z_Construct_UClass_ARotatingActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARotatingActor.OuterSingleton;
}
template<> HW06_API UClass* StaticClass<ARotatingActor>()
{
	return ARotatingActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARotatingActor);
ARotatingActor::~ARotatingActor() {}
// End Class ARotatingActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_junic_OneDrive_Documents_GitHub_HW06_hw06_Source_hw06_RotatingActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARotatingActor, ARotatingActor::StaticClass, TEXT("ARotatingActor"), &Z_Registration_Info_UClass_ARotatingActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARotatingActor), 953769230U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_junic_OneDrive_Documents_GitHub_HW06_hw06_Source_hw06_RotatingActor_h_3412708368(TEXT("/Script/hw06"),
	Z_CompiledInDeferFile_FID_Users_junic_OneDrive_Documents_GitHub_HW06_hw06_Source_hw06_RotatingActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_junic_OneDrive_Documents_GitHub_HW06_hw06_Source_hw06_RotatingActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
