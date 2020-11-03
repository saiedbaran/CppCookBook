#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HandActor.generated.h"

UCLASS()
class CPPCOOKBOOK_API AHandActor : public AActor
{
	GENERATED_BODY()
	
public:	
	AHandActor();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* StaticMeshComponent;
};
