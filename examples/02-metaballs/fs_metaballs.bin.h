static const uint8_t fs_metaballs_glsl[398] =
{
	0x46, 0x53, 0x48, 0x03, 0x03, 0x2c, 0xf5, 0x3f, 0x00, 0x00, 0x7f, 0x01, 0x00, 0x00, 0x76, 0x61, // FSH..,.?......va
	0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, // rying highp vec4
	0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, //  v_color0;.varyi
	0x6e, 0x67, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x76, 0x5f, // ng highp vec3 v_
	0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, // normal;.void mai
	0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x66, // n ().{.  highp f
	0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x20, // loat tmpvar_1;. 
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x64, 0x6f, 0x74, 0x20, //  tmpvar_1 = dot 
	0x28, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x76, 0x5f, 0x6e, 0x6f, 0x72, // (normalize(v_nor
	0x6d, 0x61, 0x6c, 0x29, 0x2c, 0x20, 0x76, 0x65, 0x63, 0x33, 0x28, 0x30, 0x2e, 0x30, 0x2c, 0x20, // mal), vec3(0.0, 
	0x30, 0x2e, 0x30, 0x2c, 0x20, 0x2d, 0x31, 0x2e, 0x30, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x6d, // 0.0, -1.0));.  m
	0x65, 0x64, 0x69, 0x75, 0x6d, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, // ediump vec4 tmpv
	0x61, 0x72, 0x5f, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, // ar_2;.  tmpvar_2
	0x2e, 0x77, 0x20, 0x3d, 0x20, 0x31, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, // .w = 1.0;.  tmpv
	0x61, 0x72, 0x5f, 0x32, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, 0x70, 0x6f, 0x77, 0x20, 0x28, // ar_2.xyz = pow (
	0x28, 0x28, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x70, 0x6f, 0x77, 0x20, 0x28, 0x76, 0x5f, 0x63, 0x6f, // ((.    pow (v_co
	0x6c, 0x6f, 0x72, 0x30, 0x2e, 0x78, 0x79, 0x7a, 0x2c, 0x20, 0x76, 0x65, 0x63, 0x33, 0x28, 0x32, // lor0.xyz, vec3(2
	0x2e, 0x32, 0x2c, 0x20, 0x32, 0x2e, 0x32, 0x2c, 0x20, 0x32, 0x2e, 0x32, 0x29, 0x29, 0x0a, 0x20, // .2, 2.2, 2.2)). 
	0x20, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x29, 0x20, 0x2b, 0x20, //   * tmpvar_1) + 
	0x70, 0x6f, 0x77, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2c, 0x20, 0x33, // pow (tmpvar_1, 3
	0x30, 0x2e, 0x30, 0x29, 0x29, 0x2c, 0x20, 0x76, 0x65, 0x63, 0x33, 0x28, 0x30, 0x2e, 0x34, 0x35, // 0.0)), vec3(0.45
	0x34, 0x35, 0x34, 0x35, 0x34, 0x2c, 0x20, 0x30, 0x2e, 0x34, 0x35, 0x34, 0x35, 0x34, 0x35, 0x34, // 45454, 0.4545454
	0x2c, 0x20, 0x30, 0x2e, 0x34, 0x35, 0x34, 0x35, 0x34, 0x35, 0x34, 0x29, 0x29, 0x3b, 0x0a, 0x20, // , 0.4545454));. 
	0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, //  gl_FragColor = 
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,             // tmpvar_2;.}...
};
static const uint8_t fs_metaballs_dx9[429] =
{
	0x46, 0x53, 0x48, 0x03, 0x03, 0x2c, 0xf5, 0x3f, 0x00, 0x00, 0xa0, 0x01, 0x00, 0x03, 0xff, 0xff, // FSH..,.?........
	0xfe, 0xff, 0x16, 0x00, 0x43, 0x54, 0x41, 0x42, 0x1c, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, // ....CTAB....#...
	0x00, 0x03, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x91, 0x00, 0x00, // ................
	0x1c, 0x00, 0x00, 0x00, 0x70, 0x73, 0x5f, 0x33, 0x5f, 0x30, 0x00, 0x4d, 0x69, 0x63, 0x72, 0x6f, // ....ps_3_0.Micro
	0x73, 0x6f, 0x66, 0x74, 0x20, 0x28, 0x52, 0x29, 0x20, 0x48, 0x4c, 0x53, 0x4c, 0x20, 0x53, 0x68, // soft (R) HLSL Sh
	0x61, 0x64, 0x65, 0x72, 0x20, 0x43, 0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, 0x20, 0x31, 0x30, // ader Compiler 10
	0x2e, 0x30, 0x2e, 0x31, 0x30, 0x30, 0x31, 0x31, 0x2e, 0x30, 0x00, 0xab, 0x51, 0x00, 0x00, 0x05, // .0.10011.0..Q...
	0x00, 0x00, 0x0f, 0xa0, 0x00, 0x00, 0xf0, 0x41, 0xcd, 0xcc, 0x0c, 0x40, 0x2f, 0xba, 0xe8, 0x3e, // .......A...@/..>
	0x00, 0x00, 0x80, 0x3f, 0x1f, 0x00, 0x00, 0x02, 0x0a, 0x00, 0x00, 0x80, 0x00, 0x00, 0x07, 0x90, // ...?............
	0x1f, 0x00, 0x00, 0x02, 0x05, 0x00, 0x01, 0x80, 0x01, 0x00, 0x07, 0x90, 0x08, 0x00, 0x00, 0x03, // ................
	0x00, 0x00, 0x01, 0x80, 0x01, 0x00, 0xe4, 0x90, 0x01, 0x00, 0xe4, 0x90, 0x07, 0x00, 0x00, 0x02, // ................
	0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x80, 0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x01, 0x80, // ................
	0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0xaa, 0x90, 0x20, 0x00, 0x00, 0x03, 0x01, 0x00, 0x01, 0x80, // ........ .......
	0x00, 0x00, 0x00, 0x81, 0x00, 0x00, 0x00, 0xa0, 0x0f, 0x00, 0x00, 0x02, 0x02, 0x00, 0x01, 0x80, // ................
	0x00, 0x00, 0x00, 0x90, 0x0f, 0x00, 0x00, 0x02, 0x02, 0x00, 0x02, 0x80, 0x00, 0x00, 0x55, 0x90, // ..............U.
	0x0f, 0x00, 0x00, 0x02, 0x02, 0x00, 0x04, 0x80, 0x00, 0x00, 0xaa, 0x90, 0x05, 0x00, 0x00, 0x03, // ................
	0x00, 0x00, 0x0e, 0x80, 0x02, 0x00, 0x90, 0x80, 0x00, 0x00, 0x55, 0xa0, 0x0e, 0x00, 0x00, 0x02, // ..........U.....
	0x02, 0x00, 0x01, 0x80, 0x00, 0x00, 0x55, 0x80, 0x0e, 0x00, 0x00, 0x02, 0x02, 0x00, 0x02, 0x80, // ......U.........
	0x00, 0x00, 0xaa, 0x80, 0x0e, 0x00, 0x00, 0x02, 0x02, 0x00, 0x04, 0x80, 0x00, 0x00, 0xff, 0x80, // ................
	0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x07, 0x80, 0x02, 0x00, 0xe4, 0x80, 0x00, 0x00, 0x00, 0x81, // ................
	0x01, 0x00, 0x00, 0x80, 0x0f, 0x00, 0x00, 0x02, 0x01, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x80, // ................
	0x0f, 0x00, 0x00, 0x02, 0x01, 0x00, 0x02, 0x80, 0x00, 0x00, 0x55, 0x80, 0x0f, 0x00, 0x00, 0x02, // ..........U.....
	0x01, 0x00, 0x04, 0x80, 0x00, 0x00, 0xaa, 0x80, 0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x07, 0x80, // ................
	0x01, 0x00, 0xe4, 0x80, 0x00, 0x00, 0xaa, 0xa0, 0x0e, 0x00, 0x00, 0x02, 0x00, 0x08, 0x01, 0x80, // ................
	0x00, 0x00, 0x00, 0x80, 0x0e, 0x00, 0x00, 0x02, 0x00, 0x08, 0x02, 0x80, 0x00, 0x00, 0x55, 0x80, // ..............U.
	0x0e, 0x00, 0x00, 0x02, 0x00, 0x08, 0x04, 0x80, 0x00, 0x00, 0xaa, 0x80, 0x01, 0x00, 0x00, 0x02, // ................
	0x00, 0x08, 0x08, 0x80, 0x00, 0x00, 0xff, 0xa0, 0xff, 0xff, 0x00, 0x00, 0x00,                   // .............
};
static const uint8_t fs_metaballs_dx11[660] =
{
	0x46, 0x53, 0x48, 0x03, 0x03, 0x2c, 0xf5, 0x3f, 0x00, 0x00, 0x84, 0x02, 0x44, 0x58, 0x42, 0x43, // FSH..,.?....DXBC
	0x71, 0x00, 0x85, 0x0b, 0x80, 0xfd, 0x1e, 0xdf, 0x09, 0x21, 0xdf, 0xe6, 0x3a, 0xef, 0x53, 0xf8, // q........!..:.S.
	0x01, 0x00, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, // ............,...
	0xa0, 0x00, 0x00, 0x00, 0xd4, 0x00, 0x00, 0x00, 0x49, 0x53, 0x47, 0x4e, 0x6c, 0x00, 0x00, 0x00, // ........ISGNl...
	0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ........P.......
	0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, // ................
	0x5c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, // ................
	0x01, 0x00, 0x00, 0x00, 0x0f, 0x07, 0x00, 0x00, 0x62, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, // ........b.......
	0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, // ................
	0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0x43, 0x4f, 0x4c, 0x4f, // SV_POSITION.COLO
	0x52, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, 0x44, 0x00, 0xab, 0x4f, 0x53, 0x47, 0x4e, // R.TEXCOORD..OSGN
	0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, // ,........... ...
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x54, 0x41, 0x52, 0x47, 0x45, 0x54, 0x00, 0xab, 0xab, // ....SV_TARGET...
	0x53, 0x48, 0x44, 0x52, 0xa8, 0x01, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x6a, 0x00, 0x00, 0x00, // SHDR....@...j...
	0x62, 0x10, 0x00, 0x03, 0x72, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x62, 0x10, 0x00, 0x03, // b...r.......b...
	0x72, 0x10, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0xf2, 0x20, 0x10, 0x00, // r.......e.... ..
	0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x02, 0x02, 0x00, 0x00, 0x00, 0x2f, 0x00, 0x00, 0x05, // ....h......./...
	0x72, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x12, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, // r.......F.......
	0x38, 0x00, 0x00, 0x0a, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, // 8...r.......F...
	0x00, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0xcd, 0xcc, 0x0c, 0x40, 0xcd, 0xcc, 0x0c, 0x40, // .....@.....@...@
	0xcd, 0xcc, 0x0c, 0x40, 0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x05, 0x72, 0x00, 0x10, 0x00, // ...@........r...
	0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x07, // ....F...........
	0x82, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x12, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, // ........F.......
	0x46, 0x12, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x05, 0x82, 0x00, 0x10, 0x00, // F.......D.......
	0x00, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x07, // ....:.......8...
	0x82, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ........:.......
	0x2a, 0x10, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x2f, 0x00, 0x00, 0x06, 0x12, 0x00, 0x10, 0x00, // *......./.......
	0x01, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x10, 0x80, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ....:...A.......
	0x38, 0x00, 0x00, 0x07, 0x12, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, // 8...............
	0x01, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x41, 0x19, 0x00, 0x00, 0x05, // .....@.....A....
	0x12, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, // ................
	0x32, 0x00, 0x00, 0x0a, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, // 2...r.......F...
	0x00, 0x00, 0x00, 0x00, 0xf6, 0x0f, 0x10, 0x80, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ........A.......
	0x06, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x2f, 0x00, 0x00, 0x05, 0x72, 0x00, 0x10, 0x00, // ......../...r...
	0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x0a, // ....F.......8...
	0x72, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // r.......F.......
	0x02, 0x40, 0x00, 0x00, 0x2f, 0xba, 0xe8, 0x3e, 0x2f, 0xba, 0xe8, 0x3e, 0x2f, 0xba, 0xe8, 0x3e, // .@../..>/..>/..>
	0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x05, 0x72, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ........r ......
	0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x05, 0x82, 0x20, 0x10, 0x00, // F.......6.... ..
	0x00, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x3e, 0x00, 0x00, 0x01, // .....@.....?>...
	0x00, 0x00, 0x00, 0x00,                                                                         // ....
};
