// Jassar alotaibi | Weaver of worlds | all rights reserved.
// plays flap/score/death/overheat SFX
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ImpAudioManager.generated.h"

UCLASS()
class LILIMP_API AImpAudioManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AImpAudioManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
