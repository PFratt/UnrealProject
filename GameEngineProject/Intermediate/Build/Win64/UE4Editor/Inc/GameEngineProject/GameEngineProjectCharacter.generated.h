// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEENGINEPROJECT_GameEngineProjectCharacter_generated_h
#error "GameEngineProjectCharacter.generated.h already included, missing '#pragma once' in GameEngineProjectCharacter.h"
#endif
#define GAMEENGINEPROJECT_GameEngineProjectCharacter_generated_h

#define GameEngineProject_Source_GameEngineProject_GameEngineProjectCharacter_h_14_RPC_WRAPPERS
#define GameEngineProject_Source_GameEngineProject_GameEngineProjectCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define GameEngineProject_Source_GameEngineProject_GameEngineProjectCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameEngineProjectCharacter(); \
	friend struct Z_Construct_UClass_AGameEngineProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AGameEngineProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameEngineProject"), NO_API) \
	DECLARE_SERIALIZER(AGameEngineProjectCharacter)


#define GameEngineProject_Source_GameEngineProject_GameEngineProjectCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAGameEngineProjectCharacter(); \
	friend struct Z_Construct_UClass_AGameEngineProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AGameEngineProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameEngineProject"), NO_API) \
	DECLARE_SERIALIZER(AGameEngineProjectCharacter)


#define GameEngineProject_Source_GameEngineProject_GameEngineProjectCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameEngineProjectCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameEngineProjectCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameEngineProjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameEngineProjectCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameEngineProjectCharacter(AGameEngineProjectCharacter&&); \
	NO_API AGameEngineProjectCharacter(const AGameEngineProjectCharacter&); \
public:


#define GameEngineProject_Source_GameEngineProject_GameEngineProjectCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameEngineProjectCharacter(AGameEngineProjectCharacter&&); \
	NO_API AGameEngineProjectCharacter(const AGameEngineProjectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameEngineProjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameEngineProjectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameEngineProjectCharacter)


#define GameEngineProject_Source_GameEngineProject_GameEngineProjectCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AGameEngineProjectCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AGameEngineProjectCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AGameEngineProjectCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AGameEngineProjectCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AGameEngineProjectCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AGameEngineProjectCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AGameEngineProjectCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AGameEngineProjectCharacter, L_MotionController); }


#define GameEngineProject_Source_GameEngineProject_GameEngineProjectCharacter_h_11_PROLOG
#define GameEngineProject_Source_GameEngineProject_GameEngineProjectCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameEngineProject_Source_GameEngineProject_GameEngineProjectCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	GameEngineProject_Source_GameEngineProject_GameEngineProjectCharacter_h_14_RPC_WRAPPERS \
	GameEngineProject_Source_GameEngineProject_GameEngineProjectCharacter_h_14_INCLASS \
	GameEngineProject_Source_GameEngineProject_GameEngineProjectCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GameEngineProject_Source_GameEngineProject_GameEngineProjectCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameEngineProject_Source_GameEngineProject_GameEngineProjectCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	GameEngineProject_Source_GameEngineProject_GameEngineProjectCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	GameEngineProject_Source_GameEngineProject_GameEngineProjectCharacter_h_14_INCLASS_NO_PURE_DECLS \
	GameEngineProject_Source_GameEngineProject_GameEngineProjectCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEENGINEPROJECT_API UClass* StaticClass<class AGameEngineProjectCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GameEngineProject_Source_GameEngineProject_GameEngineProjectCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
