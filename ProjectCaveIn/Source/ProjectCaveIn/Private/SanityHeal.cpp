// Fill out your copyright notice in the Description page of Project Settings.


#include "SanityHeal.h"
#include "Sanity.h"

// Sets default values for this component's properties
USanityHeal::USanityHeal()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	restoreAmt = 20;
	isRepeating = false;
	// ...
}


// Called when the game starts
void USanityHeal::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void USanityHeal::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void USanityHeal::RestoreSanity(USanity* playerSanity)
{
	playerSanity -> HealSanity(restoreAmt);
}