#pragma once

#include "CoreMinimal.h"

#include "GameFramework/GameModeBase.h"
#include "UE4CookBookGameModeBase.generated.h"

class AMyFirstActor;
/**
 * 
 */
UCLASS()
class CPPCOOKBOOK_API AUE4CookBookGameModeBase : public AGameModeBase
{
    GENERATED_BODY()

public:

protected:
    virtual void BeginPlay() override;

    UFUNCTION(BlueprintCallable, Category= "[Property]: SpawnAndDestroy")
    void DestroyGeneratedActor(float Timer = 0);

private:
    void InternalDestroy() const;

public:


protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Generation")
    TSubclassOf<AMyFirstActor> MyFirstActor;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
    AActor* ActorToDestroy;

private:

};
