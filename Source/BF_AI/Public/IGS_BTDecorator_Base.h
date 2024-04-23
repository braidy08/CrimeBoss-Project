#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "IGS_BTDecorator_Base.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTDecorator_Base : public UBTDecorator {
    GENERATED_BODY()
public:
    UIGS_BTDecorator_Base();

};

