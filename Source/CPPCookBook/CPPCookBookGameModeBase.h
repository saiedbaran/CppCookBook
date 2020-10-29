#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "UserProfile.h"
#include "CPPCookBookGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class CPPCOOKBOOK_API ACPPCookBookGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

	public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UClassNames")
	TSubclassOf<UUserProfile> UPBlueprintClassName;
};
