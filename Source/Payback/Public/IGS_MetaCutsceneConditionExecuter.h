#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_MetaCutsceneConditionExecuter.generated.h"

class AGameModeBase;

UCLASS(Blueprintable, EditInlineNew)
class PAYBACK_API UIGS_MetaCutsceneConditionExecuter : public UObject {
    GENERATED_BODY()
public:
    UIGS_MetaCutsceneConditionExecuter();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ExecuteCondition(AGameModeBase* inGameMode, UObject* inMetaCondition);
    
};

