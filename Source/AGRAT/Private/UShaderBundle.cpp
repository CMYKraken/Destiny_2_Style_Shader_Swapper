// Fill out your copyright notice in the Description page of Project Settings.


#include "UShaderBundle.h"


UShaderBundle::UShaderBundle()
{
	Shaders = TArray<UMaterialInstance*>();
}
UShaderBundle::UShaderBundle(TArray<UMaterialInstance*> inArray) {
	Shaders = inArray;
}
UShaderBundle::~UShaderBundle()
{
}

