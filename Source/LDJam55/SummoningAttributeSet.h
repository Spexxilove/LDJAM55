// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AttributeSet.h"
#include "SummoningAttributeSet.generated.h"


#define GENERATE_GAMEPLAYATTRIBUTE_ACCESSORS(AttributeSetType, Attribute) \
GAMEPLAYATTRIBUTE_PROPERTY_GETTER(AttributeSetType, Attribute);\
GAMEPLAYATTRIBUTE_VALUE_SETTER(Attribute);\
GAMEPLAYATTRIBUTE_VALUE_GETTER(Attribute);\
GAMEPLAYATTRIBUTE_VALUE_INITTER(Attribute);
/**
 * 
 */
UCLASS()
class LDJAM55_API USummoningAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:

	
	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData ChannelingSpeed;
	
	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData ChannelingDuration;
	
	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData CooldownReduction;
	
	
	GENERATE_GAMEPLAYATTRIBUTE_ACCESSORS(USummoningAttributeSet, ChannelingSpeed);
	
	GENERATE_GAMEPLAYATTRIBUTE_ACCESSORS(USummoningAttributeSet, ChannelingDuration);
	
	GENERATE_GAMEPLAYATTRIBUTE_ACCESSORS(USummoningAttributeSet, CooldownReduction);
	
};
