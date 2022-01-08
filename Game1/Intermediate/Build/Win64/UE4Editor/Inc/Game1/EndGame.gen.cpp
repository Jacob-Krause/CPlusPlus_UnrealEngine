// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game1/EndGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEndGame() {}
// Cross Module References
	GAME1_API UClass* Z_Construct_UClass_UEndGame_NoRegister();
	GAME1_API UClass* Z_Construct_UClass_UEndGame();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Game1();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEndGame::execRestartClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RestartClicked();
		P_NATIVE_END;
	}
	void UEndGame::StaticRegisterNativesUEndGame()
	{
		UClass* Class = UEndGame::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RestartClicked", &UEndGame::execRestartClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEndGame_RestartClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEndGame_RestartClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EndGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEndGame_RestartClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEndGame, nullptr, "RestartClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEndGame_RestartClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGame_RestartClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEndGame_RestartClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEndGame_RestartClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEndGame_NoRegister()
	{
		return UEndGame::StaticClass();
	}
	struct Z_Construct_UClass_UEndGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Replay_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Replay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEndGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Game1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEndGame_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEndGame_RestartClicked, "RestartClicked" }, // 4260647303
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEndGame_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EndGame.h" },
		{ "ModuleRelativePath", "EndGame.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEndGame_Statics::NewProp_Replay_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EndGame.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEndGame_Statics::NewProp_Replay = { "Replay", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEndGame, Replay), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEndGame_Statics::NewProp_Replay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEndGame_Statics::NewProp_Replay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEndGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEndGame_Statics::NewProp_Replay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEndGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEndGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEndGame_Statics::ClassParams = {
		&UEndGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEndGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEndGame_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEndGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEndGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEndGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEndGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEndGame, 1289315886);
	template<> GAME1_API UClass* StaticClass<UEndGame>()
	{
		return UEndGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEndGame(Z_Construct_UClass_UEndGame, &UEndGame::StaticClass, TEXT("/Script/Game1"), TEXT("UEndGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEndGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
