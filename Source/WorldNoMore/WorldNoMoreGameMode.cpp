// Copyright Epic Games, Inc. All Rights Reserved.

#include "WorldNoMoreGameMode.h"
#include "WorldNoMoreCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWorldNoMoreGameMode::AWorldNoMoreGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
