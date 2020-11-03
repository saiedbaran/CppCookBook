#pragma once

#include "CoreMinimal.h"

#include "HandSceneComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/Pawn.h"
#include "VRPawn.generated.h"

UCLASS()
class CPPCOOKBOOK_API AVRPawn : public APawn
{
    GENERATED_BODY()

public:
    AVRPawn();
#if WITH_EDITOR
    virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

    virtual void Tick(float DeltaTime) override;

    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
    virtual void BeginPlay() override;

public:

    UPROPERTY(EditAnywhere, Category = "[Property]: Hands")
    UHandSceneComponent* RightHand;

    UPROPERTY(EditAnywhere, Category = "[Property]: Hands")
    UHandSceneComponent* LeftHand;

    UPROPERTY(EditAnywhere, Category = "[Property]: Body")
    UCapsuleComponent* PawnBody;

    UPROPERTY(EditAnywhere, Category = "[Property]: Camera")
    UCameraComponent* CameraComponent;

    UPROPERTY(EditAnywhere, Category = "[Property]: Hand")
    TSubclassOf<AHandActor> RightHandActor = nullptr;

    UPROPERTY(VisibleAnywhere)
    AActor* HandActorGenerated;
protected:
};
