// Jassar alotaibi | Weaver of worlds | all rights reserved.
#include "Controller/ImpController.h"
#include "InputMappingContext.h"
#include "InputAction.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"

// Sets default values
AImpController::AImpController()
{
	
}

// Called when the game starts or when spawned
void AImpController::BeginPlay()
{

}

// Called to bind functionality to input
void AImpController::SetupInputComponent()
{
	Super::SetupInputComponent();
    
	if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(InputComponent))
	{
		if (FlapAction)
		{
			EnhancedInput->BindAction(FlapAction, ETriggerEvent::Started, this, &AImpController::HandleFlapAction);
			EnhancedInput->BindAction(FlapAction, ETriggerEvent::Completed, this, &AImpController::HandleFlapAction);
		}
        
		if (FireAction)
		{
			EnhancedInput->BindAction(FireAction, ETriggerEvent::Triggered, this, &AImpController::HandleFireAction);
		}
	}
}

// Handle Flap action input
void AImpController::HandleFlapAction(const FInputActionValue& Value)
{
	FlapAction = Value.Get<bool>();
}

// Handle Fire action input
void AImpController::HandleFireAction(const FInputActionValue& Value)
{
	
}