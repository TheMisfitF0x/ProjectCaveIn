// Fill out your copyright notice in the Description page of Project Settings.


#include "SanityDamager.h"

// Sets default values for this component's properties
USanityDamager::USanityDamager()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	damageAmt = 20;
	isRepeating = false;
	// ...
}


// Called when the game starts
void USanityDamager::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void USanityDamager::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void USanityDamager::DamageSanity(USanity* playerSanity)
{
	playerSanity->DamageSanity(damageAmt);
}

