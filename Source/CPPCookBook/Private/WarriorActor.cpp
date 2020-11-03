#include "WarriorActor.h"

AWarriorActor::AWarriorActor()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AWarriorActor::BeginPlay()
{
	Super::BeginPlay();

	SetLifeSpan(LifeSpan);
}

void AWarriorActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FString AWarriorActor::ToString()
{
	return FString::Printf(TEXT("An instance of AWarrior: %s"), *Name);
}

