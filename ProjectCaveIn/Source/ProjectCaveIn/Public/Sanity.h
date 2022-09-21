// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Sanity.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTCAVEIN_API USanity : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USanity();

	UFUNCTION(BlueprintCallable)
	void DamageSanity(int damageToSanity);

	UFUNCTION(BlueprintCallable)
	void HealSanity(int healthToSanity);

	UFUNCTION(BlueprintCallable)
	int GetSanity();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	int sanityAmt;

	bool isAlive;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
