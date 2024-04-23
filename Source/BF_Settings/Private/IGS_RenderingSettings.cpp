#include "IGS_RenderingSettings.h"

UIGS_RenderingSettings::UIGS_RenderingSettings() {
    this->bSettingsValid = true;
    this->FullscreenModeValue = 0;
    this->ResolutionValue = 18;
    this->VSyncEnabledValue = false;
    this->ResolutionScaleValue = 100.00f;
    this->ProfileValue = 0;
    this->ViewDistanceQualityValue = 0;
    this->AntiAliasingQualityValue = 2;
    this->PostProcessingQualityValue = 0;
    this->ShadowQualityValue = 0;
    this->TextureQualityValue = 0;
    this->VisualEffectQualityValue = 0;
    this->FoliageQualityValue = 0;
    this->MotionBlurScaleFPV = 1.00f;
    this->MotionBlurScale3PV = 1.00f;
    this->BaseCameraFOVHorizontal = 100.00f;
    this->bWasFirstTimeBenchmarked = false;
    this->bWasFirstTimeMainMenuInitialized = false;
    this->DLSSMode = 1;
    this->XeSSmode = 0;
    this->FSRmode = 0;
    this->ReflexMode = 1;
    this->bDLAAenabled = false;
    this->ChosenDisplay = 0;
    this->MotionBlurEnabled = false;
    this->FramerateLimitInGame = 0;
    this->FramerateLimitInMenu = 0;
    this->FramerateLimitOutOfFocus = 30;
    this->bCanChangeMonitorPositions = true;
    this->bQualityModeForConsoles = false;
}

float UIGS_RenderingSettings::VerticalFOVToActualHorizontalFOV(float inVerticalFOV, FVector2D inViewportSize) {
    return 0.0f;
}

void UIGS_RenderingSettings::UseLockpickRenderingSettings(bool inIsLockpicking) {
}

void UIGS_RenderingSettings::SetQualityLevels_Auto(bool inRunBenchmark) {
}

void UIGS_RenderingSettings::SetIsGamePausedInMenu(bool inIsPausedInMenu) {
}

void UIGS_RenderingSettings::SetIsCurrentGameModeMenu(bool inIsMenu) {
}

void UIGS_RenderingSettings::SetFramerateUnlockedCinematic(bool inUnlocked) {
}

UIGS_RenderingSettings* UIGS_RenderingSettings::Instance() {
    return NULL;
}

float UIGS_RenderingSettings::HorizontalFOV2VerticalFOV(float inHorizontalFOV) {
    return 0.0f;
}

TArray<FIntPoint> UIGS_RenderingSettings::GetSupportedScreenResolutions() {
    return TArray<FIntPoint>();
}

bool UIGS_RenderingSettings::GetIsSteamDeck() {
    return false;
}

void UIGS_RenderingSettings::EnableReducedTexturePoolSize() {
}

void UIGS_RenderingSettings::EnableMovieCVarSettings() const {
}

void UIGS_RenderingSettings::DisableMovieCVarSettings() const {
}


