// Fill out your copyright notice in the Description page of Project Settings.


#include "BenchmarkMachine.h"

#include "GameFramework/Character.h"
#include "GameFramework/PlayerController.h"
#include "Camera/CameraComponent.h"

// Sets default values for this component's properties
UBenchmarkMachine::UBenchmarkMachine()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UBenchmarkMachine::BeginPlay()
{
	Super::BeginPlay();
	//Disable Tick
	SetComponentTickEnabled(false);
	//Get owner
	PlayerCharacter = Cast<ACharacter>(GetOwner());
	//Get Controller
	CharPlayerController = Cast<APlayerController>(PlayerCharacter->GetController());
	//Get Camera
	CharCamera = PlayerCharacter->FindComponentByClass<UCameraComponent>();
	//Get character position
	CharacterPos = PlayerCharacter->GetActorLocation();
	//Set target position
	CharacterDestination = CharacterPos + FVector(0.f, 1250.f, 0.f);

	//Enable logging
	CharPlayerController->ConsoleCommand(FString("StartFPSChart"));
	//RunBenchmark
	SetComponentTickEnabled(true);
}

void UBenchmarkMachine::EndBenchmark()
{
	//stop tick
	SetComponentTickEnabled(false);
	//stop logging
	CharPlayerController->ConsoleCommand(FString("StopFPSChart"));
	//destroy component
	DestroyComponent();
}


// Called every frame
void UBenchmarkMachine::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	float CameraYaw = CharPlayerController->GetControlRotation().Yaw;

	//Rotate Camera 90 degrees
	if (BenchIterator == 0) {
		CharPlayerController->SetControlRotation(
			FRotator(
				0.f,
				FMath::FInterpTo(CameraYaw, 95.f, DeltaTime, 2.f),
				0.f
			)
		);
		if (CameraYaw > 90.f) {
			BenchIterator = 1;
			CharHeading = CharCamera->GetForwardVector();
		}

	}
	//Move Forward
	if (BenchIterator == 1) {
		PlayerCharacter->AddMovementInput(CharHeading);

		if (PlayerCharacter->GetActorLocation().Y > CharacterDestination.Y) BenchIterator = 2;
	}
	//Look Around
	if (BenchIterator == 2) {
		CharPlayerController->SetControlRotation(
			FRotator(
				0.f,
				FMath::FInterpTo(CameraYaw, 490.f, DeltaTime, .5f),
				0.f
			)
		);
		if (CameraYaw > 450.f) EndBenchmark();
	}
}

