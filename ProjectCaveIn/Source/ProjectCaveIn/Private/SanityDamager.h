// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "../Public/Sanity.h"
#include "SanityDamager.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class USanityDamager : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USanityDamager();

	UFUNCTION(BlueprintCallable)
	void DamageSanity(USanity* playerSanity);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	int damageAmt;

	bool isRepeating;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
