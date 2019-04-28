#include "IconGadget.bmx.debug.win32.x64.h"
static BBString _s1={
	&bbStringClass,
	1,
	{50}
};
static BBString _s0={
	&bbStringClass,
	3,
	{73,68,32}
};
struct BBDebugScope_1{int kind; const char *name; BBDebugDecl decls[2]; };
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
struct BBDebugScope_3{int kind; const char *name; BBDebugDecl decls[4]; };
struct BBDebugScope_31{int kind; const char *name; BBDebugDecl decls[32]; };
struct BBDebugScope_4{int kind; const char *name; BBDebugDecl decls[5]; };
struct BBDebugScope_6{int kind; const char *name; BBDebugDecl decls[7]; };
struct BBDebugScope_7{int kind; const char *name; BBDebugDecl decls[8]; };
struct BBDebugScope_8{int kind; const char *name; BBDebugDecl decls[9]; };
void _maxgui_proxygadgets_icongadget_TIconGadget_New(struct maxgui_proxygadgets_icongadget_TIconGadget_obj* o) {
	_maxgui_maxgui_gadget_TProxyGadget_New((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o);
	o->clas = &maxgui_proxygadgets_icongadget_TIconGadget;
	((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_style = 0;
	((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_animated = 0;
	((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_original_animated = 0;
	((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_panel = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_name = &bbEmptyString;
	((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_iconstrip = (struct maxgui_maxgui_iconstrip_TIconStrip_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_grey_iconstrip = (struct maxgui_maxgui_iconstrip_TIconStrip_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_o_iconstrip = (struct maxgui_maxgui_iconstrip_TIconStrip_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_pixmap = (struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_grey_pixmap = (struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_o_pixmap = (struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_frame_max = 0;
	((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_frame_current = 0;
	((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_frame_timer = 0;
	((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_frame_duration = 125;
	((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_frame_start = 0;
	((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_frame_direction = 0;
}
struct maxgui_proxygadgets_icongadget_TIconGadget_obj* maxgui_proxygadgets_icongadget_TIconGadget_Create_TTIconGadget_iiiiTTGadgetTObjecti(BBINT bbt_x,BBINT bbt_y,BBINT bbt_w,BBINT bbt_h,struct maxgui_maxgui_gadget_TGadget_obj* bbt_group,BBOBJECT bbt_image,BBINT bbt_style){
	struct maxgui_proxygadgets_icongadget_TIconGadget_obj* bbt_sp=(struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)&bbNullObject;
	struct BBDebugScope_8 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Create",
		{
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
				"w",
				"i",
				.var_address=&bbt_w
			},
			{
				BBDEBUGDECL_LOCAL,
				"h",
				"i",
				.var_address=&bbt_h
			},
			{
				BBDEBUGDECL_LOCAL,
				"group",
				":TGadget",
				.var_address=&bbt_group
			},
			{
				BBDEBUGDECL_LOCAL,
				"image",
				":Object",
				.var_address=&bbt_image
			},
			{
				BBDEBUGDECL_LOCAL,
				"style",
				"i",
				.var_address=&bbt_style
			},
			{
				BBDEBUGDECL_LOCAL,
				"sp",
				":TIconGadget",
				.var_address=&bbt_sp
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 91, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_sp=(struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)(struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbObjectNew((BBClass *)&maxgui_proxygadgets_icongadget_TIconGadget);
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 92, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(maxgui_proxygadgets_icongadget_TIconGadget_icon_timer==&bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 92, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_proxygadgets_icongadget_TIconGadget_icon_timer=(struct brl_timer_TTimer_obj*)brl_timer_CreateTimer(60.0000000f,(struct brl_event_TEvent_obj*)&bbNullObject);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 94, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(((BBObject*)((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbObjectDowncast((BBOBJECT)bbt_image,(BBClass*)&maxgui_maxgui_iconstrip_TIconStrip)))!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 95, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_icongadget_ticongadget_iconstrip =(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbObjectDowncast((BBOBJECT)bbt_image,(BBClass*)&maxgui_maxgui_iconstrip_TIconStrip));
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 96, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_icongadget_ticongadget_o_iconstrip =(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbObjectDowncast((BBOBJECT)bbt_image,(BBClass*)&maxgui_maxgui_iconstrip_TIconStrip));
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 97, 0};
		bbOnDebugEnterStm(&__stmt_2);
		((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_icongadget_ticongadget_grey_iconstrip =(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbObjectDowncast((BBOBJECT)maxgui_proxygadgets_common_MakeGrey((BBOBJECT)bbt_image),(BBClass*)&maxgui_maxgui_iconstrip_TIconStrip));
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 99, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if(((BBObject*)((struct brl_pixmap_TPixmap_obj*)bbObjectDowncast((BBOBJECT)bbt_image,(BBClass*)&brl_pixmap_TPixmap)))!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 100, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_icongadget_ticongadget_pixmap =(struct brl_pixmap_TPixmap_obj*)((struct brl_pixmap_TPixmap_obj*)bbObjectDowncast((BBOBJECT)bbt_image,(BBClass*)&brl_pixmap_TPixmap));
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 101, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_icongadget_ticongadget_o_pixmap =(struct brl_pixmap_TPixmap_obj*)((struct brl_pixmap_TPixmap_obj*)bbObjectDowncast((BBOBJECT)bbt_image,(BBClass*)&brl_pixmap_TPixmap));
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 102, 0};
		bbOnDebugEnterStm(&__stmt_2);
		((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_icongadget_ticongadget_grey_pixmap =(struct brl_pixmap_TPixmap_obj*)((struct brl_pixmap_TPixmap_obj*)bbObjectDowncast((BBOBJECT)maxgui_proxygadgets_common_MakeGrey((BBOBJECT)bbt_image),(BBClass*)&brl_pixmap_TPixmap));
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 105, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_icongadget_ticongadget_style =bbt_style;
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 106, 0};
	bbOnDebugEnterStm(&__stmt_5);
	((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_icongadget_ticongadget_panel =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreatePanel(bbt_x,bbt_y,bbt_w,bbt_h,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group,4,&bbEmptyString);
	struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 108, 0};
	bbOnDebugEnterStm(&__stmt_6);
	if(((BBObject*)((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_icongadget_ticongadget_pixmap )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 109, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_icongadget_ticongadget_panel ,(struct brl_pixmap_TPixmap_obj*)((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_icongadget_ticongadget_pixmap ,2);
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 110, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_icongadget_ticongadget_animated =0;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_7 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 113, 0};
	bbOnDebugEnterStm(&__stmt_7);
	((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_icongadget_ticongadget_name =bbStringConcat(&_s0,bbStringFromInt(bbMilliSecs()));
	struct BBDebugStm __stmt_8 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 115, 0};
	bbOnDebugEnterStm(&__stmt_8);
	if(((BBObject*)((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_icongadget_ticongadget_iconstrip )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 116, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_icongadget_ticongadget_pixmap =(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_icongadget_ticongadget_iconstrip ,0);
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 117, 0};
		bbOnDebugEnterStm(&__stmt_1);
		maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_icongadget_ticongadget_panel ,(struct brl_pixmap_TPixmap_obj*)((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_icongadget_ticongadget_pixmap ,2);
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 118, 0};
		bbOnDebugEnterStm(&__stmt_2);
		((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_icongadget_ticongadget_frame_max =(((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_icongadget_ticongadget_iconstrip ))->_maxgui_maxgui_iconstrip_ticonstrip_count -1);
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 119, 0};
		bbOnDebugEnterStm(&__stmt_3);
		((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_icongadget_ticongadget_animated =1;
		struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 120, 0};
		bbOnDebugEnterStm(&__stmt_4);
		((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_icongadget_ticongadget_frame_start =0;
		struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 121, 0};
		bbOnDebugEnterStm(&__stmt_5);
		((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_icongadget_ticongadget_frame_current =0;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_9 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 124, 0};
	bbOnDebugEnterStm(&__stmt_9);
	BBINT bbt_=((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_icongadget_ticongadget_style ;
	struct BBDebugStm __stmt_10 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 125, 0};
	bbOnDebugEnterStm(&__stmt_10);
	if(bbt_==2){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 125, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_icongadget_ticongadget_animated =0;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_11 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 128, 0};
	bbOnDebugEnterStm(&__stmt_11);
	((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_icongadget_ticongadget_original_animated =((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_icongadget_ticongadget_animated ;
	struct BBDebugStm __stmt_12 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 129, 0};
	bbOnDebugEnterStm(&__stmt_12);
	brl_hook_AddHook(brl_event_EmitEventHook,maxgui_proxygadgets_icongadget_TIconGadget_eventHandler_TObject_iTObjectTObject,(BBOBJECT)bbt_sp,0);
	struct BBDebugStm __stmt_13 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 130, 0};
	bbOnDebugEnterStm(&__stmt_13);
	((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_sp))->clas->m_SetProxy_TTGadget((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbt_sp,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_icongadget_ticongadget_panel );
	struct BBDebugStm __stmt_14 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 131, 0};
	bbOnDebugEnterStm(&__stmt_14);
	((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_icongadget_ticongadget_frame_timer =bbMilliSecs();
	struct BBDebugStm __stmt_15 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 135, 0};
	bbOnDebugEnterStm(&__stmt_15);
	bbOnDebugLeaveScope();
	return (struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbt_sp;
}
BBINT _maxgui_proxygadgets_icongadget_TIconGadget_Class(struct maxgui_proxygadgets_icongadget_TIconGadget_obj* o){
	((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Class",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TIconGadget",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 139, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return 24;
}
BBSTRING _maxgui_proxygadgets_icongadget_TIconGadget_GetText(struct maxgui_proxygadgets_icongadget_TIconGadget_obj* o){
	((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"GetText",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TIconGadget",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 143, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return &bbEmptyString;
}
BBINT _maxgui_proxygadgets_icongadget_TIconGadget_SetIconStrip_TTIconStrip(struct maxgui_proxygadgets_icongadget_TIconGadget_obj* o,struct maxgui_maxgui_iconstrip_TIconStrip_obj* bbt_ics){
	((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetIconStrip",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TIconGadget",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"ics",
				":TIconStrip",
				.var_address=&bbt_ics
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 147, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_iconstrip =(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbt_ics;
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 148, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_o_iconstrip =(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbt_ics;
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 149, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_grey_iconstrip =(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbObjectDowncast((BBOBJECT)maxgui_proxygadgets_common_MakeGrey((BBOBJECT)bbt_ics),(BBClass*)&maxgui_maxgui_iconstrip_TIconStrip));
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 150, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_pixmap =(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_iconstrip ,0);
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 151, 0};
	bbOnDebugEnterStm(&__stmt_4);
	maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_panel ,(struct brl_pixmap_TPixmap_obj*)((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_pixmap ,2);
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 152, 0};
	bbOnDebugEnterStm(&__stmt_5);
	((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_frame_max =((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_iconstrip ))->_maxgui_maxgui_iconstrip_ticonstrip_count ;
	struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 153, 0};
	bbOnDebugEnterStm(&__stmt_6);
	((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_frame_current =0;
	struct BBDebugStm __stmt_7 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 154, 0};
	bbOnDebugEnterStm(&__stmt_7);
	((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_frame_start =0;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_icongadget_TIconGadget_SetPixmap_TTPixmapi(struct maxgui_proxygadgets_icongadget_TIconGadget_obj* o,struct brl_pixmap_TPixmap_obj* bbt_pix,BBINT bbt_flags){
	((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o));
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetPixmap",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TIconGadget",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"pix",
				":TPixmap",
				.var_address=&bbt_pix
			},
			{
				BBDEBUGDECL_LOCAL,
				"flags",
				"i",
				.var_address=&bbt_flags
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 158, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_pixmap =(struct brl_pixmap_TPixmap_obj*)bbt_pix;
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 159, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_o_pixmap =(struct brl_pixmap_TPixmap_obj*)bbt_pix;
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 160, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_grey_pixmap =(struct brl_pixmap_TPixmap_obj*)((struct brl_pixmap_TPixmap_obj*)bbObjectDowncast((BBOBJECT)maxgui_proxygadgets_common_MakeGrey((BBOBJECT)bbt_pix),(BBClass*)&brl_pixmap_TPixmap));
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 161, 0};
	bbOnDebugEnterStm(&__stmt_3);
	maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_panel ,(struct brl_pixmap_TPixmap_obj*)((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_pixmap ,2);
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 162, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_animated =0;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_icongadget_TIconGadget_SelectItem_ii(struct maxgui_proxygadgets_icongadget_TIconGadget_obj* o,BBINT bbt_index,BBINT bbt_opt){
	((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o));
	struct brl_pixmap_TPixmap_obj* bbt_pp=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SelectItem",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TIconGadget",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"index",
				"i",
				.var_address=&bbt_index
			},
			{
				BBDEBUGDECL_LOCAL,
				"opt",
				"i",
				.var_address=&bbt_opt
			},
			{
				BBDEBUGDECL_LOCAL,
				"pp",
				":TPixmap",
				.var_address=&bbt_pp
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 166, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_iconstrip ==&bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 166, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return -1;
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 168, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(bbt_index<0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 168, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_index=0;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 169, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(bbt_index>(((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_iconstrip ))->_maxgui_maxgui_iconstrip_ticonstrip_count -1)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 169, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_index=(((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_iconstrip ))->_maxgui_maxgui_iconstrip_ticonstrip_count -1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 170, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_frame_current =bbt_index;
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 171, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbt_pp=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 172, 0};
	bbOnDebugEnterStm(&__stmt_5);
	bbt_pp=(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_iconstrip ,((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_frame_current );
	struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 173, 0};
	bbOnDebugEnterStm(&__stmt_6);
	maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_panel ,(struct brl_pixmap_TPixmap_obj*)bbt_pp,2);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_icongadget_TIconGadget_SetItem_iSSiTObjecti(struct maxgui_proxygadgets_icongadget_TIconGadget_obj* o,BBINT bbt_index,BBSTRING bbt_Text,BBSTRING bbt_tip,BBINT bbt_icon,BBOBJECT bbt_extra,BBINT bbt_flags){
	((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o));
	struct BBDebugScope_7 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetItem",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TIconGadget",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"index",
				"i",
				.var_address=&bbt_index
			},
			{
				BBDEBUGDECL_LOCAL,
				"Text",
				"$",
				.var_address=&bbt_Text
			},
			{
				BBDEBUGDECL_LOCAL,
				"tip",
				"$",
				.var_address=&bbt_tip
			},
			{
				BBDEBUGDECL_LOCAL,
				"icon",
				"i",
				.var_address=&bbt_icon
			},
			{
				BBDEBUGDECL_LOCAL,
				"extra",
				":Object",
				.var_address=&bbt_extra
			},
			{
				BBDEBUGDECL_LOCAL,
				"flags",
				"i",
				.var_address=&bbt_flags
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 178, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(bbt_tip!=&bbEmptyString){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 178, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_SetGadgetToolTip((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_panel ,bbt_tip);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_icongadget_TIconGadget_SetEnabled_i(struct maxgui_proxygadgets_icongadget_TIconGadget_obj* o,BBINT bbt_status){
	((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o));
	struct brl_pixmap_TPixmap_obj* bbt_pp=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetEnabled",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TIconGadget",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"status",
				"i",
				.var_address=&bbt_status
			},
			{
				BBDEBUGDECL_LOCAL,
				"pp",
				":TPixmap",
				.var_address=&bbt_pp
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 182, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(bbt_status==1){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 183, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_animated =((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_original_animated ;
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 184, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_pixmap =(struct brl_pixmap_TPixmap_obj*)((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_o_pixmap ;
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 185, 0};
		bbOnDebugEnterStm(&__stmt_2);
		((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_iconstrip =(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_o_iconstrip ;
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 186, 0};
		bbOnDebugEnterStm(&__stmt_3);
		maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_panel );
		bbOnDebugLeaveScope();
	}else{
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 188, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_original_animated =((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_animated ;
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 189, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_animated =0;
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 190, 0};
		bbOnDebugEnterStm(&__stmt_2);
		((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_pixmap =(struct brl_pixmap_TPixmap_obj*)((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_grey_pixmap ;
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 191, 0};
		bbOnDebugEnterStm(&__stmt_3);
		((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_iconstrip =(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_grey_iconstrip ;
		struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 192, 0};
		bbOnDebugEnterStm(&__stmt_4);
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_panel );
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 194, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_pp=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 195, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(((BBObject*)((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_iconstrip )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 196, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_pp=(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_iconstrip ,((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_frame_current );
		bbOnDebugLeaveScope();
	}else{
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 198, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_pp=(struct brl_pixmap_TPixmap_obj*)((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_pixmap ;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 200, 0};
	bbOnDebugEnterStm(&__stmt_3);
	maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_panel ,(struct brl_pixmap_TPixmap_obj*)bbt_pp,2);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_icongadget_TIconGadget_CleanUp(struct maxgui_proxygadgets_icongadget_TIconGadget_obj* o){
	((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"CleanUp",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TIconGadget",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 207, 0};
	bbOnDebugEnterStm(&__stmt_0);
	maxgui_proxygadgets_icongadget_TIconGadget_icon_timer=(struct brl_timer_TTimer_obj*)&bbNullObject;
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 208, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_pixmap =(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 209, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_iconstrip =(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)&bbNullObject;
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 210, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_grey_pixmap =(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 211, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_grey_iconstrip =(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)&bbNullObject;
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 212, 0};
	bbOnDebugEnterStm(&__stmt_5);
	((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_o_pixmap =(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 213, 0};
	bbOnDebugEnterStm(&__stmt_6);
	((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_o_iconstrip =(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)&bbNullObject;
	struct BBDebugStm __stmt_7 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 214, 0};
	bbOnDebugEnterStm(&__stmt_7);
	maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_panel );
	struct BBDebugStm __stmt_8 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 215, 0};
	bbOnDebugEnterStm(&__stmt_8);
	brl_hook_RemoveHook(brl_event_EmitEventHook,o->clas->f_eventHandler_TObject_iTObjectTObject,(BBOBJECT)o);
	struct BBDebugStm __stmt_9 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 216, 0};
	bbOnDebugEnterStm(&__stmt_9);
	(&maxgui_proxygadgets_icongadget_TIconGadget)->super->m_CleanUp((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o);
	bbOnDebugLeaveScope();
	return 0;
}
BBOBJECT maxgui_proxygadgets_icongadget_TIconGadget_eventHandler_TObject_iTObjectTObject(BBINT bbt_pID,BBOBJECT bbt_pData,BBOBJECT bbt_pContext){
	struct brl_event_TEvent_obj* bbt_pEvent=(struct brl_event_TEvent_obj*)&bbNullObject;
	struct brl_pixmap_TPixmap_obj* bbt_pp=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	struct maxgui_proxygadgets_icongadget_TIconGadget_obj* bbt_sp=(struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)&bbNullObject;
	struct BBDebugScope_6 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"eventHandler",
		{
			{
				BBDEBUGDECL_LOCAL,
				"pID",
				"i",
				.var_address=&bbt_pID
			},
			{
				BBDEBUGDECL_LOCAL,
				"pData",
				":Object",
				.var_address=&bbt_pData
			},
			{
				BBDEBUGDECL_LOCAL,
				"pContext",
				":Object",
				.var_address=&bbt_pContext
			},
			{
				BBDEBUGDECL_LOCAL,
				"pEvent",
				":TEvent",
				.var_address=&bbt_pEvent
			},
			{
				BBDEBUGDECL_LOCAL,
				"pp",
				":TPixmap",
				.var_address=&bbt_pp
			},
			{
				BBDEBUGDECL_LOCAL,
				"sp",
				":TIconGadget",
				.var_address=&bbt_sp
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 221, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_pEvent=(struct brl_event_TEvent_obj*)((struct brl_event_TEvent_obj*)bbObjectDowncast((BBOBJECT)bbt_pData,(BBClass*)&brl_event_TEvent));
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 222, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_pp=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 222, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_sp=(struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_pContext,(BBClass*)&maxgui_proxygadgets_icongadget_TIconGadget));
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 224, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if(((BBObject*)bbt_pEvent)!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 226, 0};
		bbOnDebugEnterStm(&__stmt_0);
		BBINT bbt_=((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_pEvent))->_brl_event_tevent_id ;
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 228, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(bbt_==1025){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 229, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if(((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_pEvent))->_brl_event_tevent_source ==bbt_sp){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 229, 0};
				bbOnDebugEnterStm(&__stmt_0);
				brl_event_EmitEvent((struct brl_event_TEvent_obj*)brl_event_CreateEvent(8193,(BBOBJECT)((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_pEvent))->_brl_event_tevent_source ,0,0,0,0,(BBOBJECT)&bbNullObject));
				struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 229, 0};
				bbOnDebugEnterStm(&__stmt_1);
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				return (BBOBJECT)&bbNullObject;
			}
			bbOnDebugLeaveScope();
		}else{
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 231, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if(bbt_==2049){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 232, 0};
				bbOnDebugEnterStm(&__stmt_0);
				if(((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_pEvent))->_brl_event_tevent_source ==maxgui_proxygadgets_icongadget_TIconGadget_icon_timer){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 233, 0};
					bbOnDebugEnterStm(&__stmt_0);
					if(((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_icongadget_ticongadget_animated ==1){
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 234, 0};
						bbOnDebugEnterStm(&__stmt_0);
						if(bbMilliSecs()>(((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_icongadget_ticongadget_frame_timer +((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_icongadget_ticongadget_frame_duration )){
							struct BBDebugScope __scope = {
								BBDEBUGSCOPE_LOCALBLOCK,
								0,
								{
									BBDEBUGDECL_END 
								}
							};
							bbOnDebugEnterScope(&__scope);
							struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 235, 0};
							bbOnDebugEnterStm(&__stmt_0);
							bbt_pp=(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_icongadget_ticongadget_iconstrip ,((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_icongadget_ticongadget_frame_current );
							struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 236, 0};
							bbOnDebugEnterStm(&__stmt_1);
							maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_icongadget_ticongadget_panel ,(struct brl_pixmap_TPixmap_obj*)bbt_pp,2);
							struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 237, 0};
							bbOnDebugEnterStm(&__stmt_2);
							if(((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_icongadget_ticongadget_frame_direction ==0){
								struct BBDebugScope __scope = {
									BBDEBUGSCOPE_LOCALBLOCK,
									0,
									{
										BBDEBUGDECL_END 
									}
								};
								bbOnDebugEnterScope(&__scope);
								struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 238, 0};
								bbOnDebugEnterStm(&__stmt_0);
								((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_icongadget_ticongadget_frame_current +=1;
								struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 239, 0};
								bbOnDebugEnterStm(&__stmt_1);
								if(((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_icongadget_ticongadget_frame_current >((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_icongadget_ticongadget_frame_max ){
									struct BBDebugScope __scope = {
										BBDEBUGSCOPE_LOCALBLOCK,
										0,
										{
											BBDEBUGDECL_END 
										}
									};
									bbOnDebugEnterScope(&__scope);
									struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 239, 0};
									bbOnDebugEnterStm(&__stmt_0);
									((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_icongadget_ticongadget_frame_current =((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_icongadget_ticongadget_frame_start ;
									bbOnDebugLeaveScope();
								}
								bbOnDebugLeaveScope();
							}else{
								struct BBDebugScope __scope = {
									BBDEBUGSCOPE_LOCALBLOCK,
									0,
									{
										BBDEBUGDECL_END 
									}
								};
								bbOnDebugEnterScope(&__scope);
								struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 241, 0};
								bbOnDebugEnterStm(&__stmt_0);
								((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_icongadget_ticongadget_frame_current -=1;
								struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 242, 0};
								bbOnDebugEnterStm(&__stmt_1);
								if(((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_icongadget_ticongadget_frame_current <((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_icongadget_ticongadget_frame_start ){
									struct BBDebugScope __scope = {
										BBDEBUGSCOPE_LOCALBLOCK,
										0,
										{
											BBDEBUGDECL_END 
										}
									};
									bbOnDebugEnterScope(&__scope);
									struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 242, 0};
									bbOnDebugEnterStm(&__stmt_0);
									((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_icongadget_ticongadget_frame_current =((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_icongadget_ticongadget_frame_max ;
									bbOnDebugLeaveScope();
								}
								bbOnDebugLeaveScope();
							}
							struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 244, 0};
							bbOnDebugEnterStm(&__stmt_3);
							((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_icongadget_ticongadget_frame_timer =bbMilliSecs();
							bbOnDebugLeaveScope();
						}
						bbOnDebugLeaveScope();
					}
					bbOnDebugLeaveScope();
				}
				bbOnDebugLeaveScope();
			}
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 253, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbOnDebugLeaveScope();
	return (BBOBJECT)bbt_pData;
}
BBINT _maxgui_proxygadgets_icongadget_TIconGadget_State(struct maxgui_proxygadgets_icongadget_TIconGadget_obj* o){
	((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"State",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TIconGadget",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_icongadget_TIconGadget_SetShow_i(struct maxgui_proxygadgets_icongadget_TIconGadget_obj* o,BBINT bbt_bool){
	((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetShow",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TIconGadget",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"bool",
				"i",
				.var_address=&bbt_bool
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 261, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_panel ))->clas->m_SetShow_i((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_icongadget_ticongadget_panel ,bbt_bool);
	bbOnDebugLeaveScope();
	return 0;
}
struct brl_timer_TTimer_obj* maxgui_proxygadgets_icongadget_TIconGadget_icon_timer;
struct BBDebugScope_31 maxgui_proxygadgets_icongadget_TIconGadget_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TIconGadget",
	{
		{
			BBDEBUGDECL_FIELD,
			"style",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_icongadget_TIconGadget_obj,_maxgui_proxygadgets_icongadget_ticongadget_style)
		},
		{
			BBDEBUGDECL_FIELD,
			"animated",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_icongadget_TIconGadget_obj,_maxgui_proxygadgets_icongadget_ticongadget_animated)
		},
		{
			BBDEBUGDECL_FIELD,
			"original_animated",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_icongadget_TIconGadget_obj,_maxgui_proxygadgets_icongadget_ticongadget_original_animated)
		},
		{
			BBDEBUGDECL_FIELD,
			"panel",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_icongadget_TIconGadget_obj,_maxgui_proxygadgets_icongadget_ticongadget_panel)
		},
		{
			BBDEBUGDECL_FIELD,
			"name",
			"$",
			.field_offset=offsetof(struct maxgui_proxygadgets_icongadget_TIconGadget_obj,_maxgui_proxygadgets_icongadget_ticongadget_name)
		},
		{
			BBDEBUGDECL_FIELD,
			"iconstrip",
			":TIconStrip",
			.field_offset=offsetof(struct maxgui_proxygadgets_icongadget_TIconGadget_obj,_maxgui_proxygadgets_icongadget_ticongadget_iconstrip)
		},
		{
			BBDEBUGDECL_FIELD,
			"grey_iconstrip",
			":TIconStrip",
			.field_offset=offsetof(struct maxgui_proxygadgets_icongadget_TIconGadget_obj,_maxgui_proxygadgets_icongadget_ticongadget_grey_iconstrip)
		},
		{
			BBDEBUGDECL_FIELD,
			"o_iconstrip",
			":TIconStrip",
			.field_offset=offsetof(struct maxgui_proxygadgets_icongadget_TIconGadget_obj,_maxgui_proxygadgets_icongadget_ticongadget_o_iconstrip)
		},
		{
			BBDEBUGDECL_FIELD,
			"pixmap",
			":TPixmap",
			.field_offset=offsetof(struct maxgui_proxygadgets_icongadget_TIconGadget_obj,_maxgui_proxygadgets_icongadget_ticongadget_pixmap)
		},
		{
			BBDEBUGDECL_FIELD,
			"grey_pixmap",
			":TPixmap",
			.field_offset=offsetof(struct maxgui_proxygadgets_icongadget_TIconGadget_obj,_maxgui_proxygadgets_icongadget_ticongadget_grey_pixmap)
		},
		{
			BBDEBUGDECL_FIELD,
			"o_pixmap",
			":TPixmap",
			.field_offset=offsetof(struct maxgui_proxygadgets_icongadget_TIconGadget_obj,_maxgui_proxygadgets_icongadget_ticongadget_o_pixmap)
		},
		{
			BBDEBUGDECL_FIELD,
			"frame_max",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_icongadget_TIconGadget_obj,_maxgui_proxygadgets_icongadget_ticongadget_frame_max)
		},
		{
			BBDEBUGDECL_FIELD,
			"frame_current",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_icongadget_TIconGadget_obj,_maxgui_proxygadgets_icongadget_ticongadget_frame_current)
		},
		{
			BBDEBUGDECL_FIELD,
			"frame_timer",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_icongadget_TIconGadget_obj,_maxgui_proxygadgets_icongadget_ticongadget_frame_timer)
		},
		{
			BBDEBUGDECL_FIELD,
			"frame_duration",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_icongadget_TIconGadget_obj,_maxgui_proxygadgets_icongadget_ticongadget_frame_duration)
		},
		{
			BBDEBUGDECL_FIELD,
			"frame_start",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_icongadget_TIconGadget_obj,_maxgui_proxygadgets_icongadget_ticongadget_frame_start)
		},
		{
			BBDEBUGDECL_FIELD,
			"frame_direction",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_icongadget_TIconGadget_obj,_maxgui_proxygadgets_icongadget_ticongadget_frame_direction)
		},
		{
			BBDEBUGDECL_GLOBAL,
			"icon_timer",
			":TTimer",
			.var_address=(void*)&maxgui_proxygadgets_icongadget_TIconGadget_icon_timer
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_maxgui_proxygadgets_icongadget_TIconGadget_New
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Create",
			"(i,i,i,i,:TGadget,:Object,i):TIconGadget",
			.var_address=(void*)&maxgui_proxygadgets_icongadget_TIconGadget_Create_TTIconGadget_iiiiTTGadgetTObjecti
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Class",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_icongadget_TIconGadget_Class
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetText",
			"()$",
			.var_address=(void*)&_maxgui_proxygadgets_icongadget_TIconGadget_GetText
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetIconStrip",
			"(:TIconStrip)i",
			.var_address=(void*)&_maxgui_proxygadgets_icongadget_TIconGadget_SetIconStrip_TTIconStrip
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetPixmap",
			"(:TPixmap,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_icongadget_TIconGadget_SetPixmap_TTPixmapi
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SelectItem",
			"(i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_icongadget_TIconGadget_SelectItem_ii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetItem",
			"(i,$,$,i,:Object,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_icongadget_TIconGadget_SetItem_iSSiTObjecti
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetEnabled",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_icongadget_TIconGadget_SetEnabled_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"CleanUp",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_icongadget_TIconGadget_CleanUp
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"eventHandler",
			"(i,:Object,:Object):Object",
			.var_address=(void*)&maxgui_proxygadgets_icongadget_TIconGadget_eventHandler_TObject_iTObjectTObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"State",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_icongadget_TIconGadget_State
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetShow",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_icongadget_TIconGadget_SetShow_i
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_maxgui_proxygadgets_icongadget_TIconGadget maxgui_proxygadgets_icongadget_TIconGadget={
	&maxgui_maxgui_gadget_TProxyGadget,
	bbObjectFree,
	(BBDebugScope*)&maxgui_proxygadgets_icongadget_TIconGadget_scope,
	sizeof(struct maxgui_proxygadgets_icongadget_TIconGadget_obj),
	(void (*)(BBOBJECT))_maxgui_proxygadgets_icongadget_TIconGadget_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct maxgui_proxygadgets_icongadget_TIconGadget_obj,_maxgui_proxygadgets_icongadget_ticongadget_frame_direction) - sizeof(void*) + sizeof(BBINT)
	,_maxgui_maxgui_gadget_TGadget_SetFilter_F_TTEventTObject_i_TObject
	,_maxgui_maxgui_gadget_TProxyGadget_HasDescendant_TTGadget
	,_maxgui_maxgui_gadget_TGadget__setparent_TTGadgeti
	,_maxgui_maxgui_gadget_TGadget_SelectionChanged
	,_maxgui_maxgui_gadget_TGadget_Handle
	,_maxgui_maxgui_gadget_TProxyGadget_GetXPos
	,_maxgui_maxgui_gadget_TProxyGadget_GetYPos
	,_maxgui_maxgui_gadget_TProxyGadget_GetWidth
	,_maxgui_maxgui_gadget_TProxyGadget_GetHeight
	,_maxgui_maxgui_gadget_TProxyGadget_GetGroup
	,_maxgui_maxgui_gadget_TProxyGadget_SetShape_iiii
	,_maxgui_maxgui_gadget_TGadget_SetArea_iiii
	,_maxgui_maxgui_gadget_TGadget_SetRect_iiii
	,_maxgui_maxgui_gadget_TGadget_LockLayout
	,_maxgui_maxgui_gadget_TProxyGadget_SetLayout_iiii
	,_maxgui_maxgui_gadget_TGadget_LayoutKids
	,_maxgui_maxgui_gadget_TGadget_DoLayout
	,_maxgui_maxgui_gadget_TGadget_SetDataSource_TObject
	,maxgui_maxgui_gadget_TGadget_KeysFromList_aS_TTList
	,maxgui_maxgui_gadget_TGadget_KeysFromObjectArray_aS_aTObject
	,_maxgui_maxgui_gadget_TGadget_SyncDataSource
	,_maxgui_maxgui_gadget_TGadget_SyncData_aS
	,_maxgui_maxgui_gadget_TGadget_InsertItemFromKey_iS
	,_maxgui_maxgui_gadget_TProxyGadget_Clear
	,_maxgui_maxgui_gadget_TProxyGadget_InsertItem_iSSiTObjecti
	,_maxgui_proxygadgets_icongadget_TIconGadget_SetItem_iSSiTObjecti
	,_maxgui_maxgui_gadget_TProxyGadget_RemoveItem_i
	,_maxgui_maxgui_gadget_TProxyGadget_ItemCount
	,_maxgui_maxgui_gadget_TProxyGadget_ItemText_i
	,_maxgui_maxgui_gadget_TProxyGadget_ItemTip_i
	,_maxgui_maxgui_gadget_TProxyGadget_ItemFlags_i
	,_maxgui_maxgui_gadget_TProxyGadget_ItemIcon_i
	,_maxgui_maxgui_gadget_TProxyGadget_ItemExtra_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetItemState_ii
	,_maxgui_maxgui_gadget_TProxyGadget_ItemState_i
	,_maxgui_proxygadgets_icongadget_TIconGadget_SelectItem_ii
	,_maxgui_maxgui_gadget_TProxyGadget_SelectedItem
	,_maxgui_maxgui_gadget_TProxyGadget_SelectedItems
	,_maxgui_maxgui_gadget_TGadget_Insert_TTGadgeti
	,_maxgui_maxgui_gadget_TProxyGadget_Query_i
	,_maxgui_maxgui_gadget_TGadget_ScaleFactor
	,_maxgui_proxygadgets_icongadget_TIconGadget_CleanUp
	,_maxgui_maxgui_gadget_TProxyGadget_Free
	,_maxgui_maxgui_gadget_TProxyGadget_Rethink
	,_maxgui_maxgui_gadget_TProxyGadget_ClientWidth
	,_maxgui_maxgui_gadget_TProxyGadget_ClientHeight
	,_maxgui_maxgui_gadget_TProxyGadget_Activate_i
	,_maxgui_proxygadgets_icongadget_TIconGadget_State
	,_maxgui_maxgui_gadget_TProxyGadget_SetText_S
	,_maxgui_proxygadgets_icongadget_TIconGadget_GetText
	,_maxgui_maxgui_gadget_TProxyGadget_SetFont_TTGuiFont
	,_maxgui_maxgui_gadget_TProxyGadget_SetColor_iii
	,_maxgui_maxgui_gadget_TProxyGadget_RemoveColor
	,_maxgui_maxgui_gadget_TProxyGadget_SetAlpha_f
	,_maxgui_maxgui_gadget_TProxyGadget_SetTextColor_iii
	,_maxgui_maxgui_gadget_TProxyGadget_SetTooltip_S
	,_maxgui_maxgui_gadget_TProxyGadget_GetTooltip
	,_maxgui_proxygadgets_icongadget_TIconGadget_SetPixmap_TTPixmapi
	,_maxgui_proxygadgets_icongadget_TIconGadget_SetIconStrip_TTIconStrip
	,_maxgui_proxygadgets_icongadget_TIconGadget_SetShow_i
	,_maxgui_proxygadgets_icongadget_TIconGadget_SetEnabled_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetSelected_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetHotKey_ii
	,_maxgui_maxgui_gadget_TProxyGadget_SetSensitivity_i
	,_maxgui_maxgui_gadget_TProxyGadget_GetSensitivity
	,_maxgui_proxygadgets_icongadget_TIconGadget_Class
	,_maxgui_maxgui_gadget_TProxyGadget_GetStatusText
	,_maxgui_maxgui_gadget_TProxyGadget_SetStatusText_S
	,_maxgui_maxgui_gadget_TProxyGadget_GetMenu
	,_maxgui_maxgui_gadget_TProxyGadget_PopupMenu_TTGadgetTObject
	,_maxgui_maxgui_gadget_TProxyGadget_UpdateMenu
	,_maxgui_maxgui_gadget_TProxyGadget_SetMinimumSize_ii
	,_maxgui_maxgui_gadget_TProxyGadget_SetMaximumSize_ii
	,_maxgui_maxgui_gadget_TProxyGadget_ClearListItems
	,_maxgui_maxgui_gadget_TProxyGadget_InsertListItem_iSSiTObject
	,_maxgui_maxgui_gadget_TProxyGadget_SetListItem_iSSiTObject
	,_maxgui_maxgui_gadget_TProxyGadget_RemoveListItem_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetListItemState_ii
	,_maxgui_maxgui_gadget_TProxyGadget_ListItemState_i
	,_maxgui_maxgui_gadget_TProxyGadget_RootNode
	,_maxgui_maxgui_gadget_TProxyGadget_InsertNode_iSi
	,_maxgui_maxgui_gadget_TProxyGadget_ModifyNode_Si
	,_maxgui_maxgui_gadget_TProxyGadget_SelectedNode
	,_maxgui_maxgui_gadget_TProxyGadget_CountKids
	,_maxgui_maxgui_gadget_TProxyGadget_ReplaceText_iiSi
	,_maxgui_maxgui_gadget_TProxyGadget_AddText_S
	,_maxgui_maxgui_gadget_TProxyGadget_AreaText_iii
	,_maxgui_maxgui_gadget_TProxyGadget_AreaLen_i
	,_maxgui_maxgui_gadget_TProxyGadget_LockText
	,_maxgui_maxgui_gadget_TProxyGadget_UnlockText
	,_maxgui_maxgui_gadget_TProxyGadget_SetTabs_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetMargins_i
	,_maxgui_maxgui_gadget_TProxyGadget_GetCursorPos_i
	,_maxgui_maxgui_gadget_TProxyGadget_GetSelectionLength_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetStyle_iiiiiii
	,_maxgui_maxgui_gadget_TProxyGadget_SetSelection_iii
	,_maxgui_maxgui_gadget_TProxyGadget_CharX_i
	,_maxgui_maxgui_gadget_TProxyGadget_CharY_i
	,_maxgui_maxgui_gadget_TProxyGadget_CharAt_i
	,_maxgui_maxgui_gadget_TProxyGadget_LineAt_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetCaretWidth_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetCaretColor_iii
	,_maxgui_maxgui_gadget_TGadget_HasUndoRedo
	,_maxgui_maxgui_gadget_TGadget_EnableUndoRedo_i
	,_maxgui_maxgui_gadget_TGadget_UndoRedoEnabled
	,_maxgui_maxgui_gadget_TGadget_Undo
	,_maxgui_maxgui_gadget_TGadget_Redo
	,_maxgui_maxgui_gadget_TGadget_CanUndo
	,_maxgui_maxgui_gadget_TGadget_CanRedo
	,_maxgui_maxgui_gadget_TGadget_ClearUndoRedo
	,_maxgui_maxgui_gadget_TGadget_HasHighlighting
	,_maxgui_maxgui_gadget_TGadget_SetHighlightLanguage_S
	,_maxgui_maxgui_gadget_TGadget_SetHighlightKeywords_iS
	,_maxgui_maxgui_gadget_TGadget_SetHighlightStyle_iiiii
	,_maxgui_maxgui_gadget_TGadget_HighLight
	,_maxgui_maxgui_gadget_TGadget_ClearHighlightStyles_iiiiii
	,_maxgui_maxgui_gadget_TGadget_HasLineNumbers
	,_maxgui_maxgui_gadget_TGadget_SetLineNumberBackColor_iii
	,_maxgui_maxgui_gadget_TGadget_SetLineNumberForeColor_iii
	,_maxgui_maxgui_gadget_TGadget_SetLineNumberEnable_i
	,_maxgui_maxgui_gadget_TGadget_HasCharEventSupressionFixup
	,_maxgui_maxgui_gadget_TProxyGadget_SetValue_f
	,_maxgui_maxgui_gadget_TProxyGadget_SetRange_ii
	,_maxgui_maxgui_gadget_TProxyGadget_SetProp_i
	,_maxgui_maxgui_gadget_TProxyGadget_GetProp
	,_maxgui_maxgui_gadget_TProxyGadget_AttachGraphics_i
	,_maxgui_maxgui_gadget_TProxyGadget_CanvasGraphics
	,_maxgui_maxgui_gadget_TProxyGadget_Run_S
	,_maxgui_maxgui_gadget_TProxyGadget_SetProxy_TTGadget
	,_maxgui_maxgui_gadget_TProxyGadget_GetProxy
	,_maxgui_maxgui_gadget_TProxyGadget_SetStatus_S
	,maxgui_proxygadgets_icongadget_TIconGadget_Create_TTIconGadget_iiiiTTGadgetTObjecti
	,maxgui_proxygadgets_icongadget_TIconGadget_eventHandler_TObject_iTObjectTObject
};

struct maxgui_proxygadgets_icongadget_TIconGadget_obj* maxgui_proxygadgets_icongadget_CreateIconGadget(BBINT bbt_x,BBINT bbt_y,BBINT bbt_w,BBINT bbt_h,struct maxgui_maxgui_gadget_TGadget_obj* bbt_window,BBOBJECT bbt_image,BBINT bbt_style){
	struct BBDebugScope_7 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"CreateIconGadget",
		{
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
				"w",
				"i",
				.var_address=&bbt_w
			},
			{
				BBDEBUGDECL_LOCAL,
				"h",
				"i",
				.var_address=&bbt_h
			},
			{
				BBDEBUGDECL_LOCAL,
				"window",
				":TGadget",
				.var_address=&bbt_window
			},
			{
				BBDEBUGDECL_LOCAL,
				"image",
				":Object",
				.var_address=&bbt_image
			},
			{
				BBDEBUGDECL_LOCAL,
				"style",
				"i",
				.var_address=&bbt_style
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 27, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return (struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)maxgui_proxygadgets_icongadget_TIconGadget_Create_TTIconGadget_iiiiTTGadgetTObjecti(bbt_x,bbt_y,bbt_w,bbt_h,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_window,(BBOBJECT)bbt_image,bbt_style);
}
BBINT maxgui_proxygadgets_icongadget_SetGadgetAnim(struct maxgui_maxgui_gadget_TGadget_obj* bbt_gadget,BBINT bbt__play,BBINT bbt_fst,BBINT bbt_fe,BBINT bbt_fs,BBINT bbt_fd){
	struct maxgui_proxygadgets_icongadget_TIconGadget_obj* bbt_g=(struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)&bbNullObject;
	struct BBDebugScope_7 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetGadgetAnim",
		{
			{
				BBDEBUGDECL_LOCAL,
				"gadget",
				":TGadget",
				.var_address=&bbt_gadget
			},
			{
				BBDEBUGDECL_LOCAL,
				"_play",
				"i",
				.var_address=&bbt__play
			},
			{
				BBDEBUGDECL_LOCAL,
				"fst",
				"i",
				.var_address=&bbt_fst
			},
			{
				BBDEBUGDECL_LOCAL,
				"fe",
				"i",
				.var_address=&bbt_fe
			},
			{
				BBDEBUGDECL_LOCAL,
				"fs",
				"i",
				.var_address=&bbt_fs
			},
			{
				BBDEBUGDECL_LOCAL,
				"fd",
				"i",
				.var_address=&bbt_fd
			},
			{
				BBDEBUGDECL_LOCAL,
				"g",
				":TIconGadget",
				.var_address=&bbt_g
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 35, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_g=(struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_gadget,(BBClass*)&maxgui_proxygadgets_icongadget_TIconGadget));
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 36, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(((BBObject*)bbt_g)!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 37, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(bbt__play==1){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 37, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_g))->_maxgui_proxygadgets_icongadget_ticongadget_animated =1;
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 38, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(bbt__play==0){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 38, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_g))->_maxgui_proxygadgets_icongadget_ticongadget_animated =0;
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 40, 0};
		bbOnDebugEnterStm(&__stmt_2);
		if(bbt_fd==0){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 40, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_g))->_maxgui_proxygadgets_icongadget_ticongadget_frame_direction =0;
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 41, 0};
		bbOnDebugEnterStm(&__stmt_3);
		if(bbt_fd==1){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 41, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_g))->_maxgui_proxygadgets_icongadget_ticongadget_frame_direction =1;
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 43, 0};
		bbOnDebugEnterStm(&__stmt_4);
		if(bbt_fst!=-1){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 43, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_g))->_maxgui_proxygadgets_icongadget_ticongadget_frame_start =bbt_fst;
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 44, 0};
		bbOnDebugEnterStm(&__stmt_5);
		if(bbt_fe!=-1){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 44, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_g))->_maxgui_proxygadgets_icongadget_ticongadget_frame_max =bbt_fe;
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 45, 0};
		bbOnDebugEnterStm(&__stmt_6);
		if(bbt_fs!=-1){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 45, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_g))->_maxgui_proxygadgets_icongadget_ticongadget_frame_duration =bbt_fs;
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_7 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 47, 0};
		bbOnDebugEnterStm(&__stmt_7);
		if(((BBObject*)((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_g))->_maxgui_proxygadgets_icongadget_ticongadget_iconstrip )!= &bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 48, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if(((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_g))->_maxgui_proxygadgets_icongadget_ticongadget_frame_max >((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_g))->_maxgui_proxygadgets_icongadget_ticongadget_iconstrip ))->_maxgui_maxgui_iconstrip_ticonstrip_count ){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 48, 0};
				bbOnDebugEnterStm(&__stmt_0);
				((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_g))->_maxgui_proxygadgets_icongadget_ticongadget_frame_max =(((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_g))->_maxgui_proxygadgets_icongadget_ticongadget_iconstrip ))->_maxgui_maxgui_iconstrip_ticonstrip_count -1);
				bbOnDebugLeaveScope();
			}
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 49, 0};
			bbOnDebugEnterStm(&__stmt_1);
			if(((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_g))->_maxgui_proxygadgets_icongadget_ticongadget_frame_start <0){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 49, 0};
				bbOnDebugEnterStm(&__stmt_0);
				((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_g))->_maxgui_proxygadgets_icongadget_ticongadget_frame_start =0;
				bbOnDebugLeaveScope();
			}
			struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 50, 0};
			bbOnDebugEnterStm(&__stmt_2);
			if(((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_g))->_maxgui_proxygadgets_icongadget_ticongadget_frame_current <((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_g))->_maxgui_proxygadgets_icongadget_ticongadget_frame_start ){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 50, 0};
				bbOnDebugEnterStm(&__stmt_0);
				((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_g))->_maxgui_proxygadgets_icongadget_ticongadget_frame_current =((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_g))->_maxgui_proxygadgets_icongadget_ticongadget_frame_start ;
				bbOnDebugLeaveScope();
			}
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT maxgui_proxygadgets_icongadget_GetGadgetAnim(struct maxgui_maxgui_gadget_TGadget_obj* bbt_gad,BBINT* bbt_a,BBINT* bbt_b,BBINT* bbt_c,BBINT* bbt_d,BBINT* bbt_e){
	struct maxgui_proxygadgets_icongadget_TIconGadget_obj* bbt_g=(struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)&bbNullObject;
	struct BBDebugScope_7 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"GetGadgetAnim",
		{
			{
				BBDEBUGDECL_LOCAL,
				"gad",
				":TGadget",
				.var_address=&bbt_gad
			},
			{
				BBDEBUGDECL_VARPARAM,
				"a",
				"i",
				.var_address=&bbt_a
			},
			{
				BBDEBUGDECL_VARPARAM,
				"b",
				"i",
				.var_address=&bbt_b
			},
			{
				BBDEBUGDECL_VARPARAM,
				"c",
				"i",
				.var_address=&bbt_c
			},
			{
				BBDEBUGDECL_VARPARAM,
				"d",
				"i",
				.var_address=&bbt_d
			},
			{
				BBDEBUGDECL_VARPARAM,
				"e",
				"i",
				.var_address=&bbt_e
			},
			{
				BBDEBUGDECL_LOCAL,
				"g",
				":TIconGadget",
				.var_address=&bbt_g
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 68, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_g=(struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_gad,(BBClass*)&maxgui_proxygadgets_icongadget_TIconGadget));
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 69, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(((BBObject*)bbt_g)!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 70, 0};
		bbOnDebugEnterStm(&__stmt_0);
		*bbt_a=((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_g))->_maxgui_proxygadgets_icongadget_ticongadget_animated ;
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 71, 0};
		bbOnDebugEnterStm(&__stmt_1);
		*bbt_b=((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_g))->_maxgui_proxygadgets_icongadget_ticongadget_frame_start ;
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 72, 0};
		bbOnDebugEnterStm(&__stmt_2);
		*bbt_c=((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_g))->_maxgui_proxygadgets_icongadget_ticongadget_frame_max ;
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 73, 0};
		bbOnDebugEnterStm(&__stmt_3);
		*bbt_d=((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_g))->_maxgui_proxygadgets_icongadget_ticongadget_frame_duration ;
		struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 74, 0};
		bbOnDebugEnterStm(&__stmt_4);
		*bbt_e=((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbNullObjectTest(bbt_g))->_maxgui_proxygadgets_icongadget_ticongadget_frame_direction ;
		struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/IconGadget.bmx", 75, 0};
		bbOnDebugEnterStm(&__stmt_5);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return 0;
	}
	bbOnDebugLeaveScope();
	return 0;
}
static int _bb_maxgui_proxygadgets_icongadget_inited = 0;
int _bb_maxgui_proxygadgets_icongadget(){
	if (!_bb_maxgui_proxygadgets_icongadget_inited) {
		_bb_maxgui_proxygadgets_icongadget_inited = 1;
		GC_add_roots(&maxgui_proxygadgets_icongadget_TIconGadget_icon_timer, &maxgui_proxygadgets_icongadget_TIconGadget_icon_timer + 1);
		__bb_brl_blitz_blitz();
		__bb_maxgui_maxgui_maxgui();
		__bb_brl_timer_timer();
		__bb_brl_max2d_max2d();
		_bb_maxgui_proxygadgets_common();
		bbObjectRegisterType((BBCLASS)&maxgui_proxygadgets_icongadget_TIconGadget);
		maxgui_proxygadgets_icongadget_TIconGadget_icon_timer=(struct brl_timer_TTimer_obj*)&bbNullObject;
		struct BBDebugScope_1 __scope = {
			BBDEBUGSCOPE_FUNCTION,
			"IconGadget",
			{
				{
					BBDEBUGDECL_CONST,
					"ICON_GADGET_STATIC",
					"i",
					.const_value=&_s1
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		bbOnDebugLeaveScope();
		return 0;
	}
	return 0;
}