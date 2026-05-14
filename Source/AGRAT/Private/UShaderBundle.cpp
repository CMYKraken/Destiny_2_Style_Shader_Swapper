// Fill out your copyright notice in the Description page of Project Settings.


#include "UShaderBundle.h"


UShaderBundle::UShaderBundle()
{
	Shaders = TArray<UMaterial*>();
}
UShaderBundle::UShaderBundle(TArray<UMaterial*> inArray) {
	Shaders = inArray;
}
UShaderBundle::~UShaderBundle()
{
}

