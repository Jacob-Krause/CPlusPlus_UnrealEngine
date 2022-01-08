// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAME1_EndGame_generated_h
#error "EndGame.generated.h already included, missing '#pragma once' in EndGame.h"
#endif
#define GAME1_EndGame_generated_h

#define Game1_Source_Game1_EndGame_h_15_SPARSE_DATA
#define Game1_Source_Game1_EndGame_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRestartClicked);


#define Game1_Source_Game1_EndGame_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRestartClicked);


#define Game1_Source_Game1_EndGame_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEndGame(); \
	friend struct Z_Construct_UClass_UEndGame_Statics; \
public: \
	DECLARE_CLASS(UEndGame, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Game1"), NO_API) \
	DECLARE_SERIALIZER(UEndGame)


#define Game1_Source_Game1_EndGame_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUEndGame(); \
	friend struct Z_Construct_UClass_UEndGame_Statics; \
public: \
	DECLARE_CLASS(UEndGame, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Game1"), NO_API) \
	DECLARE_SERIALIZER(UEndGame)


#define Game1_Source_Game1_EndGame_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEndGame(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEndGame) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEndGame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEndGame); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEndGame(UEndGame&&); \
	NO_API UEndGame(const UEndGame&); \
public:


#define Game1_Source_Game1_EndGame_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEndGame(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEndGame(UEndGame&&); \
	NO_API UEndGame(const UEndGame&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEndGame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEndGame); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEndGame)


#define Game1_Source_Game1_EndGame_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Replay() { return STRUCT_OFFSET(UEndGame, Replay); }


#define Game1_Source_Game1_EndGame_h_12_PROLOG
#define Game1_Source_Game1_EndGame_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game1_Source_Game1_EndGame_h_15_PRIVATE_PROPERTY_OFFSET \
	Game1_Source_Game1_EndGame_h_15_SPARSE_DATA \
	Game1_Source_Game1_EndGame_h_15_RPC_WRAPPERS \
	Game1_Source_Game1_EndGame_h_15_INCLASS \
	Game1_Source_Game1_EndGame_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Game1_Source_Game1_EndGame_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game1_Source_Game1_EndGame_h_15_PRIVATE_PROPERTY_OFFSET \
	Game1_Source_Game1_EndGame_h_15_SPARSE_DATA \
	Game1_Source_Game1_EndGame_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Game1_Source_Game1_EndGame_h_15_INCLASS_NO_PURE_DECLS \
	Game1_Source_Game1_EndGame_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAME1_API UClass* StaticClass<class UEndGame>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Game1_Source_Game1_EndGame_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
