// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UShaderBundle.generated.h"
/**
 * 
 */
UCLASS(Blueprintable)
class AGRAT_API UShaderBundle : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	TArray<UMaterialInstance*> Shaders;
public:
	UShaderBundle();
	UShaderBundle(TArray<UMaterialInstance*> inArray);
	~UShaderBundle();
};
