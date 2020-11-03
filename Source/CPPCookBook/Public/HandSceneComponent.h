#pragma once

#include "CoreMinimal.h"

#include "HandActor.h"
#include "Components/SceneComponent.h"
#include "HandSceneComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CPPCOOKBOOK_API UHandSceneComponent : public USceneComponent
{
	GENERATED_BODY()

public:	
	UHandSceneComponent();
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;

	void SpawnHand();

protected:
	virtual void BeginPlay() override;

public:

	// UPROPERTY(VisibleAnywhere)
	// USceneComponent* MotionControllerRoot;

	UPROPERTY(EditAnywhere, Category = "[Property]: Hand")
	TSubclassOf<AHandActor> HandActor = nullptr;

protected:
	
};
