#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "Templates/SubclassOf.h"
#include "IGS_EnvQueryTest_HasLos.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class UIGS_EnvQueryTest_HasLos : public UEnvQueryTest {
    GENERATED_BODY()
public:
    // Crime Boss uses a modified UE4.27, where many structs have been changed to be blueprint compatible
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    //FEnvTraceData TraceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> Context;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue VerticalOffsetItem;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue VerticalOffsetTarget;
    
    UIGS_EnvQueryTest_HasLos();

};

