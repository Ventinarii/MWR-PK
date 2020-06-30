// Fill out your copyright notice in the Description page of Project Settings.

#include <Runtime\Core\Public\Misc\Paths.h>
#include <Runtime\Core\Public\Misc\FileHelper.h>
#include "WriteDataToFile.h"

// Sets default values for this component's properties
UWriteDataToFile::UWriteDataToFile()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UWriteDataToFile::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UWriteDataToFile::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

bool UWriteDataToFile::FileSaveString(FString SaveTextB, FString FileNameB)
{
	return FFileHelper::SaveStringToFile(SaveTextB, *(FPaths::GameDir() + FileNameB));
}

bool UWriteDataToFile::FileLoadString(FString FileNameA, FString& SaveTextA)
{
	return FFileHelper::LoadFileToString(SaveTextA, *(FPaths::GameDir() + FileNameA));
}