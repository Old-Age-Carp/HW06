// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MoveActor.generated.h"

UCLASS()
class HW06_API AMoveActor : public AActor
{
	GENERATED_BODY()
	
public:	
	AMoveActor();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	UStaticMeshComponent* StaticMesh;

	FVector StartLocation

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Move");
	float MoveSpeed = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	float MaxRange = 100.0f;
};
