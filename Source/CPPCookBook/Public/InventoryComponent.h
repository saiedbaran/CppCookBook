#pragma once

#include "CoreMinimal.h"

#include "InventoryActor.h"
#include "Components/ActorComponent.h"
#include "InventoryComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CPPCOOKBOOK_API UInventoryComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UInventoryComponent();
    virtual void TickComponent(float DeltaTime, ELevelTick TickType,
                               FActorComponentTickFunction* ThisTickFunction) override;

protected:
    virtual void BeginPlay() override;

private:

    
public:

    UPROPERTY(VisibleAnywhere)
    TArray<AInventoryActor*> CurrentInventory;

    UFUNCTION()
    int32 AddToInventory(AInventoryActor* ActorToAdd);

    UFUNCTION()
    void RemoveFromInventory(AInventoryActor* ActorToRemove);
};
