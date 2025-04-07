// Fill out your copyright notice in the Description page of Project Settings.

#include "CommonLazyImage.h"
#include "InventoryItemWidget.h"

void UInventoryItemWidget::SetImage(TObjectPtr<UTexture2D> icon)
{
	Item_Image->SetBrushFromTexture(icon);
}
