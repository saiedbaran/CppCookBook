#include "UE4CookBookGameModeBase.h"
#include "MyFirstActor.h"

void AUE4CookBookGameModeBase::BeginPlay()
{
    Super::BeginPlay();

    FTransform SpawnLocation;
    SpawnLocation.SetLocation(FVector(0,0,500));

    const auto GeneratedActor = GetWorld()->SpawnActor<AMyFirstActor>(MyFirstActor, SpawnLocation); 

    if(GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1,10, FColor::Red, FString::Printf(TEXT("%s Actor is Spawn"), *GeneratedActor->GetName()));
    }
    
    ActorToDestroy = GeneratedActor;
}

void AUE4CookBookGameModeBase::DestroyGeneratedActor(float Timer)
{
    FTimerHandle TimerHandle;
    GetWorldTimerManager().SetTimer(TimerHandle, this, &AUE4CookBookGameModeBase::InternalDestroy, Timer);
}

void AUE4CookBookGameModeBase::InternalDestroy() const
{
    if(ActorToDestroy != nullptr)
    ActorToDestroy->Destroy();
}
