// Copyright Epic Games, Inc. All Rights Reserved.

#include "Double_Amir_TemurGameMode.h"
#include "Double_Amir_TemurCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADouble_Amir_TemurGameMode::ADouble_Amir_TemurGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
