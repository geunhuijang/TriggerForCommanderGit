// Fill out your copyright notice in the Description page of Project Settings.

#include "menuWidget.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"


void UmenuWidget::NativeOnInitialized(){
	Super::NativeOnInitialized();

	if (start_button != nullptr) {
		start_button->OnClicked.AddDynamic(this, &UmenuWidget::OnStartClicked);
	}

}

void UmenuWidget::OnStartClicked() {
	UGameplayStatics::OpenLevel(this, "FirstPersonExampleMap");

}