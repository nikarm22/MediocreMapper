/*
	By Rama for You
	
	You are welcome to use this code anywhere as long as you include this notice.
	
	copyright 2015
*/
using UnrealBuildTool;
using System;
using System.IO;

public class VictoryUMG : ModuleRules
{
	public VictoryUMG(ReadOnlyTargetRules Target) : base(Target)
	{
        PublicDependencyModuleNames.AddRange(
			new string[] { 
				"Core", 
				"CoreUObject", 
				"Engine", 
				"InputCore",
				
				"RHI",
				"RenderCore",
				 
				"UMG", "Slate", "SlateCore", 
                
                "APPFRAMEWORK" //for color picker! -Rama
		
			}
		);
		
		
		PrivateIncludePaths.AddRange(new string[] {
			Path.Combine(ModuleDirectory, "Private"),
		});
		PublicIncludePaths.AddRange(new string[] {
			Path.Combine(ModuleDirectory, "Public"),
		});
	}
}
