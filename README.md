# Inventory Filter mod for Fallout 2

A mirror repository of the Inventory Filter mod for Fallout 2 by **Mr.Stalin**, based on the idea of JimTheDinosaur's [_Inventory Sort Buttons_ mod](https://www.nma-fallout.com/threads/inventory-sort-buttons-mod.203180).

## Features
* Quickly find ammo for weapons from tons of junk in the inventory: if you click the middle mouse button on the "Weapons" and "Ammo" menu buttons, these items will be displayed simultaneously in the list.
* Money is always shown at the top when bartering, or if the "All" filter is selected (the feature does not work right after opening the inventory).
* Quickly exchange your party members when bartering or opening containers.
* Displays the weight value for items in the selected category, as well as the number of coins the merchant has in barter.
* The "Drop/Give All" button.
* Hotkeys to switch between the selected categories.

## Installation
1. Download `F2-InventoryFilter_v*_<language>.rar` from the _Releases_ page.
2. Extract the archive to main game directory. Inventory Filter v1.5.9 requires [**sfall**](https://github.com/phobos2077/sfall) (`ddraw.dll`) version 4.2/3.8.29 or later to be fully functional.
3. Edit `mods/InventoryFilter.dat/InventoryFilter.ini` to tweak the options as you desire.

This is how it's supposed to look like when installed:
![installed](pics/installed.png)

* Note for sfall 3.8.x: move `PCX` and `scripts` folders into the `data` folder in main game directory after step 2.


## Uninstallation
Delete `mods/InventoryFilter.dat` folder. If you installed the mod for sfall 3.8.x, delete `data/scripts/gl_InvenFilter.int` file and `data/PCX/inv_filter` folder as well.
