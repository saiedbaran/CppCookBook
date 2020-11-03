#pragma once

#include "CoreMinimal.h"

#include "InventoryComponent.h"
#include "GameFramework/Character.h"
#include "InventoryCharacter.generated.h"

UCLASS()
class CPPCOOKBOOK_API AInventoryCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AInventoryCharacter();
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
	void DropItem();

	UFUNCTION()
	void PickUpItem(AInventoryActor* InventoryItem);

	
protected:
	virtual void BeginPlay() override;

	private:

	
public:

	UPROPERTY(VisibleAnywhere)
	UInventoryComponent* MyInventory;
};
