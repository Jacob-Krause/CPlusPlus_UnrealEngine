// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EndGame.generated.h"

/**
 * 
 */
UCLASS()
class GAME1_API UEndGame : public UUserWidget
{
	GENERATED_BODY()
	
		virtual bool Initialize();

	UPROPERTY(meta = (BindWidget))
		class UButton* Replay;

	UFUNCTION()
		void RestartClicked();

};
