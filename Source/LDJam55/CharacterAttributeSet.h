// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AttributeSet.h"

#include "CharacterAttributeSet.generated.h"


#define GENERATE_GAMEPLAYATTRIBUTE_ACCESSORS(AttributeSetType, Attribute) \
GAMEPLAYATTRIBUTE_PROPERTY_GETTER(AttributeSetType, Attribute);\
GAMEPLAYATTRIBUTE_VALUE_SETTER(Attribute);\
GAMEPLAYATTRIBUTE_VALUE_GETTER(Attribute);\
GAMEPLAYATTRIBUTE_VALUE_INITTER(Attribute);

/**
 * 
 */
UCLASS()
class LDJAM55_API UCharacterAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
	UCharacterAttributeSet();
	virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;
	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;


	/* Health Attribute */
	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData Health;

	/* Max Health Attribute */
	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData MaxHealth;
	
	/* Meta Attribute to calculate and apply incoming damage*/
	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData Damage;

	/* Movement Speed Attribute */
	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData MovementSpeed;
	
	//~ Helper functions for "Health" attributes
	GENERATE_GAMEPLAYATTRIBUTE_ACCESSORS(UCharacterAttributeSet, Health);

	//~ Helper functions for "MaxHealth" attributes
	GENERATE_GAMEPLAYATTRIBUTE_ACCESSORS(UCharacterAttributeSet, MaxHealth);

	//~ Helper functions for "Damage" attributes
	GENERATE_GAMEPLAYATTRIBUTE_ACCESSORS(UCharacterAttributeSet, Damage);

	//~ Helper functions for "MovementSpeed" attributes
	GENERATE_GAMEPLAYATTRIBUTE_ACCESSORS(UCharacterAttributeSet, MovementSpeed);
};
