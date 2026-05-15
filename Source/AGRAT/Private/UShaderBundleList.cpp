// Fill out your copyright notice in the Description page of Project Settings.


#include "UShaderBundleList.h"

UShaderBundleList::UShaderBundleList()
{
}

UShaderBundleList::~UShaderBundleList()
{
}

void UShaderBundleList::PopulateShaderList()
{
	IAssetRegistry& AssetRegistry = FModuleManager::LoadModuleChecked<FAssetRegistryModule>(TEXT("AssetRegistry")).Get();

	TArray<FAssetData> RetrievedData;

	AssetRegistry.GetAssetsByClass(FTopLevelAssetPath(UShaderBundle::StaticClass()->GetPathName()), RetrievedData, true);

	for (auto EachAssetData : RetrievedData) {
		if (Cast<UShaderBundle>(EachAssetData.GetAsset())) {
			ShaderList.Add(Cast<UShaderBundle>(EachAssetData.GetAsset()));
		}
	}
}

void UShaderBundleList::ClearShaderList()
{
	ShaderList.Empty();
}

UShaderBundle* UShaderBundleList::GetShaderBundleAt(int index)
{
	return ShaderList[index];
}

void UShaderBundleList::ReloadShaderList()
{
	ClearShaderList();
	PopulateShaderList();
}
