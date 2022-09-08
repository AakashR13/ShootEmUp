// Fill out your copyright notice in the Description page of Project Settings.


#include "Gun.h"
#include "Components/SkeletalMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
AGun::AGun()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(Root);

	GunMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("GunMesh"));
	GunMesh->SetupAttachment(Root);
	
	Ammo = MaxAmmo;
	
}

// Called when the game starts or when spawned
void AGun::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AGun::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



void AGun::PullTrigger()
{
	UGameplayStatics::SpawnEmitterAttached(MuzzleFlash, GunMesh, TEXT("MuzzleFlashSocket"));
	UGameplayStatics::SpawnSoundAttached(MuzzleSound, GunMesh, TEXT("MuzzleFlashSocket"));
	FHitResult Hit;
	FVector ShotDirection;
	if (GunTrace(Hit,ShotDirection))
	{
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(),ImpactEffect, Hit.Location,ShotDirection.Rotation());
		UGameplayStatics::SpawnSoundAtLocation(GetWorld(), ImpactSound, Hit.Location, ShotDirection.Rotation());
		if (Hit.GetActor())
		{
			FPointDamageEvent DamageEvent(Damage, Hit, ShotDirection, nullptr);
			AController* OwnerController = GetOwnerController();
			Hit.GetActor()->TakeDamage(Damage, DamageEvent, OwnerController, this);
		}
	}
}


bool AGun::CheckFire()
{
	ACharacter* Character = Cast< ACharacter >(GetOwner());
	//UE_LOG(LogTemp,Warning,TEXT("Character: %s"),*Character->GetActorLabel())
	if(Character->GetCharacterMovement())
		return !IsReloading && Character->GetCharacterMovement()->Velocity.Size()<=130.f && Ammo-- > 0;
	return false;
}

void AGun::ReloadGun()
{
	if (!IsReloading)
	{
		IsReloading = true;
		//delay
		Ammo = MaxAmmo;
	}
	IsReloading = false;
}

bool AGun::GunTrace(FHitResult& Hit, FVector& ShotDirection)
{
	AController* OwnerController = GetOwnerController();
	if (OwnerController == nullptr) 
		return false;

	FVector EyeLocation;
	FRotator EyeRotation;
	OwnerController->GetPlayerViewPoint(EyeLocation, EyeRotation);
	ShotDirection = -EyeRotation.Vector();
	//DrawDebugCamera(GetWorld(), EyeLocation, EyeRotation, 90, 2, FColor::Red, true);

	FVector End = EyeLocation + EyeRotation.Vector() * MaxRange;
	
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(GetOwner());
	Params.AddIgnoredActor(this);
	return  GetWorld()->LineTraceSingleByChannel(Hit, EyeLocation, End, ECollisionChannel::ECC_GameTraceChannel1,Params);
	
}

AController* AGun::GetOwnerController() const
{
	APawn* OwnerPawn = Cast < APawn >(GetOwner());
	if (OwnerPawn == nullptr) return nullptr;
	return OwnerPawn->GetController();
}
