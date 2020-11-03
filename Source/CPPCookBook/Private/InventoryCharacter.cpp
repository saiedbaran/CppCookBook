#include "InventoryCharacter.h"

AInventoryCharacter::AInventoryCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AInventoryCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void AInventoryCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AInventoryCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

