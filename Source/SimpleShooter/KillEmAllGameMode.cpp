// Fill out your copyright notice in the Description page of Project Settings.


#include "KillEmAllGameMode.h"
#include "EngineUtils.h"
#include "GameFramework/Controller.h"
#include "ShooterAIController.h"

void AKillEmAllGameMode::PawnKilled(APawn* PawnKilled)
{
	Super::PawnKilled(PawnKilled);
	//UE_LOG(LogTemp, Display, TEXT("A pawn was killed"));
	
	APlayerController* PlayerController = Cast<APlayerController>(PawnKilled->GetController());
	if (PlayerController != nullptr)
	{
		UE_LOG(LogTemp, Display, TEXT("Lost"));
		EndGame(false);
	}
	for (AShooterAIController* AIController : TActorRange<AShooterAIController>(GetWorld()))
	{
		if (!(AIController->IsDead()))
			return;
	}
	UE_LOG(LogTemp, Display, TEXT("Won"));
	EndGame(true);
}

void AKillEmAllGameMode::EndGame(bool bIsPlayerWinner)
{
	for (AController* Controller : TActorRange<AController>(GetWorld()))
	{
		bool bIsWinner = Controller->IsPlayerController() != bIsPlayerWinner;
			Controller->GameHasEnded(Controller->GetPawn(), bIsWinner);
	}
}
