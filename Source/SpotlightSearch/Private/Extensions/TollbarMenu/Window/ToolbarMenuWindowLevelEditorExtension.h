﻿// Copyright Out-of-the-Box Plugins 2018-2023. All Rights Reserved.

#pragma once

#include "QuickMenuExtension.h"

#include "ToolbarMenuWindowLevelEditorExtension.generated.h"

/**
 * Add entries from the main frame toolbar -> Window menu -> LevelEditor section
 */
UCLASS()
class UToolbarMenuWindowLevelEditorExtension : public UQuickMenuExtension
{
	GENERATED_BODY()

	virtual TArray<FQuickCommandEntry> GetCommands(const FToolMenuContext& Context) override;
};