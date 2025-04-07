// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryMenu.h"
#include "Components/UniformGridPanel.h"

void UInventoryMenu::Populate(TArray<FInventoryItemData> items)
{
	int gridIndex = 0;

	for (auto& Item : items)
	{
		SpawnItemCell(Item, gridIndex);

		gridIndex++;
	}
}

void UInventoryMenu::AddSingleItem(FInventoryItemData item)
{
	int lastItemIndex = GridView_Items->GetChildrenCount();
	SpawnItemCell(item, lastItemIndex++);
}

void UInventoryMenu::SpawnItemCell(FInventoryItemData data, int itemIndex)
{
	UUserWidget* item = CreateWidget(GetOwningPlayer(), ItemWidget, FName(data.Name + "__Item"));
	item->SetToolTipText(FText::FromString(data.Name));
	GridView_Items->AddChildToUniformGrid(item, itemIndex / NUMBER_OF_COLUMNS, itemIndex % NUMBER_OF_COLUMNS);
}