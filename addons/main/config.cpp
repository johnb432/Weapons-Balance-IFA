#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ww2_assets_c_weapons_infantryweapons_c",
            "ww2_assets_t_weapons_flamethrowers_t",
            "ww2_assets_t_weapons_launchers_t",
            "ww2_assets_t_weapons_machinegun_heavy_t",
            "ww2_assets_t_weapons_machinegun_light_t",
            "ww2_assets_t_weapons_machinegun_sub_t",
            "ww2_assets_t_weapons_pistols_t",
            "ww2_assets_t_weapons_rifles_t",
            "ww2_assets_t_weapons_sniperrifles_t",
            "ww2_assets_t_weapons_weaponsmagazines_t"
        };
        author = "johnb43";
        authors[] = {
            "johnb43"
        };
        url = "https://github.com/johnb432/Weapons-Balance-IFA";
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

#include "CfgAmmoDef.hpp"
#include "CfgAmmo.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"

class CfgWeapons {
    class Rifle_Base_F;
    class Rifle_Long_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo;
    };

    #include "weapons\CfgWeapMG.hpp"
    #include "weapons\CfgWeapMisc.hpp"
    #include "weapons\CfgWeapRifles.hpp"
    #include "weapons\CfgWeapSMG.hpp"
};
