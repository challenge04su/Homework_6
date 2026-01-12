#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MoveActor.generated.h"

UCLASS()
class HOMEWORK6_API AMoveActor : public AActor
{
	GENERATED_BODY()
	
public:	
	AMoveActor();

protected:
	virtual void Tick(float DeltaTime) override;
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	USceneComponent* SceneRoot;
	
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* StaticMeshComp;
	
	UPROPERTY(EditAnywhere)
	float MoveSpeed;

	UPROPERTY(EditAnywhere)
	float MaxRange;

	FVector MoveY = FVector(0, 1, 0);
	FVector StartLocation;
};
