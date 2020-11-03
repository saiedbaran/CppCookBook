#include "HandActor.h"

AHandActor::AHandActor()
{
	PrimaryActorTick.bCanEverTick = true;

	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HandMesh"));
	SetRootComponent(StaticMeshComponent);
}

void AHandActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void AHandActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

