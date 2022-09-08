// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Gun.generated.h"

UCLASS()
class SIMPLESHOOTER_API AGun : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGun();

	void PullTrigger();
	inline float GetAmmo() { return Ammo; }
	inline float GetMaxAmmo() { return  MaxAmmo; }
	inline bool CheckFire();
	void ReloadGun();
	inline void SetAmmo(float NewAmmo) { Ammo = NewAmmo; }
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
		class USceneComponent* Root;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
		class USkeletalMeshComponent* GunMesh;
	
	UPROPERTY(EditAnywhere,Category = "Combat")
		class UParticleSystem* MuzzleFlash;
	
	UPROPERTY(EditAnywhere, Category = "Combat")
		USoundBase* MuzzleSound;
	
	UPROPERTY(EditAnywhere, Category = "Combat")
		USoundBase* ImpactSound;
	
	UPROPERTY(EditAnywhere, Category = "Combat")
		UParticleSystem* ImpactEffect;
	
	UPROPERTY(EditAnywhere, Category = "Combat")
		float MaxRange = 10000.f;

	UPROPERTY(EditAnywhere, Category = "Combat")
		float Damage = 10.f;

	UPROPERTY(EditDefaultsOnly)
		float MaxAmmo = 10;
	
	UPROPERTY(EditAnywhere, Category = "Combat")
		float Ammo;
	
	UPROPERTY(EditDefaultsOnly)
		float ReloadTime = 1.f;
	
	bool IsReloading = false;

	bool GunTrace(FHitResult& Hit, FVector& ShotDirection);

	AController* GetOwnerController() const;

};
