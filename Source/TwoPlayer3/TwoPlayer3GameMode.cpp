// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "TwoPlayer3.h"
#include "TwoPlayer3GameMode.h"
#include "TwoPlayer3Character.h"

ATwoPlayer3GameMode::ATwoPlayer3GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
