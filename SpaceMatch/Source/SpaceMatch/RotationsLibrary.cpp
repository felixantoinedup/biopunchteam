// Fill out your copyright notice in the Description page of Project Settings.

#include "RotationsLibrary.h"

void URotationsLibrary::RotateScene(USceneComponent* myScene, float Roll, float Pitch, float Yaw)
{
	FQuat sceneRotation = myScene->GetRelativeTransform().GetRotation();
	FQuat newSceneRotation = sceneRotation * FQuat::MakeFromEuler(FVector(Roll, Pitch, Yaw));
	myScene->SetRelativeRotation(newSceneRotation);
}


