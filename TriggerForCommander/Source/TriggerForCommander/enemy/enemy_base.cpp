// Fill out your copyright notice in the Description page of Project Settings.


#include "enemy_base.h"

// Sets default values
Aenemy_base::Aenemy_base()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Aenemy_base::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Aenemy_base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void Aenemy_base::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

