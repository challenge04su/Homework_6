#include "MoveActor.h"

AMoveActor::AMoveActor()
{
	PrimaryActorTick.bCanEverTick = true;

    SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    SetRootComponent(SceneRoot);

    StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    StaticMeshComp->SetupAttachment(SceneRoot);

    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/StarterContent/Props/SM_TableRound.SM_TableRound"));
    if (MeshAsset.Succeeded())
    {
        StaticMeshComp->SetStaticMesh(MeshAsset.Object);
    }

    static ConstructorHelpers::FObjectFinder<UMaterial> MaterialAsset(TEXT("/Game/StarterContent/Materials/M_Metal_Rust.M_Metal_Rust"));
    if (MaterialAsset.Succeeded())
    {
        StaticMeshComp->SetMaterial(0, MaterialAsset.Object);
    }

    MoveSpeed = 200.0f;
    MaxRange = 500.0f;

    isMove = true;
}

void AMoveActor::OnMove()
{
    isMove = !isMove;
}

void AMoveActor::BeginPlay()
{
    Super::BeginPlay();
    SetActorLocation(FVector::ZeroVector);
    StartLocation = GetActorLocation();
    
    GetWorldTimerManager().SetTimer(moveTimers, this, &AMoveActor::OnMove, 2.0f, true);
}

void AMoveActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    if (!isMove)
    {
        return;
    }
    
    FVector NewLocation = GetActorLocation() + MoveY * MoveSpeed * DeltaTime;
    SetActorLocation(NewLocation);

    float Distance = FVector::Dist(StartLocation, NewLocation);
    if (Distance >= MaxRange)
    {
        MoveY *= -1;
    }
}

