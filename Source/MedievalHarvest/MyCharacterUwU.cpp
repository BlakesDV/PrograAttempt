// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacterUwU.h"

// Sets default values
AMyCharacterUwU::AMyCharacterUwU()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyCharacterUwU::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCharacterUwU::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyCharacterUwU::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

