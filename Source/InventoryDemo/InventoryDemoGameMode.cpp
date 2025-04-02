// Copyright Epic Games, Inc. All Rights Reserved.

#include "InventoryDemoGameMode.h"
#include "InventoryDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AInventoryDemoGameMode::AInventoryDemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
