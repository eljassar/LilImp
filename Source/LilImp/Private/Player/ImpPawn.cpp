// Jassar alotaibi | Weaver of worlds | all rights reserved.
// This script defines the player's pawn in the game.

#include "Player/ImpPawn.h"

// Sets default values
AImpPawn::AImpPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AImpPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AImpPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AImpPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

