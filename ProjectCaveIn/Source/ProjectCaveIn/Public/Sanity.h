// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "Components/ActorComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Sanity.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTCAVEIN_API USanity : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USanity();

	UFUNCTION(BlueprintCallable)
	void DamageSanity(float damageToSanity);

	UFUNCTION(BlueprintCallable)
	void HealSanity(float healthToSanity);

	UFUNCTION(BlueprintCallable)
	float GetSanity();

	void SetCamera(UCameraComponent* camera);

	void OnChange();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	float sanityAmt;

	UPROPERTY(VisibleAnywhere)
	float sanityMax;

	UPROPERTY(VisibleAnywhere)
	float percentValue;

	bool isAlive;

	UPROPERTY(EditAnywhere)
	UCameraComponent* playerCamComponent;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
