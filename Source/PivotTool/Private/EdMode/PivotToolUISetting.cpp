// Modie Shakarchi 2022

#include "PivotToolUISetting.h"

UPivotToolUISetting::UPivotToolUISetting(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, ParentMode(nullptr)
{
}

void UPivotToolUISetting::Load()
{
}

void UPivotToolUISetting::Save()
{
}

void UPivotToolUISetting::Reset()
{
}

void UPivotToolUISetting::SetParent(FPivotToolEdMode* EditMode)
{
	ParentMode = EditMode;
}