// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class UNREALLEARNINGKIT_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	int32 MyInt = 99;

	UPROPERTY(EditAnywhere)
	int32 InputA = 0;

	UPROPERTY(EditAnywhere)
	int32 InputB = 0;

	UPROPERTY(EditAnywhere)
	int32 APlusB = 0;

	UPROPERTY(EditAnywhere)
	bool myBool = false;
	
	UPROPERTY(EditAnywhere)
	float myFloatA = 18.44;

	UPROPERTY(EditAnywhere)
	float myFloatB = 1.2;

	UPROPERTY(EditAnywhere)
	float FloatAPlusB = 0.0;

	UPROPERTY(EditAnywhere)
	FVector MyFloat = FVector(1.0, 2.0, 3.0);

	UPROPERTY(EditAnywhere)
	float MyFloatX = 0.0;
};
