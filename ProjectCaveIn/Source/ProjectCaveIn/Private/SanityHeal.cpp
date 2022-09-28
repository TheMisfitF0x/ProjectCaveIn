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
	isHealing = false;
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
	if (isHealing = true && healTarget != NULL)
	{
		healTarget -> HealSanity(restoreAmt);
	}
	// ...
}

void USanityHeal::RestoreSanity(AActor* player)
{
	USanity* playerSanity = player->FindComponentByClass<USanity>();
	if (playerSanity != NULL)
	{
		if (isTickingTrigger == true )
		{
			if (isHealing == false)
			{
				healTarget = playerSanity;
				isHealing = true;
			}
			else
			{
				isHealing = false;
				healTarget = NULL;
			}
		}
		else 
		{
			playerSanity->HealSanity(restoreAmt);
		}
	}
}