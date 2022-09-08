// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterCharacter.h"
#include "Components/PrimitiveComponent.h"
#include "Gun.h"
#include "Components/CapsuleComponent.h"
#include "PlayerShooterGameModeBase.h"
#include "TimerManager.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AShooterCharacter::AShooterCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AShooterCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	Gun = GetWorld()->SpawnActor<AGun>(GunClass);
	GetMesh()->HideBoneByName(TEXT("weapon_r"), EPhysBodyOp::PBO_None);
	Gun->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("WeaponSocket"));
	Gun->SetOwner(this);

	Health = MaxHealth;

}

bool AShooterCharacter::IsDead() const
{
	return Health <= 0;
}



// Called every frame
void AShooterCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AShooterCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("MoveForward"),this,&AShooterCharacter::MoveForward);
	PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &AShooterCharacter::MoveRight);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &AShooterCharacter::AddControllerPitchInput);
	PlayerInputComponent->BindAxis(TEXT("LookUpRate"), this, &AShooterCharacter::LookUpRate);
	PlayerInputComponent->BindAxis(TEXT("LookRight"), this, &AShooterCharacter::AddControllerYawInput);
	PlayerInputComponent->BindAxis(TEXT("LookRightRate"), this, &AShooterCharacter::LookRightRate);

	PlayerInputComponent->BindAction(TEXT("Jump"),EInputEvent::IE_Pressed ,this, &ACharacter::Jump);
	PlayerInputComponent->BindAction(TEXT("Shoot"), EInputEvent::IE_Pressed, this, &AShooterCharacter::ShootGun);
	PlayerInputComponent->BindAction(TEXT("Reload"), EInputEvent::IE_Pressed, this, &AShooterCharacter::ReloadGun);
}

float AShooterCharacter::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	float DamageToApply = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
	DamageToApply = FMath::Min(Health, DamageToApply);
	ACharacter* Character = Cast<ACharacter>(EventInstigator->GetPawn());

	Health -= DamageToApply;
	UE_LOG(LogTemp, Display, TEXT("Health: %f"), Health);
		
	if (IsDead())
	{
		//AShooterCharacter* CharacterPlayer = Cast< AShooterCharacter>(UGameplayStatics::GetPlayerPawn(GetWorld(),0));
		//	if(CharacterPlayer)
		//CharacterPlayer->SetHealth(CharacterPlayer->Health + KillHeal);
		//UE_LOG(LogTemp, Warning, TEXT("%s: %f"), *CharacterPlayer->GetActorNameOrLabel(), Health);
		APlayerShooterGameModeBase* GameMode = GetWorld()->GetAuthGameMode<APlayerShooterGameModeBase>();
		if (GameMode)
			GameMode->PawnKilled(this);
		DetachFromControllerPendingDestroy();
		GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
	return DamageToApply;
}


void AShooterCharacter::MoveForward(float AxisValue)
{
	AddMovementInput(GetActorForwardVector() * AxisValue);
}

void AShooterCharacter::MoveRight(float AxisValue)
{
	AddMovementInput(GetActorRightVector() * AxisValue);
}

void AShooterCharacter::LookUpRate(float AxisValue)
{
	AddControllerPitchInput(AxisValue*TurnRate*GetWorld()->GetDeltaSeconds());
}

void AShooterCharacter::LookRightRate(float AxisValue)
{
	AddControllerYawInput(AxisValue * TurnRate * GetWorld()->GetDeltaSeconds());
}


void AShooterCharacter::ShootGun()
{
	if(Gun->CheckFire())
		Gun->PullTrigger();
	UE_LOG(LogTemp, Warning, TEXT("Ammo: %f\tMaxAmmo: %f"), Gun->GetAmmo(),Gun->GetMaxAmmo());

}

void AShooterCharacter::ReloadGun()
{
	Gun->ReloadGun();
	//if(ReloadAnim)
	//	GetMesh()->PlayAnimation(ReloadAnim, false);
}

float AShooterCharacter::GetHealthPercent() const
{
	return Health/MaxHealth;
}

float AShooterCharacter::GetAmmoPercent() const
{
	return Gun->GetAmmo() / Gun->GetMaxAmmo();
}
