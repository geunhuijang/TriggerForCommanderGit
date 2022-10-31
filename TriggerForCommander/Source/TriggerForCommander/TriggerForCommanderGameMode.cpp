// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "TriggerForCommanderGameMode.h"
#include "TriggerForCommanderHUD.h"
#include "TriggerForCommanderCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATriggerForCommanderGameMode::ATriggerForCommanderGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATriggerForCommanderHUD::StaticClass();
}
