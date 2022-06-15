static const Lights1 wf_seg7_lights_0700D370 = gdSPDefLights1(
    0x3f, 0x3f, 0x3f,
    0xff, 0xff, 0xff, 0x28, 0x28, 0x28
);

Vtx bomp_dl_mesh_vtx_0[36] = {
	{{{259, 210, 95},0, {974, 974},{0x21, 0x68, 0x41, 0xFF}}},
	{{{136, 261, 75},0, {974, -368},{0x21, 0x68, 0x41, 0xFF}}},
	{{{195, 210, 127},0, {504, 436},{0x21, 0x68, 0x41, 0xFF}}},
	{{{259, 5, -128},0, {-4, 1878},{0x39, 0x12, 0x90, 0xFF}}},
	{{{195, 210, -128},0, {664, -1},{0x39, 0x12, 0x90, 0xFF}}},
	{{{259, 210, -96},0, {-4, -54},{0x39, 0x12, 0x90, 0xFF}}},
	{{{259, 210, 95},0, {956, -54},{0x39, 0x12, 0x70, 0xFF}}},
	{{{195, 210, 127},0, {288, -1},{0x39, 0x12, 0x70, 0xFF}}},
	{{{259, 5, 127},0, {956, 1878},{0x39, 0x12, 0x70, 0xFF}}},
	{{{195, 210, -128},0, {715, 915},{0x21, 0x68, 0xBE, 0xFF}}},
	{{{136, 261, -77},0, {1047, -65},{0x21, 0x68, 0xBE, 0xFF}}},
	{{{259, 210, -96},0, {-13, 915},{0x21, 0x68, 0xBE, 0xFF}}},
	{{{-252, 261, 75},0, {-16, -3154},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{136, 261, -77},0, {1178, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-252, 261, -77},0, {1178, -3154},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{136, 261, 75},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{136, 261, -77},0, {566, -88},{0x31, 0x75, 0x0, 0xFF}}},
	{{{136, 261, 75},0, {-660, -88},{0x31, 0x75, 0x0, 0xFF}}},
	{{{259, 210, 95},0, {-812, 974},{0x31, 0x75, 0x0, 0xFF}}},
	{{{259, 210, -96},0, {718, 974},{0x31, 0x75, 0x0, 0xFF}}},
	{{{-252, 210, -128},0, {848, -50},{0x0, 0x0, 0x81, 0xFF}}},
	{{{259, 5, -128},0, {-1988, 974},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-252, 5, -128},0, {848, 974},{0x0, 0x0, 0x81, 0xFF}}},
	{{{195, 210, -128},0, {-1634, -50},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-252, 261, -77},0, {4040, 396},{0x0, 0x5A, 0xA6, 0xFF}}},
	{{{195, 210, -128},0, {462, 974},{0x0, 0x5A, 0xA6, 0xFF}}},
	{{{-252, 210, -128},0, {4040, 974},{0x0, 0x5A, 0xA6, 0xFF}}},
	{{{136, 261, -77},0, {934, 396},{0x0, 0x5A, 0xA6, 0xFF}}},
	{{{195, 210, 127},0, {464, 974},{0x0, 0x5A, 0x59, 0xFF}}},
	{{{136, 261, 75},0, {-8, 396},{0x0, 0x5A, 0x59, 0xFF}}},
	{{{-252, 261, 75},0, {-3112, 396},{0x0, 0x5A, 0x59, 0xFF}}},
	{{{-252, 210, 127},0, {-3112, 974},{0x0, 0x5A, 0x59, 0xFF}}},
	{{{-252, 5, 127},0, {-935, 974},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{259, 5, 127},0, {1901, 974},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{195, 210, 127},0, {1547, -18},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-252, 210, 127},0, {-935, -18},{0x0, 0x0, 0x7F, 0xFF}}},
};

Gfx bomp_dl_mesh_tri_0[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, grass_09003800),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPLight(&wf_seg7_lights_0700D370.l, 1),
    gsSPLight(&wf_seg7_lights_0700D370.a, 2),
	gsSPVertex(bomp_dl_mesh_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 15, 13, 0),
	gsSPVertex(bomp_dl_mesh_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 7, 5, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 11, 9, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(15, 12, 14, 0),
	gsSPVertex(bomp_dl_mesh_vtx_0 + 32, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Vtx bomp_dl_mesh_vtx_1[4] = {
	{{{259, 5, -128},0, {991, 812},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{259, 210, 95},0, {102, 15},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{259, 5, 127},0, {-21, 812},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{259, 210, -96},0, {867, 15},{0x7F, 0x0, 0x0, 0xFF}}},
};

Gfx bomp_dl_mesh_tri_1[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, wf_seg7_texture_07002000),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
	gsSPVertex(bomp_dl_mesh_vtx_1 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSPEndDisplayList(),
};

// 0x0700D708 - 0x0700D780
const Gfx wf_seg7_dl_0700D708[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
    gsSPClearGeometryMode(G_SHADING_SMOOTH),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(bomp_dl_mesh_tri_0),
    gsSPDisplayList(bomp_dl_mesh_tri_1),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_SHADING_SMOOTH),
    gsSPEndDisplayList(),
};
