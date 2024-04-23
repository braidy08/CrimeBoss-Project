#pragma once
#include "CoreMinimal.h"
#include "IGS_AIControllerGame.h"
#include "IGS_AIControllerArtillery_Base.generated.h"

UCLASS(Blueprintable)
class BF_AI_API AIGS_AIControllerArtillery_Base : public AIGS_AIControllerGame {
    GENERATED_BODY()
public:
    AIGS_AIControllerArtillery_Base(const FObjectInitializer& ObjectInitializer);

};

