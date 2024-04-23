#include "IGS_TogglesSettings.h"

UIGS_TogglesSettings::UIGS_TogglesSettings() {
    this->bSettingsValid = true;
    this->bSprintToggleable = false;
    this->bCrouchToggleable = false;
    this->bAimToggleable = false;
    this->bSprintInterruptsReload = false;
    this->bMagCheckInSprintAllowed = false;
}

UIGS_TogglesSettings* UIGS_TogglesSettings::Instance() {
    return NULL;
}


