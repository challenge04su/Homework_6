#include "RotationActor.h"

ARotationActor::ARotationActor()
{
	PrimaryActorTick.bCanEverTick = true;

    SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    SetRootComponent(SceneRoot);

    StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    StaticMeshComp->SetupAttachment(SceneRoot);

    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus"));
    if (MeshAsset.Succeeded())
    {
        StaticMeshComp->SetStaticMesh(MeshAsset.Object);
    }

    static ConstructorHelpers::FObjectFinder<UMaterial> MaterialAsset(TEXT("/Game/StarterContent/Materials/M_Metal_Gold.M_Metal_Gold"));
    if (MaterialAsset.Succeeded())
    {
        StaticMeshComp->SetMaterial(0, MaterialAsset.Object);
    }

    RotationSpeed = 180.0f;
}

void ARotationActor::BeginPlay()
{
	Super::BeginPlay();
    SetActorScale3D(FVector(5.0f));
}

void ARotationActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    if (!FMath::IsNearlyZero(RotationSpeed))
    {
        AddActorLocalRotation(FRotator(0.0f, RotationSpeed * DeltaTime, 0.0f));
    }
}

