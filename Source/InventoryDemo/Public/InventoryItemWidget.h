// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "InventoryItemWidget.generated.h"

class UCommonLazyImage;

/**
 * 
 */
UCLASS()
class INVENTORYDEMO_API UInventoryItemWidget : public UCommonActivatableWidget
{
	GENERATED_BODY()

public:
	void SetImage(TObjectPtr<UTexture2D> icon);
	
private:
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget, BlueprintProtected = true, AllowPrivateAccess = true))
	TObjectPtr<UCommonLazyImage> Item_Image;
};
