// Copyrights Alvian Otso

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "Interaction/EnemyInterface.h"
#include "AuraEnemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraEnemy : public AAuraCharacterBase, public IEnemyInterface
{
	GENERATED_BODY()

public:
	AAuraEnemy();

	/** Begin Enemy interface **/
	virtual void HighligthActor() override; // use 0 it's mean pure virtual function
	virtual void UnHighligthActor() override;
	/**  End Enemy interface **/

	/** Begin Combat Interface*/
	virtual int32 GetPlayerLevel() override;
	/** End Combat Interface*/
	
protected:
	virtual void BeginPlay() override;
	virtual void InitAbilityActorInfo() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Character Class Defaults") 
	int32 Level = 1; // not use replicated because just checking the level on server for AI controlled enemy
	
};
