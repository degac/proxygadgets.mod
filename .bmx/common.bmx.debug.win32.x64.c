#include "common.bmx.debug.win32.x64.h"
static BBString _s1={
	&bbStringClass,
	7,
	{32,83,105,122,101,58,32}
};
static BBString _s2={
	&bbStringClass,
	3,
	{32,120,32}
};
static BBString _s0={
	&bbStringClass,
	6,
	{84,105,112,111,58,32}
};
struct BBDebugScope_1{int kind; const char *name; BBDebugDecl decls[2]; };
struct BBDebugScope_15{int kind; const char *name; BBDebugDecl decls[16]; };
struct BBDebugScope_23{int kind; const char *name; BBDebugDecl decls[24]; };
BBINT maxgui_proxygadgets_common_MakeLight_CheckLimit(BBINT* bbt_value);
BBINT maxgui_proxygadgets_common_MakeLight_CheckLimit(BBINT* bbt_value){
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"CheckLimit",
		{
			{
				BBDEBUGDECL_VARPARAM,
				"value",
				"i",
				.var_address=&bbt_value
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 75, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(*bbt_value<0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 75, 0};
		bbOnDebugEnterStm(&__stmt_0);
		*bbt_value=0;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 76, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(*bbt_value>255){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 76, 0};
		bbOnDebugEnterStm(&__stmt_0);
		*bbt_value=255;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 77, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbOnDebugLeaveScope();
	return 0;
}
BBOBJECT maxgui_proxygadgets_common_MakeLight(BBOBJECT bbt_src){
	BBINT bbt_r=0;
	BBINT bbt_g=0;
	BBINT bbt_b=0;
	BBINT bbt_argb=0;
	BBINT bbt_a=0;
	BBINT bbt_c=0;
	BBINT bbt_x=0;
	BBINT bbt_y=0;
	BBINT bbt_tipo=0;
	struct brl_pixmap_TPixmap_obj* bbt_pm=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	struct brl_max2d_image_TImage_obj* bbt_tmp_img=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
	struct brl_pixmap_TPixmap_obj* bbt_pix=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	struct maxgui_maxgui_iconstrip_TIconStrip_obj* bbt_ics=(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)&bbNullObject;
	BBINT bbt_kk=0;
	BBINT bbt_hh=0;
	BBINT bbt_ww=0;
	BBARRAY volatile bbt_RED=&bbEmptyArray;
	BBARRAY volatile bbt_green=&bbEmptyArray;
	BBARRAY volatile bbt_blue=&bbEmptyArray;
	BBARRAY volatile bbt_alpha=&bbEmptyArray;
	struct brl_pixmap_TPixmap_obj* bbt_pm2=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	BBINT bbt_pixcol=0;
	struct BBDebugScope_23 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"MakeLight",
		{
			{
				BBDEBUGDECL_LOCAL,
				"src",
				":Object",
				.var_address=&bbt_src
			},
			{
				BBDEBUGDECL_LOCAL,
				"r",
				"i",
				.var_address=&bbt_r
			},
			{
				BBDEBUGDECL_LOCAL,
				"g",
				"i",
				.var_address=&bbt_g
			},
			{
				BBDEBUGDECL_LOCAL,
				"b",
				"i",
				.var_address=&bbt_b
			},
			{
				BBDEBUGDECL_LOCAL,
				"argb",
				"i",
				.var_address=&bbt_argb
			},
			{
				BBDEBUGDECL_LOCAL,
				"a",
				"i",
				.var_address=&bbt_a
			},
			{
				BBDEBUGDECL_LOCAL,
				"c",
				"i",
				.var_address=&bbt_c
			},
			{
				BBDEBUGDECL_LOCAL,
				"x",
				"i",
				.var_address=&bbt_x
			},
			{
				BBDEBUGDECL_LOCAL,
				"y",
				"i",
				.var_address=&bbt_y
			},
			{
				BBDEBUGDECL_LOCAL,
				"tipo",
				"i",
				.var_address=&bbt_tipo
			},
			{
				BBDEBUGDECL_LOCAL,
				"pm",
				":TPixmap",
				.var_address=&bbt_pm
			},
			{
				BBDEBUGDECL_LOCAL,
				"tmp_img",
				":TImage",
				.var_address=&bbt_tmp_img
			},
			{
				BBDEBUGDECL_LOCAL,
				"pix",
				":TPixmap",
				.var_address=&bbt_pix
			},
			{
				BBDEBUGDECL_LOCAL,
				"ics",
				":TIconStrip",
				.var_address=&bbt_ics
			},
			{
				BBDEBUGDECL_LOCAL,
				"kk",
				"i",
				.var_address=&bbt_kk
			},
			{
				BBDEBUGDECL_LOCAL,
				"hh",
				"i",
				.var_address=&bbt_hh
			},
			{
				BBDEBUGDECL_LOCAL,
				"ww",
				"i",
				.var_address=&bbt_ww
			},
			{
				BBDEBUGDECL_LOCAL,
				"RED",
				"[,]i",
				.var_address=&bbt_RED
			},
			{
				BBDEBUGDECL_LOCAL,
				"green",
				"[,]i",
				.var_address=&bbt_green
			},
			{
				BBDEBUGDECL_LOCAL,
				"blue",
				"[,]i",
				.var_address=&bbt_blue
			},
			{
				BBDEBUGDECL_LOCAL,
				"alpha",
				"[,]i",
				.var_address=&bbt_alpha
			},
			{
				BBDEBUGDECL_LOCAL,
				"pm2",
				":TPixmap",
				.var_address=&bbt_pm2
			},
			{
				BBDEBUGDECL_LOCAL,
				"pixcol",
				"i",
				.var_address=&bbt_pixcol
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 9, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_r=0;
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 9, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_g=0;
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 9, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_b=0;
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 9, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_argb=0;
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 9, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbt_a=0;
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 9, 0};
	bbOnDebugEnterStm(&__stmt_5);
	bbt_c=0;
	struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 10, 0};
	bbOnDebugEnterStm(&__stmt_6);
	bbt_x=0;
	struct BBDebugStm __stmt_7 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 10, 0};
	bbOnDebugEnterStm(&__stmt_7);
	bbt_y=0;
	struct BBDebugStm __stmt_8 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 10, 0};
	bbOnDebugEnterStm(&__stmt_8);
	bbt_tipo=0;
	struct BBDebugStm __stmt_9 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 10, 0};
	bbOnDebugEnterStm(&__stmt_9);
	bbt_pm=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	struct BBDebugStm __stmt_10 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 11, 0};
	bbOnDebugEnterStm(&__stmt_10);
	bbt_tmp_img=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
	struct BBDebugStm __stmt_11 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 11, 0};
	bbOnDebugEnterStm(&__stmt_11);
	bbt_pix=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	struct BBDebugStm __stmt_12 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 11, 0};
	bbOnDebugEnterStm(&__stmt_12);
	bbt_ics=(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)&bbNullObject;
	struct BBDebugStm __stmt_13 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 14, 0};
	bbOnDebugEnterStm(&__stmt_13);
	if(((BBObject*)((struct brl_pixmap_TPixmap_obj*)bbObjectDowncast((BBOBJECT)bbt_src,(BBClass*)&brl_pixmap_TPixmap)))!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 15, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_pix=(struct brl_pixmap_TPixmap_obj*)((struct brl_pixmap_TPixmap_obj*)bbObjectDowncast((BBOBJECT)bbt_src,(BBClass*)&brl_pixmap_TPixmap));
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 16, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_tmp_img=(struct brl_max2d_image_TImage_obj*)brl_max2d_CreateImage(((struct brl_pixmap_TPixmap_obj*)bbNullObjectTest(bbt_pix))->_brl_pixmap_tpixmap_width ,((struct brl_pixmap_TPixmap_obj*)bbNullObjectTest(bbt_pix))->_brl_pixmap_tpixmap_height ,1,-1);
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 17, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_pm=(struct brl_pixmap_TPixmap_obj*)bbt_pix;
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 18, 0};
		bbOnDebugEnterStm(&__stmt_3);
		bbt_tipo=0;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_14 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 20, 0};
	bbOnDebugEnterStm(&__stmt_14);
	if(((BBObject*)((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbObjectDowncast((BBOBJECT)bbt_src,(BBClass*)&maxgui_maxgui_iconstrip_TIconStrip)))!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 21, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_ics=(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbObjectDowncast((BBOBJECT)bbt_src,(BBClass*)&maxgui_maxgui_iconstrip_TIconStrip));
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 22, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_tmp_img=(struct brl_max2d_image_TImage_obj*)brl_max2d_CreateImage(((struct brl_pixmap_TPixmap_obj*)bbNullObjectTest(((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbNullObjectTest(bbt_ics))->_maxgui_maxgui_iconstrip_ticonstrip_pixmap ))->_brl_pixmap_tpixmap_width ,((struct brl_pixmap_TPixmap_obj*)bbNullObjectTest(((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbNullObjectTest(bbt_ics))->_maxgui_maxgui_iconstrip_ticonstrip_pixmap ))->_brl_pixmap_tpixmap_height ,1,-1);
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 23, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_pm=(struct brl_pixmap_TPixmap_obj*)((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbNullObjectTest(bbt_ics))->_maxgui_maxgui_iconstrip_ticonstrip_pixmap ;
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 24, 0};
		bbOnDebugEnterStm(&__stmt_3);
		bbt_tipo=1;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_15 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 27, 0};
	bbOnDebugEnterStm(&__stmt_15);
	bbt_kk=64;
	struct BBDebugStm __stmt_16 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 27, 0};
	bbOnDebugEnterStm(&__stmt_16);
	bbt_hh=((struct brl_pixmap_TPixmap_obj*)bbNullObjectTest(bbt_pm))->_brl_pixmap_tpixmap_height ;
	struct BBDebugStm __stmt_17 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 27, 0};
	bbOnDebugEnterStm(&__stmt_17);
	bbt_ww=((struct brl_pixmap_TPixmap_obj*)bbNullObjectTest(bbt_pm))->_brl_pixmap_tpixmap_width ;
	struct BBDebugStm __stmt_18 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 29, 0};
	bbOnDebugEnterStm(&__stmt_18);
	bbt_RED=bbArrayNew("i", 2, bbt_ww, bbt_hh);
	struct BBDebugStm __stmt_19 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 30, 0};
	bbOnDebugEnterStm(&__stmt_19);
	bbt_green=bbArrayNew("i", 2, bbt_ww, bbt_hh);
	struct BBDebugStm __stmt_20 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 31, 0};
	bbOnDebugEnterStm(&__stmt_20);
	bbt_blue=bbArrayNew("i", 2, bbt_ww, bbt_hh);
	struct BBDebugStm __stmt_21 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 32, 0};
	bbOnDebugEnterStm(&__stmt_21);
	bbt_alpha=bbArrayNew("i", 2, bbt_ww, bbt_hh);
	struct BBDebugStm __stmt_22 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 33, 0};
	bbOnDebugEnterStm(&__stmt_22);
	bbt_pm2=(struct brl_pixmap_TPixmap_obj*)brl_max2d_LockImage((struct brl_max2d_image_TImage_obj*)bbt_tmp_img,0,1,1);
	struct BBDebugStm __stmt_23 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 35, 0};
	bbOnDebugEnterStm(&__stmt_23);
	brl_blitz_DebugLog(bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(&_s0,bbStringFromInt(bbt_tipo)),&_s1),bbStringFromInt(((struct brl_pixmap_TPixmap_obj*)bbNullObjectTest(bbt_pm))->_brl_pixmap_tpixmap_width )),&_s2),bbStringFromInt(((struct brl_pixmap_TPixmap_obj*)bbNullObjectTest(bbt_pm))->_brl_pixmap_tpixmap_height )));
	struct BBDebugStm __stmt_24 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 36, 0};
	bbOnDebugEnterStm(&__stmt_24);
	BBINT bbt_=((struct brl_pixmap_TPixmap_obj*)bbNullObjectTest(bbt_pm))->_brl_pixmap_tpixmap_height ;
	for(bbt_y=0;(bbt_y<bbt_);bbt_y=(bbt_y+1)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 37, 0};
		bbOnDebugEnterStm(&__stmt_0);
		BBINT bbt_2=((struct brl_pixmap_TPixmap_obj*)bbNullObjectTest(bbt_pm))->_brl_pixmap_tpixmap_width ;
		for(bbt_x=0;(bbt_x<bbt_2);bbt_x=(bbt_x+1)){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 38, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_argb=brl_pixmap_ReadPixel((struct brl_pixmap_TPixmap_obj*)bbt_pm,bbt_x,bbt_y);
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 39, 0};
			bbOnDebugEnterStm(&__stmt_1);
			bbt_a=((unsigned int)(((unsigned int)(bbt_argb)>>24))&255);
			struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 40, 0};
			bbOnDebugEnterStm(&__stmt_2);
			bbt_r=((unsigned int)(((unsigned int)(bbt_argb)>>16))&255);
			struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 41, 0};
			bbOnDebugEnterStm(&__stmt_3);
			bbt_g=((unsigned int)(((unsigned int)(bbt_argb)>>8))&255);
			struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 42, 0};
			bbOnDebugEnterStm(&__stmt_4);
			bbt_b=((unsigned int)(bbt_argb)&255);
			struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 43, 0};
			bbOnDebugEnterStm(&__stmt_5);
			BBUINT* bbt_3=((BBARRAY)bbt_RED)->scales + 1;
			((BBINT*)BBARRAYDATAINDEX((bbt_RED),(bbt_RED)->dims,(*(bbt_3)) * ((BBUINT)bbt_x) + ((BBUINT)bbt_y)))[(*(bbt_3)) * ((BBUINT)bbt_x) + ((BBUINT)bbt_y)]=bbt_r;
			struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 44, 0};
			bbOnDebugEnterStm(&__stmt_6);
			BBUINT* bbt_4=((BBARRAY)bbt_green)->scales + 1;
			((BBINT*)BBARRAYDATAINDEX((bbt_green),(bbt_green)->dims,(*(bbt_4)) * ((BBUINT)bbt_x) + ((BBUINT)bbt_y)))[(*(bbt_4)) * ((BBUINT)bbt_x) + ((BBUINT)bbt_y)]=bbt_g;
			struct BBDebugStm __stmt_7 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 45, 0};
			bbOnDebugEnterStm(&__stmt_7);
			BBUINT* bbt_5=((BBARRAY)bbt_blue)->scales + 1;
			((BBINT*)BBARRAYDATAINDEX((bbt_blue),(bbt_blue)->dims,(*(bbt_5)) * ((BBUINT)bbt_x) + ((BBUINT)bbt_y)))[(*(bbt_5)) * ((BBUINT)bbt_x) + ((BBUINT)bbt_y)]=bbt_b;
			struct BBDebugStm __stmt_8 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 46, 0};
			bbOnDebugEnterStm(&__stmt_8);
			BBUINT* bbt_6=((BBARRAY)bbt_alpha)->scales + 1;
			((BBINT*)BBARRAYDATAINDEX((bbt_alpha),(bbt_alpha)->dims,(*(bbt_6)) * ((BBUINT)bbt_x) + ((BBUINT)bbt_y)))[(*(bbt_6)) * ((BBUINT)bbt_x) + ((BBUINT)bbt_y)]=bbt_a;
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_25 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 50, 0};
	bbOnDebugEnterStm(&__stmt_25);
	bbt_pixcol=0;
	struct BBDebugStm __stmt_26 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 51, 0};
	bbOnDebugEnterStm(&__stmt_26);
	BBINT bbt_7=((struct brl_pixmap_TPixmap_obj*)bbNullObjectTest(bbt_pm))->_brl_pixmap_tpixmap_height ;
	for(bbt_y=0;(bbt_y<bbt_7);bbt_y=(bbt_y+1)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 52, 0};
		bbOnDebugEnterStm(&__stmt_0);
		BBINT bbt_8=((struct brl_pixmap_TPixmap_obj*)bbNullObjectTest(bbt_pm))->_brl_pixmap_tpixmap_width ;
		for(bbt_x=0;(bbt_x<bbt_8);bbt_x=(bbt_x+1)){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 53, 0};
			bbOnDebugEnterStm(&__stmt_0);
			BBUINT* bbt_9=((BBARRAY)bbt_RED)->scales + 1;
			bbt_r=(((BBINT*)BBARRAYDATAINDEX((bbt_RED),(bbt_RED)->dims,(*(bbt_9)) * ((BBUINT)bbt_x) + ((BBUINT)bbt_y)))[(*(bbt_9)) * ((BBUINT)bbt_x) + ((BBUINT)bbt_y)]+bbt_kk);
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 54, 0};
			bbOnDebugEnterStm(&__stmt_1);
			BBUINT* bbt_10=((BBARRAY)bbt_green)->scales + 1;
			bbt_g=(((BBINT*)BBARRAYDATAINDEX((bbt_green),(bbt_green)->dims,(*(bbt_10)) * ((BBUINT)bbt_x) + ((BBUINT)bbt_y)))[(*(bbt_10)) * ((BBUINT)bbt_x) + ((BBUINT)bbt_y)]+bbt_kk);
			struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 55, 0};
			bbOnDebugEnterStm(&__stmt_2);
			BBUINT* bbt_11=((BBARRAY)bbt_blue)->scales + 1;
			bbt_b=(((BBINT*)BBARRAYDATAINDEX((bbt_blue),(bbt_blue)->dims,(*(bbt_11)) * ((BBUINT)bbt_x) + ((BBUINT)bbt_y)))[(*(bbt_11)) * ((BBUINT)bbt_x) + ((BBUINT)bbt_y)]+bbt_kk);
			struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 56, 0};
			bbOnDebugEnterStm(&__stmt_3);
			BBUINT* bbt_12=((BBARRAY)bbt_alpha)->scales + 1;
			bbt_a=((BBINT*)BBARRAYDATAINDEX((bbt_alpha),(bbt_alpha)->dims,(*(bbt_12)) * ((BBUINT)bbt_x) + ((BBUINT)bbt_y)))[(*(bbt_12)) * ((BBUINT)bbt_x) + ((BBUINT)bbt_y)];
			struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 58, 0};
			bbOnDebugEnterStm(&__stmt_4);
			maxgui_proxygadgets_common_MakeLight_CheckLimit(&bbt_r);
			struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 59, 0};
			bbOnDebugEnterStm(&__stmt_5);
			maxgui_proxygadgets_common_MakeLight_CheckLimit(&bbt_g);
			struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 60, 0};
			bbOnDebugEnterStm(&__stmt_6);
			maxgui_proxygadgets_common_MakeLight_CheckLimit(&bbt_b);
			struct BBDebugStm __stmt_7 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 62, 0};
			bbOnDebugEnterStm(&__stmt_7);
			bbt_pixcol=((unsigned int)(((unsigned int)(((unsigned int)((bbt_a<<24))|(bbt_r<<16)))|(bbt_g<<8)))|bbt_b);
			struct BBDebugStm __stmt_8 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 63, 0};
			bbOnDebugEnterStm(&__stmt_8);
			brl_pixmap_WritePixel((struct brl_pixmap_TPixmap_obj*)bbt_pm2,bbt_x,bbt_y,bbt_pixcol);
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_27 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 70, 0};
	bbOnDebugEnterStm(&__stmt_27);
	if(bbt_tipo==0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 70, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return (BBOBJECT)bbt_pm2;
	}
	struct BBDebugStm __stmt_28 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 71, 0};
	bbOnDebugEnterStm(&__stmt_28);
	if(bbt_tipo==1){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 71, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return (BBOBJECT)maxgui_maxgui_LoadIconStrip((BBOBJECT)bbt_pm2);
	}
	bbOnDebugLeaveScope();
	return (BBOBJECT)&bbNullObject;
}
BBOBJECT maxgui_proxygadgets_common_MakeGrey(BBOBJECT bbt_src){
	BBINT bbt_r=0;
	BBINT bbt_g=0;
	BBINT bbt_b=0;
	BBINT bbt_argb=0;
	BBINT bbt_a=0;
	BBINT bbt_c=0;
	BBINT bbt_x=0;
	BBINT bbt_y=0;
	BBINT bbt_tipo=0;
	struct brl_max2d_image_TImage_obj* bbt_tmp_grey=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
	struct brl_pixmap_TPixmap_obj* bbt_pix=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	struct maxgui_maxgui_iconstrip_TIconStrip_obj* bbt_ics=(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)&bbNullObject;
	struct brl_pixmap_TPixmap_obj* bbt_pm=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	struct brl_pixmap_TPixmap_obj* bbt_pm2=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	struct BBDebugScope_15 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"MakeGrey",
		{
			{
				BBDEBUGDECL_LOCAL,
				"src",
				":Object",
				.var_address=&bbt_src
			},
			{
				BBDEBUGDECL_LOCAL,
				"r",
				"i",
				.var_address=&bbt_r
			},
			{
				BBDEBUGDECL_LOCAL,
				"g",
				"i",
				.var_address=&bbt_g
			},
			{
				BBDEBUGDECL_LOCAL,
				"b",
				"i",
				.var_address=&bbt_b
			},
			{
				BBDEBUGDECL_LOCAL,
				"argb",
				"i",
				.var_address=&bbt_argb
			},
			{
				BBDEBUGDECL_LOCAL,
				"a",
				"i",
				.var_address=&bbt_a
			},
			{
				BBDEBUGDECL_LOCAL,
				"c",
				"i",
				.var_address=&bbt_c
			},
			{
				BBDEBUGDECL_LOCAL,
				"x",
				"i",
				.var_address=&bbt_x
			},
			{
				BBDEBUGDECL_LOCAL,
				"y",
				"i",
				.var_address=&bbt_y
			},
			{
				BBDEBUGDECL_LOCAL,
				"tipo",
				"i",
				.var_address=&bbt_tipo
			},
			{
				BBDEBUGDECL_LOCAL,
				"tmp_grey",
				":TImage",
				.var_address=&bbt_tmp_grey
			},
			{
				BBDEBUGDECL_LOCAL,
				"pix",
				":TPixmap",
				.var_address=&bbt_pix
			},
			{
				BBDEBUGDECL_LOCAL,
				"ics",
				":TIconStrip",
				.var_address=&bbt_ics
			},
			{
				BBDEBUGDECL_LOCAL,
				"pm",
				":TPixmap",
				.var_address=&bbt_pm
			},
			{
				BBDEBUGDECL_LOCAL,
				"pm2",
				":TPixmap",
				.var_address=&bbt_pm2
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 85, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_r=0;
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 85, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_g=0;
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 85, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_b=0;
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 85, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_argb=0;
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 85, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbt_a=0;
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 85, 0};
	bbOnDebugEnterStm(&__stmt_5);
	bbt_c=0;
	struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 86, 0};
	bbOnDebugEnterStm(&__stmt_6);
	bbt_x=0;
	struct BBDebugStm __stmt_7 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 86, 0};
	bbOnDebugEnterStm(&__stmt_7);
	bbt_y=0;
	struct BBDebugStm __stmt_8 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 86, 0};
	bbOnDebugEnterStm(&__stmt_8);
	bbt_tipo=0;
	struct BBDebugStm __stmt_9 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 87, 0};
	bbOnDebugEnterStm(&__stmt_9);
	bbt_tmp_grey=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
	struct BBDebugStm __stmt_10 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 87, 0};
	bbOnDebugEnterStm(&__stmt_10);
	bbt_pix=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	struct BBDebugStm __stmt_11 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 87, 0};
	bbOnDebugEnterStm(&__stmt_11);
	bbt_ics=(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)&bbNullObject;
	struct BBDebugStm __stmt_12 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 88, 0};
	bbOnDebugEnterStm(&__stmt_12);
	bbt_pm=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	struct BBDebugStm __stmt_13 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 90, 0};
	bbOnDebugEnterStm(&__stmt_13);
	if(((BBObject*)((struct brl_pixmap_TPixmap_obj*)bbObjectDowncast((BBOBJECT)bbt_src,(BBClass*)&brl_pixmap_TPixmap)))!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 91, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_pix=(struct brl_pixmap_TPixmap_obj*)((struct brl_pixmap_TPixmap_obj*)bbObjectDowncast((BBOBJECT)bbt_src,(BBClass*)&brl_pixmap_TPixmap));
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 92, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_tmp_grey=(struct brl_max2d_image_TImage_obj*)brl_max2d_CreateImage(((struct brl_pixmap_TPixmap_obj*)bbNullObjectTest(bbt_pix))->_brl_pixmap_tpixmap_width ,((struct brl_pixmap_TPixmap_obj*)bbNullObjectTest(bbt_pix))->_brl_pixmap_tpixmap_height ,1,-1);
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 93, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_pm=(struct brl_pixmap_TPixmap_obj*)bbt_pix;
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 94, 0};
		bbOnDebugEnterStm(&__stmt_3);
		bbt_tipo=0;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_14 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 96, 0};
	bbOnDebugEnterStm(&__stmt_14);
	if(((BBObject*)((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbObjectDowncast((BBOBJECT)bbt_src,(BBClass*)&maxgui_maxgui_iconstrip_TIconStrip)))!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 97, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_ics=(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbObjectDowncast((BBOBJECT)bbt_src,(BBClass*)&maxgui_maxgui_iconstrip_TIconStrip));
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 98, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_tmp_grey=(struct brl_max2d_image_TImage_obj*)brl_max2d_CreateImage(((struct brl_pixmap_TPixmap_obj*)bbNullObjectTest(((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbNullObjectTest(bbt_ics))->_maxgui_maxgui_iconstrip_ticonstrip_pixmap ))->_brl_pixmap_tpixmap_width ,((struct brl_pixmap_TPixmap_obj*)bbNullObjectTest(((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbNullObjectTest(bbt_ics))->_maxgui_maxgui_iconstrip_ticonstrip_pixmap ))->_brl_pixmap_tpixmap_height ,1,-1);
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 99, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_pm=(struct brl_pixmap_TPixmap_obj*)((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbNullObjectTest(bbt_ics))->_maxgui_maxgui_iconstrip_ticonstrip_pixmap ;
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 100, 0};
		bbOnDebugEnterStm(&__stmt_3);
		bbt_tipo=1;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_15 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 103, 0};
	bbOnDebugEnterStm(&__stmt_15);
	bbt_pm2=(struct brl_pixmap_TPixmap_obj*)brl_max2d_LockImage((struct brl_max2d_image_TImage_obj*)bbt_tmp_grey,0,1,1);
	struct BBDebugStm __stmt_16 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 105, 0};
	bbOnDebugEnterStm(&__stmt_16);
	BBINT bbt_=((struct brl_pixmap_TPixmap_obj*)bbNullObjectTest(bbt_pm))->_brl_pixmap_tpixmap_height ;
	for(bbt_y=0;(bbt_y<bbt_);bbt_y=(bbt_y+1)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 106, 0};
		bbOnDebugEnterStm(&__stmt_0);
		BBINT bbt_2=((struct brl_pixmap_TPixmap_obj*)bbNullObjectTest(bbt_pm))->_brl_pixmap_tpixmap_width ;
		for(bbt_x=0;(bbt_x<bbt_2);bbt_x=(bbt_x+1)){
			BBINT bbt_pixcol=0;
			struct BBDebugScope_1 __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					{
						BBDEBUGDECL_LOCAL,
						"pixcol",
						"i",
						.var_address=&bbt_pixcol
					},
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 108, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_argb=brl_pixmap_ReadPixel((struct brl_pixmap_TPixmap_obj*)bbt_pm,bbt_x,bbt_y);
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 110, 0};
			bbOnDebugEnterStm(&__stmt_1);
			bbt_a=((unsigned int)(((unsigned int)(bbt_argb)>>24))&255);
			struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 111, 0};
			bbOnDebugEnterStm(&__stmt_2);
			bbt_r=((unsigned int)(((unsigned int)(bbt_argb)>>16))&255);
			struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 112, 0};
			bbOnDebugEnterStm(&__stmt_3);
			bbt_g=((unsigned int)(((unsigned int)(bbt_argb)>>8))&255);
			struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 113, 0};
			bbOnDebugEnterStm(&__stmt_4);
			bbt_b=((unsigned int)(bbt_argb)&255);
			struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 115, 0};
			bbOnDebugEnterStm(&__stmt_5);
			bbt_c=(((bbt_r+bbt_g)+bbt_b)/3);
			struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 117, 0};
			bbOnDebugEnterStm(&__stmt_6);
			bbt_pixcol=((unsigned int)(((unsigned int)(((unsigned int)((bbt_a<<24))|(bbt_c<<16)))|(bbt_c<<8)))|bbt_c);
			struct BBDebugStm __stmt_7 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 118, 0};
			bbOnDebugEnterStm(&__stmt_7);
			brl_pixmap_WritePixel((struct brl_pixmap_TPixmap_obj*)bbt_pm2,bbt_x,bbt_y,bbt_pixcol);
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_17 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 122, 0};
	bbOnDebugEnterStm(&__stmt_17);
	if(bbt_tipo==0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 122, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return (BBOBJECT)bbt_pm2;
	}
	struct BBDebugStm __stmt_18 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 123, 0};
	bbOnDebugEnterStm(&__stmt_18);
	if(bbt_tipo==1){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/common.bmx", 123, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return (BBOBJECT)maxgui_maxgui_LoadIconStrip((BBOBJECT)bbt_pm2);
	}
	bbOnDebugLeaveScope();
	return (BBOBJECT)&bbNullObject;
}
static int _bb_maxgui_proxygadgets_common_inited = 0;
int _bb_maxgui_proxygadgets_common(){
	if (!_bb_maxgui_proxygadgets_common_inited) {
		_bb_maxgui_proxygadgets_common_inited = 1;
		__bb_brl_blitz_blitz();
		__bb_brl_max2d_max2d();
		__bb_maxgui_maxgui_maxgui();
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_FUNCTION,
			"common",
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		bbOnDebugLeaveScope();
		return 0;
	}
	return 0;
}