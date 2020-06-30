// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WriteDataToFile.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJEKTNAMWR_API UWriteDataToFile : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UWriteDataToFile();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
	UFUNCTION(BlueprintCallable, Category = "Save")
		static bool FileSaveString(FString SaveTextB, FString FileNameB);

	UFUNCTION(BlueprintPure, Category = "Save")
		static bool FileLoadString(FString FileNameA, FString& SaveTextA);
};
