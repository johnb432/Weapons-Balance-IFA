class CfgAmmo {
    /* Example: .30-06
    ACE_barrelLengths[] = {n, m, o}; array of floats with typical barrel lengths
    ACE_bulletLength = 85 - 63 * 4/5 = 35; Overall length of round - length of cartridge * 4/5
    ACE_caliber = 7.8; Bullet diameter
    */

    class LIB_Bullet_base;
    class LIB_B_45ACP_Ball: LIB_Bullet_base { //B_45ACP_Ball
        ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
        ACE_ballisticCoefficients[] = {0.195};
        ACE_barrelLengths[] = {101.6,127,228.6};
        ACE_bulletLength = 17.272;
        ACE_bulletMass = 14.904;
        ACE_caliber = 11.481;
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {230,250,285};
        ACE_standardAtmosphere = "ASM";
        ACE_velocityBoundaries[] = {};
    };

    class LIB_B_765x17_Ball: LIB_Bullet_base { //HLC_763x25_FMJ, potentially rhs_ammo_9x17
        ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
        ACE_ballisticCoefficients[] = {0.17};
        ACE_barrelLengths[] = {101.6,152.4,228.6};
        ACE_bulletLength = 13.856;
        ACE_bulletMass = 5.5728;
        ACE_caliber = 7.874;
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {360,380,400};
        ACE_standardAtmosphere = "ASM";
        ACE_velocityBoundaries[] = {};
    };

    class LIB_B_762x25_Ball: LIB_Bullet_base { //rhs_ammo_762x25_Ball, 250mm twist
        ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
        ACE_ballisticCoefficients[] = {0.17};
        ACE_barrelLengths[] = {101.6,152.4,228.6};
        ACE_bulletLength = 13.856;
        ACE_bulletMass = 5.5728;
        ACE_caliber = 7.874;
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {360,380,400};
        ACE_standardAtmosphere = "ASM";
        ACE_velocityBoundaries[] = {};
    };

    class LIB_B_9x18_Ball: LIB_Bullet_base { //rhs_B_9x18_57N181S, 250mm twist
        ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
        ACE_ballisticCoefficients[] = {0.125};
        ACE_barrelLengths[] = {96.52,127,228.6};
        ACE_bulletLength = 15.494;
        ACE_bulletMass = 6.00048;
        ACE_caliber = 9.271;
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {298,330,350};
        ACE_standardAtmosphere = "ICAO";
        ACE_velocityBoundaries[] = {};
    };

    class LIB_B_9x19_Ball: LIB_B_9x18_Ball { //HLC_9x19_Ball, https://en.wikipedia.org/wiki/9%C3%9719mm_Parabellum, 250mm twist
        ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
        ACE_ballisticCoefficients[] = {0.165};
        ACE_barrelLengths[] = {101.6,127,228.6};
        ACE_bulletLength = 15.494;
        ACE_bulletMass = 8.0352;
        ACE_caliber = 9.017;
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {340,370,400};
        ACE_standardAtmosphere = "ASM";
        ACE_velocityBoundaries[] = {};
    };

    class LIB_B_762x63_Ball: LIB_Bullet_base { //HLC_3006_FMJ, https://en.wikipedia.org/wiki/.30-06_Springfield, 254mm twist
        ACE_ammoTempMuzzleVelocityShifts[] = {-5.3,-5.1,-4.6,-4.2,-3.4,-2.6,-1.4,-0.3,1.4,3,5.2};
        ACE_ballisticCoefficients[] = {0.25};
        ACE_barrelLengths[] = {305,660.4};
        ACE_bulletLength = 37.821;
        ACE_bulletMass = 13;
        ACE_caliber = 7.823;
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {690,990};
        ACE_standardAtmosphere = "ICAO";
        ACE_velocityBoundaries[] = {};
    };

    class LIB_B_762x33_Ball: LIB_B_762x63_Ball { //B_762x39_Ball_F, https://en.wikipedia.org/wiki/.30_Carbine, 254mm twist
        ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
        ACE_ballisticCoefficients[] = {0.275};
        ACE_barrelLengths[] = {458};
        ACE_bulletLength = 16.3;
        ACE_bulletMass = 7.12788;
        ACE_caliber = 7.8;
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {610};
        ACE_standardAtmosphere = "ICAO";
        ACE_velocityBoundaries[] = {};
    };

    class LIB_B_762x54_Ball: LIB_B_762x63_Ball { //B_762x54_Ball, https://en.wikipedia.org/wiki/7.62%C3%9754mmR, 240mm twist
        ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
        ACE_ballisticCoefficients[] = {0.4};
        ACE_barrelLengths[] = {406.4,508,604.5,736.6};
        ACE_bulletLength = 28.956;
        ACE_bulletMass = 9.8496;
        ACE_caliber = 7.925;
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {760,795,835,865};
        ACE_standardAtmosphere = "ICAO";
        ACE_velocityBoundaries[] = {};
    };

    class LIB_B_770x56_Ball: LIB_Bullet_base { //HLC_303Brit_B, https://en.wikipedia.org/wiki/.303_British, 254mm twist
        ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
        ACE_ballisticCoefficients[] = {0.499,0.493,0.48};
        ACE_barrelLengths[] = {508,609.6,660.4};
        ACE_bulletLength = 31.166;
        ACE_bulletMass = 11.2752;
        ACE_caliber = 7.899;
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {748,761,765};
        ACE_standardAtmosphere = "ASM";
        ACE_velocityBoundaries[] = {671,549};
    };

    class LIB_B_792x33_Ball: LIB_Bullet_base { //B_762x39_Ball_F, https://en.wikipedia.org/wiki/7.92%C3%9733mm_Kurz, 240mm twist
        ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
        ACE_ballisticCoefficients[] = {0.275};
        ACE_barrelLengths[] = {419};
        ACE_bulletLength = 21.6;
        ACE_bulletMass = 8.1;
        ACE_caliber = 8.22;
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {685};
        ACE_standardAtmosphere = "ICAO";
        ACE_velocityBoundaries[] = {};
    };

    class LIB_B_792x57_Ball: LIB_Bullet_base  { //HLC_792x57_Ball, https://en.wikipedia.org/wiki/7.92%C3%9757mm_Mauser, 240mm twist
        ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
        ACE_ballisticCoefficients[] = {0.315};
        ACE_barrelLengths[] = {508,599.948,660.4};
        ACE_bulletLength = 28.651;
        ACE_bulletMass = 9.9;
        ACE_caliber = 8.2;
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {785,800,815};
        ACE_standardAtmosphere = "ASM";
        ACE_velocityBoundaries[] = {};
    };
};
