class CfgPatches {
    class fixIFA {
        name = "Fix IFA";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.96;
        requiredAddons[] = {
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
        author = "FK Gaming";
        authors[] = {
            "johnb43"
        };
    };
};

//#include "CfgWeapons.hpp"
//#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
