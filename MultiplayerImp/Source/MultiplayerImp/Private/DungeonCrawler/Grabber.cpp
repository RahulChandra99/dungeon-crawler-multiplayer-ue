// Fill out your copyright notice in the Description page of Project Settings.


#include "DungeonCrawler/Grabber.h"

#include "MultiplayerImp/DebugHelper.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"

// Sets default values for this component's properties
UGrabber::UGrabber()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UGrabber::BeginPlay()
{
	Super::BeginPlay();

	
}


// Called every frame
void UGrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	
	if(CheckPhysicsHandle())
	{
		FVector ObjectTargetLocation = GetComponentLocation() + GetForwardVector() * HoldDistance;
		CheckPhysicsHandle()->SetTargetLocationAndRotation(ObjectTargetLocation,GetComponentRotation());
		
	}
		
}

void UGrabber::Grab()
{
	if(!CheckPhysicsHandle()) return;

	FHitResult HitResult;
	if(GetGrabbableInReach(HitResult))
	{
		UPrimitiveComponent* HitComponent = HitResult.GetComponent();
		HitComponent->WakeAllRigidBodies();
		CheckPhysicsHandle()->GrabComponentAtLocationWithRotation(
			HitComponent,
			NAME_None,
			HitResult.ImpactPoint,
			GetComponentRotation()
		);
	}
}

void UGrabber::Release()
{
	if(CheckPhysicsHandle()->GetGrabbedComponent())
	{
		CheckPhysicsHandle()->GetGrabbedComponent()->WakeAllRigidBodies();
		CheckPhysicsHandle()->ReleaseComponent();
	}
}

UPhysicsHandleComponent* UGrabber::CheckPhysicsHandle() const
{
	//get another component on the same actor 
	UPhysicsHandleComponent* PhysicsHandle = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();
	if(PhysicsHandle == nullptr)
		Debug::Print("Attach Physics Handle to the object");

	return PhysicsHandle;
}

bool UGrabber::GetGrabbableInReach(FHitResult& OutHitResult) const
{
	FVector Start = GetComponentLocation();
	FVector End = Start + GetForwardVector()*GrabDistance;

	DrawDebugLine(GetWorld(),Start,End,FColor::Blue);
	DrawDebugSphere(GetWorld(),End,10,10,FColor::Red,false,5);

	FCollisionShape Sphere = FCollisionShape::MakeSphere(100);
	return GetWorld()->SweepSingleByChannel(
		OutHitResult,
		Start,
		End,
		FQuat::Identity,
		ECC_GameTraceChannel1,
		Sphere
		);
	
}




