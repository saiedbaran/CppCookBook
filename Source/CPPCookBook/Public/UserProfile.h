#pragma once

#include "CoreMinimal.h"

#include "CharacterState.h"
#include "UObject/NoExportTypes.h"
#include "ColoredTexture.h"
#include "UserProfile.generated.h"


UCLASS(Blueprintable, BlueprintType)
class CPPCOOKBOOK_API UUserProfile : public UObject
{
	GENERATED_BODY()

	public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "[Property]: Stats")
	float Armor;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "[Property]: Stats")
	float HpMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "[Property]: Stats")
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "[Property]: Unit")
	TSubclassOf<UObject> UClassOfPlayer;

	UPROPERTY(EditAnywhere, meta=(MetaClass = "GameMode"), Category = "[Property]: Unit")
	FSoftClassPath UClassGameMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "[Property]: HUD")
	FColoredTexture Texture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "[Property]: Status")
	TEnumAsByte<CharacterState> CharacterState;
};
