// Modie Shakarchi 2022

#pragma once

#include "PivotToolSettings.generated.h"

UENUM()
enum class EPivotToolPreviewShape : uint8
{
	None,
	Point,
	Sphere,
	Coordinate
};


UCLASS(config=Editor, defaultconfig)
class UPivotToolSettings : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(config, EditAnywhere, Category=PivotPreset)
	bool bDisplayPivotPresetPreview;

	UPROPERTY(config, EditAnywhere, Category = PivotPreset)
	EPivotToolPreviewShape PivotPresetPreviewShape;

	UPROPERTY(config, EditAnywhere, Category=PivotPreset)
	FColor PivotPresetPreviewColor;

public:
	UPivotToolSettings();
};
