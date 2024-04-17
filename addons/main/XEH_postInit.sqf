#include "script_component.hpp"

if (!hasInterface) exitWith {};

// Removes the mass at the bottom of inventory screen, as it doesn't work with different UI sizes and the BetterInventory mod
["CAManBase", "InventoryOpened", {
    params ["_unit"];

    if (_unit != call CBA_fnc_currentUnit) exitWith {};

    [{!isNull (findDisplay 602)}, {
        private _inventoryCtrl = findDisplay 602;

        (_inventoryCtrl displayCtrl 112) ctrlShow false; // Text in front of actual mass
        (_inventoryCtrl displayCtrl 113) ctrlShow false; // Display actual mass
    }, nil, 3] call CBA_fnc_waitUntilAndExecute;
}] call CBA_fnc_addClassEventHandler;
