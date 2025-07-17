// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveActor.h"

AMoveActor::AMoveActor()
{
	PrimaryActorTick.bCanEverTick = true;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("StaticMesh");
	RootComponent = StaticMesh;

}

void AMoveActor::BeginPlay()
{
	Super::BeginPlay();

	//시작 위치 정하기
	StartLocation = GetActorLocation();
	// StartLocation = (100, 100, 100)
	
}

void AMoveActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//위 아래로 움직이게

	// 현재 위치 받기
	FVector CurrentLocation = GetActorLocation();

	//현재 위치와 시작위치 비교
	//두 점의 거리를 구할 수 잇다 -> FVector::Distance
	// 거리에 - 는 없다.
	float DistanceDelta = FVector::Distance(CurrentLocation, StartLocation);

	//방향을 바꿔야 할 것
	if (DistanceDelta >= MaxRange)
	{
		MoveSpeed *= -1;
	}

	AddActorLocalOffset(FVector(0, 0, MoveSpeed * DeltaTime));
}

