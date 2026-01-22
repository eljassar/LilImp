// Jassar alotaibi | Weaver of worlds | all rights reserved.
// top/bottom gate + score trigger + kill collision
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ImpGateActor.generated.h"

UCLASS()
class LILIMP_API AImpGateActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AImpGateActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
