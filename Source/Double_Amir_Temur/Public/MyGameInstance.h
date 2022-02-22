// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class DOUBLE_AMIR_TEMUR_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	
	UFUNCTION()
	void BeginLoadingScreen(const FString& InMapName);
	
	UFUNCTION()
	void EndLoadingScreen(UWorld* InLoadedWorld);
	
};
