#include "ToolBarExtra.bmx.debug.win32.x64.h"
static BBString _s0={
	&bbStringClass,
	2,
	{37,86}
};
static BBString _s9={
	&bbStringClass,
	1,
	{41}
};
static BBString _s1={
	&bbStringClass,
	1,
	{44}
};
static BBString _s10={
	&bbStringClass,
	7,
	{47,115,105,122,101,58,32}
};
static BBString _s12={
	&bbStringClass,
	1,
	{49}
};
static BBString _s13={
	&bbStringClass,
	1,
	{50}
};
static BBString _s14={
	&bbStringClass,
	1,
	{51}
};
static BBString _s15={
	&bbStringClass,
	1,
	{52}
};
static BBString _s16={
	&bbStringClass,
	1,
	{53}
};
static BBString _s17={
	&bbStringClass,
	1,
	{54}
};
static BBString _s18={
	&bbStringClass,
	1,
	{55}
};
static BBString _s19={
	&bbStringClass,
	1,
	{56}
};
static BBString _s20={
	&bbStringClass,
	2,
	{57,57}
};
static BBString _s5={
	&bbStringClass,
	1,
	{60}
};
static BBString _s6={
	&bbStringClass,
	1,
	{62}
};
static BBString _s8={
	&bbStringClass,
	33,
	{71,97,100,103,101,116,32,105,116,101,109,32,105,110,100,101,120
	,32,111,117,116,32,111,102,32,114,97,110,103,101,46,32,40
}
};
static BBString _s7={
	&bbStringClass,
	18,
	{73,110,100,101,120,32,111,117,116,32,111,102,32,114,97,110,103
	,101}
};
static BBString _s11={
	&bbStringClass,
	12,
	{73,115,32,78,85,76,76,32,105,100,32,58}
};
static BBString _s3={
	&bbStringClass,
	5,
	{82,65,78,71,69}
};
static BBString _s2={
	&bbStringClass,
	5,
	{83,84,65,84,69}
};
static BBString _s4={
	&bbStringClass,
	5,
	{86,65,76,85,69}
};
struct BBDebugScope_1{int kind; const char *name; BBDebugDecl decls[2]; };
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
struct BBDebugScope_25{int kind; const char *name; BBDebugDecl decls[26]; };
struct BBDebugScope_3{int kind; const char *name; BBDebugDecl decls[4]; };
struct BBDebugScope_4{int kind; const char *name; BBDebugDecl decls[5]; };
struct BBDebugScope_53{int kind; const char *name; BBDebugDecl decls[54]; };
struct BBDebugScope_6{int kind; const char *name; BBDebugDecl decls[7]; };
struct BBDebugScope_7{int kind; const char *name; BBDebugDecl decls[8]; };
struct BBDebugScope_8{int kind; const char *name; BBDebugDecl decls[9]; };
struct BBDebugScope_9{int kind; const char *name; BBDebugDecl decls[10]; };
void _maxgui_proxygadgets_toolbarextra_tToolItem_New(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &maxgui_proxygadgets_toolbarextra_tToolItem;
	((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_return_id = 0;
	((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_status = 1;
	((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_width = 80;
	((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_enabled = -5;
	((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_old_enabled = -5;
	((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_normal = 0;
	((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_select = 0;
	((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_current = 0;
	((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_item_type = 1;
	((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_toolbar = (struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_tip = &bbEmptyString;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolItem_Clear(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* o){
	((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Clear",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tToolItem",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 81, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(((BBObject*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 81, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget );
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 82, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(((BBObject*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_toolbar )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 82, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_toolbar =(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)&bbNullObject;
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* maxgui_proxygadgets_toolbarextra_tToolItem_Create_TtToolItem_iTtToolbarExtraiiSii(BBINT bbt_id,struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* bbt_tb,BBINT bbt__x,BBINT bbt__TYPE,BBSTRING bbt__title,BBINT bbt__return_id,BBINT bbt__icon){
	struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* bbt_it=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)&bbNullObject;
	struct brl_pixmap_TPixmap_obj* bbt_pix=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	struct BBDebugScope_9 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Create",
		{
			{
				BBDEBUGDECL_LOCAL,
				"id",
				"i",
				.var_address=&bbt_id
			},
			{
				BBDEBUGDECL_LOCAL,
				"tb",
				":tToolbarExtra",
				.var_address=&bbt_tb
			},
			{
				BBDEBUGDECL_LOCAL,
				"_x",
				"i",
				.var_address=&bbt__x
			},
			{
				BBDEBUGDECL_LOCAL,
				"_TYPE",
				"i",
				.var_address=&bbt__TYPE
			},
			{
				BBDEBUGDECL_LOCAL,
				"_title",
				"$",
				.var_address=&bbt__title
			},
			{
				BBDEBUGDECL_LOCAL,
				"_return_id",
				"i",
				.var_address=&bbt__return_id
			},
			{
				BBDEBUGDECL_LOCAL,
				"_icon",
				"i",
				.var_address=&bbt__icon
			},
			{
				BBDEBUGDECL_LOCAL,
				"it",
				":tToolItem",
				.var_address=&bbt_it
			},
			{
				BBDEBUGDECL_LOCAL,
				"pix",
				":TPixmap",
				.var_address=&bbt_pix
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 88, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_it=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbObjectNew((BBClass *)&maxgui_proxygadgets_toolbarextra_tToolItem);
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 89, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_pix=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 90, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_it))->_maxgui_proxygadgets_toolbarextra_ttoolitem_return_id =bbt__return_id;
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 91, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_it))->_maxgui_proxygadgets_toolbarextra_ttoolitem_return_id ==-1){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 92, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_it))->_maxgui_proxygadgets_toolbarextra_ttoolitem_return_id =((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->scales[0]-1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 94, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_it))->_maxgui_proxygadgets_toolbarextra_ttoolitem_item_type =bbt__TYPE;
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 95, 0};
	bbOnDebugEnterStm(&__stmt_5);
	((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_it))->_maxgui_proxygadgets_toolbarextra_ttoolitem_width =maxgui_proxygadgets_toolbarextra_tToolbarExtra_item_width;
	struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 97, 0};
	bbOnDebugEnterStm(&__stmt_6);
	BBINT bbt_=bbt__TYPE;
	struct BBDebugStm __stmt_7 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 99, 0};
	bbOnDebugEnterStm(&__stmt_7);
	if(bbt_==99){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 101, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(bbt_==8){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 102, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_it))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateSlider(bbt__x,4,((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_it))->_maxgui_proxygadgets_toolbarextra_ttoolitem_width ,20,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel ,5);
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
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 104, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if((bbt_==1) || (bbt_==4)){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 106, 0};
				bbOnDebugEnterStm(&__stmt_0);
				((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_it))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreatePanel(bbt__x,0,24,32,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel ,4,&bbEmptyString);
				struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 107, 0};
				bbOnDebugEnterStm(&__stmt_1);
				if(bbt__icon>-1){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 108, 0};
					bbOnDebugEnterStm(&__stmt_0);
					bbt_pix=(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_iconstrip ,bbt__icon);
					struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 109, 0};
					bbOnDebugEnterStm(&__stmt_1);
					maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_it))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,(struct brl_pixmap_TPixmap_obj*)bbt_pix,1);
					struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 110, 0};
					bbOnDebugEnterStm(&__stmt_2);
					maxgui_maxgui_SetGadgetToolTip((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_it))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,maxgui_localization_LocalizeString(bbt__title));
					struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 111, 0};
					bbOnDebugEnterStm(&__stmt_3);
					if(bbt__TYPE==4){
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 112, 0};
						bbOnDebugEnterStm(&__stmt_0);
						((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_it))->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_normal =bbt__icon;
						struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 113, 0};
						bbOnDebugEnterStm(&__stmt_1);
						((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_it))->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_select =(bbt__icon+1);
						struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 114, 0};
						bbOnDebugEnterStm(&__stmt_2);
						((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_it))->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_current =bbt__icon;
						bbOnDebugLeaveScope();
					}
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
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 117, 0};
				bbOnDebugEnterStm(&__stmt_0);
				if(bbt_==7){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 118, 0};
					bbOnDebugEnterStm(&__stmt_0);
					((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_it))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateButton(maxgui_localization_LocalizeString(bbt__title),bbt__x,1,((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_it))->_maxgui_proxygadgets_toolbarextra_ttoolitem_width ,30,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel ,11);
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
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 119, 0};
					bbOnDebugEnterStm(&__stmt_0);
					if(bbt_==6){
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 120, 0};
						bbOnDebugEnterStm(&__stmt_0);
						((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_it))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateButton(maxgui_localization_LocalizeString(bbt__title),bbt__x,3,((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_it))->_maxgui_proxygadgets_toolbarextra_ttoolitem_width ,25,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel ,8);
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
						struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 122, 0};
						bbOnDebugEnterStm(&__stmt_0);
						if(bbt_==2){
							struct BBDebugScope __scope = {
								BBDEBUGSCOPE_LOCALBLOCK,
								0,
								{
									BBDEBUGDECL_END 
								}
							};
							bbOnDebugEnterScope(&__scope);
							struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 123, 0};
							bbOnDebugEnterStm(&__stmt_0);
							((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_it))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateTextField(bbt__x,4,((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_it))->_maxgui_proxygadgets_toolbarextra_ttoolitem_width ,22,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel ,0);
							struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 124, 0};
							bbOnDebugEnterStm(&__stmt_1);
							maxgui_maxgui_SetGadgetToolTip((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_it))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,maxgui_localization_LocalizeString(bbt__title));
							struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 125, 0};
							bbOnDebugEnterStm(&__stmt_2);
							maxgui_maxgui_SetGadgetSensitivity((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_it))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,2);
							struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 126, 0};
							bbOnDebugEnterStm(&__stmt_3);
							maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_it))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,maxgui_localization_LocalizeString(bbt__title));
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
							struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 127, 0};
							bbOnDebugEnterStm(&__stmt_0);
							if(bbt_==3){
								struct BBDebugScope __scope = {
									BBDEBUGSCOPE_LOCALBLOCK,
									0,
									{
										BBDEBUGDECL_END 
									}
								};
								bbOnDebugEnterScope(&__scope);
								struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 128, 0};
								bbOnDebugEnterStm(&__stmt_0);
								((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_it))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateComboBox(bbt__x,4,((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_it))->_maxgui_proxygadgets_toolbarextra_ttoolitem_width ,22,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel ,0);
								struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 129, 0};
								bbOnDebugEnterStm(&__stmt_1);
								maxgui_maxgui_SetGadgetToolTip((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_it))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,maxgui_localization_LocalizeString(bbt__title));
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
								struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 131, 0};
								bbOnDebugEnterStm(&__stmt_0);
								if(bbt_==5){
									BBINT bbt_size=0;
									struct BBDebugScope_1 __scope = {
										BBDEBUGSCOPE_LOCALBLOCK,
										0,
										{
											{
												BBDEBUGDECL_LOCAL,
												"size",
												"i",
												.var_address=&bbt_size
											},
											BBDEBUGDECL_END 
										}
									};
									bbOnDebugEnterScope(&__scope);
									struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 132, 0};
									bbOnDebugEnterStm(&__stmt_0);
									((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_it))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateLabel(maxgui_localization_LocalizeString(bbt__title),bbt__x,8,((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_it))->_maxgui_proxygadgets_toolbarextra_ttoolitem_width ,22,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel ,0);
									struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 133, 0};
									bbOnDebugEnterStm(&__stmt_1);
									bbt_size=(maxgui_localization_LocalizeString(bbt__title))->length;
									struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 134, 0};
									bbOnDebugEnterStm(&__stmt_2);
									maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_it))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,bbt__x,8,((bbt_size-1)*maxgui_proxygadgets_toolbarextra_tToolItem_font_size),22);
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
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_8 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 137, 0};
	bbOnDebugEnterStm(&__stmt_8);
	if(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tfont !=&bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 137, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_SetGadgetFont((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_it))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,(struct maxgui_maxgui_guifont_TGuiFont_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tfont ,0);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_9 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 138, 0};
	bbOnDebugEnterStm(&__stmt_9);
	if(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_txt_rgb != &bbEmptyArray){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 138, 0};
		bbOnDebugEnterStm(&__stmt_0);
		struct maxgui_maxgui_gadget_TGadget_obj* bbt_2;
		(((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest((bbt_2 = ((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_it))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ))))->clas)->m_SetTextColor_iii((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_2,((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_txt_rgb ),(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_txt_rgb )->dims,0U))[0U],((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_txt_rgb ),(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_txt_rgb )->dims,1U))[1U],((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_txt_rgb ),(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_txt_rgb )->dims,2U))[2U]);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_10 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 139, 0};
	bbOnDebugEnterStm(&__stmt_10);
	if(bbt__TYPE==8){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 140, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_colors != &bbEmptyArray){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 140, 0};
			bbOnDebugEnterStm(&__stmt_0);
			maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_it))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,((BBINT)((BBBYTE*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_colors ),(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_colors )->dims,0U))[0U]),((BBINT)((BBBYTE*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_colors ),(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_colors )->dims,1U))[1U]),((BBINT)((BBBYTE*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_colors ),(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_colors )->dims,2U))[2U]),1);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 141, 0};
		bbOnDebugEnterStm(&__stmt_1);
		maxgui_maxgui_SetGadgetToolTip((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_it))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,maxgui_localization_LocalizeString(bbStringReplace((BBSTRING)bbt__title,&_s0,&bbEmptyString)));
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_11 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 143, 0};
	bbOnDebugEnterStm(&__stmt_11);
	((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_it))->_maxgui_proxygadgets_toolbarextra_ttoolitem_tip =bbt__title;
	struct BBDebugStm __stmt_12 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 144, 0};
	bbOnDebugEnterStm(&__stmt_12);
	((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_it))->_maxgui_proxygadgets_toolbarextra_ttoolitem_toolbar =(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbt_tb;
	struct BBDebugStm __stmt_13 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 145, 0};
	bbOnDebugEnterStm(&__stmt_13);
	maxgui_maxgui_SetGadgetExtra((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_it))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,(BBOBJECT)bbt_it);
	struct BBDebugStm __stmt_14 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 146, 0};
	bbOnDebugEnterStm(&__stmt_14);
	((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_it))->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_current =bbt__icon;
	struct BBDebugStm __stmt_15 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 147, 0};
	bbOnDebugEnterStm(&__stmt_15);
	struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* bbt_3;
	(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest((bbt_3 = ((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_it))->_maxgui_proxygadgets_toolbarextra_ttoolitem_toolbar ))))->clas)->m_ReshapeAll((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbt_3);
	struct BBDebugStm __stmt_16 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 148, 0};
	bbOnDebugEnterStm(&__stmt_16);
	bbOnDebugLeaveScope();
	return (struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbt_it;
}
struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* maxgui_proxygadgets_toolbarextra_tToolItem_CreateSeparator_TtToolItem(){
	struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* bbt_it=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)&bbNullObject;
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"CreateSeparator",
		{
			{
				BBDEBUGDECL_LOCAL,
				"it",
				":tToolItem",
				.var_address=&bbt_it
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 153, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_it=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbObjectNew((BBClass *)&maxgui_proxygadgets_toolbarextra_tToolItem);
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 154, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_it))->_maxgui_proxygadgets_toolbarextra_ttoolitem_item_type =99;
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 155, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbOnDebugLeaveScope();
	return (struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbt_it;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolItem_AddSubItem_SiiSTObject(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* o,BBSTRING bbt__title,BBINT bbt__FLAGS,BBINT bbt__icon,BBSTRING bbt__tip,BBOBJECT bbt__EXTRA){
	((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o));
	struct BBDebugScope_6 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"AddSubItem",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tToolItem",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"_title",
				"$",
				.var_address=&bbt__title
			},
			{
				BBDEBUGDECL_LOCAL,
				"_FLAGS",
				"i",
				.var_address=&bbt__FLAGS
			},
			{
				BBDEBUGDECL_LOCAL,
				"_icon",
				"i",
				.var_address=&bbt__icon
			},
			{
				BBDEBUGDECL_LOCAL,
				"_tip",
				"$",
				.var_address=&bbt__tip
			},
			{
				BBDEBUGDECL_LOCAL,
				"_EXTRA",
				":Object",
				.var_address=&bbt__EXTRA
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 159, 0};
	bbOnDebugEnterStm(&__stmt_0);
	maxgui_maxgui_AddGadgetItem((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,bbt__title,bbt__FLAGS,bbt__icon,bbt__tip,(BBOBJECT)bbt__EXTRA);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolItem_SelectSubItem_i(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* o,BBINT bbt_id){
	((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SelectSubItem",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tToolItem",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"id",
				"i",
				.var_address=&bbt_id
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 166, 0};
	bbOnDebugEnterStm(&__stmt_0);
	maxgui_maxgui_SelectGadgetItem((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,bbt_id);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolItem_SetSwitchIcon_ii(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* o,BBINT bbt__normal,BBINT bbt__select){
	((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o));
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetSwitchIcon",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tToolItem",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"_normal",
				"i",
				.var_address=&bbt__normal
			},
			{
				BBDEBUGDECL_LOCAL,
				"_select",
				"i",
				.var_address=&bbt__select
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 170, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_normal =bbt__normal;
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 171, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_select =bbt__select;
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 172, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o));
	((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)o)->clas->m_SwapIcon((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)o);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolItem_SetState_i(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* o,BBINT bbt__STATE){
	((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o));
	BBINT bbt__icon=0;
	struct brl_pixmap_TPixmap_obj* bbt_pix=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetState",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tToolItem",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"_STATE",
				"i",
				.var_address=&bbt__STATE
			},
			{
				BBDEBUGDECL_LOCAL,
				"_icon",
				"i",
				.var_address=&bbt__icon
			},
			{
				BBDEBUGDECL_LOCAL,
				"pix",
				":TPixmap",
				.var_address=&bbt_pix
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 176, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt__icon=0;
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 177, 0};
	bbOnDebugEnterStm(&__stmt_1);
	BBINT bbt_=bbt__STATE;
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 178, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(bbt_==0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 178, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt__icon=((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_normal ;
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 179, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(bbt_==1){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 179, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt__icon=((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_select ;
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 181, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_current =bbt__icon;
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 182, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbt_pix=(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_toolbar ))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_iconstrip ,bbt__icon);
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 183, 0};
	bbOnDebugEnterStm(&__stmt_5);
	maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,(struct brl_pixmap_TPixmap_obj*)bbt_pix,1);
	struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 185, 0};
	bbOnDebugEnterStm(&__stmt_6);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolItem_SwapIcon(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* o){
	((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o));
	BBINT bbt__icon=0;
	struct brl_pixmap_TPixmap_obj* bbt_pix=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SwapIcon",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tToolItem",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"_icon",
				"i",
				.var_address=&bbt__icon
			},
			{
				BBDEBUGDECL_LOCAL,
				"pix",
				":TPixmap",
				.var_address=&bbt_pix
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 191, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt__icon=((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_normal ;
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 192, 0};
	bbOnDebugEnterStm(&__stmt_1);
	BBINT bbt_=((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_status ;
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 193, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(bbt_==0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 194, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt__icon=((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_normal ;
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 195, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(bbt_==1){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 196, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt__icon=((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_select ;
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 198, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_status =(1-((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_status );
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 199, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_current =bbt__icon;
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 200, 0};
	bbOnDebugEnterStm(&__stmt_5);
	bbt_pix=(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_toolbar ))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_iconstrip ,bbt__icon);
	struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 201, 0};
	bbOnDebugEnterStm(&__stmt_6);
	maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,(struct brl_pixmap_TPixmap_obj*)bbt_pix,1);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolItem_SetOver(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* o){
	((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o));
	struct brl_pixmap_TPixmap_obj* bbt_pix=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetOver",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tToolItem",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"pix",
				":TPixmap",
				.var_address=&bbt_pix
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 206, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_pix=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 207, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_enabled ==-5){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 208, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if((((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_item_type ==1) || (((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_item_type ==4)){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 209, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_pix=(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_toolbar ))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_light_iconstrip ,((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_current );
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 210, 0};
			bbOnDebugEnterStm(&__stmt_1);
			maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,(struct brl_pixmap_TPixmap_obj*)bbt_pix,1);
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolItem_SetNormal(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* o){
	((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o));
	struct brl_pixmap_TPixmap_obj* bbt_pix=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetNormal",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tToolItem",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"pix",
				":TPixmap",
				.var_address=&bbt_pix
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 216, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_pix=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 217, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if((((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_item_type ==1) || (((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_item_type ==4)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 218, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_pix=(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_toolbar ))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_iconstrip ,((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_current );
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 219, 0};
		bbOnDebugEnterStm(&__stmt_1);
		maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,(struct brl_pixmap_TPixmap_obj*)bbt_pix,1);
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 220, 0};
		bbOnDebugEnterStm(&__stmt_2);
		if(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_enabled ==4){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 221, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_pix=(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_toolbar ))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_grey_iconstrip ,((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_current );
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 222, 0};
			bbOnDebugEnterStm(&__stmt_1);
			maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,(struct brl_pixmap_TPixmap_obj*)bbt_pix,1);
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolItem_SetProp_SS(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* o,BBSTRING bbt_key,BBSTRING bbt_value){
	((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o));
	BBARRAY volatile bbt_vs=&bbEmptyArray;
	BBARRAY volatile bbt_vi=&bbEmptyArray;
	BBARRAY volatile bbt_vf=&bbEmptyArray;
	struct BBDebugScope_6 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetProp",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tToolItem",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"key",
				"$",
				.var_address=&bbt_key
			},
			{
				BBDEBUGDECL_LOCAL,
				"value",
				"$",
				.var_address=&bbt_value
			},
			{
				BBDEBUGDECL_LOCAL,
				"vs",
				"[]$",
				.var_address=&bbt_vs
			},
			{
				BBDEBUGDECL_LOCAL,
				"vi",
				"[]i",
				.var_address=&bbt_vi
			},
			{
				BBDEBUGDECL_LOCAL,
				"vf",
				"[]i",
				.var_address=&bbt_vf
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 231, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_vs=&bbEmptyArray;
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 231, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_vi=&bbEmptyArray;
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 231, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_vf=&bbEmptyArray;
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 232, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_vs=bbStringSplit((BBSTRING)bbt_value,&_s1);
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 234, 0};
	bbOnDebugEnterStm(&__stmt_4);
	BBSTRING bbt_=bbStringToUpper((BBSTRING)bbt_key);
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 236, 0};
	bbOnDebugEnterStm(&__stmt_5);
	if(bbStringCompare(bbt_, &_s2)==0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 237, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o));
		((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)o)->clas->m_SwapIcon((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)o);
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 239, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(bbStringCompare(bbt_, &_s3)==0){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 240, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_vs=bbArraySlice("$",bbt_vs,0,2);
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 241, 0};
			bbOnDebugEnterStm(&__stmt_1);
			bbt_vi=bbArraySlice("i",bbt_vi,0,(bbt_vs)->scales[0]);
			struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 242, 0};
			bbOnDebugEnterStm(&__stmt_2);
			{
				BBINT bbt_i=0;
				BBINT bbt_2=(bbt_vs)->scales[0];
				for(;(bbt_i<bbt_2);bbt_i=(bbt_i+1)){
					struct BBDebugScope_1 __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							{
								BBDEBUGDECL_LOCAL,
								"i",
								"i",
								.var_address=&bbt_i
							},
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 243, 0};
					bbOnDebugEnterStm(&__stmt_0);
					((BBINT*)BBARRAYDATAINDEX((bbt_vi),(bbt_vi)->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]=bbStringToInt(((BBSTRING*)BBARRAYDATAINDEX((bbt_vs),(bbt_vs)->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]);
					bbOnDebugLeaveScope();
				}
			}
			struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 246, 0};
			bbOnDebugEnterStm(&__stmt_3);
			if(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_item_type ==8){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 247, 0};
				bbOnDebugEnterStm(&__stmt_0);
				maxgui_maxgui_SetSliderRange((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,((BBINT*)BBARRAYDATAINDEX((bbt_vi),(bbt_vi)->dims,0U))[0U],((BBINT*)BBARRAYDATAINDEX((bbt_vi),(bbt_vi)->dims,1U))[1U]);
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
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 249, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if(bbStringCompare(bbt_, &_s4)==0){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 250, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbt_vs=bbArraySlice("$",bbt_vs,0,1);
				struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 251, 0};
				bbOnDebugEnterStm(&__stmt_1);
				if(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_item_type ==8){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 252, 0};
					bbOnDebugEnterStm(&__stmt_0);
					maxgui_maxgui_SetSliderValue((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,bbStringToInt(((BBSTRING*)BBARRAYDATAINDEX((bbt_vs),(bbt_vs)->dims,0U))[0U]));
					bbOnDebugLeaveScope();
				}
				bbOnDebugLeaveScope();
			}
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT maxgui_proxygadgets_toolbarextra_tToolItem_font_size;
struct BBDebugScope_25 maxgui_proxygadgets_toolbarextra_tToolItem_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"tToolItem",
	{
		{
			BBDEBUGDECL_FIELD,
			"gadget",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj,_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget)
		},
		{
			BBDEBUGDECL_FIELD,
			"return_id",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj,_maxgui_proxygadgets_toolbarextra_ttoolitem_return_id)
		},
		{
			BBDEBUGDECL_FIELD,
			"status",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj,_maxgui_proxygadgets_toolbarextra_ttoolitem_status)
		},
		{
			BBDEBUGDECL_FIELD,
			"WIDTH",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj,_maxgui_proxygadgets_toolbarextra_ttoolitem_width)
		},
		{
			BBDEBUGDECL_FIELD,
			"enabled",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj,_maxgui_proxygadgets_toolbarextra_ttoolitem_enabled)
		},
		{
			BBDEBUGDECL_FIELD,
			"old_enabled",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj,_maxgui_proxygadgets_toolbarextra_ttoolitem_old_enabled)
		},
		{
			BBDEBUGDECL_FIELD,
			"icon_normal",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj,_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_normal)
		},
		{
			BBDEBUGDECL_FIELD,
			"icon_select",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj,_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_select)
		},
		{
			BBDEBUGDECL_FIELD,
			"icon_current",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj,_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_current)
		},
		{
			BBDEBUGDECL_FIELD,
			"item_type",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj,_maxgui_proxygadgets_toolbarextra_ttoolitem_item_type)
		},
		{
			BBDEBUGDECL_FIELD,
			"toolbar",
			":tToolbarExtra",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj,_maxgui_proxygadgets_toolbarextra_ttoolitem_toolbar)
		},
		{
			BBDEBUGDECL_FIELD,
			"tip",
			"$",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj,_maxgui_proxygadgets_toolbarextra_ttoolitem_tip)
		},
		{
			BBDEBUGDECL_GLOBAL,
			"font_size",
			"i",
			.var_address=(void*)&maxgui_proxygadgets_toolbarextra_tToolItem_font_size
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolItem_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Clear",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolItem_Clear
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Create",
			"(i,:tToolbarExtra,i,i,$,i,i):tToolItem",
			.var_address=(void*)&maxgui_proxygadgets_toolbarextra_tToolItem_Create_TtToolItem_iTtToolbarExtraiiSii
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"CreateSeparator",
			"():tToolItem",
			.var_address=(void*)&maxgui_proxygadgets_toolbarextra_tToolItem_CreateSeparator_TtToolItem
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"AddSubItem",
			"($,i,i,$,:Object)i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolItem_AddSubItem_SiiSTObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SelectSubItem",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolItem_SelectSubItem_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetSwitchIcon",
			"(i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolItem_SetSwitchIcon_ii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetState",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolItem_SetState_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SwapIcon",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolItem_SwapIcon
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetOver",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolItem_SetOver
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetNormal",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolItem_SetNormal
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetProp",
			"($,$)i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolItem_SetProp_SS
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_maxgui_proxygadgets_toolbarextra_tToolItem maxgui_proxygadgets_toolbarextra_tToolItem={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&maxgui_proxygadgets_toolbarextra_tToolItem_scope,
	sizeof(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj),
	(void (*)(BBOBJECT))_maxgui_proxygadgets_toolbarextra_tToolItem_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj,_maxgui_proxygadgets_toolbarextra_ttoolitem_tip) - sizeof(void*) + sizeof(BBSTRING)
	,_maxgui_proxygadgets_toolbarextra_tToolItem_Clear
	,maxgui_proxygadgets_toolbarextra_tToolItem_Create_TtToolItem_iTtToolbarExtraiiSii
	,maxgui_proxygadgets_toolbarextra_tToolItem_CreateSeparator_TtToolItem
	,_maxgui_proxygadgets_toolbarextra_tToolItem_AddSubItem_SiiSTObject
	,_maxgui_proxygadgets_toolbarextra_tToolItem_SelectSubItem_i
	,_maxgui_proxygadgets_toolbarextra_tToolItem_SetSwitchIcon_ii
	,_maxgui_proxygadgets_toolbarextra_tToolItem_SetState_i
	,_maxgui_proxygadgets_toolbarextra_tToolItem_SwapIcon
	,_maxgui_proxygadgets_toolbarextra_tToolItem_SetOver
	,_maxgui_proxygadgets_toolbarextra_tToolItem_SetNormal
	,_maxgui_proxygadgets_toolbarextra_tToolItem_SetProp_SS
};

void _maxgui_proxygadgets_toolbarextra_tToolbarExtra_New(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o) {
	_maxgui_maxgui_gadget_TProxyGadget_New((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o);
	o->clas = &maxgui_proxygadgets_toolbarextra_tToolbarExtra;
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_line = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_line_up = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_parent = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tfont = (struct maxgui_maxgui_guifont_TGuiFont_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget = &bbEmptyArray;
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_colors = bbArrayNew1D("b", 3);
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_iconstrip = (struct maxgui_maxgui_iconstrip_TIconStrip_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_grey_iconstrip = (struct maxgui_maxgui_iconstrip_TIconStrip_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_light_iconstrip = (struct maxgui_maxgui_iconstrip_TIconStrip_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_x = 0;
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_name = &bbEmptyString;
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_left_button = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_right_button = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_start_from = 0;
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_last_from = 0;
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_txt_rgb = bbArrayNew1D("i", 3);
}
struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* maxgui_proxygadgets_toolbarextra_tToolbarExtra_Create_TtToolbarExtra_TTGadgetTTIconStripi(struct maxgui_maxgui_gadget_TGadget_obj* bbt_parent,struct maxgui_maxgui_iconstrip_TIconStrip_obj* bbt__iconstrip,BBINT bbt__style){
	struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* bbt_tb=(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)&bbNullObject;
	BBBYTE bbt_re=0;
	BBBYTE bbt_ge=0;
	BBBYTE bbt_be=0;
	struct BBDebugScope_7 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Create",
		{
			{
				BBDEBUGDECL_LOCAL,
				"parent",
				":TGadget",
				.var_address=&bbt_parent
			},
			{
				BBDEBUGDECL_LOCAL,
				"_iconstrip",
				":TIconStrip",
				.var_address=&bbt__iconstrip
			},
			{
				BBDEBUGDECL_LOCAL,
				"_style",
				"i",
				.var_address=&bbt__style
			},
			{
				BBDEBUGDECL_LOCAL,
				"tb",
				":tToolbarExtra",
				.var_address=&bbt_tb
			},
			{
				BBDEBUGDECL_LOCAL,
				"re",
				"b",
				.var_address=&bbt_re
			},
			{
				BBDEBUGDECL_LOCAL,
				"ge",
				"b",
				.var_address=&bbt_ge
			},
			{
				BBDEBUGDECL_LOCAL,
				"be",
				"b",
				.var_address=&bbt_be
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 320, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(bbt_parent==&bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 320, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return (struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)&bbNullObject;
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 322, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_tb=(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbObjectNew((BBClass *)&maxgui_proxygadgets_toolbarextra_tToolbarExtra);
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 324, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreatePanel(0,0,maxgui_maxgui_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_parent),32,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_parent,0,&bbEmptyString);
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 325, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_line =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateLabel(&bbEmptyString,0,30,maxgui_maxgui_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_parent),0,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel ,3);
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 326, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_line_up =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateLabel(&bbEmptyString,0,0,maxgui_maxgui_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_parent),0,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel ,3);
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 327, 0};
	bbOnDebugEnterStm(&__stmt_5);
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_iconstrip =(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbt__iconstrip;
	struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 328, 0};
	bbOnDebugEnterStm(&__stmt_6);
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_parent =(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_parent;
	struct BBDebugStm __stmt_7 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 329, 0};
	bbOnDebugEnterStm(&__stmt_7);
	brl_hook_AddHook(brl_event_EmitEventHook,maxgui_proxygadgets_toolbarextra_tToolbarExtra_eventHandler_TObject_iTObjectTObject,(BBOBJECT)bbt_tb,0);
	struct BBDebugStm __stmt_8 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 330, 0};
	bbOnDebugEnterStm(&__stmt_8);
	maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel ,1,1,1,0);
	struct BBDebugStm __stmt_9 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 332, 0};
	bbOnDebugEnterStm(&__stmt_9);
	if(maxgui_proxygadgets_toolbarextra_tToolbarExtra_list_tbextra==&bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 332, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_proxygadgets_toolbarextra_tToolbarExtra_list_tbextra=(struct brl_linkedlist_TList_obj*)(struct brl_linkedlist_TList_obj*)bbObjectNew((BBClass *)&brl_linkedlist_TList);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_10 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 333, 0};
	bbOnDebugEnterStm(&__stmt_10);
	((struct brl_linkedlist_TList_obj*)bbNullObjectTest(maxgui_proxygadgets_toolbarextra_tToolbarExtra_list_tbextra))->clas->m_AddLast_TObject((struct brl_linkedlist_TList_obj*)maxgui_proxygadgets_toolbarextra_tToolbarExtra_list_tbextra,(BBOBJECT)bbt_tb);
	struct BBDebugStm __stmt_11 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 334, 0};
	bbOnDebugEnterStm(&__stmt_11);
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb))->clas->m_SetProxy_TTGadget((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbt_tb,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_tb,(BBClass*)&maxgui_maxgui_gadget_TGadget)));
	struct BBDebugStm __stmt_12 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 335, 0};
	bbOnDebugEnterStm(&__stmt_12);
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_left_button =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateButton(&_s5,0,2,10,28,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel ,8);
	struct BBDebugStm __stmt_13 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 336, 0};
	bbOnDebugEnterStm(&__stmt_13);
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_right_button =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateButton(&_s6,10,2,10,28,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel ,8);
	struct BBDebugStm __stmt_14 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 337, 0};
	bbOnDebugEnterStm(&__stmt_14);
	maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_left_button ,1,0,1,0);
	struct BBDebugStm __stmt_15 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 338, 0};
	bbOnDebugEnterStm(&__stmt_15);
	maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_right_button ,1,0,1,0);
	struct BBDebugStm __stmt_16 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 339, 0};
	bbOnDebugEnterStm(&__stmt_16);
	((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(bbt_tb))->_maxgui_maxgui_gadget_tgadget_visible =1;
	struct BBDebugStm __stmt_17 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 340, 0};
	bbOnDebugEnterStm(&__stmt_17);
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_grey_iconstrip =(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbObjectDowncast((BBOBJECT)maxgui_proxygadgets_common_MakeGrey((BBOBJECT)bbt__iconstrip),(BBClass*)&maxgui_maxgui_iconstrip_TIconStrip));
	struct BBDebugStm __stmt_18 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 341, 0};
	bbOnDebugEnterStm(&__stmt_18);
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_light_iconstrip =(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbObjectDowncast((BBOBJECT)maxgui_proxygadgets_common_MakeLight((BBOBJECT)bbt__iconstrip),(BBClass*)&maxgui_maxgui_iconstrip_TIconStrip));
	struct BBDebugStm __stmt_19 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 345, 0};
	bbOnDebugEnterStm(&__stmt_19);
	bbt_re=0;
	struct BBDebugStm __stmt_20 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 345, 0};
	bbOnDebugEnterStm(&__stmt_20);
	bbt_ge=0;
	struct BBDebugStm __stmt_21 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 345, 0};
	bbOnDebugEnterStm(&__stmt_21);
	bbt_be=0;
	struct BBDebugStm __stmt_22 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 347, 0};
	bbOnDebugEnterStm(&__stmt_22);
	maxgui_maxgui_LookupGuiColor(0,(&bbt_re),(&bbt_ge),(&bbt_be));
	struct BBDebugStm __stmt_23 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 348, 0};
	bbOnDebugEnterStm(&__stmt_23);
	maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel ,((BBINT)bbt_re),((BBINT)bbt_ge),((BBINT)bbt_be),1);
	struct BBDebugStm __stmt_24 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 349, 0};
	bbOnDebugEnterStm(&__stmt_24);
	BBBYTE bbt_[]={bbt_re,bbt_ge,bbt_be};
	BBARRAY bbt_2 = bbArrayFromData("b",3,bbt_);
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_colors =bbt_2;
	struct BBDebugStm __stmt_25 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 350, 0};
	bbOnDebugEnterStm(&__stmt_25);
	bbOnDebugLeaveScope();
	return (struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbt_tb;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetTextColor_iii(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o,BBINT bbt_r,BBINT bbt_g,BBINT bbt_b){
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o));
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetTextColor",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tToolbarExtra",
				.var_address=&o
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
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 354, 0};
	bbOnDebugEnterStm(&__stmt_0);
	BBINT bbt_[]={bbt_r,bbt_g,bbt_b};
	BBARRAY bbt_2 = bbArrayFromData("i",3,bbt_);
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_txt_rgb =bbt_2;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetColor_iii(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o,BBINT bbt_r,BBINT bbt_g,BBINT bbt_b){
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o));
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetColor",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tToolbarExtra",
				.var_address=&o
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
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 359, 0};
	bbOnDebugEnterStm(&__stmt_0);
	maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel ,bbt_r,bbt_g,bbt_b,1);
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 360, 0};
	bbOnDebugEnterStm(&__stmt_1);
	BBBYTE bbt_[]={((BBBYTE)bbt_r),((BBBYTE)bbt_g),((BBBYTE)bbt_b)};
	BBARRAY bbt_2 = bbArrayFromData("b",3,bbt_);
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_colors =bbt_2;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_Activate_i(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o,BBINT bbt_cmd){
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Activate",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tToolbarExtra",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"cmd",
				"i",
				.var_address=&bbt_cmd
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 364, 0};
	bbOnDebugEnterStm(&__stmt_0);
	BBARRAY bbt_=((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ;
	BBUINT bbt_2=0U;
	while(bbt_2<((BBUINT)(bbt_->scales[0]))){
		struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* bbt_t=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)&bbNullObject;
		struct BBDebugScope_1 __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_LOCAL,
					"t",
					":tToolItem",
					.var_address=&bbt_t
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 364, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_t=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATAINDEX((bbt_),(bbt_)->dims,bbt_2))[bbt_2];
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 364, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_2=(bbt_2+1U);
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 364, 0};
		bbOnDebugEnterStm(&__stmt_2);
		if(bbt_t==&bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 364, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			continue;
		}
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 365, 0};
		bbOnDebugEnterStm(&__stmt_3);
		if(((BBObject*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_t))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget )!= &bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 366, 0};
			bbOnDebugEnterStm(&__stmt_0);
			maxgui_maxgui_SetGadgetToolTip((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_t))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,maxgui_maxgui_gadget_TGadget_LocalizeString(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_t))->_maxgui_proxygadgets_toolbarextra_ttoolitem_tip ));
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_CleanUp(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o){
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"CleanUp",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tToolbarExtra",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 373, 0};
	bbOnDebugEnterStm(&__stmt_0);
	brl_hook_RemoveHook(brl_event_EmitEventHook,o->clas->f_eventHandler_TObject_iTObjectTObject,(BBOBJECT)o);
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 374, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget != &bbEmptyArray){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 375, 0};
		bbOnDebugEnterStm(&__stmt_0);
		{
			BBINT bbt_k=0;
			BBINT bbt_=(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->scales[0];
			for(;(bbt_k<bbt_);bbt_k=(bbt_k+1)){
				struct BBDebugScope_1 __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						{
							BBDEBUGDECL_LOCAL,
							"k",
							"i",
							.var_address=&bbt_k
						},
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 376, 0};
				bbOnDebugEnterStm(&__stmt_0);
				if(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ),(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->dims,((BBUINT)bbt_k)))[((BBUINT)bbt_k)]!=&bbNullObject){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 377, 0};
					bbOnDebugEnterStm(&__stmt_0);
					struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* bbt_2;
					(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest((bbt_2 = ((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ),(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->dims,((BBUINT)bbt_k)))[((BBUINT)bbt_k)])))->clas)->m_Clear((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbt_2);
					struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 378, 0};
					bbOnDebugEnterStm(&__stmt_1);
					((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ),(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->dims,((BBUINT)bbt_k)))[((BBUINT)bbt_k)]=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)&bbNullObject;
					bbOnDebugLeaveScope();
				}
				bbOnDebugLeaveScope();
			}
		}
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 381, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget =&bbEmptyArray;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 383, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_colors != &bbEmptyArray){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 383, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_colors =&bbEmptyArray;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 384, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if(((BBObject*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_iconstrip )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 384, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_iconstrip =(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)&bbNullObject;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 386, 0};
	bbOnDebugEnterStm(&__stmt_4);
	if(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_txt_rgb != &bbEmptyArray){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 386, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_txt_rgb =&bbEmptyArray;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 387, 0};
	bbOnDebugEnterStm(&__stmt_5);
	if(((BBObject*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_grey_iconstrip )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 387, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_grey_iconstrip =(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)&bbNullObject;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 388, 0};
	bbOnDebugEnterStm(&__stmt_6);
	if(((BBObject*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_light_iconstrip )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 388, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_light_iconstrip =(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)&bbNullObject;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_7 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 389, 0};
	bbOnDebugEnterStm(&__stmt_7);
	if(((BBObject*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tfont )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 389, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tfont =(struct maxgui_maxgui_guifont_TGuiFont_obj*)&bbNullObject;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_8 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 390, 0};
	bbOnDebugEnterStm(&__stmt_8);
	if(((BBObject*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_left_button )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 390, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_left_button );
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 390, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_left_button =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_9 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 391, 0};
	bbOnDebugEnterStm(&__stmt_9);
	if(((BBObject*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_right_button )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 391, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_right_button );
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 391, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_right_button =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_10 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 392, 0};
	bbOnDebugEnterStm(&__stmt_10);
	if(((BBObject*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_line )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 392, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_line );
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 392, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_line =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_11 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 393, 0};
	bbOnDebugEnterStm(&__stmt_11);
	if(((BBObject*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 393, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel );
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 393, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_12 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 394, 0};
	bbOnDebugEnterStm(&__stmt_12);
	if(((BBObject*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 394, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel );
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 394, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetShow_i(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o,BBINT bbt_truefalse){
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetShow",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tToolbarExtra",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"truefalse",
				"i",
				.var_address=&bbt_truefalse
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 400, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if((bbt_truefalse==1) && (((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(o))->_maxgui_maxgui_gadget_tgadget_visible ==0)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 401, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel ,0,0,((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel ))->_maxgui_maxgui_gadget_tgadget_width ,32);
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 402, 0};
		bbOnDebugEnterStm(&__stmt_1);
		struct brl_linkedlist_TList_obj* bbt_2;
		struct brl_linkedlist_TListEnum_obj* bbt_=(struct brl_linkedlist_TListEnum_obj*)(((struct brl_linkedlist_TList_obj*)((struct brl_linkedlist_TList_obj*)bbNullObjectTest((bbt_2 = ((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_parent ))->_maxgui_maxgui_gadget_tgadget_kids ))))->clas)->m_ObjectEnumerator((struct brl_linkedlist_TList_obj*)bbt_2);
		while(((struct brl_linkedlist_TListEnum_obj*)bbNullObjectTest(bbt_))->clas->m_HasNext((struct brl_linkedlist_TListEnum_obj*)bbt_)!=0){
			struct maxgui_maxgui_gadget_TGadget_obj* bbt_g=(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
			struct BBDebugScope_1 __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					{
						BBDEBUGDECL_LOCAL,
						"g",
						":TGadget",
						.var_address=&bbt_g
					},
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			bbt_g=(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)((struct brl_linkedlist_TListEnum_obj*)bbNullObjectTest(bbt_))->clas->m_NextObject((struct brl_linkedlist_TListEnum_obj*)bbt_),(BBClass*)&maxgui_maxgui_gadget_TGadget));
			if(bbt_g==&bbNullObject){
				bbOnDebugLeaveScope();
				continue;
			}
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 403, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if(bbt_g!=((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel ){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 404, 0};
				bbOnDebugEnterStm(&__stmt_0);
				maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_g,((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(bbt_g))->_maxgui_maxgui_gadget_tgadget_xpos ,(((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(bbt_g))->_maxgui_maxgui_gadget_tgadget_ypos +32),((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(bbt_g))->_maxgui_maxgui_gadget_tgadget_width ,((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(bbt_g))->_maxgui_maxgui_gadget_tgadget_height );
				bbOnDebugLeaveScope();
			}
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 407, 0};
		bbOnDebugEnterStm(&__stmt_2);
		((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(o))->_maxgui_maxgui_gadget_tgadget_visible =1;
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 408, 0};
		bbOnDebugEnterStm(&__stmt_3);
		((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o));
		((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)o)->clas->m_ReshapeAll((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)o);
		struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 409, 0};
		bbOnDebugEnterStm(&__stmt_4);
		((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o));
		((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)o)->clas->m_EnableAll((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)o);
		struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 410, 0};
		bbOnDebugEnterStm(&__stmt_5);
		maxgui_maxgui_RedrawGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel );
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 412, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if((bbt_truefalse==0) && (((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(o))->_maxgui_maxgui_gadget_tgadget_visible ==1)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 413, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel ,0,0,((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel ))->_maxgui_maxgui_gadget_tgadget_width ,0);
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 414, 0};
		bbOnDebugEnterStm(&__stmt_1);
		maxgui_maxgui_RedrawGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel );
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 415, 0};
		bbOnDebugEnterStm(&__stmt_2);
		struct brl_linkedlist_TList_obj* bbt_4;
		struct brl_linkedlist_TListEnum_obj* bbt_3=(struct brl_linkedlist_TListEnum_obj*)(((struct brl_linkedlist_TList_obj*)((struct brl_linkedlist_TList_obj*)bbNullObjectTest((bbt_4 = ((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_parent ))->_maxgui_maxgui_gadget_tgadget_kids ))))->clas)->m_ObjectEnumerator((struct brl_linkedlist_TList_obj*)bbt_4);
		while(((struct brl_linkedlist_TListEnum_obj*)bbNullObjectTest(bbt_3))->clas->m_HasNext((struct brl_linkedlist_TListEnum_obj*)bbt_3)!=0){
			struct maxgui_maxgui_gadget_TGadget_obj* bbt_g2=(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
			struct BBDebugScope_1 __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					{
						BBDEBUGDECL_LOCAL,
						"g",
						":TGadget",
						.var_address=&bbt_g2
					},
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			bbt_g2=(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)((struct brl_linkedlist_TListEnum_obj*)bbNullObjectTest(bbt_3))->clas->m_NextObject((struct brl_linkedlist_TListEnum_obj*)bbt_3),(BBClass*)&maxgui_maxgui_gadget_TGadget));
			if(bbt_g2==&bbNullObject){
				bbOnDebugLeaveScope();
				continue;
			}
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 416, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if(bbt_g2!=((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel ){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 417, 0};
				bbOnDebugEnterStm(&__stmt_0);
				maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_g2,((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(bbt_g2))->_maxgui_maxgui_gadget_tgadget_xpos ,(((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(bbt_g2))->_maxgui_maxgui_gadget_tgadget_ypos -32),((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(bbt_g2))->_maxgui_maxgui_gadget_tgadget_width ,((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(bbt_g2))->_maxgui_maxgui_gadget_tgadget_height );
				bbOnDebugLeaveScope();
			}
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 420, 0};
		bbOnDebugEnterStm(&__stmt_3);
		((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(o))->_maxgui_maxgui_gadget_tgadget_visible =0;
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_ReshapeAll(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o){
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o));
	BBINT bbt__x=0;
	BBINT bbt__y=0;
	BBINT bbt__h=0;
	BBINT bbt__w=0;
	BBINT bbt_tow=0;
	struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* bbt_g=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)&bbNullObject;
	struct BBDebugScope_7 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"ReshapeAll",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tToolbarExtra",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"_x",
				"i",
				.var_address=&bbt__x
			},
			{
				BBDEBUGDECL_LOCAL,
				"_y",
				"i",
				.var_address=&bbt__y
			},
			{
				BBDEBUGDECL_LOCAL,
				"_h",
				"i",
				.var_address=&bbt__h
			},
			{
				BBDEBUGDECL_LOCAL,
				"_w",
				"i",
				.var_address=&bbt__w
			},
			{
				BBDEBUGDECL_LOCAL,
				"tow",
				"i",
				.var_address=&bbt_tow
			},
			{
				BBDEBUGDECL_LOCAL,
				"g",
				":tToolItem",
				.var_address=&bbt_g
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 426, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt__x=0;
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 426, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt__y=0;
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 426, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt__h=0;
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 426, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt__w=0;
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 427, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbt_tow=0;
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 428, 0};
	bbOnDebugEnterStm(&__stmt_5);
	if(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ==&bbEmptyArray){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 428, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return 0;
	}
	struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 429, 0};
	bbOnDebugEnterStm(&__stmt_6);
	BBARRAY bbt_=((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ;
	BBUINT bbt_2=0U;
	while(bbt_2<((BBUINT)(bbt_->scales[0]))){
		struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* bbt_g2=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)&bbNullObject;
		struct BBDebugScope_1 __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_LOCAL,
					"g",
					":tToolItem",
					.var_address=&bbt_g2
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 429, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_g2=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATAINDEX((bbt_),(bbt_)->dims,bbt_2))[bbt_2];
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 429, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_2=(bbt_2+1U);
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 429, 0};
		bbOnDebugEnterStm(&__stmt_2);
		if(bbt_g2==&bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 429, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			continue;
		}
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 430, 0};
		bbOnDebugEnterStm(&__stmt_3);
		if(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_g2))->_maxgui_proxygadgets_toolbarextra_ttoolitem_item_type !=99){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 431, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_tow+=(maxgui_maxgui_GadgetWidth((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_g2))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget )+1);
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 432, 0};
			bbOnDebugEnterStm(&__stmt_1);
			maxgui_maxgui_HideGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_g2))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget );
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
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 434, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_tow+=16;
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_7 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 438, 0};
	bbOnDebugEnterStm(&__stmt_7);
	if(bbt_tow>((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel ))->_maxgui_maxgui_gadget_tgadget_width ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 438, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt__x=20;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_8 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 440, 0};
	bbOnDebugEnterStm(&__stmt_8);
	bbt_tow=0;
	struct BBDebugStm __stmt_9 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 442, 0};
	bbOnDebugEnterStm(&__stmt_9);
	bbt_g=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)&bbNullObject;
	struct BBDebugStm __stmt_10 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 443, 0};
	bbOnDebugEnterStm(&__stmt_10);
	if(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_start_from >((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->scales[0]-1)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 443, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_start_from =((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->scales[0]-1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_11 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 444, 0};
	bbOnDebugEnterStm(&__stmt_11);
	if(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_start_from <0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 444, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_start_from =0;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_12 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 446, 0};
	bbOnDebugEnterStm(&__stmt_12);
	{
		BBINT bbt_index=((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_start_from ;
		BBINT bbt_3=(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->scales[0];
		for(;(bbt_index<bbt_3);bbt_index=(bbt_index+1)){
			struct BBDebugScope_1 __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					{
						BBDEBUGDECL_LOCAL,
						"index",
						"i",
						.var_address=&bbt_index
					},
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 447, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_g=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ),(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)];
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 448, 0};
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
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 449, 0};
				bbOnDebugEnterStm(&__stmt_0);
				if(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_g))->_maxgui_proxygadgets_toolbarextra_ttoolitem_item_type !=99){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 450, 0};
					bbOnDebugEnterStm(&__stmt_0);
					maxgui_maxgui_ShowGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_g))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget );
					struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 451, 0};
					bbOnDebugEnterStm(&__stmt_1);
					bbt__y=maxgui_maxgui_GadgetY((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_g))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget );
					struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 452, 0};
					bbOnDebugEnterStm(&__stmt_2);
					bbt__w=maxgui_maxgui_GadgetWidth((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_g))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget );
					struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 453, 0};
					bbOnDebugEnterStm(&__stmt_3);
					bbt__h=maxgui_maxgui_GadgetHeight((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_g))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget );
					struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 454, 0};
					bbOnDebugEnterStm(&__stmt_4);
					maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_g))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,bbt__x,bbt__y,bbt__w,bbt__h);
					struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 455, 0};
					bbOnDebugEnterStm(&__stmt_5);
					bbt__x+=(bbt__w+1);
					struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 456, 0};
					bbOnDebugEnterStm(&__stmt_6);
					bbt_tow+=(bbt__w+1);
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
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 458, 0};
					bbOnDebugEnterStm(&__stmt_0);
					bbt__x+=16;
					struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 459, 0};
					bbOnDebugEnterStm(&__stmt_1);
					bbt_tow+=16;
					bbOnDebugLeaveScope();
				}
				bbOnDebugLeaveScope();
			}
			bbOnDebugLeaveScope();
		}
	}
	struct BBDebugStm __stmt_13 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 471, 0};
	bbOnDebugEnterStm(&__stmt_13);
	if(bbt_tow>(((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel ))->_maxgui_maxgui_gadget_tgadget_width -32)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 473, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_ShowGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_left_button );
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 474, 0};
		bbOnDebugEnterStm(&__stmt_1);
		maxgui_maxgui_ShowGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_right_button );
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 476, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_HideGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_left_button );
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 479, 0};
		bbOnDebugEnterStm(&__stmt_1);
		maxgui_maxgui_HideGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_right_button );
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_14 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 485, 0};
	bbOnDebugEnterStm(&__stmt_14);
	if(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_last_from >0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 485, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_ShowGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_right_button );
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 485, 0};
		bbOnDebugEnterStm(&__stmt_1);
		maxgui_maxgui_ShowGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_left_button );
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_15 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 486, 0};
	bbOnDebugEnterStm(&__stmt_15);
	maxgui_maxgui_RedrawGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel );
	bbOnDebugLeaveScope();
	return 0;
}
BBOBJECT maxgui_proxygadgets_toolbarextra_tToolbarExtra_eventHandler_TObject_iTObjectTObject(BBINT bbt_pID,BBOBJECT bbt_pData,BBOBJECT bbt_pContext){
	struct brl_event_TEvent_obj* bbt_pEvent=(struct brl_event_TEvent_obj*)&bbNullObject;
	struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* bbt_obj=(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)&bbNullObject;
	struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* bbt_item=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)&bbNullObject;
	BBSTRING bbt_extra=&bbEmptyString;
	struct BBDebugScope_7 __scope = {
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
				"obj",
				":tToolbarExtra",
				.var_address=&bbt_obj
			},
			{
				BBDEBUGDECL_LOCAL,
				"item",
				":tToolItem",
				.var_address=&bbt_item
			},
			{
				BBDEBUGDECL_LOCAL,
				"extra",
				"$",
				.var_address=&bbt_extra
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 491, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_pEvent=(struct brl_event_TEvent_obj*)((struct brl_event_TEvent_obj*)bbObjectDowncast((BBOBJECT)bbt_pData,(BBClass*)&brl_event_TEvent));
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 492, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_obj=(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbObjectDowncast((BBOBJECT)bbt_pContext,(BBClass*)&maxgui_proxygadgets_toolbarextra_tToolbarExtra));
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 493, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_item=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)&bbNullObject;
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 494, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_extra=&bbEmptyString;
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 496, 0};
	bbOnDebugEnterStm(&__stmt_4);
	if(((BBObject*)bbt_pEvent)!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 498, 0};
		bbOnDebugEnterStm(&__stmt_0);
		BBINT bbt_=((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_pEvent))->_brl_event_tevent_id ;
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 500, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(bbt_==1030){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 501, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if(((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_pEvent))->_brl_event_tevent_source !=&bbNullObject){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 502, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbt_item=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbObjectDowncast((BBOBJECT)maxgui_maxgui_GadgetExtra((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_pEvent))->_brl_event_tevent_source ,(BBClass*)&maxgui_maxgui_gadget_TGadget))),(BBClass*)&maxgui_proxygadgets_toolbarextra_tToolItem));
				struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 503, 0};
				bbOnDebugEnterStm(&__stmt_1);
				if(((BBObject*)bbt_item)!= &bbNullObject){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 504, 0};
					bbOnDebugEnterStm(&__stmt_0);
					((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_item))->clas->m_SetNormal((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbt_item);
					bbOnDebugLeaveScope();
				}
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
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 507, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if(bbt_==1029){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 508, 0};
				bbOnDebugEnterStm(&__stmt_0);
				if(((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_pEvent))->_brl_event_tevent_source !=&bbNullObject){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 509, 0};
					bbOnDebugEnterStm(&__stmt_0);
					bbt_item=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbObjectDowncast((BBOBJECT)maxgui_maxgui_GadgetExtra((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_pEvent))->_brl_event_tevent_source ,(BBClass*)&maxgui_maxgui_gadget_TGadget))),(BBClass*)&maxgui_proxygadgets_toolbarextra_tToolItem));
					struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 510, 0};
					bbOnDebugEnterStm(&__stmt_1);
					if(((BBObject*)bbt_item)!= &bbNullObject){
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 511, 0};
						bbOnDebugEnterStm(&__stmt_0);
						((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_item))->clas->m_SetOver((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbt_item);
						bbOnDebugLeaveScope();
					}
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
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 514, 0};
				bbOnDebugEnterStm(&__stmt_0);
				if((((bbt_==16385) || (bbt_==16387)) || (bbt_==16388)) || (bbt_==128)){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 515, 0};
					bbOnDebugEnterStm(&__stmt_0);
					((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_obj))->clas->m_ReshapeAll((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbt_obj);
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
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 517, 0};
					bbOnDebugEnterStm(&__stmt_0);
					if(bbt_==16386){
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 518, 0};
						bbOnDebugEnterStm(&__stmt_0);
						if(((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(bbt_obj))->_maxgui_maxgui_gadget_tgadget_visible ==1){
							BBINT bbt_w=0;
							struct BBDebugScope_1 __scope = {
								BBDEBUGSCOPE_LOCALBLOCK,
								0,
								{
									{
										BBDEBUGDECL_LOCAL,
										"w",
										"i",
										.var_address=&bbt_w
									},
									BBDEBUGDECL_END 
								}
							};
							bbOnDebugEnterScope(&__scope);
							struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 519, 0};
							bbOnDebugEnterStm(&__stmt_0);
							bbt_w=maxgui_maxgui_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_pEvent))->_brl_event_tevent_source ,(BBClass*)&maxgui_maxgui_gadget_TGadget)));
							struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 520, 0};
							bbOnDebugEnterStm(&__stmt_1);
							maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel ,0,0,bbt_w,32);
							struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 521, 0};
							bbOnDebugEnterStm(&__stmt_2);
							maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_line ,0,30,bbt_w,0);
							struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 522, 0};
							bbOnDebugEnterStm(&__stmt_3);
							maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_line_up ,0,0,bbt_w,0);
							struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 523, 0};
							bbOnDebugEnterStm(&__stmt_4);
							((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_last_from =0;
							struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 524, 0};
							bbOnDebugEnterStm(&__stmt_5);
							((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_start_from =0;
							struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 526, 0};
							bbOnDebugEnterStm(&__stmt_6);
							((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_obj))->clas->m_ReshapeAll((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbt_obj);
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
						struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 528, 0};
						bbOnDebugEnterStm(&__stmt_0);
						if(bbt_==514){
							struct BBDebugScope __scope = {
								BBDEBUGSCOPE_LOCALBLOCK,
								0,
								{
									BBDEBUGDECL_END 
								}
							};
							bbOnDebugEnterScope(&__scope);
							struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 530, 0};
							bbOnDebugEnterStm(&__stmt_0);
							if(((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_pEvent))->_brl_event_tevent_data ==13){
								struct BBDebugScope __scope = {
									BBDEBUGSCOPE_LOCALBLOCK,
									0,
									{
										BBDEBUGDECL_END 
									}
								};
								bbOnDebugEnterScope(&__scope);
								struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 531, 0};
								bbOnDebugEnterStm(&__stmt_0);
								struct brl_linkedlist_TListEnum_obj* bbt_2=(struct brl_linkedlist_TListEnum_obj*)((struct brl_linkedlist_TList_obj*)bbNullObjectTest(maxgui_proxygadgets_toolbarextra_tToolbarExtra_list_tbextra))->clas->m_ObjectEnumerator((struct brl_linkedlist_TList_obj*)maxgui_proxygadgets_toolbarextra_tToolbarExtra_list_tbextra);
								while(((struct brl_linkedlist_TListEnum_obj*)bbNullObjectTest(bbt_2))->clas->m_HasNext((struct brl_linkedlist_TListEnum_obj*)bbt_2)!=0){
									struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* bbt_tb=(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)&bbNullObject;
									struct BBDebugScope_1 __scope = {
										BBDEBUGSCOPE_LOCALBLOCK,
										0,
										{
											{
												BBDEBUGDECL_LOCAL,
												"tb",
												":tToolbarExtra",
												.var_address=&bbt_tb
											},
											BBDEBUGDECL_END 
										}
									};
									bbOnDebugEnterScope(&__scope);
									bbt_tb=(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbObjectDowncast((BBOBJECT)((struct brl_linkedlist_TListEnum_obj*)bbNullObjectTest(bbt_2))->clas->m_NextObject((struct brl_linkedlist_TListEnum_obj*)bbt_2),(BBClass*)&maxgui_proxygadgets_toolbarextra_tToolbarExtra));
									if(bbt_tb==&bbNullObject){
										bbOnDebugLeaveScope();
										continue;
									}
									struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 532, 0};
									bbOnDebugEnterStm(&__stmt_0);
									if(bbt_tb!=&bbNullObject){
										struct BBDebugScope __scope = {
											BBDEBUGSCOPE_LOCALBLOCK,
											0,
											{
												BBDEBUGDECL_END 
											}
										};
										bbOnDebugEnterScope(&__scope);
										struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 533, 0};
										bbOnDebugEnterStm(&__stmt_0);
										BBARRAY bbt_3=((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ;
										BBUINT bbt_4=0U;
										while(bbt_4<((BBUINT)(bbt_3->scales[0]))){
											struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* bbt_item2=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)&bbNullObject;
											struct BBDebugScope_1 __scope = {
												BBDEBUGSCOPE_LOCALBLOCK,
												0,
												{
													{
														BBDEBUGDECL_LOCAL,
														"item",
														":tToolItem",
														.var_address=&bbt_item2
													},
													BBDEBUGDECL_END 
												}
											};
											bbOnDebugEnterScope(&__scope);
											struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 533, 0};
											bbOnDebugEnterStm(&__stmt_0);
											bbt_item2=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATAINDEX((bbt_3),(bbt_3)->dims,bbt_4))[bbt_4];
											struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 533, 0};
											bbOnDebugEnterStm(&__stmt_1);
											bbt_4=(bbt_4+1U);
											struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 533, 0};
											bbOnDebugEnterStm(&__stmt_2);
											if(bbt_item2==&bbNullObject){
												struct BBDebugScope __scope = {
													BBDEBUGSCOPE_LOCALBLOCK,
													0,
													{
														BBDEBUGDECL_END 
													}
												};
												bbOnDebugEnterScope(&__scope);
												struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 533, 0};
												bbOnDebugEnterStm(&__stmt_0);
												bbOnDebugLeaveScope();
												bbOnDebugLeaveScope();
												continue;
											}
											struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 534, 0};
											bbOnDebugEnterStm(&__stmt_3);
											if(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_item2))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ==((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_pEvent))->_brl_event_tevent_source ){
												struct BBDebugScope __scope = {
													BBDEBUGSCOPE_LOCALBLOCK,
													0,
													{
														BBDEBUGDECL_END 
													}
												};
												bbOnDebugEnterScope(&__scope);
												struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 535, 0};
												bbOnDebugEnterStm(&__stmt_0);
												bbOnDebugLeaveScope();
												bbOnDebugLeaveScope();
												bbOnDebugLeaveScope();
												bbOnDebugLeaveScope();
												bbOnDebugLeaveScope();
												bbOnDebugLeaveScope();
												bbOnDebugLeaveScope();
												bbOnDebugLeaveScope();
												bbOnDebugLeaveScope();
												bbOnDebugLeaveScope();
												bbOnDebugLeaveScope();
												bbOnDebugLeaveScope();
												return (BBOBJECT)brl_event_CreateEvent(8193,(BBOBJECT)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_item2))->_maxgui_proxygadgets_toolbarextra_ttoolitem_toolbar ,((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_item2))->_maxgui_proxygadgets_toolbarextra_ttoolitem_return_id ,0,0,0,(BBOBJECT)maxgui_maxgui_GadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_item2))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ));
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
						}else{
							struct BBDebugScope __scope = {
								BBDEBUGSCOPE_LOCALBLOCK,
								0,
								{
									BBDEBUGDECL_END 
								}
							};
							bbOnDebugEnterScope(&__scope);
							struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 544, 0};
							bbOnDebugEnterStm(&__stmt_0);
							if(bbt_==8193){
								struct BBDebugScope __scope = {
									BBDEBUGSCOPE_LOCALBLOCK,
									0,
									{
										BBDEBUGDECL_END 
									}
								};
								bbOnDebugEnterScope(&__scope);
								struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 546, 0};
								bbOnDebugEnterStm(&__stmt_0);
								struct brl_linkedlist_TListEnum_obj* bbt_5=(struct brl_linkedlist_TListEnum_obj*)((struct brl_linkedlist_TList_obj*)bbNullObjectTest(maxgui_proxygadgets_toolbarextra_tToolbarExtra_list_tbextra))->clas->m_ObjectEnumerator((struct brl_linkedlist_TList_obj*)maxgui_proxygadgets_toolbarextra_tToolbarExtra_list_tbextra);
								while(((struct brl_linkedlist_TListEnum_obj*)bbNullObjectTest(bbt_5))->clas->m_HasNext((struct brl_linkedlist_TListEnum_obj*)bbt_5)!=0){
									struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* bbt_tb2=(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)&bbNullObject;
									struct BBDebugScope_1 __scope = {
										BBDEBUGSCOPE_LOCALBLOCK,
										0,
										{
											{
												BBDEBUGDECL_LOCAL,
												"tb",
												":tToolbarExtra",
												.var_address=&bbt_tb2
											},
											BBDEBUGDECL_END 
										}
									};
									bbOnDebugEnterScope(&__scope);
									bbt_tb2=(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbObjectDowncast((BBOBJECT)((struct brl_linkedlist_TListEnum_obj*)bbNullObjectTest(bbt_5))->clas->m_NextObject((struct brl_linkedlist_TListEnum_obj*)bbt_5),(BBClass*)&maxgui_proxygadgets_toolbarextra_tToolbarExtra));
									if(bbt_tb2==&bbNullObject){
										bbOnDebugLeaveScope();
										continue;
									}
									struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 547, 0};
									bbOnDebugEnterStm(&__stmt_0);
									if(bbt_tb2!=&bbNullObject){
										BBINT bbt_mods=0;
										BBINT bbt_x=0;
										BBINT bbt_y=0;
										BBSTRING bbt_ti=&bbEmptyString;
										struct BBDebugScope_4 __scope = {
											BBDEBUGSCOPE_LOCALBLOCK,
											0,
											{
												{
													BBDEBUGDECL_LOCAL,
													"mods",
													"i",
													.var_address=&bbt_mods
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
													"ti",
													"$",
													.var_address=&bbt_ti
												},
												BBDEBUGDECL_END 
											}
										};
										bbOnDebugEnterScope(&__scope);
										struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 548, 0};
										bbOnDebugEnterStm(&__stmt_0);
										if(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb2))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_left_button ==((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_pEvent))->_brl_event_tevent_source ,(BBClass*)&maxgui_maxgui_gadget_TGadget))){
											struct BBDebugScope __scope = {
												BBDEBUGSCOPE_LOCALBLOCK,
												0,
												{
													BBDEBUGDECL_END 
												}
											};
											bbOnDebugEnterScope(&__scope);
											struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 549, 0};
											bbOnDebugEnterStm(&__stmt_0);
											((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb2))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_start_from +=1;
											struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 550, 0};
											bbOnDebugEnterStm(&__stmt_1);
											((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb2))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_last_from =((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb2))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_start_from ;
											struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 551, 0};
											bbOnDebugEnterStm(&__stmt_2);
											((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb2))->clas->m_ReshapeAll((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbt_tb2);
											struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 552, 0};
											bbOnDebugEnterStm(&__stmt_3);
											bbt_pEvent=(struct brl_event_TEvent_obj*)&bbNullObject;
											struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 553, 0};
											bbOnDebugEnterStm(&__stmt_4);
											bbOnDebugLeaveScope();
											bbOnDebugLeaveScope();
											bbOnDebugLeaveScope();
											bbOnDebugLeaveScope();
											bbOnDebugLeaveScope();
											bbOnDebugLeaveScope();
											bbOnDebugLeaveScope();
											bbOnDebugLeaveScope();
											bbOnDebugLeaveScope();
											bbOnDebugLeaveScope();
											bbOnDebugLeaveScope();
											return (BBOBJECT)&bbNullObject;
										}
										struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 556, 0};
										bbOnDebugEnterStm(&__stmt_1);
										if(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb2))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_right_button ==((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_pEvent))->_brl_event_tevent_source ,(BBClass*)&maxgui_maxgui_gadget_TGadget))){
											struct BBDebugScope __scope = {
												BBDEBUGSCOPE_LOCALBLOCK,
												0,
												{
													BBDEBUGDECL_END 
												}
											};
											bbOnDebugEnterScope(&__scope);
											struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 557, 0};
											bbOnDebugEnterStm(&__stmt_0);
											((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb2))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_last_from -=1;
											struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 558, 0};
											bbOnDebugEnterStm(&__stmt_1);
											((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb2))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_start_from =((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb2))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_last_from ;
											struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 560, 0};
											bbOnDebugEnterStm(&__stmt_2);
											((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb2))->clas->m_ReshapeAll((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbt_tb2);
											struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 561, 0};
											bbOnDebugEnterStm(&__stmt_3);
											bbt_pEvent=(struct brl_event_TEvent_obj*)&bbNullObject;
											struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 562, 0};
											bbOnDebugEnterStm(&__stmt_4);
											bbOnDebugLeaveScope();
											bbOnDebugLeaveScope();
											bbOnDebugLeaveScope();
											bbOnDebugLeaveScope();
											bbOnDebugLeaveScope();
											bbOnDebugLeaveScope();
											bbOnDebugLeaveScope();
											bbOnDebugLeaveScope();
											bbOnDebugLeaveScope();
											bbOnDebugLeaveScope();
											bbOnDebugLeaveScope();
											return (BBOBJECT)&bbNullObject;
										}
										struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 564, 0};
										bbOnDebugEnterStm(&__stmt_2);
										bbt_mods=0;
										struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 564, 0};
										bbOnDebugEnterStm(&__stmt_3);
										bbt_x=0;
										struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 564, 0};
										bbOnDebugEnterStm(&__stmt_4);
										bbt_y=0;
										struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 564, 0};
										bbOnDebugEnterStm(&__stmt_5);
										bbt_ti=&bbEmptyString;
										struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 565, 0};
										bbOnDebugEnterStm(&__stmt_6);
										BBARRAY bbt_6=((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb2))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ;
										BBUINT bbt_7=0U;
										while(bbt_7<((BBUINT)(bbt_6->scales[0]))){
											struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* bbt_item3=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)&bbNullObject;
											struct BBDebugScope_1 __scope = {
												BBDEBUGSCOPE_LOCALBLOCK,
												0,
												{
													{
														BBDEBUGDECL_LOCAL,
														"item",
														":tToolItem",
														.var_address=&bbt_item3
													},
													BBDEBUGDECL_END 
												}
											};
											bbOnDebugEnterScope(&__scope);
											struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 565, 0};
											bbOnDebugEnterStm(&__stmt_0);
											bbt_item3=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATAINDEX((bbt_6),(bbt_6)->dims,bbt_7))[bbt_7];
											struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 565, 0};
											bbOnDebugEnterStm(&__stmt_1);
											bbt_7=(bbt_7+1U);
											struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 565, 0};
											bbOnDebugEnterStm(&__stmt_2);
											if(bbt_item3==&bbNullObject){
												struct BBDebugScope __scope = {
													BBDEBUGSCOPE_LOCALBLOCK,
													0,
													{
														BBDEBUGDECL_END 
													}
												};
												bbOnDebugEnterScope(&__scope);
												struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 565, 0};
												bbOnDebugEnterStm(&__stmt_0);
												bbOnDebugLeaveScope();
												bbOnDebugLeaveScope();
												continue;
											}
											struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 566, 0};
											bbOnDebugEnterStm(&__stmt_3);
											bbt_mods=-1;
											struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 567, 0};
											bbOnDebugEnterStm(&__stmt_4);
											if(((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_pEvent))->_brl_event_tevent_source ==((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_item3))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ){
												struct BBDebugScope __scope = {
													BBDEBUGSCOPE_LOCALBLOCK,
													0,
													{
														BBDEBUGDECL_END 
													}
												};
												bbOnDebugEnterScope(&__scope);
												struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 568, 0};
												bbOnDebugEnterStm(&__stmt_0);
												if((((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_item3))->_maxgui_proxygadgets_toolbarextra_ttoolitem_enabled ==-5) && (((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_item3))->_maxgui_proxygadgets_toolbarextra_ttoolitem_item_type !=2)){
													struct BBDebugScope __scope = {
														BBDEBUGSCOPE_LOCALBLOCK,
														0,
														{
															BBDEBUGDECL_END 
														}
													};
													bbOnDebugEnterScope(&__scope);
													struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 570, 0};
													bbOnDebugEnterStm(&__stmt_0);
													if(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_item3))->_maxgui_proxygadgets_toolbarextra_ttoolitem_item_type ==3){
														struct BBDebugScope __scope = {
															BBDEBUGSCOPE_LOCALBLOCK,
															0,
															{
																BBDEBUGDECL_END 
															}
														};
														bbOnDebugEnterScope(&__scope);
														struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 571, 0};
														bbOnDebugEnterStm(&__stmt_0);
														bbt_extra=bbStringFromInt(((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_pEvent))->_brl_event_tevent_data );
														bbOnDebugLeaveScope();
													}
													struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 573, 0};
													bbOnDebugEnterStm(&__stmt_1);
													if(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_item3))->_maxgui_proxygadgets_toolbarextra_ttoolitem_item_type ==8){
														struct BBDebugScope __scope = {
															BBDEBUGSCOPE_LOCALBLOCK,
															0,
															{
																BBDEBUGDECL_END 
															}
														};
														bbOnDebugEnterScope(&__scope);
														struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 574, 0};
														bbOnDebugEnterStm(&__stmt_0);
														bbt_mods=maxgui_maxgui_SliderValue((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_item3))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget );
														struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 576, 0};
														bbOnDebugEnterStm(&__stmt_1);
														bbt_ti=((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_item3))->_maxgui_proxygadgets_toolbarextra_ttoolitem_tip ;
														struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 577, 0};
														bbOnDebugEnterStm(&__stmt_2);
														if(bbt_ti!=&bbEmptyString){
															struct BBDebugScope __scope = {
																BBDEBUGSCOPE_LOCALBLOCK,
																0,
																{
																	BBDEBUGDECL_END 
																}
															};
															bbOnDebugEnterScope(&__scope);
															struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 578, 0};
															bbOnDebugEnterStm(&__stmt_0);
															if(bbStringContains((BBSTRING)bbt_ti,&_s0)!=0){
																struct BBDebugScope __scope = {
																	BBDEBUGSCOPE_LOCALBLOCK,
																	0,
																	{
																		BBDEBUGDECL_END 
																	}
																};
																bbOnDebugEnterScope(&__scope);
																struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 578, 0};
																bbOnDebugEnterStm(&__stmt_0);
																bbt_ti=bbStringReplace((BBSTRING)bbt_ti,&_s0,bbStringFromInt(bbt_mods));
																bbOnDebugLeaveScope();
															}
															bbOnDebugLeaveScope();
														}
														struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 581, 0};
														bbOnDebugEnterStm(&__stmt_3);
														maxgui_maxgui_SetGadgetToolTip((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_item3))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,bbt_ti);
														bbOnDebugLeaveScope();
													}
													struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 584, 0};
													bbOnDebugEnterStm(&__stmt_2);
													bbOnDebugLeaveScope();
													bbOnDebugLeaveScope();
													bbOnDebugLeaveScope();
													bbOnDebugLeaveScope();
													bbOnDebugLeaveScope();
													bbOnDebugLeaveScope();
													bbOnDebugLeaveScope();
													bbOnDebugLeaveScope();
													bbOnDebugLeaveScope();
													bbOnDebugLeaveScope();
													bbOnDebugLeaveScope();
													bbOnDebugLeaveScope();
													bbOnDebugLeaveScope();
													return (BBOBJECT)brl_event_CreateEvent(8193,(BBOBJECT)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_item3))->_maxgui_proxygadgets_toolbarextra_ttoolitem_toolbar ,((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_item3))->_maxgui_proxygadgets_toolbarextra_ttoolitem_return_id ,bbt_mods,bbt_x,bbt_y,(BBOBJECT)bbt_extra);
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
							}else{
								struct BBDebugScope __scope = {
									BBDEBUGSCOPE_LOCALBLOCK,
									0,
									{
										BBDEBUGDECL_END 
									}
								};
								bbOnDebugEnterScope(&__scope);
								struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 595, 0};
								bbOnDebugEnterStm(&__stmt_0);
								if(bbt_==1025){
									struct BBDebugScope __scope = {
										BBDEBUGSCOPE_LOCALBLOCK,
										0,
										{
											BBDEBUGDECL_END 
										}
									};
									bbOnDebugEnterScope(&__scope);
									struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 597, 0};
									bbOnDebugEnterStm(&__stmt_0);
									struct brl_linkedlist_TListEnum_obj* bbt_8=(struct brl_linkedlist_TListEnum_obj*)((struct brl_linkedlist_TList_obj*)bbNullObjectTest(maxgui_proxygadgets_toolbarextra_tToolbarExtra_list_tbextra))->clas->m_ObjectEnumerator((struct brl_linkedlist_TList_obj*)maxgui_proxygadgets_toolbarextra_tToolbarExtra_list_tbextra);
									while(((struct brl_linkedlist_TListEnum_obj*)bbNullObjectTest(bbt_8))->clas->m_HasNext((struct brl_linkedlist_TListEnum_obj*)bbt_8)!=0){
										struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* bbt_tb3=(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)&bbNullObject;
										struct BBDebugScope_1 __scope = {
											BBDEBUGSCOPE_LOCALBLOCK,
											0,
											{
												{
													BBDEBUGDECL_LOCAL,
													"tb",
													":tToolbarExtra",
													.var_address=&bbt_tb3
												},
												BBDEBUGDECL_END 
											}
										};
										bbOnDebugEnterScope(&__scope);
										bbt_tb3=(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbObjectDowncast((BBOBJECT)((struct brl_linkedlist_TListEnum_obj*)bbNullObjectTest(bbt_8))->clas->m_NextObject((struct brl_linkedlist_TListEnum_obj*)bbt_8),(BBClass*)&maxgui_proxygadgets_toolbarextra_tToolbarExtra));
										if(bbt_tb3==&bbNullObject){
											bbOnDebugLeaveScope();
											continue;
										}
										struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 598, 0};
										bbOnDebugEnterStm(&__stmt_0);
										if(bbt_tb3!=&bbNullObject){
											struct BBDebugScope __scope = {
												BBDEBUGSCOPE_LOCALBLOCK,
												0,
												{
													BBDEBUGDECL_END 
												}
											};
											bbOnDebugEnterScope(&__scope);
											struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 600, 0};
											bbOnDebugEnterStm(&__stmt_0);
											if(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb3))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_left_button ==((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_pEvent))->_brl_event_tevent_source ){
												struct BBDebugScope __scope = {
													BBDEBUGSCOPE_LOCALBLOCK,
													0,
													{
														BBDEBUGDECL_END 
													}
												};
												bbOnDebugEnterScope(&__scope);
												struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 601, 0};
												bbOnDebugEnterStm(&__stmt_0);
												((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb3))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_start_from +=1;
												struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 602, 0};
												bbOnDebugEnterStm(&__stmt_1);
												((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(bbt_tb3))->clas->m_ReshapeAll((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbt_tb3);
												struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 603, 0};
												bbOnDebugEnterStm(&__stmt_2);
												bbOnDebugLeaveScope();
												bbOnDebugLeaveScope();
												bbOnDebugLeaveScope();
												bbOnDebugLeaveScope();
												bbOnDebugLeaveScope();
												bbOnDebugLeaveScope();
												bbOnDebugLeaveScope();
												bbOnDebugLeaveScope();
												bbOnDebugLeaveScope();
												bbOnDebugLeaveScope();
												bbOnDebugLeaveScope();
												bbOnDebugLeaveScope();
												return (BBOBJECT)&bbNullObject;
											}
											bbOnDebugLeaveScope();
										}
										bbOnDebugLeaveScope();
									}
									struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 608, 0};
									bbOnDebugEnterStm(&__stmt_1);
									bbt_item=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbObjectDowncast((BBOBJECT)maxgui_maxgui_GadgetExtra((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_pEvent))->_brl_event_tevent_source ,(BBClass*)&maxgui_maxgui_gadget_TGadget))),(BBClass*)&maxgui_proxygadgets_toolbarextra_tToolItem));
									struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 609, 0};
									bbOnDebugEnterStm(&__stmt_2);
									if(((BBObject*)bbt_item)!= &bbNullObject){
										struct BBDebugScope __scope = {
											BBDEBUGSCOPE_LOCALBLOCK,
											0,
											{
												BBDEBUGDECL_END 
											}
										};
										bbOnDebugEnterScope(&__scope);
										struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 611, 0};
										bbOnDebugEnterStm(&__stmt_0);
										if(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_item))->_maxgui_proxygadgets_toolbarextra_ttoolitem_enabled ==-5){
											struct BBDebugScope __scope = {
												BBDEBUGSCOPE_LOCALBLOCK,
												0,
												{
													BBDEBUGDECL_END 
												}
											};
											bbOnDebugEnterScope(&__scope);
											struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 612, 0};
											bbOnDebugEnterStm(&__stmt_0);
											if(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_item))->_maxgui_proxygadgets_toolbarextra_ttoolitem_item_type ==4){
												struct BBDebugScope __scope = {
													BBDEBUGSCOPE_LOCALBLOCK,
													0,
													{
														BBDEBUGDECL_END 
													}
												};
												bbOnDebugEnterScope(&__scope);
												struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 612, 0};
												bbOnDebugEnterStm(&__stmt_0);
												((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_item))->clas->m_SwapIcon((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbt_item);
												bbOnDebugLeaveScope();
											}
											struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 613, 0};
											bbOnDebugEnterStm(&__stmt_1);
											bbOnDebugLeaveScope();
											bbOnDebugLeaveScope();
											bbOnDebugLeaveScope();
											bbOnDebugLeaveScope();
											bbOnDebugLeaveScope();
											bbOnDebugLeaveScope();
											bbOnDebugLeaveScope();
											bbOnDebugLeaveScope();
											bbOnDebugLeaveScope();
											bbOnDebugLeaveScope();
											bbOnDebugLeaveScope();
											return (BBOBJECT)brl_event_CreateEvent(8193,(BBOBJECT)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_item))->_maxgui_proxygadgets_toolbarextra_ttoolitem_toolbar ,((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_item))->_maxgui_proxygadgets_toolbarextra_ttoolitem_return_id ,0,0,0,(BBOBJECT)&bbNullObject);
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
					bbOnDebugLeaveScope();
				}
				bbOnDebugLeaveScope();
			}
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 620, 0};
	bbOnDebugEnterStm(&__stmt_5);
	bbOnDebugLeaveScope();
	return (BBOBJECT)bbt_pData;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_InsertItem_iSSiTObjecti(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o,BBINT bbt_index,BBSTRING bbt_Text,BBSTRING bbt_tip,BBINT bbt_icon,BBOBJECT bbt_extra,BBINT bbt_flags){
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o));
	BBINT bbt_Return_ID=0;
	struct BBDebugScope_8 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"InsertItem",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tToolbarExtra",
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
			{
				BBDEBUGDECL_LOCAL,
				"Return_ID",
				"i",
				.var_address=&bbt_Return_ID
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 626, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget =bbArraySlice(":tToolItem",((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,0,(bbt_index+1));
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 628, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_Return_ID=bbt_index;
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 629, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(bbt_tip!=&bbEmptyString){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 629, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_Return_ID=bbStringToInt(bbt_tip);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 631, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if(bbt_flags==99){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 632, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ),(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)]=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)maxgui_proxygadgets_toolbarextra_tToolItem_CreateSeparator_TtToolItem();
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 633, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_x +=16;
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 635, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ),(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)]=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)maxgui_proxygadgets_toolbarextra_tToolItem_Create_TtToolItem_iTtToolbarExtraiiSii(bbt_index,(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)o,((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_x ,bbt_flags,bbt_Text,bbt_Return_ID,bbt_icon);
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 636, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_x +=(maxgui_maxgui_GadgetWidth((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ),(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)]))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget )+1);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_SelectItem_ii(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o,BBINT bbt_index,BBINT bbt_t){
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o));
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SelectItem",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tToolbarExtra",
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
				"t",
				"i",
				.var_address=&bbt_t
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 645, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if((bbt_index<0) || (bbt_index>(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->scales[0])){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 645, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbExThrow((BBObject *)&_s7);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 648, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ),(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)]))->_maxgui_proxygadgets_toolbarextra_ttoolitem_item_type ==4){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 649, 0};
		bbOnDebugEnterStm(&__stmt_0);
		struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* bbt_;
		(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest((bbt_ = ((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ),(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)])))->clas)->m_SwapIcon((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbt_);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetEnabled_i(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o,BBINT bbt_sta){
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetEnabled",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tToolbarExtra",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"sta",
				"i",
				.var_address=&bbt_sta
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 654, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(bbt_sta!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 654, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o));
		((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)o)->clas->m_EnableAll((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)o);
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 654, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o));
		((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)o)->clas->m_DisableAll((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)o);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_State(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o){
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"State",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tToolbarExtra",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 658, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return -9;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_EnableAll(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o){
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o));
	struct brl_pixmap_TPixmap_obj* bbt_pix=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"EnableAll",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tToolbarExtra",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"pix",
				":TPixmap",
				.var_address=&bbt_pix
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 662, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_pix=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 663, 0};
	bbOnDebugEnterStm(&__stmt_1);
	BBARRAY bbt_=((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ;
	BBUINT bbt_2=0U;
	while(bbt_2<((BBUINT)(bbt_->scales[0]))){
		struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* bbt_t=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)&bbNullObject;
		struct BBDebugScope_1 __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_LOCAL,
					"t",
					":tToolItem",
					.var_address=&bbt_t
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 663, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_t=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATAINDEX((bbt_),(bbt_)->dims,bbt_2))[bbt_2];
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 663, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_2=(bbt_2+1U);
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 663, 0};
		bbOnDebugEnterStm(&__stmt_2);
		if(bbt_t==&bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 663, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			continue;
		}
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 664, 0};
		bbOnDebugEnterStm(&__stmt_3);
		if(((BBObject*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_t))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget )!= &bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 665, 0};
			bbOnDebugEnterStm(&__stmt_0);
			maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_t))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget );
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 666, 0};
			bbOnDebugEnterStm(&__stmt_1);
			if((((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_t))->_maxgui_proxygadgets_toolbarextra_ttoolitem_item_type ==1) || (((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_t))->_maxgui_proxygadgets_toolbarextra_ttoolitem_item_type ==4)){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 667, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbt_pix=(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_iconstrip ,((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_t))->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_current );
				struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 668, 0};
				bbOnDebugEnterStm(&__stmt_1);
				maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_t))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,(struct brl_pixmap_TPixmap_obj*)bbt_pix,1);
				struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 670, 0};
				bbOnDebugEnterStm(&__stmt_2);
				if(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_t))->_maxgui_proxygadgets_toolbarextra_ttoolitem_enabled ==4){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 671, 0};
					bbOnDebugEnterStm(&__stmt_0);
					bbt_pix=(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_grey_iconstrip ,((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_t))->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_current );
					struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 672, 0};
					bbOnDebugEnterStm(&__stmt_1);
					maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_t))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,(struct brl_pixmap_TPixmap_obj*)bbt_pix,1);
					bbOnDebugLeaveScope();
				}
				bbOnDebugLeaveScope();
			}
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 679, 0};
	bbOnDebugEnterStm(&__stmt_2);
	maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_left_button );
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 680, 0};
	bbOnDebugEnterStm(&__stmt_3);
	maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_right_button );
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_DisableAll(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o){
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o));
	struct brl_pixmap_TPixmap_obj* bbt_pix=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"DisableAll",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tToolbarExtra",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"pix",
				":TPixmap",
				.var_address=&bbt_pix
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 684, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_pix=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 685, 0};
	bbOnDebugEnterStm(&__stmt_1);
	BBARRAY bbt_=((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ;
	BBUINT bbt_2=0U;
	while(bbt_2<((BBUINT)(bbt_->scales[0]))){
		struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* bbt_t=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)&bbNullObject;
		struct BBDebugScope_1 __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_LOCAL,
					"t",
					":tToolItem",
					.var_address=&bbt_t
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 685, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_t=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATAINDEX((bbt_),(bbt_)->dims,bbt_2))[bbt_2];
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 685, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_2=(bbt_2+1U);
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 685, 0};
		bbOnDebugEnterStm(&__stmt_2);
		if(bbt_t==&bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 685, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			continue;
		}
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 686, 0};
		bbOnDebugEnterStm(&__stmt_3);
		if(((BBObject*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_t))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget )!= &bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 688, 0};
			bbOnDebugEnterStm(&__stmt_0);
			maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_t))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget );
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 689, 0};
			bbOnDebugEnterStm(&__stmt_1);
			if((((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_t))->_maxgui_proxygadgets_toolbarextra_ttoolitem_item_type ==1) || (((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_t))->_maxgui_proxygadgets_toolbarextra_ttoolitem_item_type ==4)){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 691, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbt_pix=(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_grey_iconstrip ,((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_t))->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_current );
				struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 692, 0};
				bbOnDebugEnterStm(&__stmt_1);
				maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_t))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,(struct brl_pixmap_TPixmap_obj*)bbt_pix,1);
				bbOnDebugLeaveScope();
			}
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 697, 0};
	bbOnDebugEnterStm(&__stmt_2);
	maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_left_button );
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 698, 0};
	bbOnDebugEnterStm(&__stmt_3);
	maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_right_button );
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetItem_iSSiTObjecti(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o,BBINT bbt_index,BBSTRING bbt_Text,BBSTRING bbt_tip,BBINT bbt_icon,BBOBJECT bbt_extra,BBINT bbt_flags){
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o));
	struct BBDebugScope_7 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetItem",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tToolbarExtra",
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 704, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if((bbt_index<0) || (bbt_index>(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->scales[0])){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 704, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbExThrow((BBObject *)&_s7);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 706, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(bbt_tip!=&bbEmptyString){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 706, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_SetGadgetToolTip((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ),(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)]))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,bbt_tip);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 707, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(bbt_extra!=&bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 707, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_SetGadgetExtra((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ),(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)]))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,(BBOBJECT)bbt_extra);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 709, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ),(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)]))->_maxgui_proxygadgets_toolbarextra_ttoolitem_item_type ==4){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 710, 0};
		bbOnDebugEnterStm(&__stmt_0);
		struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* bbt_;
		(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest((bbt_ = ((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ),(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)])))->clas)->m_SwapIcon((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbt_);
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 711, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return 0;
	}
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 713, 0};
	bbOnDebugEnterStm(&__stmt_4);
	if(bbt_Text!=&bbEmptyString){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 713, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ),(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)]))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,bbt_Text);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetItemState_ii(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o,BBINT bbt_index,BBINT bbt_state){
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o));
	struct brl_pixmap_TPixmap_obj* bbt_pix=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetItemState",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tToolbarExtra",
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
				"state",
				"i",
				.var_address=&bbt_state
			},
			{
				BBDEBUGDECL_LOCAL,
				"pix",
				":TPixmap",
				.var_address=&bbt_pix
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 719, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if((bbt_index<0) || (bbt_index>(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->scales[0])){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 719, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbExThrow((BBObject *)&_s7);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 721, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_pix=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 722, 0};
	bbOnDebugEnterStm(&__stmt_2);
	BBINT bbt_=bbt_state;
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 723, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if(bbt_==-1){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 724, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_pix=(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_grey_iconstrip ,((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ),(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)]))->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_current );
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 725, 0};
		bbOnDebugEnterStm(&__stmt_1);
		maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ),(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)]))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,(struct brl_pixmap_TPixmap_obj*)bbt_pix,1);
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 726, 0};
		bbOnDebugEnterStm(&__stmt_2);
		((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ),(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)]))->_maxgui_proxygadgets_toolbarextra_ttoolitem_enabled =4;
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 728, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(bbt_==0){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 729, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_pix=(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_iconstrip ,((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ),(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)]))->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_current );
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 730, 0};
			bbOnDebugEnterStm(&__stmt_1);
			maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ),(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)]))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,(struct brl_pixmap_TPixmap_obj*)bbt_pix,1);
			struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 731, 0};
			bbOnDebugEnterStm(&__stmt_2);
			((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ),(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)]))->_maxgui_proxygadgets_toolbarextra_ttoolitem_enabled =-5;
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_ItemState_i(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o,BBINT bbt_index){
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"ItemState",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tToolbarExtra",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"index",
				"i",
				.var_address=&bbt_index
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 738, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if((bbt_index<0) || (bbt_index>(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->scales[0])){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 738, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbExThrow((BBObject *)&_s7);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 740, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbOnDebugLeaveScope();
	return ((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ),(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)]))->_maxgui_proxygadgets_toolbarextra_ttoolitem_enabled ;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_ItemCount(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o){
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"ItemCount",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tToolbarExtra",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 744, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return (((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->scales[0];
}
BBSTRING _maxgui_proxygadgets_toolbarextra_tToolbarExtra_ItemText_i(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o,BBINT bbt_index){
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"ItemText",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tToolbarExtra",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"index",
				"i",
				.var_address=&bbt_index
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 748, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(bbt_index==-1){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 748, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return &bbEmptyString;
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 750, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if((bbt_index<0) || (bbt_index>=(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ->scales[0]))){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 750, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbExThrow((BBObject *)bbStringConcat(bbStringConcat(&_s8,bbStringFromInt(bbt_index)),&_s9));
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 753, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(((BBObject*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ),(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)]))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 754, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return maxgui_maxgui_GadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ),(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)]))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget );
	}
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 756, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbOnDebugLeaveScope();
	return &bbEmptyString;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_ItemIcon_i(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o,BBINT bbt_index){
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"ItemIcon",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tToolbarExtra",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"index",
				"i",
				.var_address=&bbt_index
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 762, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if((bbt_index<0) || (bbt_index>=(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ->scales[0]))){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 762, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbExThrow((BBObject *)bbStringConcat(bbStringConcat(&_s8,bbStringFromInt(bbt_index)),&_s9));
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 764, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbOnDebugLeaveScope();
	return ((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ),(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)]))->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_current ;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_ItemFlags_i(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o,BBINT bbt_index){
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"ItemFlags",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tToolbarExtra",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"index",
				"i",
				.var_address=&bbt_index
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 769, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if((bbt_index<0) || (bbt_index>=(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ->scales[0]))){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 769, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbExThrow((BBObject *)bbStringConcat(bbStringConcat(&_s8,bbStringFromInt(bbt_index)),&_s9));
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 771, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbOnDebugLeaveScope();
	return ((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ),(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)]))->_maxgui_proxygadgets_toolbarextra_ttoolitem_item_type ;
}
BBOBJECT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_ItemExtra_i(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o,BBINT bbt_index){
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"ItemExtra",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tToolbarExtra",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"index",
				"i",
				.var_address=&bbt_index
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 776, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(bbt_index==-1){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 776, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return (BBOBJECT)&bbNullObject;
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 778, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if((bbt_index<0) || (bbt_index>=(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ->scales[0]))){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 778, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbExThrow((BBObject *)bbStringConcat(bbStringConcat(&_s8,bbStringFromInt(bbt_index)),&_s9));
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 781, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbOnDebugLeaveScope();
	return (BBOBJECT)((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ),(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)]))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ))->_maxgui_maxgui_gadget_tgadget_extra ;
}
struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* _maxgui_proxygadgets_toolbarextra_tToolbarExtra_AddItem_iSii(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o,BBINT bbt__TYPE,BBSTRING bbt__title,BBINT bbt__return_id,BBINT bbt_icon){
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o));
	BBINT bbt_size=0;
	struct BBDebugScope_6 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"AddItem",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tToolbarExtra",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"_TYPE",
				"i",
				.var_address=&bbt__TYPE
			},
			{
				BBDEBUGDECL_LOCAL,
				"_title",
				"$",
				.var_address=&bbt__title
			},
			{
				BBDEBUGDECL_LOCAL,
				"_return_id",
				"i",
				.var_address=&bbt__return_id
			},
			{
				BBDEBUGDECL_LOCAL,
				"icon",
				"i",
				.var_address=&bbt_icon
			},
			{
				BBDEBUGDECL_LOCAL,
				"size",
				"i",
				.var_address=&bbt_size
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 786, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_size=(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->scales[0];
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 787, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget =bbArraySlice(":tToolItem",((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,0,(bbt_size+1));
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 788, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(bbt__TYPE==99){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 789, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ),(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->dims,((BBUINT)bbt_size)))[((BBUINT)bbt_size)]=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)maxgui_proxygadgets_toolbarextra_tToolItem_CreateSeparator_TtToolItem();
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 790, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_x +=16;
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 792, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ),(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->dims,((BBUINT)bbt_size)))[((BBUINT)bbt_size)]=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)maxgui_proxygadgets_toolbarextra_tToolItem_Create_TtToolItem_iTtToolbarExtraiiSii(bbt_size,(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)o,((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_x ,bbt__TYPE,bbt__title,bbt__return_id,bbt_icon);
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 793, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_x +=(maxgui_maxgui_GadgetWidth((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ),(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->dims,((BBUINT)bbt_size)))[((BBUINT)bbt_size)]))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget )+1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 795, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbOnDebugLeaveScope();
	return (struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ),(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->dims,((BBUINT)bbt_size)))[((BBUINT)bbt_size)];
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_AddSeparator(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o){
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"AddSeparator",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tToolbarExtra",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 799, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o));
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)o)->clas->m_AddItem_iSii((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)o,99,&bbEmptyString,-1,-1);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_RemoveItem_i(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o,BBINT bbt_index){
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"RemoveItem",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tToolbarExtra",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"index",
				"i",
				.var_address=&bbt_index
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 803, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(bbt_index<0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 803, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return 1;
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 805, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if((bbt_index<0) || (bbt_index>=(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ->scales[0]))){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 805, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbExThrow((BBObject *)bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(&_s8,bbStringFromInt(bbt_index)),&_s10),bbStringFromInt((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->scales[0])),&_s9));
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 807, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ),(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)]!=&bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 809, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ),(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)]))->_maxgui_proxygadgets_toolbarextra_ttoolitem_item_type ==99){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 810, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_x -=16;
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
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 812, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_x -=(maxgui_maxgui_GadgetWidth((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ),(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)]))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget )+1);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 816, 0};
		bbOnDebugEnterStm(&__stmt_1);
		struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* bbt_;
		(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest((bbt_ = ((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ),(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)])))->clas)->m_Clear((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbt_);
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 817, 0};
		bbOnDebugEnterStm(&__stmt_2);
		((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ),(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)]=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)&bbNullObject;
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 818, 0};
		bbOnDebugEnterStm(&__stmt_3);
		((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget =bbArrayConcat(":tToolItem",bbArraySlice(":tToolItem",((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,0,bbt_index),bbArraySlice(":tToolItem",((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,(bbt_index+1),(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->scales[0]));
		struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 819, 0};
		bbOnDebugEnterStm(&__stmt_4);
		((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o));
		((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)o)->clas->m_ReshapeAll((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)o);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_Clear(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o){
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Clear",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tToolbarExtra",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 825, 0};
	bbOnDebugEnterStm(&__stmt_0);
	{
		BBINT bbt_i=0;
		BBINT bbt_=(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ->scales[0]);
		for(;(bbt_i<bbt_);bbt_i=(bbt_i+1)){
			struct BBDebugScope_1 __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					{
						BBDEBUGDECL_LOCAL,
						"i",
						"i",
						.var_address=&bbt_i
					},
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 826, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ),(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]!=&bbNullObject){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 827, 0};
				bbOnDebugEnterStm(&__stmt_0);
				struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* bbt_2;
				(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest((bbt_2 = ((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ),(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])))->clas)->m_Clear((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbt_2);
				struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 828, 0};
				bbOnDebugEnterStm(&__stmt_1);
				((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ),(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)&bbNullObject;
				bbOnDebugLeaveScope();
			}
			bbOnDebugLeaveScope();
		}
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 831, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget =&bbEmptyArray;
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 832, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_x =0;
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 833, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o));
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)o)->clas->m_ReshapeAll((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)o);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetIconStrip_TTIconStrip(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o,struct maxgui_maxgui_iconstrip_TIconStrip_obj* bbt_ics){
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o));
	struct brl_pixmap_TPixmap_obj* bbt_pix=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetIconStrip",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tToolbarExtra",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"ics",
				":TIconStrip",
				.var_address=&bbt_ics
			},
			{
				BBDEBUGDECL_LOCAL,
				"pix",
				":TPixmap",
				.var_address=&bbt_pix
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 837, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_iconstrip =(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbt_ics;
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 838, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_grey_iconstrip =(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbObjectDowncast((BBOBJECT)maxgui_proxygadgets_common_MakeGrey((BBOBJECT)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_iconstrip ),(BBClass*)&maxgui_maxgui_iconstrip_TIconStrip));
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 839, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_light_iconstrip =(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbObjectDowncast((BBOBJECT)maxgui_proxygadgets_common_MakeLight((BBOBJECT)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_iconstrip ),(BBClass*)&maxgui_maxgui_iconstrip_TIconStrip));
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 840, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_pix=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 841, 0};
	bbOnDebugEnterStm(&__stmt_4);
	BBARRAY bbt_=((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ;
	BBUINT bbt_2=0U;
	while(bbt_2<((BBUINT)(bbt_->scales[0]))){
		struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* bbt_t=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)&bbNullObject;
		struct BBDebugScope_1 __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_LOCAL,
					"t",
					":tToolItem",
					.var_address=&bbt_t
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 841, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_t=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATAINDEX((bbt_),(bbt_)->dims,bbt_2))[bbt_2];
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 841, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_2=(bbt_2+1U);
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 841, 0};
		bbOnDebugEnterStm(&__stmt_2);
		if(bbt_t==&bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 841, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			continue;
		}
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 842, 0};
		bbOnDebugEnterStm(&__stmt_3);
		if(((BBObject*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_t))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget )!= &bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 843, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_t))->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_current >-1){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 844, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbt_pix=(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_iconstrip ,((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_t))->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_current );
				struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 845, 0};
				bbOnDebugEnterStm(&__stmt_1);
				maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_t))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,(struct brl_pixmap_TPixmap_obj*)bbt_pix,1);
				struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 846, 0};
				bbOnDebugEnterStm(&__stmt_2);
				if(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_t))->_maxgui_proxygadgets_toolbarextra_ttoolitem_enabled ==4){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 847, 0};
					bbOnDebugEnterStm(&__stmt_0);
					bbt_pix=(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_grey_iconstrip ,((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_t))->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_current );
					struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 848, 0};
					bbOnDebugEnterStm(&__stmt_1);
					maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(bbt_t))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,(struct brl_pixmap_TPixmap_obj*)bbt_pix,1);
					bbOnDebugLeaveScope();
				}
				bbOnDebugLeaveScope();
			}
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_Class(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o){
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Class",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tToolbarExtra",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 857, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return 8;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetToolTipExtra_iS(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o,BBINT bbt_ID,BBSTRING bbt__ti){
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o));
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetToolTipExtra",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tToolbarExtra",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"ID",
				"i",
				.var_address=&bbt_ID
			},
			{
				BBDEBUGDECL_LOCAL,
				"_ti",
				"$",
				.var_address=&bbt__ti
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 861, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if((bbt_ID>-1) && (bbt_ID<(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->scales[0])){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 862, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ),(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->dims,((BBUINT)bbt_ID)))[((BBUINT)bbt_ID)]==&bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 862, 0};
			bbOnDebugEnterStm(&__stmt_0);
			brl_standardio_Print(bbStringConcat(&_s11,bbStringFromInt(bbt_ID)));
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 864, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if((bbStringContains((BBSTRING)bbt__ti,&_s0)!=0) && (((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ),(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->dims,((BBUINT)bbt_ID)))[((BBUINT)bbt_ID)]))->_maxgui_proxygadgets_toolbarextra_ttoolitem_item_type ==8)){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 865, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbStringReplace((BBSTRING)bbt__ti,&_s0,bbStringFromInt(maxgui_maxgui_SliderValue((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ),(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->dims,((BBUINT)bbt_ID)))[((BBUINT)bbt_ID)]))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget )));
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 868, 0};
		bbOnDebugEnterStm(&__stmt_2);
		if(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ),(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->dims,((BBUINT)bbt_ID)))[((BBUINT)bbt_ID)]))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget !=&bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 869, 0};
			bbOnDebugEnterStm(&__stmt_0);
			maxgui_maxgui_SetGadgetToolTip((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ),(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->dims,((BBUINT)bbt_ID)))[((BBUINT)bbt_ID)]))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,bbt__ti);
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 870, 0};
			bbOnDebugEnterStm(&__stmt_1);
			((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ),(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->dims,((BBUINT)bbt_ID)))[((BBUINT)bbt_ID)]))->_maxgui_proxygadgets_toolbarextra_ttoolitem_tip =bbt__ti;
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetFont_TTGuiFont(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o,struct maxgui_maxgui_guifont_TGuiFont_obj* bbt_Font){
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetFont",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tToolbarExtra",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"Font",
				":TGuiFont",
				.var_address=&bbt_Font
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetIcon_ii(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o,BBINT bbt_ID,BBINT bbt__icon){
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o));
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetIcon",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tToolbarExtra",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"ID",
				"i",
				.var_address=&bbt_ID
			},
			{
				BBDEBUGDECL_LOCAL,
				"_icon",
				"i",
				.var_address=&bbt__icon
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 880, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(bbt__icon>-1){
		struct brl_pixmap_TPixmap_obj* bbt_pix=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
		struct BBDebugScope_1 __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_LOCAL,
					"pix",
					":TPixmap",
					.var_address=&bbt_pix
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 881, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_pix=(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_iconstrip ,bbt__icon);
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 882, 0};
		bbOnDebugEnterStm(&__stmt_1);
		maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ),(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->dims,((BBUINT)bbt_ID)))[((BBUINT)bbt_ID)]))->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,(struct brl_pixmap_TPixmap_obj*)bbt_pix,1);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_SelectedItem(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o){
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SelectedItem",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tToolbarExtra",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 887, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return -1;
}
BBARRAY _maxgui_proxygadgets_toolbarextra_tToolbarExtra_SelectedItems(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o){
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SelectedItems",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tToolbarExtra",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 890, 0};
	bbOnDebugEnterStm(&__stmt_0);
	BBINT bbt_[]={0};
	BBARRAY bbt_2 = bbArrayFromData("i",1,bbt_);
	bbOnDebugLeaveScope();
	return bbt_2;
}
struct brl_linkedlist_TList_obj* maxgui_proxygadgets_toolbarextra_tToolbarExtra_list_tbextra;
BBINT maxgui_proxygadgets_toolbarextra_tToolbarExtra_item_width;
struct BBDebugScope_53 maxgui_proxygadgets_toolbarextra_tToolbarExtra_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"tToolbarExtra",
	{
		{
			BBDEBUGDECL_FIELD,
			"panel",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj,_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel)
		},
		{
			BBDEBUGDECL_FIELD,
			"line",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj,_maxgui_proxygadgets_toolbarextra_ttoolbarextra_line)
		},
		{
			BBDEBUGDECL_FIELD,
			"line_up",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj,_maxgui_proxygadgets_toolbarextra_ttoolbarextra_line_up)
		},
		{
			BBDEBUGDECL_FIELD,
			"parent",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj,_maxgui_proxygadgets_toolbarextra_ttoolbarextra_parent)
		},
		{
			BBDEBUGDECL_FIELD,
			"tfont",
			":TGuiFont",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj,_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tfont)
		},
		{
			BBDEBUGDECL_FIELD,
			"tool_gadget",
			"[]:tToolItem",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj,_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget)
		},
		{
			BBDEBUGDECL_FIELD,
			"colors",
			"[]b",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj,_maxgui_proxygadgets_toolbarextra_ttoolbarextra_colors)
		},
		{
			BBDEBUGDECL_FIELD,
			"iconstrip",
			":TIconStrip",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj,_maxgui_proxygadgets_toolbarextra_ttoolbarextra_iconstrip)
		},
		{
			BBDEBUGDECL_FIELD,
			"grey_iconstrip",
			":TIconStrip",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj,_maxgui_proxygadgets_toolbarextra_ttoolbarextra_grey_iconstrip)
		},
		{
			BBDEBUGDECL_FIELD,
			"light_iconstrip",
			":TIconStrip",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj,_maxgui_proxygadgets_toolbarextra_ttoolbarextra_light_iconstrip)
		},
		{
			BBDEBUGDECL_FIELD,
			"x",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj,_maxgui_proxygadgets_toolbarextra_ttoolbarextra_x)
		},
		{
			BBDEBUGDECL_FIELD,
			"name",
			"$",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj,_maxgui_proxygadgets_toolbarextra_ttoolbarextra_name)
		},
		{
			BBDEBUGDECL_FIELD,
			"left_button",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj,_maxgui_proxygadgets_toolbarextra_ttoolbarextra_left_button)
		},
		{
			BBDEBUGDECL_FIELD,
			"right_button",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj,_maxgui_proxygadgets_toolbarextra_ttoolbarextra_right_button)
		},
		{
			BBDEBUGDECL_FIELD,
			"start_from",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj,_maxgui_proxygadgets_toolbarextra_ttoolbarextra_start_from)
		},
		{
			BBDEBUGDECL_FIELD,
			"last_from",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj,_maxgui_proxygadgets_toolbarextra_ttoolbarextra_last_from)
		},
		{
			BBDEBUGDECL_FIELD,
			"txt_rgb",
			"[]i",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj,_maxgui_proxygadgets_toolbarextra_ttoolbarextra_txt_rgb)
		},
		{
			BBDEBUGDECL_GLOBAL,
			"item_width",
			"i",
			.var_address=(void*)&maxgui_proxygadgets_toolbarextra_tToolbarExtra_item_width
		},
		{
			BBDEBUGDECL_GLOBAL,
			"list_tbextra",
			":TList",
			.var_address=(void*)&maxgui_proxygadgets_toolbarextra_tToolbarExtra_list_tbextra
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_New
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Create",
			"(:TGadget,:TIconStrip,i):tToolbarExtra",
			.var_address=(void*)&maxgui_proxygadgets_toolbarextra_tToolbarExtra_Create_TtToolbarExtra_TTGadgetTTIconStripi
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetTextColor",
			"(i,i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetTextColor_iii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetColor",
			"(i,i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetColor_iii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Activate",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_Activate_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"CleanUp",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_CleanUp
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetShow",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetShow_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ReshapeAll",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_ReshapeAll
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"eventHandler",
			"(i,:Object,:Object):Object",
			.var_address=(void*)&maxgui_proxygadgets_toolbarextra_tToolbarExtra_eventHandler_TObject_iTObjectTObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"InsertItem",
			"(i,$,$,i,:Object,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_InsertItem_iSSiTObjecti
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SelectItem",
			"(i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_SelectItem_ii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetEnabled",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetEnabled_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"State",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_State
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"EnableAll",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_EnableAll
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"DisableAll",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_DisableAll
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetItem",
			"(i,$,$,i,:Object,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetItem_iSSiTObjecti
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetItemState",
			"(i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetItemState_ii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ItemState",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_ItemState_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ItemCount",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_ItemCount
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ItemText",
			"(i)$",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_ItemText_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ItemIcon",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_ItemIcon_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ItemFlags",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_ItemFlags_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ItemExtra",
			"(i):Object",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_ItemExtra_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"AddItem",
			"(i,$,i,i):tToolItem",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_AddItem_iSii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"AddSeparator",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_AddSeparator
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"RemoveItem",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_RemoveItem_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Clear",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_Clear
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetIconStrip",
			"(:TIconStrip)i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetIconStrip_TTIconStrip
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Class",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_Class
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetToolTipExtra",
			"(i,$)i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetToolTipExtra_iS
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetFont",
			"(:TGuiFont)i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetFont_TTGuiFont
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetIcon",
			"(i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetIcon_ii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SelectedItem",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_SelectedItem
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SelectedItems",
			"()[]i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_SelectedItems
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_maxgui_proxygadgets_toolbarextra_tToolbarExtra maxgui_proxygadgets_toolbarextra_tToolbarExtra={
	&maxgui_maxgui_gadget_TProxyGadget,
	bbObjectFree,
	(BBDebugScope*)&maxgui_proxygadgets_toolbarextra_tToolbarExtra_scope,
	sizeof(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj),
	(void (*)(BBOBJECT))_maxgui_proxygadgets_toolbarextra_tToolbarExtra_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj,_maxgui_proxygadgets_toolbarextra_ttoolbarextra_txt_rgb) - sizeof(void*) + sizeof(BBARRAY)
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
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_Clear
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_InsertItem_iSSiTObjecti
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetItem_iSSiTObjecti
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_RemoveItem_i
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_ItemCount
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_ItemText_i
	,_maxgui_maxgui_gadget_TProxyGadget_ItemTip_i
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_ItemFlags_i
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_ItemIcon_i
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_ItemExtra_i
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetItemState_ii
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_ItemState_i
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_SelectItem_ii
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_SelectedItem
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_SelectedItems
	,_maxgui_maxgui_gadget_TGadget_Insert_TTGadgeti
	,_maxgui_maxgui_gadget_TProxyGadget_Query_i
	,_maxgui_maxgui_gadget_TGadget_ScaleFactor
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_CleanUp
	,_maxgui_maxgui_gadget_TProxyGadget_Free
	,_maxgui_maxgui_gadget_TProxyGadget_Rethink
	,_maxgui_maxgui_gadget_TProxyGadget_ClientWidth
	,_maxgui_maxgui_gadget_TProxyGadget_ClientHeight
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_Activate_i
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_State
	,_maxgui_maxgui_gadget_TProxyGadget_SetText_S
	,_maxgui_maxgui_gadget_TProxyGadget_GetText
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetFont_TTGuiFont
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetColor_iii
	,_maxgui_maxgui_gadget_TProxyGadget_RemoveColor
	,_maxgui_maxgui_gadget_TProxyGadget_SetAlpha_f
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetTextColor_iii
	,_maxgui_maxgui_gadget_TProxyGadget_SetTooltip_S
	,_maxgui_maxgui_gadget_TProxyGadget_GetTooltip
	,_maxgui_maxgui_gadget_TProxyGadget_SetPixmap_TTPixmapi
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetIconStrip_TTIconStrip
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetShow_i
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetEnabled_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetSelected_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetHotKey_ii
	,_maxgui_maxgui_gadget_TProxyGadget_SetSensitivity_i
	,_maxgui_maxgui_gadget_TProxyGadget_GetSensitivity
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_Class
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
	,maxgui_proxygadgets_toolbarextra_tToolbarExtra_Create_TtToolbarExtra_TTGadgetTTIconStripi
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_ReshapeAll
	,maxgui_proxygadgets_toolbarextra_tToolbarExtra_eventHandler_TObject_iTObjectTObject
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_EnableAll
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_DisableAll
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_AddItem_iSii
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_AddSeparator
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetToolTipExtra_iS
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetIcon_ii
};

struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* maxgui_proxygadgets_toolbarextra_CreateToolbarExtra(struct maxgui_maxgui_gadget_TGadget_obj* bbt__PARENT,struct maxgui_maxgui_iconstrip_TIconStrip_obj* bbt__iconstrip,BBINT bbt_style){
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"CreateToolbarExtra",
		{
			{
				BBDEBUGDECL_LOCAL,
				"_PARENT",
				":TGadget",
				.var_address=&bbt__PARENT
			},
			{
				BBDEBUGDECL_LOCAL,
				"_iconstrip",
				":TIconStrip",
				.var_address=&bbt__iconstrip
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ToolBarExtra.bmx", 299, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return (struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)maxgui_proxygadgets_toolbarextra_tToolbarExtra_Create_TtToolbarExtra_TTGadgetTTIconStripi((struct maxgui_maxgui_gadget_TGadget_obj*)bbt__PARENT,(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbt__iconstrip,bbt_style);
}
static int _bb_maxgui_proxygadgets_toolbarextra_inited = 0;
int _bb_maxgui_proxygadgets_toolbarextra(){
	if (!_bb_maxgui_proxygadgets_toolbarextra_inited) {
		_bb_maxgui_proxygadgets_toolbarextra_inited = 1;
		GC_add_roots(&maxgui_proxygadgets_toolbarextra_tToolbarExtra_list_tbextra, &maxgui_proxygadgets_toolbarextra_tToolbarExtra_item_width + 1);
		__bb_brl_blitz_blitz();
		__bb_maxgui_maxgui_maxgui();
		__bb_brl_max2d_max2d();
		_bb_maxgui_proxygadgets_common();
		bbObjectRegisterType((BBCLASS)&maxgui_proxygadgets_toolbarextra_tToolItem);
		bbObjectRegisterType((BBCLASS)&maxgui_proxygadgets_toolbarextra_tToolbarExtra);
		maxgui_proxygadgets_toolbarextra_tToolbarExtra_item_width=80;
		maxgui_proxygadgets_toolbarextra_tToolbarExtra_list_tbextra=(struct brl_linkedlist_TList_obj*)&bbNullObject;
		maxgui_proxygadgets_toolbarextra_tToolItem_font_size=((BBINT)maxgui_maxgui_FontSize((struct maxgui_maxgui_guifont_TGuiFont_obj*)maxgui_maxgui_LookupGuiFont(1,0.00000000000000000,0)));
		struct BBDebugScope_9 __scope = {
			BBDEBUGSCOPE_FUNCTION,
			"ToolBarExtra",
			{
				{
					BBDEBUGDECL_CONST,
					"TOOLBARITEM_BUTTON",
					"i",
					.const_value=&_s12
				},
				{
					BBDEBUGDECL_CONST,
					"TOOLBARITEM_TEXTFIELD",
					"i",
					.const_value=&_s13
				},
				{
					BBDEBUGDECL_CONST,
					"TOOLBARITEM_COMBOBOX",
					"i",
					.const_value=&_s14
				},
				{
					BBDEBUGDECL_CONST,
					"TOOLBARITEM_SWITCH",
					"i",
					.const_value=&_s15
				},
				{
					BBDEBUGDECL_CONST,
					"TOOLBARITEM_LABEL",
					"i",
					.const_value=&_s16
				},
				{
					BBDEBUGDECL_CONST,
					"TOOLBARITEM_TEXTBUTTON",
					"i",
					.const_value=&_s17
				},
				{
					BBDEBUGDECL_CONST,
					"TOOLBARITEM_RADIOBUTTON",
					"i",
					.const_value=&_s18
				},
				{
					BBDEBUGDECL_CONST,
					"TOOLBARITEM_SLIDER",
					"i",
					.const_value=&_s19
				},
				{
					BBDEBUGDECL_CONST,
					"TOOLBARITEM_SEPARATOR",
					"i",
					.const_value=&_s20
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