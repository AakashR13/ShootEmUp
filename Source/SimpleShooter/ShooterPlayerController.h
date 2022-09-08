// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ShooterPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLESHOOTER_API AShooterPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	virtual void GameHasEnded(class AActor* EndGameFocus = nullptr, bool bIsWinner = false) override;

	virtual void BeginPlay() override;
private:
	UPROPERTY(EditAnywhere)
		float RespawnDelay = 5.0f;
	
	UPROPERTY(EditAnywhere)
		TSubclassOf<class UUserWidget> LoseScreenClass;
	
	UPROPERTY(EditAnywhere)
		TSubclassOf<class UUserWidget> WinScreenClass;

	UPROPERTY(EditAnywhere)
		TSubclassOf<class UUserWidget> HUDClass;
	
	FTimerHandle RespawnTimerHandle;
	
	UPROPERTY()
	UUserWidget* HUD;
};
