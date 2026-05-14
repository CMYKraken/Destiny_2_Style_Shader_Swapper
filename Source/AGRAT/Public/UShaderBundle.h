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
	TArray<UMaterial*> Shaders;
public:
	UShaderBundle();
	UShaderBundle(TArray<UMaterial*> inArray);
	~UShaderBundle();
};
