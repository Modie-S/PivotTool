// Modie Shakarchi 2022

#pragma once

#include "PivotToolUISetting.h"

#include "Widgets/SCompoundWidget.h"
#include "Widgets/DeclarativeSyntaxSupport.h"

class SErrorText;
class IDetailsView;

class FPivotToolEdModeToolkit;

class SPivotToolEditor : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SPivotToolEditor) {}
	SLATE_END_ARGS()

public:
	void Construct(const FArguments& InArgs, TSharedRef<FPivotToolEdModeToolkit> InParentToolkit);
	void NotifySelectionChanged();

	static class FPivotToolEdMode* GetEditorMode();

	void SaveUISetting(UPivotToolUISetting* InUISetting);
	void LoadUISetting(const UPivotToolUISetting* InUISetting);

protected:
	TSharedPtr<SErrorText> ErrorText;
	TSharedPtr<SErrorText> VersionText;
		
private:
	TSharedPtr<IDetailsView> ActorDetailView;
};
