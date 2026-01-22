// Jassar alotaibi | Weaver of worlds | all rights reserved.
// central scroll speed + cleanup
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ImpScrollManager.generated.h"

/*
  Why UActorComponent for ImpScrollManager?
  - We only need shared scroll speed + ramp logic (data + ticking), not a world object you can collide with.
  - A component is lightweight, modular, and easy to attach to an always-present owner (GameState).
  - Avoids spawning/placing a separate AActor (extra setup + risk of duplicates per level).
  - Avoids UWorldSubsystem overhead (global system boilerplate) for a small 8-hour project.
  Result: clean ownership (GameState owns runtime rules), easy reuse, minimal moving parts.
*/

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class LILIMP_API UImpScrollManager : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UImpScrollManager();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
