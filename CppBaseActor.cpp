#include "CppBaseActor.h"
#include "Engine/Engine.h"

ACppBaseActor::ACppBaseActor()
{
	
	PrimaryActorTick.bCanEverTick = true;

	
	EnemyNum = 10; 
	bIsAlive = true; 
}


void ACppBaseActor::BeginPlay()
{
	Super::BeginPlay();

	
	UE_LOG(LogTemp, Display, TEXT("BeginPlay: Actor %s has started."), *GetName());

	
	ShowActorInformation();
}


void ACppBaseActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


void ACppBaseActor::ShowActorInformation()
{
	
	UE_LOG(LogTemp, Display, TEXT("Instance name: %s"), *GetName());
	UE_LOG(LogTemp, Display, TEXT("EnemyNum: %d"), EnemyNum);
	UE_LOG(LogTemp, Display, TEXT("IsAlive: %s"), bIsAlive ? TEXT("true") : TEXT("false"));
}
