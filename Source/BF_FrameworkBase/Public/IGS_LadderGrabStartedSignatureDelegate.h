#pragma once
#include "CoreMinimal.h"
#include "IGS_LadderGrabStartedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_LadderGrabStartedSignature, bool, IsGrabbingFromTop);
