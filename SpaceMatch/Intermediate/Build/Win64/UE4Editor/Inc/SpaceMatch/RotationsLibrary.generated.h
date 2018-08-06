// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
#ifdef SPACEMATCH_RotationsLibrary_generated_h
#error "RotationsLibrary.generated.h already included, missing '#pragma once' in RotationsLibrary.h"
#endif
#define SPACEMATCH_RotationsLibrary_generated_h

#define SpaceMatch_Source_SpaceMatch_RotationsLibrary_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRotateScene) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_myScene); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Roll); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Pitch); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Yaw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URotationsLibrary::RotateScene(Z_Param_myScene,Z_Param_Roll,Z_Param_Pitch,Z_Param_Yaw); \
		P_NATIVE_END; \
	}


#define SpaceMatch_Source_SpaceMatch_RotationsLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRotateScene) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_myScene); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Roll); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Pitch); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Yaw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URotationsLibrary::RotateScene(Z_Param_myScene,Z_Param_Roll,Z_Param_Pitch,Z_Param_Yaw); \
		P_NATIVE_END; \
	}


#define SpaceMatch_Source_SpaceMatch_RotationsLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURotationsLibrary(); \
	friend SPACEMATCH_API class UClass* Z_Construct_UClass_URotationsLibrary(); \
public: \
	DECLARE_CLASS(URotationsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SpaceMatch"), NO_API) \
	DECLARE_SERIALIZER(URotationsLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SpaceMatch_Source_SpaceMatch_RotationsLibrary_h_16_INCLASS \
private: \
	static void StaticRegisterNativesURotationsLibrary(); \
	friend SPACEMATCH_API class UClass* Z_Construct_UClass_URotationsLibrary(); \
public: \
	DECLARE_CLASS(URotationsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SpaceMatch"), NO_API) \
	DECLARE_SERIALIZER(URotationsLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SpaceMatch_Source_SpaceMatch_RotationsLibrary_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URotationsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URotationsLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URotationsLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URotationsLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URotationsLibrary(URotationsLibrary&&); \
	NO_API URotationsLibrary(const URotationsLibrary&); \
public:


#define SpaceMatch_Source_SpaceMatch_RotationsLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URotationsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URotationsLibrary(URotationsLibrary&&); \
	NO_API URotationsLibrary(const URotationsLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URotationsLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URotationsLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URotationsLibrary)


#define SpaceMatch_Source_SpaceMatch_RotationsLibrary_h_16_PRIVATE_PROPERTY_OFFSET
#define SpaceMatch_Source_SpaceMatch_RotationsLibrary_h_13_PROLOG
#define SpaceMatch_Source_SpaceMatch_RotationsLibrary_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceMatch_Source_SpaceMatch_RotationsLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	SpaceMatch_Source_SpaceMatch_RotationsLibrary_h_16_RPC_WRAPPERS \
	SpaceMatch_Source_SpaceMatch_RotationsLibrary_h_16_INCLASS \
	SpaceMatch_Source_SpaceMatch_RotationsLibrary_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceMatch_Source_SpaceMatch_RotationsLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceMatch_Source_SpaceMatch_RotationsLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	SpaceMatch_Source_SpaceMatch_RotationsLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceMatch_Source_SpaceMatch_RotationsLibrary_h_16_INCLASS_NO_PURE_DECLS \
	SpaceMatch_Source_SpaceMatch_RotationsLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceMatch_Source_SpaceMatch_RotationsLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
