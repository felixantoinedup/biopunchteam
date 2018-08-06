// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RotationsLibrary.generated.h"

/**
 * 
 */
UCLASS()
class SPACEMATCH_API URotationsLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
		UFUNCTION(BlueprintCallable)
		static void RotateScene(USceneComponent* myScene, float Roll, float Pitch, float Yaw);
};
