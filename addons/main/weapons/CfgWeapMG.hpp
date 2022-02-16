class LIB_LMG: Rifle_Long_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class LIB_M1918A2_BAR: LIB_LMG {
    ACE_barrelLength = 610;
    ACE_barrelTwist = 254;
    magazineWell[] += {"CBA_3006_BAR"};
};

class LIB_Bren_Mk2: LIB_LMG {
    ACE_barrelLength = 635;
    ACE_barrelTwist = 254;
    ACE_Overheating_allowSwapBarrel = 1;
    displayName = "Bren Mk.II";
    magazineWell[] += {"CBA_303B_BREN"};
};

class LIB_DP28: LIB_LMG {
    ACE_barrelLength = 605;
    ACE_barrelTwist = 240;
    displayName = "DP-27";
    magazineWell[] += {"CBA_762x54R_DPM"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 201.1;
    };
};

class LIB_M1919A4: LIB_LMG {
    ACE_barrelLength = 610;
    ACE_barrelTwist = 254;
    ACE_Overheating_allowSwapBarrel = 1;
    displayName = "M1919A4";
    magazineWell[] += {"CBA_3006_Belt"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 310;
    };
};
class LIB_M1919A6: LIB_M1919A4 {
    displayName = "M1919A6";
};

class LIB_MG34: LIB_LMG {
    ACE_barrelLength = 627;
    ACE_barrelTwist = 240;
    ACE_Overheating_allowSwapBarrel = 1;
    displayName = "MG 34";
    magazineWell[] += {"CBA_792x57_LINKS"};
};

class LIB_MG42: LIB_LMG {
    ACE_barrelLength = 530;
    ACE_barrelTwist = 240;
    ACE_Overheating_allowSwapBarrel = 1;
    magazineWell[] += {"CBA_792x57_LINKS"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 254.5;
    };
};
