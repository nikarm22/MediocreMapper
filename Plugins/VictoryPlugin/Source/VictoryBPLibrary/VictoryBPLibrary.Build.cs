// Some copyright should be here...

using UnrealBuildTool;
using System;
using System.IO;

public class VictoryBPLibrary : ModuleRules
{
	public VictoryBPLibrary(ReadOnlyTargetRules Target) : base(Target)
	{ 
		PrivatePCHHeaderFile = "Private/VictoryBPLibraryPrivatePCH.h";

		//4.15 Include What You Use
		bEnforceIWYU = false;
		
		PrivateIncludePaths.AddRange(new string[] {
			Path.Combine(ModuleDirectory, "Private"),
		});
		PublicIncludePaths.AddRange(new string[] {
			Path.Combine(ModuleDirectory, "Public"),
		});
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core"
				
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject", 
				"Engine", 
				"InputCore",
				
				"RHI",
				"RenderCore",
				 
				"HTTP",
				"UMG", "Slate", "SlateCore",
				
				"ImageWrapper",
				
				"PhysX", 
				
				"HeadMountedDisplay",
  
                "AIModule",
				
				"NavigationSystem",
				
				"Vorbis",
				
				//FPlatformApplicationMisc
				"ApplicationCore"
			}
			);
		
		//APEX EXCLUSIONS
		if (Target.Platform != UnrealTargetPlatform.Android && Target.Platform != UnrealTargetPlatform.HTML5 && Target.Platform != UnrealTargetPlatform.IOS)
		{
			PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"APEX"
			}
			);
			
			PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"ApexDestruction"
			}
			);
		
		}
	
		 
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
