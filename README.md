# Inventory Demo Project

This is a small feature prototype built with UE5 and using Common UI and Third Person template.

The project works with both keyboard and mouse and the Xbox One controller. (Other controllers have not been tested)

## Features

An input legend is always displayed at the bottom of the screen, showcasing possible allowed inputs.

![](img/screencapture1.gif)

Items implementing a Pickupable interface can be picked up and added to the inventory.

![](img/screencapture2.gif)

Inventory menu can be toggled on and off and will display picked up items, as well as the initial inventory. Hovering over an item will display its name in a tooltip.

The UI can seamlessly switch between keyboard/mouse or controller inputs.

![](img/screencapture3.gif)

## Known issues and TODOs

* Pickup detection raycast logic could be improved
* Items in the Inventory can only be added, not removed
* Inventory items are stored in the InventoryMenu, should perhaps be moved out of the UI class into a Registry