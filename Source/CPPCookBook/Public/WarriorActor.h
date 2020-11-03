#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WarriorActor.generated.h"

UCLASS()
class CPPCOOKBOOK_API AWarriorActor : public AActor
{
	GENERATED_BODY()
	
public:	
	AWarriorActor();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "[Property]: Spect")
FString ToString();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "[Property]: Spect")
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "[Property]: Behavior")
	float LifeSpan = 10.0f;

};
