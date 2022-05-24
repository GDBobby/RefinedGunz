#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 9.29.952.3111
//
//   fxc /Evs_point_light /Tvs_3_0 /FhInclude/PointLightVS.h
//    /VnPointLightVSData Source/Lighting.hlsl /O3
//
//
// Parameters:
//
//   float4 g_Light;
//   float4x4 g_Proj;
//
//
// Registers:
//
//   Name         Reg   Size
//   ------------ ----- ----
//   g_Proj       c0       4
//   g_Light      c8       1
//

    vs_3_0
    dcl_position v0
    dcl_position o0
    dcl_texcoord o1
    mad r0.xyz, v0, c8.w, c8
    mov r0.w, v0.w
    dp4 r1.x, r0, c0
    dp4 r1.y, r0, c1
    dp4 r1.z, r0, c2
    dp4 r1.w, r0, c3
    mov o0, r1
    mov o1, r1

// approximately 8 instruction slots used
#endif

const BYTE PointLightVSData[] =
{
      0,   3, 254, 255, 254, 255, 
     44,   0,  67,  84,  65,  66, 
     28,   0,   0,   0, 123,   0, 
      0,   0,   0,   3, 254, 255, 
      2,   0,   0,   0,  28,   0, 
      0,   0,   0, 129,   0,   0, 
    116,   0,   0,   0,  68,   0, 
      0,   0,   2,   0,   8,   0, 
      1,   0,  34,   0,  76,   0, 
      0,   0,   0,   0,   0,   0, 
     92,   0,   0,   0,   2,   0, 
      0,   0,   4,   0,   2,   0, 
    100,   0,   0,   0,   0,   0, 
      0,   0, 103,  95,  76, 105, 
    103, 104, 116,   0,   1,   0, 
      3,   0,   1,   0,   4,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0, 103,  95,  80, 114, 
    111, 106,   0, 171,   3,   0, 
      3,   0,   4,   0,   4,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0, 118, 115,  95,  51, 
     95,  48,   0,  77, 105,  99, 
    114, 111, 115, 111, 102, 116, 
     32,  40,  82,  41,  32,  72, 
     76,  83,  76,  32,  83, 104, 
     97, 100, 101, 114,  32,  67, 
    111, 109, 112, 105, 108, 101, 
    114,  32,  57,  46,  50,  57, 
     46,  57,  53,  50,  46,  51, 
     49,  49,  49,   0,  31,   0, 
      0,   2,   0,   0,   0, 128, 
      0,   0,  15, 144,  31,   0, 
      0,   2,   0,   0,   0, 128, 
      0,   0,  15, 224,  31,   0, 
      0,   2,   5,   0,   0, 128, 
      1,   0,  15, 224,   4,   0, 
      0,   4,   0,   0,   7, 128, 
      0,   0, 228, 144,   8,   0, 
    255, 160,   8,   0, 228, 160, 
      1,   0,   0,   2,   0,   0, 
      8, 128,   0,   0, 255, 144, 
      9,   0,   0,   3,   1,   0, 
      1, 128,   0,   0, 228, 128, 
      0,   0, 228, 160,   9,   0, 
      0,   3,   1,   0,   2, 128, 
      0,   0, 228, 128,   1,   0, 
    228, 160,   9,   0,   0,   3, 
      1,   0,   4, 128,   0,   0, 
    228, 128,   2,   0, 228, 160, 
      9,   0,   0,   3,   1,   0, 
      8, 128,   0,   0, 228, 128, 
      3,   0, 228, 160,   1,   0, 
      0,   2,   0,   0,  15, 224, 
      1,   0, 228, 128,   1,   0, 
      0,   2,   1,   0,  15, 224, 
      1,   0, 228, 128, 255, 255, 
      0,   0
};
