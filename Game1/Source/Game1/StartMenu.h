// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "StartMenu.generated.h"


/**
 * 
 */
UCLASS()
class GAME1_API UStartMenu : public UUserWidget
{
	GENERATED_BODY()

		virtual bool Initialize();

	UPROPERTY(meta = (BindWidget))
		class UButton* Start;

	UFUNCTION()
		void StartClicked();
	
};
