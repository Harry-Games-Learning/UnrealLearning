// Copyright Epic Games, Inc. All Rights Reserved.

#include "HW01GameMode.h"
#include "HW01Character.h"
#include "UObject/ConstructorHelpers.h"

AHW01GameMode::AHW01GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
