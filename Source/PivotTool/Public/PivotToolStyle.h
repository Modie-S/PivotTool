// Modie Shakarchi 2022

#pragma once

#include "Styling/SlateStyle.h"

class FPivotToolStyle
{
public:

	static void Initialize();

	static void Shutdown();

	static void ReloadTextures();

	static const ISlateStyle& Get();

	static FName GetStyleSetName();

	static void SetupStyles(FSlateStyleSet* Style);
	static void SetupFlatButtonStyles(FSlateStyleSet* Style, const FName Name, const FLinearColor& Color);

private:

	static TSharedRef< class FSlateStyleSet > Create();

private:

	static TSharedPtr< class FSlateStyleSet > StyleInstance;
};
