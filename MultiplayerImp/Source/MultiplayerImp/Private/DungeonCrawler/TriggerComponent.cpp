// Fill out your copyright notice in the Description page of Project Settings.


#include "DungeonCrawler/TriggerComponent.h"

#include "MultiplayerImp/DebugHelper.h"

UTriggerComponent::UTriggerComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UTriggerComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                      FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if(GetAcceptableActor() != nullptr)
		Debug::Print(GetAcceptableActor()->GetActorNameOrLabel());
	else
	{
		Debug::Print("None found");
	}
}

AActor* UTriggerComponent::GetAcceptableActor() const
{
	
	TArray<AActor*> Actors;
	GetOverlappingActors(Actors);
	

	for(AActor* Actor : Actors)
	{
		if(Actor->ActorHasTag(DoorTag))
			return Actor;
	}

	return nullptr;
}
