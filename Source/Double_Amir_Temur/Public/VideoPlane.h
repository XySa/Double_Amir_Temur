// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MediaPlayer.h"
#include "GameFramework/Actor.h"
#include "VideoPlane.generated.h"

UCLASS()
class DOUBLE_AMIR_TEMUR_API AVideoPlane : public AActor
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	UMediaPlayer * MediaPlayer;
};
