// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Double_Amir_Temur : ModuleRules
{
	public Double_Amir_Temur(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
