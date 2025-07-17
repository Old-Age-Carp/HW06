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

	//���� ��ġ ���ϱ�
	StartLocation = GetActorLocation();
	// StartLocation = (100, 100, 100)
	
}

void AMoveActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//�� �Ʒ��� �����̰�

	// ���� ��ġ �ޱ�
	FVector CurrentLocation = GetActorLocation();

	//���� ��ġ�� ������ġ ��
	//�� ���� �Ÿ��� ���� �� �մ� -> FVector::Distance
	// �Ÿ��� - �� ����.
	float DistanceDelta = FVector::Distance(CurrentLocation, StartLocation);

	//������ �ٲ�� �� ��
	if (DistanceDelta >= MaxRange)
	{
		MoveSpeed *= -1;
	}

	AddActorLocalOffset(FVector(0, 0, MoveSpeed * DeltaTime));
}

