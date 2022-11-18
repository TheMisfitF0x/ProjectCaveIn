// Fill out your copyright notice in the Description page of Project Settings.


#include "Sanity.h"

// Sets default values for this component's properties
USanity::USanity()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	sanityMax = 500;
	sanityAmt = 500;
	percentValue = sanityAmt / sanityMax;
	isAlive = true;
	// ...
}


// Called when the game starts
void USanity::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void USanity::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	if (sanityAmt <= 0)
	{
		isAlive = false;
	}
}

void USanity::DamageSanity(float damageToSanity)
{
	sanityAmt -= damageToSanity;
	OnChange();
}

void USanity::HealSanity(float healthToSanity)
{
	sanityAmt += healthToSanity;
	OnChange();
}

float USanity::GetSanity()
{
	return sanityAmt;
}

void USanity::SetCamera(UCameraComponent* camera)
{
	playerCamComponent = camera;
}

void USanity::OnChange()
{
	percentValue = sanityAmt / sanityMax;
	FVector4 newSaturation = FVector4(percentValue, percentValue, percentValue, 1);
	playerCamComponent->PostProcessSettings.ColorSaturation = newSaturation;
	UKismetSystemLibrary::PrintString(this, TEXT("Sanity changed"), true, true);
}