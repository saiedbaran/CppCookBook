#include "VRPawn.h"

AVRPawn::AVRPawn()
{
	PrimaryActorTick.bCanEverTick = true;

	PawnBody = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsulBody"));
	SetRootComponent(PawnBody);

	RightHand = CreateDefaultSubobject<UHandSceneComponent>(TEXT("RightHandComponent"));
	RightHand->SetupAttachment(GetRootComponent());
	
	LeftHand = CreateDefaultSubobject<UHandSceneComponent>(TEXT("LeftHandComponent"));
	LeftHand->SetupAttachment(GetRootComponent());

	HandActorGenerated = CreateDefaultSubobject<AActor>(TEXT("HandActorGen"));
}

void AVRPawn::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	FTransform NullTransform = FTransform(FRotator::ZeroRotator, FVector::ZeroVector);
	if(RightHandActor != nullptr)
	{
		FActorSpawnParameters SpawnParameters;

		HandActorGenerated = Cast<AActor>(GetWorld()->SpawnActor<AHandActor>(RightHandActor));
		//auto Hand = GetWorld()->SpawnActor<AActor>(RightHandActor);
		//Hand->AttachToActor(GetOwner(), FAttachmentTransformRules::KeepWorldTransform);
	}

	
}

void AVRPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

void AVRPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AVRPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

