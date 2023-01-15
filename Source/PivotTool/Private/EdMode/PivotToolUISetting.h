// Modie Shakarchi 2022

#pragma once

#include "PivotToolUISetting.generated.h"

UCLASS()
class UPivotToolUISetting : public UObject 
{

	GENERATED_UCLASS_BODY()
	
public:

public:
	void Load();
	void Save();
	void Reset();

	void SetParent(class FPivotToolEdMode* EditMode);

private:
	class FPivotToolEdMode* ParentMode;
};
