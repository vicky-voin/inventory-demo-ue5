// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "InventoryMenu.generated.h"

class UUniformGridPanel;
class UInventoryItemWidget;

USTRUCT(BlueprintType)
struct FInventoryItemData
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FString Name;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FString Description;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TObjectPtr<UTexture2D> Icon;
};

/**
 * 
 */
UCLASS()
class INVENTORYDEMO_API UInventoryMenu : public UCommonActivatableWidget
{
	GENERATED_BODY()

public:

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite)
	TSubclassOf<UInventoryItemWidget> ItemWidget;

	UFUNCTION(BlueprintCallable)
	void Populate(TArray<FInventoryItemData> items);

	UFUNCTION(BlueprintCallable)
	void AddSingleItem(FInventoryItemData item);

private:
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget, BlueprintProtected = true, AllowPrivateAccess = true))
	TObjectPtr<UUniformGridPanel> GridView_Items;

	//TODO: make it customizable in Editor or have it calculate automatically based on the width of the panel
	const int16 NUMBER_OF_COLUMNS = 6;

	void SpawnItemCell(FInventoryItemData data, int itemIndex);
};
