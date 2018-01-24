// Copyright ZX.Diablo 2018

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UE4WindPongBall.generated.h"

UCLASS()
class UE4WINDPONG_API AUE4WindPongBall : public AActor
{
	GENERATED_BODY()
	
public:
	AUE4WindPongBall ();

	virtual void Tick (float DeltaTime) override;

protected:
	virtual void BeginPlay () override;

private:
	/** Ball collision sphere (root component) */
	UPROPERTY(VisibleAnywhere)
	class USphereComponent* CollisionSphere;

	/** Ball static mesh (sphere) */
	UPROPERTY(VisibleAnywhere)
	class UStaticMeshComponent* StaticMesh;

	/** Ball movement logic */
	UPROPERTY(VisibleAnywhere)
	class UProjectileMovementComponent* Movement;

private:
	/** Default size of the Ball's collision sphere */
	UPROPERTY(VisibleDefaultsOnly, Category = "Ball Defaults")
	float CollisionSphereRadius = 20.0f;

	/** Default radius of the Ball's mesh (before scaling) */
	UPROPERTY(VisibleDefaultsOnly, Category = "Ball Defaults")
	float MeshSphereRadius = 50.0f;
};