// Modie Shakarchi 2022

#include "PivotToolSettings.h"

//////////////////////////////////////////////////////////////////////////
// UPivotToolEditorSettings

UPivotToolSettings::UPivotToolSettings()
	: bDisplayPivotPresetPreview(true)
	, PivotPresetPreviewShape(EPivotToolPreviewShape::Sphere)
	, PivotPresetPreviewColor(FColor::Yellow)
{
	if (!IsRunningCommandlet())
	{
	}
}
