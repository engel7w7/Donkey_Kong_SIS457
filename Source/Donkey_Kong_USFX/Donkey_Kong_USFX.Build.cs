// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Donkey_Kong_USFX : ModuleRules
{
	public Donkey_Kong_USFX(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
