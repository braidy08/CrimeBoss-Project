#pragma once
#include "CoreMinimal.h"
#include "PaybackAICharacter.h"
#include "PaybackSWATCharacter.generated.h"

UCLASS(Blueprintable)
class PAYBACK_API APaybackSWATCharacter : public APaybackAICharacter {
    GENERATED_BODY()
public:
    APaybackSWATCharacter(const FObjectInitializer& ObjectInitializer);

    // Pure virtual fix ~HW12Dev
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags);
};

