// Jassar alotaibi | Weaver of worlds | all rights reserved.
// heat/overheat rules for RIP Burst
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ImpHeatComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class LILIMP_API UImpHeatComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UImpHeatComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
