// Modie Shakarchi 2022

using UnrealBuildTool;

public class PivotTool : ModuleRules
{
	public PivotTool(ReadOnlyTargetRules Target) : base(Target)
    {
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicIncludePaths.AddRange(
			new string[] {
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				"PivotTool/Private",
				"PivotTool/Private/EdMode",
				"PivotTool/Private/Widgets",
				"PivotTool/Private/Documentation",
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"DetailCustomizations",
				"Engine",
				"EditorStyle",
				"EditorFramework",
				"PropertyEditor",
				"Projects",
				"Settings",
				"Slate",
				"SlateCore",
				"ImageWrapper",
				"InputCore",
				"LevelEditor",
				"RawMesh",
				"RenderCore",
				"UnrealEd",
				"WorkspaceMenuStructure",

				"GeometryCore",
				"MeshDescription",
                "MeshConversion",
                "StaticMeshDescription",

				"Documentation",
                "Analytics",
                "SourceCodeAccess",
                "SourceControl",
				"DesktopPlatform"
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
			}
			);
	}
}
