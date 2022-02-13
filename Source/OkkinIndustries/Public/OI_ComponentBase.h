// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OI_ComponentBase.generated.h"


UENUM(BlueprintType)
enum class EUnitPrefix : uint8 {
	Giga,
	Mega,
	Kilo,
	none,
	deci,
	milli,
	micro,
	nano,
	pico,
};

UENUM(BlueprintType)
enum class EUnits : uint8 {
	Volts,
	Amps,
	Ohms,
	Henry,
	Farad,
	None,
};

UENUM(BlueprintType)
enum class ELEDColor : uint8 {
	White,
	Red,
	Orange,
	Yellow,
	Green,
	Blue,
	Purple,
};

UCLASS()
class OKKININDUSTRIES_API AOI_ComponentBase : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		EUnitPrefix UnitPrefix;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		EUnits Unit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 value;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 componentID;


public:	
	// Sets default values for this actor's properties
	AOI_ComponentBase();



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintImplementableEvent)
		void OnValueUpdated();

	//setters
	void SetUnit(EUnits newUnit);

	void SetUnitPrefix(EUnitPrefix newPrefix);

	void SetValue(int32 newValue);

	void SetComponentID(int32 newComponentID);

	//getters
	//return the unit
	EUnits GetUnit();

	//return the Unit prefix
	EUnitPrefix GetUnitPrefix();
	
	//Return the Components current value
	int32 GetValue();

	//Return the Components ID
	int32 GetComponentID();

	//other functionality
	void updateComponentValues(EUnits newUnit, EUnitPrefix newPrefix, int32 newValue);
	

};
