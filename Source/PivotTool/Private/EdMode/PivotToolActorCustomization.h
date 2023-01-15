// Modie Shakarchi 2022

#pragma once

#include "IDetailCustomization.h"

class IPropertyHandle;
class FPivotToolEdMode;

class FPivotToolActorCustomization : public IDetailCustomization
{
public:
	static TSharedRef<IDetailCustomization> MakeInstance(FPivotToolEdMode* InEditMode);

	void CustomizeDetails(IDetailLayoutBuilder& DetailBuilder) override;

private:
	FPivotToolActorCustomization();

	static FPivotToolEdMode* EditMode;
};