#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CppBaseActor.generated.h"

UCLASS()
class NETOLOGYPROJECT01_API ACppBaseActor : public AActor
{
	GENERATED_BODY()

public:
	
	ACppBaseActor();

protected:
	
	virtual void BeginPlay() override;

public:
	
	virtual void Tick(float DeltaTime) override;


	void ShowActorInformation();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Custom")
		int32 EnemyNum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Custom")
		bool bIsAlive;
};
