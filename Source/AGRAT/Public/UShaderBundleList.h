// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UShaderBundle.h"
#include "UObject/Object.h"
#include "UShaderBundleList.generated.h"

/**
 * 
 */
UCLASS()
class AGRAT_API UShaderBundleList : public UObject
{
	GENERATED_BODY()

public:
	UShaderBundleList();
	~UShaderBundleList();

	UPROPERTY(BlueprintReadOnly)
	TArray<UShaderBundle*> ShaderList;
};
