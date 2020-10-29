#pragma once

#include "UObject/ObjectMacros.h"
#include "ColoredTexture.generated.h"

USTRUCT(BlueprintType)
struct CPPCOOKBOOK_API FColoredTexture
{
    GENERATED_BODY()

public:
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD")
    UTexture* Texture;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD")
    FLinearColor Color;
};
