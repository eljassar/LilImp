// Jassar alotaibi | Weaver of worlds | all rights reserved.
// spawns gates, randomizes gap, pacing
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ImpGateSpawner.generated.h"

UCLASS()
class LILIMP_API AImpGateSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AImpGateSpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
