// Jassar alotaibi | Weaver of worlds | all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "InputMappingContext.h"
#include "InputAction.h"
#include "ImpController.generated.h"

/**
 *  will set the input action, mapping context.
 *  with possible ot other scripts so use the input here to play there functions
 *  for  Imp, only two inputs The Flap and Fire suing both Space and Shift buttons
 */
class 	UInputMappingContext;
class   UInputAction;


UCLASS()
class LILIMP_API AImpController : public APlayerController
{
	GENERATED_BODY()
public:
	AImpController();
	
	// Define the input action and mapping context for the Imp character
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputMappingContext* DefaultImpIMC;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* FlapAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* FireAction;

protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;
	
private:
	
	// Called to bind functionality to input
	void HandleFlapAction(const FInputActionValue& Value);
	void HandleFireAction(const FInputActionValue& Value);
	
};
