// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryActor.h"

#include "Engine/CollisionProfile.h"

AInventoryActor::AInventoryActor() : Super()
{
    auto Actor = Cast<AStaticMeshActor>(this);

    if (Actor->GetStaticMeshComponent() != nullptr)
    {
        Actor->GetStaticMeshComponent()->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
    }
}

void AInventoryActor::PickUp()
{
    SetActorTickEnabled(false);
    SetActorHiddenInGame(true);
    SetActorEnableCollision(false);
}

void AInventoryActor::PutDown(FTransform TargetLocation)
{
    SetActorTickEnabled(true);
    SetActorHiddenInGame(false);
    SetActorEnableCollision(true);
    SetActorLocation(TargetLocation.GetLocation());
}
