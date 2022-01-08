// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAME1_StartMenu_generated_h
#error "StartMenu.generated.h already included, missing '#pragma once' in StartMenu.h"
#endif
#define GAME1_StartMenu_generated_h

#define Game1_Source_Game1_StartMenu_h_16_SPARSE_DATA
#define Game1_Source_Game1_StartMenu_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartClicked);


#define Game1_Source_Game1_StartMenu_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartClicked);


#define Game1_Source_Game1_StartMenu_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStartMenu(); \
	friend struct Z_Construct_UClass_UStartMenu_Statics; \
public: \
	DECLARE_CLASS(UStartMenu, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Game1"), NO_API) \
	DECLARE_SERIALIZER(UStartMenu)


#define Game1_Source_Game1_StartMenu_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUStartMenu(); \
	friend struct Z_Construct_UClass_UStartMenu_Statics; \
public: \
	DECLARE_CLASS(UStartMenu, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Game1"), NO_API) \
	DECLARE_SERIALIZER(UStartMenu)


#define Game1_Source_Game1_StartMenu_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStartMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStartMenu) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStartMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStartMenu); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStartMenu(UStartMenu&&); \
	NO_API UStartMenu(const UStartMenu&); \
public:


#define Game1_Source_Game1_StartMenu_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStartMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStartMenu(UStartMenu&&); \
	NO_API UStartMenu(const UStartMenu&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStartMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStartMenu); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStartMenu)


#define Game1_Source_Game1_StartMenu_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Start() { return STRUCT_OFFSET(UStartMenu, Start); }


#define Game1_Source_Game1_StartMenu_h_13_PROLOG
#define Game1_Source_Game1_StartMenu_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game1_Source_Game1_StartMenu_h_16_PRIVATE_PROPERTY_OFFSET \
	Game1_Source_Game1_StartMenu_h_16_SPARSE_DATA \
	Game1_Source_Game1_StartMenu_h_16_RPC_WRAPPERS \
	Game1_Source_Game1_StartMenu_h_16_INCLASS \
	Game1_Source_Game1_StartMenu_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Game1_Source_Game1_StartMenu_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game1_Source_Game1_StartMenu_h_16_PRIVATE_PROPERTY_OFFSET \
	Game1_Source_Game1_StartMenu_h_16_SPARSE_DATA \
	Game1_Source_Game1_StartMenu_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Game1_Source_Game1_StartMenu_h_16_INCLASS_NO_PURE_DECLS \
	Game1_Source_Game1_StartMenu_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAME1_API UClass* StaticClass<class UStartMenu>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Game1_Source_Game1_StartMenu_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
