#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RotationActor.generated.h"

UCLASS()
class HOMEWORK6_API ARotationActor : public AActor
{
	GENERATED_BODY()
	
public:	
	ARotationActor();

protected:
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	USceneComponent* SceneRoot;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* StaticMeshComp;

	UPROPERTY(EditAnywhere)
	float RotationSpeed;

	bool isRotating;

	FTimerHandle rotatorTimer;
	void OnRotator();
};
