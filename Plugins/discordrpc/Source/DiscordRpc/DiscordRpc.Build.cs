// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class DiscordRpc : ModuleRules
{
#if WITH_FORWARDED_MODULE_RULES_CTOR
    public DiscordRpc(ReadOnlyTargetRules Target) : base(Target)
#else
    public DiscordRpc(TargetInfo Target)
#endif
    {
        Definitions.Add("DISCORD_DYNAMIC_LIB=1");

        string LibDirectory = Path.GetFullPath(Path.Combine(ModuleDirectory, "..", "..", "Source", "ThirdParty", "DiscordRpcLibrary"));
        
		
		PrivateIncludePaths.AddRange(new string[] {
			Path.Combine(ModuleDirectory, "Private"),
		});
		PublicIncludePaths.AddRange(new string[] {
			Path.Combine(ModuleDirectory, "Public"),
            Path.Combine(LibDirectory, "Include"),
		});

        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "DiscordRpcLibrary",
        });

        PrivateDependencyModuleNames.AddRange(new string[] {
            "CoreUObject",
            "Engine",
            "Slate",
            "SlateCore",
            "Projects"
        });

        DynamicallyLoadedModuleNames.AddRange(new string[]{
        });

        var lib = Path.Combine(ModuleDirectory, "..", "ThirdParty", "DiscordRpcLibrary", "Mac");

        PublicLibraryPaths.Add(lib);
        PublicAdditionalLibraries.Add(Path.Combine(lib, "libdiscord-rpc.dylib"));
        RuntimeDependencies.Add(new RuntimeDependency(Path.Combine(lib, "libdiscord-rpc.dylib")));
    }
}