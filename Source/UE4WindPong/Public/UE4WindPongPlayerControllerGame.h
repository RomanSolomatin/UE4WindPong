// Copyright ZX.Diablo 2018

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "UE4WindPongPlayerControllerGame.generated.h"

/**
 * 
 */
UCLASS()
class UE4WINDPONG_API AUE4WindPongPlayerControllerGame : public APlayerController
{
	GENERATED_BODY()

public:
	/**
	 * Called by the pad when it hits the ball, updates player score
	 */
	void HitByBall ();

protected:
	virtual void BeginPlay () override;

protected:
	/** Game HUD menu widget class */
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UUserWidget> HUDClass;

private:
	UPROPERTY()
	UUserWidget* HUD;
};
