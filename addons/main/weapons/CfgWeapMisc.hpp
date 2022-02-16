class LIB_SRIFLE: Rifle_Long_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class LIB_K98ZF39: LIB_SRIFLE {
    ACE_barrelLength = 600;
    ACE_barrelTwist = 240;
    displayName = "Kar98k (Optic)";
    magazineWell[] += {"CBA_792x57_K98"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 91;
    };
};

class LIB_LeeEnfield_No4_Scoped: LIB_SRIFLE {
    ACE_barrelLength = 640;
    ACE_barrelTwist = 254;
    displayName = "Lee-Enfield No.4 Mk.I (T)";
    magazineWell[] += {"CBA_303B_LeeEn"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 97.4;
    };
};

class LIB_M9130PU: LIB_SRIFLE {
    ACE_barrelLength = 730;
    ACE_barrelTwist = 240;
    displayName = "Mosin Nagant M91/30 PU";
    magazineWell[] += {"CBA_762x54R_Mosin"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 93;
    };
};

class LIB_M1903A4_Springfield: LIB_SRIFLE {
    ACE_barrelLength = 610;
    ACE_barrelTwist = 254;
    magazineWell[] += {"CBA_3006_Spring"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 93;
    };
};

class LIB_PISTOL;
class LIB_M1896: LIB_PISTOL {
    displayName = "Mauser C96";
    magazineWell[] += {"CBA_9x19_C96"};
};
class LIB_Colt_M1911: LIB_PISTOL {
    displayName = "M1911";
    magazineWell[] += {"CBA_45ACP_1911"};
};
class LIB_M1895: LIB_PISTOL {
    magazineWell[] += {"CBA_762x38R_Nagant"};
};
class LIB_P08: LIB_PISTOL {
    magazineWell[] += {"CBA_9x19_P08"};
};
class LIB_P38: LIB_PISTOL {
    magazineWell[] += {"CBA_9x19_P38"};
};
class LIB_TT33: LIB_PISTOL {
    magazineWell[] += {"CBA_762x25_TT"};
};
class LIB_WaltherPPK: LIB_PISTOL {
    magazineWell[] += {"CBA_32ACP_PPK"};
};
class LIB_Webley_mk6: LIB_PISTOL {
    displayName = "Webley Mk.VI Revolver";
    magazineWell[] += {"CBA_455_Webley"};
};
class LIB_Welrod_mk1: LIB_PISTOL {
    displayName = "Welrod Mk.I";
    magazineWell[] += {"CBA_9x19_Welrod"};
};
