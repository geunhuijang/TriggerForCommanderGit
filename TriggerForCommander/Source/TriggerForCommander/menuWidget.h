// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "menuWidget.generated.h"


/**
 * 
 */
UCLASS()
class TRIGGERFORCOMMANDER_API UmenuWidget : public UUserWidget
{
	GENERATED_BODY()
	
protected:
		UFUNCTION()
		void OnStartClicked();

public:
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UButton* start_button;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UButton* setting_button;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UButton* exit_button;

	virtual void NativeOnInitialized() override;

};

