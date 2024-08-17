// Copyright Epic Games, Inc. All Rights Reserved.

#include "Donkey_Kong_USFXGameMode.h"
#include "Donkey_Kong_USFXCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADonkey_Kong_USFXGameMode::ADonkey_Kong_USFXGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
