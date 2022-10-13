// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "BenchmarkMachine.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TESTTASKTA_API UBenchmarkMachine : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UBenchmarkMachine();

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:
	//Pointer to the player character
	class ACharacter* PlayerCharacter = nullptr;
	//Pointer to the PlayerController
	class APlayerController* CharPlayerController = nullptr;
	//Pointer to the camera
	class UCameraComponent* CharCamera = nullptr;
	uint8 BenchIterator = 0;

	//Character starting position
	FVector CharacterPos;
	FVector CharacterDestination;
	//Heading Vector
	FVector CharHeading;
	//Benchmark End Function
	void EndBenchmark();
};