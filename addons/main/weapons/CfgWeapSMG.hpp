class Rifle_Short_Base_F: Rifle_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class LIB_SMG: Rifle_Short_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class LIB_M1A1_Thompson: LIB_SMG {
    ACE_barrelLength = 267;
    ACE_barrelTwist = 406;
    magazineWell[] += {"CBA_45ACP_Thompson_Stick"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 100;
    };
};
class LIB_M1928_Thompson: LIB_M1A1_Thompson {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 100;
    };
};
class LIB_M1928A1_Thompson: LIB_M1928_Thompson {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 100;
    };
};

class LIB_M3_GreaseGun: LIB_SMG {
    ACE_barrelLength = 203.2;
    ACE_barrelTwist = 406;
    displayName = "M3";
    magazineWell[] += {"CBA_45ACP_Grease"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 81.5;
    };
};

class LIB_MP38: LIB_SMG {
    ACE_barrelLength = 250;
    ACE_barrelTwist = 250;
    magazineWell[] += {"CBA_9x19_MP40"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 89.5;
    };
};

class LIB_MP40: LIB_SMG {
    ACE_barrelLength = 250;
    ACE_barrelTwist = 250;
    magazineWell[] += {"CBA_9x19_MP40"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 87.5;
    };
};

class LIB_PPSh41_m: LIB_SMG {
    ACE_barrelLength = 266;
    ACE_barrelTwist = 250;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 80;
    };
};
class LIB_PPSh41_d: LIB_PPSh41_m {
    baseWeapon = "LIB_PPSh41_m";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 80;
    };
};

class LIB_Sten_Mk2: LIB_SMG {
    ACE_barrelLength = 196;
    ACE_barrelTwist = 250;
    displayName = "Sten Mk.II";
    magazineWell[] += {"CBA_9x19_STEN"};
};
class LIB_Sten_Mk5: LIB_Sten_Mk2 {
    displayName = "Sten Mk.V";
};
