#include "IGS_ParticleImpact.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AIGS_ParticleImpact::AIGS_ParticleImpact(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    //this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->SceneComponent = (USceneComponent*)RootComponent;
    this->ParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystemComponent"));
    this->NiagaraComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent"));
    this->ParticleDecalID = NULL;
    this->NiagaraComponent->SetupAttachment(RootComponent);
    this->ParticleComponent->SetupAttachment(RootComponent);
}

void AIGS_ParticleImpact::OnParticleSystemFinished(UParticleSystemComponent* inParticleComponent) {
}

void AIGS_ParticleImpact::OnNiagaraSystemFinished(UNiagaraComponent* inNiagaraComponent) {
}


