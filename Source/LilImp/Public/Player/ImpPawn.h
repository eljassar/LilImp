// Jassar alotaibi | Weaver of worlds | all rights reserved.
// This script defines the player's pawn in the game.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "ImpPawn.generated.h"

UCLASS()
class LILIMP_API AImpPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AImpPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
