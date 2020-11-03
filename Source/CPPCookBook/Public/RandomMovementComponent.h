#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RandomMovementComponent.generated.h"


UCLASS( ClassGroup=("[Custom]: Movement"), meta=(BlueprintSpawnableComponent) )
class CPPCOOKBOOK_API URandomMovementComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    URandomMovementComponent();

protected:
    virtual void BeginPlay() override;

public:
    virtual void TickComponent(float DeltaTime, ELevelTick TickType,
                               FActorComponentTickFunction* ThisTickFunction) override;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "[Property]: Movement")
    float MovementRadius = 0.0f;

protected:

    
};
