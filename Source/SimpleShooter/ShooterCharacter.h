// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AIController.h"
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ShooterCharacter.generated.h"


UCLASS()
class SIMPLESHOOTER_API AShooterCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AShooterCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	UFUNCTION(BlueprintPure)
		bool IsDead() const;

	UFUNCTION(BlueprintPure)
		float GetHealthPercent() const;
	
	UFUNCTION(BlueprintPure)
		float GetAmmoPercent() const;
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;

	inline virtual void SetHealth(float NewHealth) { Health = NewHealth; }
	
	void ShootGun();
	
	void ReloadGun();

private:
	void MoveForward(float AxisValue);
	void MoveRight(float AxisValue);

	void LookUpRate(float AxisValue);
	void LookRightRate(float AxisValue);
	

	UPROPERTY(EditAnywhere)
		float TurnRate = 10.f;

	UPROPERTY(EditDefaultsOnly)
		float MaxHealth = 100;
	
	UPROPERTY(VisibleAnywhere)
		float Health;

	UPROPERTY(VisibleAnywhere)
		float KillHeal = 20;

	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<class AGun> GunClass;
	
	UPROPERTY(EditDefaultsOnly)
		UAnimSequence* ReloadAnim;
		

	
	UPROPERTY()
		AGun* Gun;
};
