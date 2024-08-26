// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SwitchLevelsTutorial : ModuleRules
{
	public SwitchLevelsTutorial(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
