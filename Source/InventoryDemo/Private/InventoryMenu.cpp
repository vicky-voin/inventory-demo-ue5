// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryMenu.h"
#include "InventoryItemWidget.h"
#include "Components/UniformGridPanel.h"

void UInventoryMenu::AddItems(TArray<FInventoryItemData> items)
{
	int lastItemIndex = GridView_Items->GetChildrenCount();

	for (auto& Item : items)
	{
		SpawnItemCell(Item, lastItemIndex);

		lastItemIndex++;
	}
}

void UInventoryMenu::SpawnItemCell(FInventoryItemData data, int itemIndex)
{
	UInventoryItemWidget* item = CreateWidget<UInventoryItemWidget>(GetOwningPlayer(), ItemWidget, FName(data.Name + "__Item"));
	item->SetToolTipText(FText::FromString(data.Name));
	item->SetImage(data.Icon);
	GridView_Items->AddChildToUniformGrid(item, itemIndex / NUMBER_OF_COLUMNS, itemIndex % NUMBER_OF_COLUMNS);
}