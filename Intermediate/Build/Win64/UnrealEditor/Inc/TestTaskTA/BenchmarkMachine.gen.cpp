// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestTaskTA/BenchmarkMachine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBenchmarkMachine() {}
// Cross Module References
	TESTTASKTA_API UClass* Z_Construct_UClass_UBenchmarkMachine_NoRegister();
	TESTTASKTA_API UClass* Z_Construct_UClass_UBenchmarkMachine();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TestTaskTA();
// End Cross Module References
	void UBenchmarkMachine::StaticRegisterNativesUBenchmarkMachine()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBenchmarkMachine);
	UClass* Z_Construct_UClass_UBenchmarkMachine_NoRegister()
	{
		return UBenchmarkMachine::StaticClass();
	}
	struct Z_Construct_UClass_UBenchmarkMachine_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBenchmarkMachine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TestTaskTA,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBenchmarkMachine_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "BenchmarkMachine.h" },
		{ "ModuleRelativePath", "BenchmarkMachine.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBenchmarkMachine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBenchmarkMachine>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBenchmarkMachine_Statics::ClassParams = {
		&UBenchmarkMachine::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBenchmarkMachine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBenchmarkMachine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBenchmarkMachine()
	{
		if (!Z_Registration_Info_UClass_UBenchmarkMachine.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBenchmarkMachine.OuterSingleton, Z_Construct_UClass_UBenchmarkMachine_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBenchmarkMachine.OuterSingleton;
	}
	template<> TESTTASKTA_API UClass* StaticClass<UBenchmarkMachine>()
	{
		return UBenchmarkMachine::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBenchmarkMachine);
	struct Z_CompiledInDeferFile_FID_Test_Tech_Art_Source_TestTaskTA_BenchmarkMachine_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Test_Tech_Art_Source_TestTaskTA_BenchmarkMachine_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBenchmarkMachine, UBenchmarkMachine::StaticClass, TEXT("UBenchmarkMachine"), &Z_Registration_Info_UClass_UBenchmarkMachine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBenchmarkMachine), 2463528025U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Test_Tech_Art_Source_TestTaskTA_BenchmarkMachine_h_3302257307(TEXT("/Script/TestTaskTA"),
		Z_CompiledInDeferFile_FID_Test_Tech_Art_Source_TestTaskTA_BenchmarkMachine_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Test_Tech_Art_Source_TestTaskTA_BenchmarkMachine_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
