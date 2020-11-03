#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyFirstActor.generated.h"

UCLASS(Blueprintable, BlueprintType)
class CPPCOOKBOOK_API AMyFirstActor : public AActor
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    AMyFirstActor();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

    // Variables
public:

protected:
    UPROPERTY(EditAnywhere, Category = "[Property]: Mesh")
    UStaticMeshComponent* StaticMeshComponent;
	
private:
};
