// Copyrights Alvian Otso


#include "AuraAssetManager.h"

#include "AuraGameplayTags.h"

UAuraAssetManager& UAuraAssetManager::Get()
{
	check(GEngine);
	
	UAuraAssetManager* AuraAssetManager = Cast<UAuraAssetManager>(GEngine->AssetManager);
	return *AuraAssetManager;
}

void UAuraAssetManager::StartInitialLoading()
{
	Super::StartInitialLoading();

	// call initialize native gameplay tags from AuraGameplayTags.h file
	FAuraGameplayTags::InitializeNativeGameplayTags();
}
