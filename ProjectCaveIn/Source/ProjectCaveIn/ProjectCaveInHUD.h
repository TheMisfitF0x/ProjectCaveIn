// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "ProjectCaveInHUD.generated.h"

UCLASS()
class AProjectCaveInHUD : public AHUD
{
	GENERATED_BODY()

public:
	AProjectCaveInHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

