// Copyright Epic Games, Inc. All Rights Reserved.

#include "SwitchLevelsTutorialGameMode.h"
#include "SwitchLevelsTutorialCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASwitchLevelsTutorialGameMode::ASwitchLevelsTutorialGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
