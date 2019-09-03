/* Copyright 2017-2019 HowToCompute. All Rights Reserved.
* You may use, distribute and modify this code under the
* terms of the MIT license.
*
* You should have received a copy of the MIT license with
* this file. If not, please visit: https://github.com/How2Compute/Socketer
*/

using UnrealBuildTool;
using System;
using System.IO;

public class Socketer : ModuleRules
{
	public Socketer(ReadOnlyTargetRules Target) : base(Target)
	{
        // Force IWYU to ensure the plugin will always be IWYU compliant
        bEnforceIWYU = true;
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        // UE4.21 requirement
        PrivatePCHHeaderFile = "Public/Socketer.h";


		
			PrivateIncludePaths.AddRange(new string[] {
				Path.Combine(ModuleDirectory, "Private"),
			});
			PublicIncludePaths.AddRange(new string[] {
				Path.Combine(ModuleDirectory, "Public"),
			});
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
                "Sockets",
                "Networking",
				
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",

				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
