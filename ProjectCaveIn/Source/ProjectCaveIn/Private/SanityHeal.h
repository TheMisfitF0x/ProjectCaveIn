// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "../Public/Sanity.h"
#include "SanityHeal.generated.h"



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class USanityHeal : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USanityHeal();

	UFUNCTION(BlueprintCallable)
	void RestoreSanity(AActor* playerSanity);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere)
	float restoreAmt;

	UPROPERTY(EditAnywhere)
	bool isTickingTrigger;

	UPROPERTY(VisibleAnywhere)
		USanity* healTarget;

	bool isHealing;

	

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
