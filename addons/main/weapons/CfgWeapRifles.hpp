class LIB_RIFLE: Rifle_Base_F {
    class WeaponSlotsInfo;
};
class LIB_DELISLE: LIB_RIFLE {
    ACE_barrelLength = 267;
    ACE_barrelTwist = 406;
    magazineWell[] += {"CBA_45ACP_Delisle"};
};

class LIB_FG42G: LIB_RIFLE {
    ACE_barrelLength = 500;
    ACE_barrelTwist = 240;
    displayName = "FG 42 G";
    magazineWell[] += {"CBA_792x57_FG42"};
};

class LIB_G41: LIB_RIFLE {
    ACE_barrelLength = 550;
    ACE_barrelTwist = 240;
    magazineWell[] += {"CBA_792x57_G41","CBA_792x57_K98"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 108;
    };
};

class LIB_G43: LIB_RIFLE {
    ACE_barrelLength = 550;
    ACE_barrelTwist = 240;
    magazineWell[] += {"CBA_792x57_G43","CBA_792x57_K98"};
};

class LIB_K98: LIB_RIFLE {
    ACE_barrelLength = 600;
    ACE_barrelTwist = 240;
    magazineWell[] += {"CBA_792x57_K98"};
};

class LIB_G3340: LIB_K98 {
    ACE_barrelLength = 490;
    displayName = "Gewehr 33/40";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 76;
    };
};

class LIB_LeeEnfield_No4: LIB_RIFLE {
    ACE_barrelLength = 640;
    ACE_barrelTwist = 254;
    displayName = "Lee-Enfield No.4 Mk.I";
    magazineWell[] += {"CBA_303B_LeeEn"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 92.4;
    };
};
class LIB_LeeEnfield_No1: LIB_LeeEnfield_No4 {
    displayName = "Lee-Enfield No.1 Mk.III*";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 87;
    };
};

class LIB_M9130: LIB_RIFLE {
    ACE_barrelLength = 730;
    ACE_barrelTwist = 240;
    displayName = "Mosin Nagant M91/30";
    magazineWell[] += {"CBA_762x54R_Mosin"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 88;
    };
};
class LIB_M38: LIB_M9130 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 74.8;
    };
};
class LIB_M44: LIB_M9130 {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 90;
    };
};

class LIB_M1_Carbine: LIB_RIFLE {
    ACE_barrelLength = 460;
    ACE_barrelTwist = 254;
    magazineWell[] += {"CBA_30Carbine_M1Carbine"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 52;
    };
};

class LIB_M1_Garand: LIB_RIFLE {
    ACE_barrelLength = 610;
    ACE_barrelTwist = 254;
    magazineWell[] += {"CBA_3006_Garand"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 94.8;
    };
};

class LIB_M1903A3_Springfield: LIB_RIFLE {
    ACE_barrelLength = 610;
    ACE_barrelTwist = 254;
    magazineWell[] += {"CBA_3006_Spring"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 88;
    };
};

class LIB_MP44: LIB_RIFLE {
    ACE_barrelLength = 420;
    ACE_barrelTwist = 240;
    displayName = "StG 44";
    magazineWell[] += {"CBA_792x33_StG"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 101.2;
    };
};

class LIB_PIAT_Rifle: LIB_RIFLE {
    displayName = "P.I.A.T.";
    magazineWell[] += {"CBA_PIAT"};
};

class LIB_SVT_40: LIB_RIFLE {
    ACE_barrelLength = 625;
    ACE_barrelTwist = 240;
    magazineWell[] += {"CBA_762x54R_SVT","CBA_762x54R_Mosin"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 85;
    };
};

class LIB_PTRD: LIB_RIFLE {
    magazineWell[] += {"CBA_145x114_PTRD"};
};
