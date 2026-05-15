// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UShaderBundle.h"
#include "AssetRegistry/IAssetRegistry.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "Components/ActorComponent.h"
#include "UShaderBundleList.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class AGRAT_API UShaderBundleList : public UActorComponent
{
	GENERATED_BODY()

private:
	void PopulateShaderList();
	void ClearShaderList();

public:
	UShaderBundleList();
	~UShaderBundleList();

	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	TArray<UShaderBundle*> ShaderList;

	UFUNCTION(BlueprintCallable)
	UShaderBundle* GetShaderBundleAt(int index);
	UFUNCTION(BlueprintCallable)
	void ReloadShaderList();
};
