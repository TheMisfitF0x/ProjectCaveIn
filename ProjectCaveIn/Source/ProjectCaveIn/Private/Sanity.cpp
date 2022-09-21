// Fill out your copyright notice in the Description page of Project Settings.


#include "Sanity.h"

// Sets default values for this component's properties
USanity::USanity()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	sanityAmt = 100;
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

void USanity::DamageSanity(int damageToSanity)
{
	sanityAmt -= damageToSanity;
}

void USanity::HealSanity(int healthToSanity)
{
	sanityAmt += healthToSanity;
}

int USanity::GetSanity()
{
	return sanityAmt;
}