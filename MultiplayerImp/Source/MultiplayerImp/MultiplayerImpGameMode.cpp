// Copyright Epic Games, Inc. All Rights Reserved.

#include "MultiplayerImpGameMode.h"
#include "MultiplayerImpCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMultiplayerImpGameMode::AMultiplayerImpGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
