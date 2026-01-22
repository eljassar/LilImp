// Jassar alotaibi | Weaver of worlds | all rights reserved.
// plays flap/score/death/overheat SFX

#include "Audio/ImpAudioManager.h"

// Sets default values
AImpAudioManager::AImpAudioManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AImpAudioManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AImpAudioManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

