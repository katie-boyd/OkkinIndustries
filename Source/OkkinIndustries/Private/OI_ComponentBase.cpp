// Fill out your copyright notice in the Description page of Project Settings.


#include "OI_ComponentBase.h"

// Sets default values
AOI_ComponentBase::AOI_ComponentBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	UnitPrefix = EUnitPrefix::none;
	Unit = EUnits::None;
}

// Called when the game starts or when spawned
void AOI_ComponentBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AOI_ComponentBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AOI_ComponentBase::SetUnit(EUnits newUnit)
{
	Unit = newUnit;
}

void AOI_ComponentBase::SetUnitPrefix(EUnitPrefix newPrefix)
{
	UnitPrefix = newPrefix;
}

void AOI_ComponentBase::SetValue(int32 newValue)
{
	value = newValue;
}

void AOI_ComponentBase::SetComponentID(int32 newComponentID)
{
	componentID = newComponentID;
}

EUnits AOI_ComponentBase::GetUnit()
{
	return Unit;
}

EUnitPrefix AOI_ComponentBase::GetUnitPrefix()
{
	return UnitPrefix;
}

int32 AOI_ComponentBase::GetValue()
{
	return value;
}

int32 AOI_ComponentBase::GetComponentID()
{
	return componentID;
}

void AOI_ComponentBase::updateComponentValues(EUnits newUnit, EUnitPrefix newPrefix, int32 newValue)
{
	Unit = newUnit;
	UnitPrefix = newPrefix;
	value = newValue;
	OnValueUpdated();
}


