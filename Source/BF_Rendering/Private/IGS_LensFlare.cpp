#include "IGS_LensFlare.h"
#include "Components/MaterialBillboardComponent.h"
#include "Components/SphereComponent.h"

AIGS_LensFlare::AIGS_LensFlare(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    //this->RootComponent = CreateDefaultSubobject<UMaterialBillboardComponent>(TEXT("LensFlareComponent"));
    this->LensFlareComponent = (UMaterialBillboardComponent*)RootComponent;
    this->SourceBounds = CreateDefaultSubobject<USphereComponent>(TEXT("SourceBoundsComponent"));
    this->FlareMaterial = NULL;
    this->FPS = 60.00f;
    this->m_FlareMIDynamic = NULL;
    this->Luminosity = 1.00f;
    this->GlobalBrightness = 1.00f;
    this->GhostsBrightness = 1.00f;
    this->bUseFadeDistance = false;
    this->FadeDistance = 2048.00f;
    this->bUseDistanceBloom = false;
    this->IncreasingBloomByDistance = 2.00f;
    this->FadeOutSpeed = 15.00f;
    this->FadeInSpeed = 15.00f;
    this->BaseSizeY = 5.00f;
    this->BaseSizeX = 5.00f;
    this->FlickerIntensity = 1.00f;
    this->FlickerTime = 2.00f;
    this->HaloTextureBrightness = 2.00f;
    this->HaloContrast = 2.00f;
    this->HaloOpacity = 0.25f;
    this->HaloInnerRadius = 1.00f;
    this->HaloTexture = NULL;
    this->HaloTextureSize = 1.43f;
    this->IrisBrightness = 1.00f;
    this->IrisContrast = 1.00f;
    this->IrisSize = 1.00f;
    this->Iris = NULL;
    this->IrisProximityCentre = 0.60f;
    this->CentreFlareBrightness = 40.00f;
    this->CentreFlareContrast = 2.00f;
    this->CentreFlareSize = 1.42f;
    this->CentreFlareTexture = NULL;
    this->MainFlareBrightness = 0.05f;
    this->MainFlareContrast = 5.00f;
    this->MainFlareInnerRadius = 0.30f;
    this->MainFlareSize = 1.00f;
    this->MainFlare = NULL;
    this->ReflectionBrightness = 10.00f;
    this->ReflectionContrast = 4.00f;
    this->ReflectionSize = 2.38f;
    this->ReflectionCentreTexture = NULL;
    this->FlareOppositeBrightness1 = 10.00f;
    this->FlareOppositeContrast1 = 2.00f;
    this->FlareOppositeSize1 = 45.00f;
    this->FlareOpposite01 = NULL;
    this->FlareOppositeBrightness2 = 10.00f;
    this->FlareOppositeContrast2 = 2.00f;
    this->FlareOppositeSize2 = 16.20f;
    this->FlareOpposite02 = NULL;
    this->OppositeFlaresAxisProjection = 0.80f;
    this->FlareFrontBrightness01 = 1.00f;
    this->FlareFrontContrast01 = 2.00f;
    this->FlareFrontSize01 = 17.50f;
    this->FlareFrontProximityCentre01 = 0.62f;
    this->FlareFront01 = NULL;
    this->FlareFrontBrightness02 = 1.00f;
    this->FlareFrontContrast02 = 2.00f;
    this->FlareFrontSize02 = 8.00f;
    this->FlareFrontProximityCentre02 = 0.80f;
    this->FlareFront02 = NULL;
    this->FrontFlaresAxisProjection = 0.60f;
    this->ReflectedFlareBrightness01 = 100.00f;
    this->ReflectedFlareContrast01 = 2.00f;
    this->ReflectedFlareSize01 = 7.00f;
    this->ReflectedFlareProximityCentre01 = 0.60f;
    this->ReflectedFlare01 = NULL;
    this->ReflectedFlareBrightness02 = 13.00f;
    this->ReflectedFlareContrast02 = 2.00f;
    this->ReflectedFlareSize02 = 5.00f;
    this->ReflectedFlareProximityCentre02 = 0.70f;
    this->ReflectedFlare02 = NULL;
    this->GlobalMinorFlareBrightness01 = 100.00f;
    this->GlobalMinorFlareContrast01 = 4.00f;
    this->GlobalMinorFlareSize01 = 7.00f;
    this->MinorFlareSizeRandom01 = 7.00f;
    this->MinorFlareProximityCentre01 = 0.60f;
    this->GlobalMinorFlareBrightness02 = 100.00f;
    this->GlobalMinorFlareContrast02 = 4.00f;
    this->GlobalMinorFlareSize02 = 7.00f;
    this->MinorFlareSizeRandom02 = 7.00f;
    this->MinorFlareProximityCentre02 = 0.60f;
    this->MinorFlare01 = NULL;
    this->MinorContrast1 = 1.00f;
    this->MinorBrightness1 = 1.00f;
    this->MinorFlare02 = NULL;
    this->MinorContrast2 = 1.00f;
    this->MinorBrightness2 = 1.00f;
    this->MinorFlare03 = NULL;
    this->MinorContrast3 = 1.00f;
    this->MinorBrightness3 = 1.00f;
    this->MinorFlare04 = NULL;
    this->MinorContrast4 = 1.00f;
    this->MinorBrightness4 = 1.00f;
    this->MinorFlare05 = NULL;
    this->MinorContrast5 = 1.00f;
    this->MinorBrightness5 = 1.00f;
    this->MinorFlare06 = NULL;
    this->MinorContrast6 = 1.00f;
    this->MinorBrightness6 = 1.00f;
    this->MinorFlare07 = NULL;
    this->MinorContrast7 = 1.00f;
    this->MinorBrightness7 = 1.00f;
    this->MinorFlare08 = NULL;
    this->MinorContrast8 = 1.00f;
    this->MinorBrightness8 = 1.00f;
    this->AdditionalFlareBrightness = 1.00f;
    this->AdditionalFlareContrast = 1.00f;
    this->AdditionalFlareSize = 5.00f;
    this->AdditionalFlare = NULL;
}


