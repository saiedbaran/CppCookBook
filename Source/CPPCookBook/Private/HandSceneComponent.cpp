#include "HandSceneComponent.h"

UHandSceneComponent::UHandSceneComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

}

void UHandSceneComponent::BeginPlay()
{
	Super::BeginPlay();

	
}

void UHandSceneComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

void UHandSceneComponent::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	//SpawnHand();
}

void UHandSceneComponent::SpawnHand()
{
	if(HandActor != nullptr)
		auto Hand = GetWorld()->SpawnActor(HandActor);
}

