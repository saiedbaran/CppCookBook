#include "RandomMovementComponent.h"

URandomMovementComponent::URandomMovementComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

}


void URandomMovementComponent::BeginPlay()
{
	Super::BeginPlay();

	
}

void URandomMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	auto Parent = GetOwner();
	auto DeltaLocation = FMath::Sin(DeltaTime) * MovementRadius;

	Parent->SetActorLocation(Parent->GetActorLocation() + FVector(DeltaLocation));
}

