#pragma once
#include "CoreMinimal.h"
#include "NavFilters/NavigationQueryFilter.h"
#include "EntranceFinderQueryFilter.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UEntranceFinderQueryFilter : public UNavigationQueryFilter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CostMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsActive;
    
public:
    UEntranceFinderQueryFilter();

};

