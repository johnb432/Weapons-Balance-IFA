class CfgMagazines {
    class CA_Magazine;
    class LIB_10Rnd_770x56: CA_Magazine {
        _MASS(AMMO303B,10,RNDCLIP);
    };

    class LIB_30Rnd_770x56: CA_Magazine {
        _MASS(AMMO303B,30,RND30MAGLMG);
    };

    class LIB_50Rnd_762x63: CA_Magazine {
        ACE_isBelt = 1;
        mass = 20;
    };

    class LIB_5Rnd_762x54: CA_Magazine {
        _MASS(AMMO762X54R,5,RNDCLIP);
    };
    class LIB_10Rnd_762x54: LIB_5Rnd_762x54 {
        _MASS(AMMO762X54R,10,RND10MAGRIFLE);
    };

    class LIB_47Rnd_762x54: CA_Magazine {
        mass = 23;
    };
    class LIB_63Rnd_762x54: LIB_47Rnd_762x54 {
        mass = 29;
    };

    class LIB_30Rnd_792x33: CA_Magazine {
        _MASS(AMMO792X33,30,RND30MAGSMG);
    };

    class LIB_5Rnd_792x57: CA_Magazine {
        _MASS(AMMO792X57,5,RNDCLIP);
    };
    class LIB_10Rnd_792x57: LIB_5Rnd_792x57 {
        _MASS(AMMO792X57,10,RND10MAGRIFLE);
    };
    class LIB_10Rnd_792x57_clip: LIB_5Rnd_792x57 {
        _MASS(AMMO792X57,10,RNDCLIP);
    };
    class LIB_20Rnd_792x57: LIB_5Rnd_792x57 {
        _MASS(AMMO792X57,20,RND20MAGLMG);
    };

    class LIB_50Rnd_792x57: CA_Magazine {
        ACE_isBelt = 1;
        //_MASS(AMMO792X57,50,RND50BELTMG);
        mass = 31;
    };
    class LIB_100Rnd_792x57: LIB_50Rnd_792x57 {
        mass = 48;
    };

    class LIB_50Rnd_792x57_sS;
    class LIB_100Rnd_792x57_sS: LIB_50Rnd_792x57_sS {
        mass = 48;
    };

    class LIB_5Rnd_762x63: CA_Magazine {
        _MASS(AMMO3006,5,RNDCLIP);
    };

    class LIB_8Rnd_762x63: CA_Magazine {
        _MASS(AMMO3006,8,RNDCLIP);
    };
    class LIB_15Rnd_762x33: LIB_8Rnd_762x63 {
        _MASS(AMMO30CAL,15,RND15MAGSMG);
    };

    class LIB_20Rnd_762x63: CA_Magazine {
        _MASS(AMMO3006,20,RND20MAGLMG);
    };

    class LIB_30Rnd_45ACP: CA_Magazine {
        _MASS(AMMO45ACP,30,RND30MAGSMG);
    };
    class LIB_50Rnd_45ACP: LIB_30Rnd_45ACP {
        _MASS(AMMO45ACP,50,RND50DRUMSMG);
    };

    class LIB_30Rnd_M3_GreaseGun_45ACP: CA_Magazine {
        _MASS(AMMO45ACP,30,RND30MAGSMG);
    };

    class LIB_32Rnd_9x19: CA_Magazine {
        _MASS(AMMO9X19,32,RND32MAGSMG);
    };

    class LIB_32Rnd_9x19_Sten: CA_Magazine {
        _MASS(AMMO9X19,32,RND32MAGSMG);
    };

    class LIB_35Rnd_762x25: CA_Magazine {
        _MASS(AMMO762X25,35,RND36MAGSMG);
    };

    class LIB_71Rnd_762x25: CA_Magazine {
        _MASS(AMMO762X25,71,RND71MAGSMG);
    };
};
