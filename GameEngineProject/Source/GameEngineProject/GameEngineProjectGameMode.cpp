// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "GameEngineProjectGameMode.h"
#include "GameEngineProjectHUD.h"
#include "GameEngineProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGameEngineProjectGameMode::AGameEngineProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AGameEngineProjectHUD::StaticClass();
}
