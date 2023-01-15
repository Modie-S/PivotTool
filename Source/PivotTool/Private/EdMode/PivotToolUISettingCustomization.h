// Modie Shakarchi 2022

#pragma once

#include "IDetailCustomization.h"

class IPropertyHandle;
class FPivotToolEdMode;

class FPivotToolUISettingCustomization : public  IDetailCustomization
{
public:
	virtual void CustomizeDetails(IDetailLayoutBuilder& DetailBuilder) override;
	static TSharedRef<IDetailCustomization> MakeInstance(FPivotToolEdMode* InEditMode);

protected:	
	static FPivotToolEdMode* EditMode;
};
