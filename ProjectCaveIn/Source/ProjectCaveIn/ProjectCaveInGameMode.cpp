// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectCaveInGameMode.h"
#include "ProjectCaveInHUD.h"
#include "ProjectCaveInCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectCaveInGameMode::AProjectCaveInGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AProjectCaveInHUD::StaticClass();
}
