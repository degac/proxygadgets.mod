#include "ProgressBar.bmx.debug.win32.x64.h"
static BBString _s0={
	&bbStringClass,
	2,
	{32,37}
};
static BBString _s6={
	&bbStringClass,
	1,
	{49}
};
static BBString _s13={
	&bbStringClass,
	3,
	{49,50,56}
};
static BBString _s10={
	&bbStringClass,
	2,
	{49,54}
};
static BBString _s7={
	&bbStringClass,
	1,
	{50}
};
static BBString _s11={
	&bbStringClass,
	2,
	{51,50}
};
static BBString _s8={
	&bbStringClass,
	1,
	{52}
};
static BBString _s12={
	&bbStringClass,
	2,
	{54,52}
};
static BBString _s9={
	&bbStringClass,
	1,
	{56}
};
static BBString _s3={
	&bbStringClass,
	27,
	{114,101,115,111,117,114,99,101,115,47,105,110,100,105,99,97,116
	,111,114,95,82,69,68,46,112,110,103}
};
static BBString _s4={
	&bbStringClass,
	30,
	{114,101,115,111,117,114,99,101,115,47,105,110,100,105,99,97,116
	,111,114,95,89,69,76,76,79,87,46,112,110,103}
};
static BBString _s2={
	&bbStringClass,
	29,
	{114,101,115,111,117,114,99,101,115,47,105,110,100,105,99,97,116
	,111,114,95,103,114,101,101,110,46,112,110,103}
};
static BBString _s1={
	&bbStringClass,
	28,
	{114,101,115,111,117,114,99,101,115,47,105,110,100,105,99,97,116
	,111,114,95,118,111,105,100,46,112,110,103}
};
static BBString _s5={
	&bbStringClass,
	18,
	{114,101,115,111,117,114,99,101,115,47,115,116,97,114,46,112,110
	,103}
};
struct BBDebugScope_1{int kind; const char *name; BBDebugDecl decls[2]; };
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
struct BBDebugScope_3{int kind; const char *name; BBDebugDecl decls[4]; };
struct BBDebugScope_36{int kind; const char *name; BBDebugDecl decls[37]; };
struct BBDebugScope_4{int kind; const char *name; BBDebugDecl decls[5]; };
struct BBDebugScope_5{int kind; const char *name; BBDebugDecl decls[6]; };
struct BBDebugScope_6{int kind; const char *name; BBDebugDecl decls[7]; };
struct BBDebugScope_7{int kind; const char *name; BBDebugDecl decls[8]; };
struct BBDebugScope_8{int kind; const char *name; BBDebugDecl decls[9]; };
void _maxgui_proxygadgets_progressbar_TPbar_New(struct maxgui_proxygadgets_progressbar_TPbar_obj* o) {
	_maxgui_maxgui_gadget_TProxyGadget_New((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o);
	o->clas = &maxgui_proxygadgets_progressbar_TPbar;
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__void_pixmap = (struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__green_pixmap = (struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__red_pixmap = (struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__yellow_pixmap = (struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_pixmap = (struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__star_pixmap = (struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_pixmap_flags = 2;
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panel = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panel_value = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panels = bbArrayNew1D(":TGadget", 10);
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_labels = bbArrayNew1D(":TGadget", 11);
	BBINT bbt_[]={0,0,0};
	BBARRAY bbt_2 = bbArrayFromData("i",3,bbt_);
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_tcolor = bbt_2;
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_w = 0;
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_h = 0;
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__label_p = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__label_v = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__value = .00000000f;
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__value_warning = 6;
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__value_critical = 8;
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_style = 0;
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_flags = 0;
}
BBINT _maxgui_proxygadgets_progressbar_TPbar_SetFont_TTGuiFont(struct maxgui_proxygadgets_progressbar_TPbar_obj* o,struct maxgui_maxgui_guifont_TGuiFont_obj* bbt_fnt){
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetFont",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TPbar",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"fnt",
				":TGuiFont",
				.var_address=&bbt_fnt
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 89, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(bbt_fnt==&bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 89, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return 0;
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 90, 0};
	bbOnDebugEnterStm(&__stmt_1);
	maxgui_maxgui_SetGadgetFont((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__label_p ,(struct maxgui_maxgui_guifont_TGuiFont_obj*)bbt_fnt,0);
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 91, 0};
	bbOnDebugEnterStm(&__stmt_2);
	maxgui_maxgui_SetGadgetFont((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__label_v ,(struct maxgui_maxgui_guifont_TGuiFont_obj*)bbt_fnt,0);
	bbOnDebugLeaveScope();
	return 0;
}
BBSTRING _maxgui_proxygadgets_progressbar_TPbar_GetText(struct maxgui_proxygadgets_progressbar_TPbar_obj* o){
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"GetText",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TPbar",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 94, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return bbStringFromFloat(((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__value );
}
BBINT _maxgui_proxygadgets_progressbar_TPbar_CleanUp(struct maxgui_proxygadgets_progressbar_TPbar_obj* o){
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"CleanUp",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TPbar",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 97, 0};
	bbOnDebugEnterStm(&__stmt_0);
	brl_hook_RemoveHook(brl_event_EmitEventHook,o->clas->f_EventHook_TObject_iTObjectTObject,(BBOBJECT)o);
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 98, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(o));
	((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)->clas->m_SetProxy_TTGadget((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o,(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject);
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 100, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_labels != &bbEmptyArray){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 101, 0};
		bbOnDebugEnterStm(&__stmt_0);
		{
			BBINT bbt_ss=0;
			BBINT bbt_=(((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_labels ->scales[0]);
			for(;(bbt_ss<bbt_);bbt_ss=(bbt_ss+1)){
				struct BBDebugScope_1 __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						{
							BBDEBUGDECL_LOCAL,
							"ss",
							"i",
							.var_address=&bbt_ss
						},
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 102, 0};
				bbOnDebugEnterStm(&__stmt_0);
				if(((BBObject*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_labels ),(((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_labels )->dims,((BBUINT)bbt_ss)))[((BBUINT)bbt_ss)])!= &bbNullObject){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 102, 0};
					bbOnDebugEnterStm(&__stmt_0);
					maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_labels ),(((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_labels )->dims,((BBUINT)bbt_ss)))[((BBUINT)bbt_ss)]);
					bbOnDebugLeaveScope();
				}
				struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 103, 0};
				bbOnDebugEnterStm(&__stmt_1);
				((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_labels ),(((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_labels )->dims,((BBUINT)bbt_ss)))[((BBUINT)bbt_ss)]=(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
				bbOnDebugLeaveScope();
			}
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 107, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if(((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panels != &bbEmptyArray){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 108, 0};
		bbOnDebugEnterStm(&__stmt_0);
		{
			BBINT bbt_ss2=0;
			BBINT bbt_2=(((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panels ->scales[0]);
			for(;(bbt_ss2<bbt_2);bbt_ss2=(bbt_ss2+1)){
				struct BBDebugScope_1 __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						{
							BBDEBUGDECL_LOCAL,
							"ss",
							"i",
							.var_address=&bbt_ss2
						},
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 109, 0};
				bbOnDebugEnterStm(&__stmt_0);
				if(((BBObject*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panels ),(((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panels )->dims,((BBUINT)bbt_ss2)))[((BBUINT)bbt_ss2)])!= &bbNullObject){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 109, 0};
					bbOnDebugEnterStm(&__stmt_0);
					maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panels ),(((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panels )->dims,((BBUINT)bbt_ss2)))[((BBUINT)bbt_ss2)]);
					bbOnDebugLeaveScope();
				}
				struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 110, 0};
				bbOnDebugEnterStm(&__stmt_1);
				((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panels ),(((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panels )->dims,((BBUINT)bbt_ss2)))[((BBUINT)bbt_ss2)]=(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
				bbOnDebugLeaveScope();
			}
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 114, 0};
	bbOnDebugEnterStm(&__stmt_4);
	if(((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_tcolor != &bbEmptyArray){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 114, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_tcolor =&bbEmptyArray;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 115, 0};
	bbOnDebugEnterStm(&__stmt_5);
	if(((BBObject*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panel )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 115, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panel );
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 115, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panel =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 116, 0};
	bbOnDebugEnterStm(&__stmt_6);
	if(((BBObject*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panel_value )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 116, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panel_value );
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 116, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panel_value =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_7 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 117, 0};
	bbOnDebugEnterStm(&__stmt_7);
	if(((BBObject*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__label_p )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 117, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__label_p );
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 117, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__label_p =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_8 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 118, 0};
	bbOnDebugEnterStm(&__stmt_8);
	if(((BBObject*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__label_v )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 118, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__label_v );
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 118, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__label_v =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_9 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 121, 0};
	bbOnDebugEnterStm(&__stmt_9);
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_labels =&bbEmptyArray;
	struct BBDebugStm __stmt_10 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 122, 0};
	bbOnDebugEnterStm(&__stmt_10);
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panels =&bbEmptyArray;
	struct BBDebugStm __stmt_11 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 123, 0};
	bbOnDebugEnterStm(&__stmt_11);
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__void_pixmap =(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	struct BBDebugStm __stmt_12 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 124, 0};
	bbOnDebugEnterStm(&__stmt_12);
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__green_pixmap =(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	struct BBDebugStm __stmt_13 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 125, 0};
	bbOnDebugEnterStm(&__stmt_13);
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__red_pixmap =(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	struct BBDebugStm __stmt_14 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 126, 0};
	bbOnDebugEnterStm(&__stmt_14);
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__yellow_pixmap =(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	struct BBDebugStm __stmt_15 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 127, 0};
	bbOnDebugEnterStm(&__stmt_15);
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__star_pixmap =(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	struct BBDebugStm __stmt_16 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 128, 0};
	bbOnDebugEnterStm(&__stmt_16);
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_pixmap =(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_progressbar_TPbar_SetProp_i(struct maxgui_proxygadgets_progressbar_TPbar_obj* o,BBINT bbt__val){
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetProp",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TPbar",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"_val",
				"i",
				.var_address=&bbt__val
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 134, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__value =((BBFLOAT)bbt__val);
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 135, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(((unsigned int)(((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_flags )&32)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 135, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o));
		((struct maxgui_proxygadgets_progressbar_TPbar_obj*)o)->clas->m_SetValue_f((struct maxgui_proxygadgets_progressbar_TPbar_obj*)o,((BBFLOAT)bbt__val));
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_progressbar_TPbar_SetRange_ii(struct maxgui_proxygadgets_progressbar_TPbar_obj* o,BBINT bbt__min,BBINT bbt__max){
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o));
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetRange",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TPbar",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"_min",
				"i",
				.var_address=&bbt__min
			},
			{
				BBDEBUGDECL_LOCAL,
				"_max",
				"i",
				.var_address=&bbt__max
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 139, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(bbt__min<0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 139, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt__min=0;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 140, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(bbt__max>10){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 140, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt__max=10;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 141, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__value_warning =bbt__min;
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 142, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__value_critical =bbt__max;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_progressbar_TPbar_SetEnabled_i(struct maxgui_proxygadgets_progressbar_TPbar_obj* o,BBINT bbt_sta){
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetEnabled",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TPbar",
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 146, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(bbt_sta==0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 147, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panel );
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 148, 0};
		bbOnDebugEnterStm(&__stmt_1);
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panel_value );
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 149, 0};
		bbOnDebugEnterStm(&__stmt_2);
		if(((BBObject*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__label_p )!= &bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 149, 0};
			bbOnDebugEnterStm(&__stmt_0);
			maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__label_p );
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 150, 0};
		bbOnDebugEnterStm(&__stmt_3);
		if(((BBObject*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__label_v )!= &bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 150, 0};
			bbOnDebugEnterStm(&__stmt_0);
			maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__label_v );
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 151, 0};
		bbOnDebugEnterStm(&__stmt_4);
		if(((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panels != &bbEmptyArray){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 152, 0};
			bbOnDebugEnterStm(&__stmt_0);
			{
				BBINT bbt_ss=0;
				BBINT bbt_=(((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panels ->scales[0]);
				for(;(bbt_ss<bbt_);bbt_ss=(bbt_ss+1)){
					struct BBDebugScope_1 __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							{
								BBDEBUGDECL_LOCAL,
								"ss",
								"i",
								.var_address=&bbt_ss
							},
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 153, 0};
					bbOnDebugEnterStm(&__stmt_0);
					maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panels ),(((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panels )->dims,((BBUINT)bbt_ss)))[((BBUINT)bbt_ss)]);
					bbOnDebugLeaveScope();
				}
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 158, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panel );
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 159, 0};
		bbOnDebugEnterStm(&__stmt_1);
		maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panel_value );
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 160, 0};
		bbOnDebugEnterStm(&__stmt_2);
		if(((BBObject*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__label_p )!= &bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 160, 0};
			bbOnDebugEnterStm(&__stmt_0);
			maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__label_p );
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 161, 0};
		bbOnDebugEnterStm(&__stmt_3);
		if(((BBObject*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__label_v )!= &bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 161, 0};
			bbOnDebugEnterStm(&__stmt_0);
			maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__label_v );
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 162, 0};
		bbOnDebugEnterStm(&__stmt_4);
		if(((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panels != &bbEmptyArray){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 163, 0};
			bbOnDebugEnterStm(&__stmt_0);
			{
				BBINT bbt_ss2=0;
				BBINT bbt_2=(((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panels ->scales[0]);
				for(;(bbt_ss2<bbt_2);bbt_ss2=(bbt_ss2+1)){
					struct BBDebugScope_1 __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							{
								BBDEBUGDECL_LOCAL,
								"ss",
								"i",
								.var_address=&bbt_ss2
							},
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 164, 0};
					bbOnDebugEnterStm(&__stmt_0);
					maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panels ),(((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panels )->dims,((BBUINT)bbt_ss2)))[((BBUINT)bbt_ss2)]);
					bbOnDebugLeaveScope();
				}
			}
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_progressbar_TPbar_SetShow_i(struct maxgui_proxygadgets_progressbar_TPbar_obj* o,BBINT bbt_bool){
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetShow",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TPbar",
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 174, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(((BBObject*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panel )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 174, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panel ))->clas->m_SetShow_i((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panel ,bbt_bool);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 175, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(((BBObject*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panel_value )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 175, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panel_value ))->clas->m_SetShow_i((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panel_value ,bbt_bool);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 176, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(((BBObject*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__label_p )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 176, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__label_p ))->clas->m_SetShow_i((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__label_p ,bbt_bool);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 177, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if(((BBObject*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__label_v )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 177, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__label_v ))->clas->m_SetShow_i((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__label_v ,bbt_bool);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 178, 0};
	bbOnDebugEnterStm(&__stmt_4);
	if(((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panels != &bbEmptyArray){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 179, 0};
		bbOnDebugEnterStm(&__stmt_0);
		{
			BBINT bbt_ss=0;
			BBINT bbt_=(((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panels ->scales[0]);
			for(;(bbt_ss<bbt_);bbt_ss=(bbt_ss+1)){
				struct BBDebugScope_1 __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						{
							BBDEBUGDECL_LOCAL,
							"ss",
							"i",
							.var_address=&bbt_ss
						},
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 180, 0};
				bbOnDebugEnterStm(&__stmt_0);
				if(((BBObject*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panels ),(((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panels )->dims,((BBUINT)bbt_ss)))[((BBUINT)bbt_ss)])!= &bbNullObject){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 180, 0};
					bbOnDebugEnterStm(&__stmt_0);
					struct maxgui_maxgui_gadget_TGadget_obj* bbt_2;
					(((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest((bbt_2 = ((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panels ),(((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panels )->dims,((BBUINT)bbt_ss)))[((BBUINT)bbt_ss)])))->clas)->m_SetShow_i((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_2,bbt_bool);
					bbOnDebugLeaveScope();
				}
				bbOnDebugLeaveScope();
			}
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 183, 0};
	bbOnDebugEnterStm(&__stmt_5);
	if(((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_labels != &bbEmptyArray){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 184, 0};
		bbOnDebugEnterStm(&__stmt_0);
		{
			BBINT bbt_ss2=0;
			BBINT bbt_3=(((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_labels ->scales[0]);
			for(;(bbt_ss2<bbt_3);bbt_ss2=(bbt_ss2+1)){
				struct BBDebugScope_1 __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						{
							BBDEBUGDECL_LOCAL,
							"ss",
							"i",
							.var_address=&bbt_ss2
						},
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 185, 0};
				bbOnDebugEnterStm(&__stmt_0);
				if(((BBObject*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_labels ),(((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_labels )->dims,((BBUINT)bbt_ss2)))[((BBUINT)bbt_ss2)])!= &bbNullObject){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 185, 0};
					bbOnDebugEnterStm(&__stmt_0);
					struct maxgui_maxgui_gadget_TGadget_obj* bbt_4;
					(((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest((bbt_4 = ((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_labels ),(((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_labels )->dims,((BBUINT)bbt_ss2)))[((BBUINT)bbt_ss2)])))->clas)->m_SetShow_i((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_4,bbt_bool);
					bbOnDebugLeaveScope();
				}
				bbOnDebugLeaveScope();
			}
		}
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_progressbar_TPbar_Class(struct maxgui_proxygadgets_progressbar_TPbar_obj* o){
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Class",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TPbar",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 192, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return 14;
}
BBINT _maxgui_proxygadgets_progressbar_TPbar_SetValue_f(struct maxgui_proxygadgets_progressbar_TPbar_obj* o,BBFLOAT bbt__val){
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o));
	BBINT bbt_new_width=0;
	BBFLOAT bbt_showval=0;
	struct brl_pixmap_TPixmap_obj* bbt_current_pix=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	struct BBDebugScope_5 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetValue",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TPbar",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"_val",
				"f",
				.var_address=&bbt__val
			},
			{
				BBDEBUGDECL_LOCAL,
				"new_width",
				"i",
				.var_address=&bbt_new_width
			},
			{
				BBDEBUGDECL_LOCAL,
				"showval",
				"f",
				.var_address=&bbt_showval
			},
			{
				BBDEBUGDECL_LOCAL,
				"current_pix",
				":TPixmap",
				.var_address=&bbt_current_pix
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 197, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__value =bbt__val;
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 198, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_new_width=((BBINT)((bbt__val*((BBFLOAT)maxgui_maxgui_GadgetWidth((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panel )))-2.00000000f));
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 199, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_showval=(((((BBFLOAT)bbt_new_width)/((BBFLOAT)maxgui_maxgui_GadgetWidth((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panel )))*100.000000f)+1.00000000f);
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 200, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_current_pix=(struct brl_pixmap_TPixmap_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__green_pixmap ;
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 202, 0};
	bbOnDebugEnterStm(&__stmt_4);
	if(((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_style ==0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 204, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panel_value ,0,0,bbt_new_width,(maxgui_maxgui_GadgetHeight((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panel )-2));
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 206, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(((unsigned int)(((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_flags )&16)!=0){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 207, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if(((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_pixmap !=&bbNullObject){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 208, 0};
				bbOnDebugEnterStm(&__stmt_0);
				if((((BBINT)bbt_showval)/10)>=((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__value_warning ){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 208, 0};
					bbOnDebugEnterStm(&__stmt_0);
					maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panel_value ,(struct brl_pixmap_TPixmap_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__yellow_pixmap ,2);
					bbOnDebugLeaveScope();
				}
				struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 210, 0};
				bbOnDebugEnterStm(&__stmt_1);
				if((((BBINT)bbt_showval)/10)>=((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__value_critical ){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 210, 0};
					bbOnDebugEnterStm(&__stmt_0);
					maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panel_value ,(struct brl_pixmap_TPixmap_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__red_pixmap ,2);
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
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 212, 0};
				bbOnDebugEnterStm(&__stmt_0);
				if((((BBINT)bbt_showval)/10)>=((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__value_warning ){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 212, 0};
					bbOnDebugEnterStm(&__stmt_0);
					maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panel_value ,239,212,107,1);
					bbOnDebugLeaveScope();
				}
				struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 213, 0};
				bbOnDebugEnterStm(&__stmt_1);
				if((((BBINT)bbt_showval)/10)>=((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__value_critical ){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 213, 0};
					bbOnDebugEnterStm(&__stmt_0);
					maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panel_value ,228,75,67,1);
					bbOnDebugLeaveScope();
				}
				bbOnDebugLeaveScope();
			}
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 219, 0};
		bbOnDebugEnterStm(&__stmt_2);
		if(bbt__val<.5f){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 220, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if(((BBObject*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__label_p )!= &bbNullObject){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 221, 0};
				bbOnDebugEnterStm(&__stmt_0);
				maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__label_p ,bbStringConcat(bbStringFromInt((BBINT)bbt_showval),&_s0));
				struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 222, 0};
				bbOnDebugEnterStm(&__stmt_1);
				maxgui_maxgui_HideGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__label_v );
				struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 223, 0};
				bbOnDebugEnterStm(&__stmt_2);
				maxgui_maxgui_ShowGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__label_p );
				struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 224, 0};
				bbOnDebugEnterStm(&__stmt_3);
				maxgui_maxgui_SetGadgetTextColor((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__label_p ,0,0,0);
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
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 228, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if(((BBObject*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__label_v )!= &bbNullObject){
				BBINT bbt_hhp=0;
				struct BBDebugScope_1 __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						{
							BBDEBUGDECL_LOCAL,
							"hhp",
							"i",
							.var_address=&bbt_hhp
						},
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 229, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbt_hhp=((((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_h /2)-10);
				struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 230, 0};
				bbOnDebugEnterStm(&__stmt_1);
				if(bbt_hhp<0){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 230, 0};
					bbOnDebugEnterStm(&__stmt_0);
					bbt_hhp=0;
					bbOnDebugLeaveScope();
				}
				struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 231, 0};
				bbOnDebugEnterStm(&__stmt_2);
				maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__label_v ,2,bbt_hhp,maxgui_maxgui_GadgetWidth((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panel ),(maxgui_maxgui_GadgetHeight((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panel )-6));
				struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 232, 0};
				bbOnDebugEnterStm(&__stmt_3);
				maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__label_v ,bbStringConcat(bbStringFromInt((BBINT)bbt_showval),&_s0));
				struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 233, 0};
				bbOnDebugEnterStm(&__stmt_4);
				maxgui_maxgui_HideGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__label_p );
				struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 234, 0};
				bbOnDebugEnterStm(&__stmt_5);
				maxgui_maxgui_ShowGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__label_v );
				struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 235, 0};
				bbOnDebugEnterStm(&__stmt_6);
				maxgui_maxgui_SetGadgetTextColor((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__label_v ,255,255,255);
				bbOnDebugLeaveScope();
			}
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 240, 0};
	bbOnDebugEnterStm(&__stmt_5);
	if(((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_style ==1){
		BBINT bbt_WIDTH=0;
		BBINT bbt_ww=0;
		BBINT bbt_X1=0;
		struct BBDebugScope_3 __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_LOCAL,
					"WIDTH",
					"i",
					.var_address=&bbt_WIDTH
				},
				{
					BBDEBUGDECL_LOCAL,
					"ww",
					"i",
					.var_address=&bbt_ww
				},
				{
					BBDEBUGDECL_LOCAL,
					"X1",
					"i",
					.var_address=&bbt_X1
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 241, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_WIDTH=maxgui_maxgui_GadgetHeight((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panel );
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 242, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_ww=(((bbt_WIDTH-4)/10)-2);
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 243, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_X1=1;
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 244, 0};
		bbOnDebugEnterStm(&__stmt_3);
		if(((unsigned int)(((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_flags )&16)!=0){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 245, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if((((BBINT)bbt_showval)/10)>=((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__value_warning ){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 245, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbt_current_pix=(struct brl_pixmap_TPixmap_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__yellow_pixmap ;
				bbOnDebugLeaveScope();
			}
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 246, 0};
			bbOnDebugEnterStm(&__stmt_1);
			if((((BBINT)bbt_showval)/10)>=((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__value_critical ){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 246, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbt_current_pix=(struct brl_pixmap_TPixmap_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__red_pixmap ;
				bbOnDebugLeaveScope();
			}
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 248, 0};
		bbOnDebugEnterStm(&__stmt_4);
		{
			BBINT bbt_s=0;
			for(;(bbt_s<10);bbt_s=(bbt_s+1)){
				struct BBDebugScope_1 __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						{
							BBDEBUGDECL_LOCAL,
							"s",
							"i",
							.var_address=&bbt_s
						},
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 250, 0};
				bbOnDebugEnterStm(&__stmt_0);
				if(((BBObject*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__void_pixmap )!= &bbNullObject){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 251, 0};
					bbOnDebugEnterStm(&__stmt_0);
					maxgui_maxgui_SetPanelPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panels ),(((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panels )->dims,((BBUINT)bbt_s)))[((BBUINT)bbt_s)],(struct brl_pixmap_TPixmap_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__void_pixmap ,2);
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
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 253, 0};
					bbOnDebugEnterStm(&__stmt_0);
					maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panels ),(((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panels )->dims,((BBUINT)bbt_s)))[((BBUINT)bbt_s)],192,192,192,1);
					bbOnDebugLeaveScope();
				}
				struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 257, 0};
				bbOnDebugEnterStm(&__stmt_1);
				if(bbt_s<=(((BBINT)bbt_showval)/10)){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 259, 0};
					bbOnDebugEnterStm(&__stmt_0);
					if(((BBObject*)bbt_current_pix)!= &bbNullObject){
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 260, 0};
						bbOnDebugEnterStm(&__stmt_0);
						maxgui_maxgui_SetPanelPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panels ),(((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panels )->dims,((BBUINT)bbt_s)))[((BBUINT)bbt_s)],(struct brl_pixmap_TPixmap_obj*)bbt_current_pix,2);
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
						struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 262, 0};
						bbOnDebugEnterStm(&__stmt_0);
						maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panels ),(((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panels )->dims,((BBUINT)bbt_s)))[((BBUINT)bbt_s)],149,208,98,1);
						bbOnDebugLeaveScope();
					}
					bbOnDebugLeaveScope();
				}
				bbOnDebugLeaveScope();
			}
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 294, 0};
	bbOnDebugEnterStm(&__stmt_6);
	if(((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_style ==2){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 296, 0};
		bbOnDebugEnterStm(&__stmt_0);
		{
			BBINT bbt_s2=1;
			for(;(bbt_s2<=5);bbt_s2=(bbt_s2+1)){
				struct BBDebugScope_1 __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						{
							BBDEBUGDECL_LOCAL,
							"s",
							"i",
							.var_address=&bbt_s2
						},
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 297, 0};
				bbOnDebugEnterStm(&__stmt_0);
				if(((BBFLOAT)bbt_s2)<=((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__value ){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 298, 0};
					bbOnDebugEnterStm(&__stmt_0);
					if(((BBObject*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__star_pixmap )!= &bbNullObject){
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 303, 0};
						bbOnDebugEnterStm(&__stmt_0);
						maxgui_maxgui_SetPanelPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panels ),(((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panels )->dims,((BBUINT)(bbt_s2-1))))[((BBUINT)(bbt_s2-1))],(struct brl_pixmap_TPixmap_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar__star_pixmap ,0);
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
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 306, 0};
					bbOnDebugEnterStm(&__stmt_0);
					maxgui_maxgui_SetPanelPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panels ),(((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panels )->dims,((BBUINT)(bbt_s2-1))))[((BBUINT)(bbt_s2-1))],(struct brl_pixmap_TPixmap_obj*)&bbNullObject,0);
					bbOnDebugLeaveScope();
				}
				bbOnDebugLeaveScope();
			}
		}
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_progressbar_TPbar_SetColor_iii(struct maxgui_proxygadgets_progressbar_TPbar_obj* o,BBINT bbt_R,BBINT bbt_G,BBINT bbt_B){
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o));
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetColor",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TPbar",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"R",
				"i",
				.var_address=&bbt_R
			},
			{
				BBDEBUGDECL_LOCAL,
				"G",
				"i",
				.var_address=&bbt_G
			},
			{
				BBDEBUGDECL_LOCAL,
				"B",
				"i",
				.var_address=&bbt_B
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 318, 0};
	bbOnDebugEnterStm(&__stmt_0);
	maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panel ,bbt_R,bbt_G,bbt_B,1);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_progressbar_TPbar_SetTextColor_iii(struct maxgui_proxygadgets_progressbar_TPbar_obj* o,BBINT bbt_R,BBINT bbt_G,BBINT bbt_B){
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o));
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetTextColor",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TPbar",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"R",
				"i",
				.var_address=&bbt_R
			},
			{
				BBDEBUGDECL_LOCAL,
				"G",
				"i",
				.var_address=&bbt_G
			},
			{
				BBDEBUGDECL_LOCAL,
				"B",
				"i",
				.var_address=&bbt_B
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 322, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(((BBObject*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panel_value )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 322, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panel_value ,bbt_R,bbt_G,bbt_B,1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 323, 0};
	bbOnDebugEnterStm(&__stmt_1);
	BBINT bbt_[]={bbt_R,bbt_G,bbt_B};
	BBARRAY bbt_2 = bbArrayFromData("i",3,bbt_);
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_tcolor =bbt_2;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_progressbar_TPbar_SetPixmap_TTPixmapi(struct maxgui_proxygadgets_progressbar_TPbar_obj* o,struct brl_pixmap_TPixmap_obj* bbt_pix,BBINT bbt_flags){
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o));
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetPixmap",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TPbar",
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 327, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_pixmap =(struct brl_pixmap_TPixmap_obj*)bbt_pix;
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 328, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_pixmap_flags =bbt_flags;
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 337, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(((BBObject*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_pixmap )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 337, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_SetPanelPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_panel_value ,(struct brl_pixmap_TPixmap_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_progressbar_tpbar_pixmap ,3);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
struct maxgui_proxygadgets_progressbar_TPbar_obj* maxgui_proxygadgets_progressbar_TPbar_Create_TTPbar_iiiiTTGadgeti(BBINT bbt_x,BBINT bbt_y,BBINT bbt_WIDTH,BBINT bbt_HEIGHT,struct maxgui_maxgui_gadget_TGadget_obj* bbt_group,BBINT bbt_flags){
	struct maxgui_proxygadgets_progressbar_TPbar_obj* bbt_PB=(struct maxgui_proxygadgets_progressbar_TPbar_obj*)&bbNullObject;
	struct BBDebugScope_7 __scope = {
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
				"WIDTH",
				"i",
				.var_address=&bbt_WIDTH
			},
			{
				BBDEBUGDECL_LOCAL,
				"HEIGHT",
				"i",
				.var_address=&bbt_HEIGHT
			},
			{
				BBDEBUGDECL_LOCAL,
				"group",
				":TGadget",
				.var_address=&bbt_group
			},
			{
				BBDEBUGDECL_LOCAL,
				"flags",
				"i",
				.var_address=&bbt_flags
			},
			{
				BBDEBUGDECL_LOCAL,
				"PB",
				":TPbar",
				.var_address=&bbt_PB
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 344, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_PB=(struct maxgui_proxygadgets_progressbar_TPbar_obj*)(struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbObjectNew((BBClass *)&maxgui_proxygadgets_progressbar_TPbar);
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 346, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(bbt_PB))->_maxgui_proxygadgets_progressbar_tpbar__void_pixmap =(struct brl_pixmap_TPixmap_obj*)brl_pixmap_LoadPixmap((BBOBJECT)&_s1);
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 347, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(bbt_PB))->_maxgui_proxygadgets_progressbar_tpbar__green_pixmap =(struct brl_pixmap_TPixmap_obj*)brl_pixmap_LoadPixmap((BBOBJECT)&_s2);
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 348, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(bbt_PB))->_maxgui_proxygadgets_progressbar_tpbar__red_pixmap =(struct brl_pixmap_TPixmap_obj*)brl_pixmap_LoadPixmap((BBOBJECT)&_s3);
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 349, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(bbt_PB))->_maxgui_proxygadgets_progressbar_tpbar__yellow_pixmap =(struct brl_pixmap_TPixmap_obj*)brl_pixmap_LoadPixmap((BBOBJECT)&_s4);
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 350, 0};
	bbOnDebugEnterStm(&__stmt_5);
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(bbt_PB))->_maxgui_proxygadgets_progressbar_tpbar__star_pixmap =(struct brl_pixmap_TPixmap_obj*)brl_pixmap_LoadPixmap((BBOBJECT)&_s5);
	struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 352, 0};
	bbOnDebugEnterStm(&__stmt_6);
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(bbt_PB))->_maxgui_proxygadgets_progressbar_tpbar_w =bbt_WIDTH;
	struct BBDebugStm __stmt_7 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 353, 0};
	bbOnDebugEnterStm(&__stmt_7);
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(bbt_PB))->_maxgui_proxygadgets_progressbar_tpbar_h =bbt_HEIGHT;
	struct BBDebugStm __stmt_8 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 355, 0};
	bbOnDebugEnterStm(&__stmt_8);
	if(((unsigned int)(bbt_flags)&8)!=0){
		BBINT bbt_hh=0;
		BBINT bbt_cou=0;
		BBINT bbt_x2=0;
		BBINT bbt_sw=0;
		struct BBDebugScope_4 __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_LOCAL,
					"hh",
					"i",
					.var_address=&bbt_hh
				},
				{
					BBDEBUGDECL_LOCAL,
					"cou",
					"i",
					.var_address=&bbt_cou
				},
				{
					BBDEBUGDECL_LOCAL,
					"x2",
					"i",
					.var_address=&bbt_x2
				},
				{
					BBDEBUGDECL_LOCAL,
					"sw",
					"i",
					.var_address=&bbt_sw
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 357, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_hh=5;
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 357, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_cou=0;
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 357, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_x2=bbt_x;
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 358, 0};
		bbOnDebugEnterStm(&__stmt_3);
		bbt_sw=(bbt_WIDTH/10);
		struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 360, 0};
		bbOnDebugEnterStm(&__stmt_4);
		while(bbt_x2<((bbt_x+bbt_WIDTH)+2)){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 361, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if(((bbt_cou==0) || (bbt_cou==5)) || (bbt_cou==10)){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 361, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbt_hh=8;
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
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 361, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbt_hh=4;
				bbOnDebugLeaveScope();
			}
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 362, 0};
			bbOnDebugEnterStm(&__stmt_1);
			((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(bbt_PB))->_maxgui_proxygadgets_progressbar_tpbar_labels ),(((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(bbt_PB))->_maxgui_proxygadgets_progressbar_tpbar_labels )->dims,((BBUINT)bbt_cou)))[((BBUINT)bbt_cou)]=(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateLabel(&bbEmptyString,bbt_x2,((bbt_y+bbt_HEIGHT)+1),2,bbt_hh,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group,3);
			struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 363, 0};
			bbOnDebugEnterStm(&__stmt_2);
			bbt_x2+=bbt_sw;
			struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 364, 0};
			bbOnDebugEnterStm(&__stmt_3);
			bbt_cou+=1;
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_9 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 369, 0};
	bbOnDebugEnterStm(&__stmt_9);
	if(((unsigned int)(bbt_flags)&1)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 371, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(((unsigned int)(bbt_flags)&128)!=0){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 372, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(bbt_PB))->_maxgui_proxygadgets_progressbar_tpbar_panel =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreatePanel(bbt_x,bbt_y,bbt_WIDTH,bbt_HEIGHT,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group,0,&bbEmptyString);
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
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 374, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(bbt_PB))->_maxgui_proxygadgets_progressbar_tpbar_panel =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreatePanel(bbt_x,bbt_y,bbt_WIDTH,bbt_HEIGHT,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group,1,&bbEmptyString);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 376, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(bbt_PB))->_maxgui_proxygadgets_progressbar_tpbar_panel_value =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreatePanel(1,1,((BBINT)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(bbt_PB))->_maxgui_proxygadgets_progressbar_tpbar__value ),(bbt_HEIGHT-2),(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(bbt_PB))->_maxgui_proxygadgets_progressbar_tpbar_panel ,0,&bbEmptyString);
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 377, 0};
		bbOnDebugEnterStm(&__stmt_2);
		maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(bbt_PB))->_maxgui_proxygadgets_progressbar_tpbar_panel_value ,10,36,106,1);
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 379, 0};
		bbOnDebugEnterStm(&__stmt_3);
		if(((unsigned int)(bbt_flags)&2)!=0){
			BBINT bbt_hhp=0;
			struct BBDebugScope_1 __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					{
						BBDEBUGDECL_LOCAL,
						"hhp",
						"i",
						.var_address=&bbt_hhp
					},
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 380, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_hhp=((bbt_HEIGHT/2)-10);
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 381, 0};
			bbOnDebugEnterStm(&__stmt_1);
			if(bbt_hhp<0){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 381, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbt_hhp=0;
				bbOnDebugLeaveScope();
			}
			struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 382, 0};
			bbOnDebugEnterStm(&__stmt_2);
			((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(bbt_PB))->_maxgui_proxygadgets_progressbar_tpbar__label_p =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateLabel(&bbEmptyString,0,bbt_hhp,(bbt_WIDTH-5),bbt_HEIGHT,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(bbt_PB))->_maxgui_proxygadgets_progressbar_tpbar_panel ,8);
			struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 383, 0};
			bbOnDebugEnterStm(&__stmt_3);
			if(((BBObject*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(bbt_PB))->_maxgui_proxygadgets_progressbar_tpbar_panel_value )!= &bbNullObject){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 383, 0};
				bbOnDebugEnterStm(&__stmt_0);
				((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(bbt_PB))->_maxgui_proxygadgets_progressbar_tpbar__label_v =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateLabel(&bbEmptyString,0,bbt_hhp,bbt_WIDTH,bbt_HEIGHT,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(bbt_PB))->_maxgui_proxygadgets_progressbar_tpbar_panel_value ,0);
				bbOnDebugLeaveScope();
			}
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 388, 0};
		bbOnDebugEnterStm(&__stmt_4);
		((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(bbt_PB))->_maxgui_proxygadgets_progressbar_tpbar_style =0;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_10 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 392, 0};
	bbOnDebugEnterStm(&__stmt_10);
	if(((unsigned int)(bbt_flags)&4)!=0){
		BBINT bbt_ww=0;
		BBINT bbt_X1=0;
		struct BBDebugScope_2 __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_LOCAL,
					"ww",
					"i",
					.var_address=&bbt_ww
				},
				{
					BBDEBUGDECL_LOCAL,
					"X1",
					"i",
					.var_address=&bbt_X1
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 394, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(bbt_PB))->_maxgui_proxygadgets_progressbar_tpbar_panel =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreatePanel(bbt_x,bbt_y,bbt_WIDTH,bbt_HEIGHT,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group,0,&bbEmptyString);
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 397, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_ww=(((bbt_WIDTH-8)/10)-1);
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 398, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_X1=1;
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 399, 0};
		bbOnDebugEnterStm(&__stmt_3);
		{
			BBINT bbt_s=0;
			for(;(bbt_s<10);bbt_s=(bbt_s+1)){
				struct BBDebugScope_1 __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						{
							BBDEBUGDECL_LOCAL,
							"s",
							"i",
							.var_address=&bbt_s
						},
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 400, 0};
				bbOnDebugEnterStm(&__stmt_0);
				((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(bbt_PB))->_maxgui_proxygadgets_progressbar_tpbar_panels ),(((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(bbt_PB))->_maxgui_proxygadgets_progressbar_tpbar_panels )->dims,((BBUINT)bbt_s)))[((BBUINT)bbt_s)]=(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreatePanel(bbt_X1,2,bbt_ww,(bbt_HEIGHT-8),(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(bbt_PB))->_maxgui_proxygadgets_progressbar_tpbar_panel ,0,&bbEmptyString);
				struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 401, 0};
				bbOnDebugEnterStm(&__stmt_1);
				bbt_X1+=(bbt_ww+2);
				struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 402, 0};
				bbOnDebugEnterStm(&__stmt_2);
				if(((BBObject*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(bbt_PB))->_maxgui_proxygadgets_progressbar_tpbar__void_pixmap )!= &bbNullObject){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 404, 0};
					bbOnDebugEnterStm(&__stmt_0);
					maxgui_maxgui_SetPanelPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(bbt_PB))->_maxgui_proxygadgets_progressbar_tpbar_panels ),(((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(bbt_PB))->_maxgui_proxygadgets_progressbar_tpbar_panels )->dims,((BBUINT)bbt_s)))[((BBUINT)bbt_s)],(struct brl_pixmap_TPixmap_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(bbt_PB))->_maxgui_proxygadgets_progressbar_tpbar__void_pixmap ,2);
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
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 406, 0};
					bbOnDebugEnterStm(&__stmt_0);
					maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(bbt_PB))->_maxgui_proxygadgets_progressbar_tpbar_panels ),(((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(bbt_PB))->_maxgui_proxygadgets_progressbar_tpbar_panels )->dims,((BBUINT)bbt_s)))[((BBUINT)bbt_s)],192,192,192,1);
					bbOnDebugLeaveScope();
				}
				bbOnDebugLeaveScope();
			}
		}
		struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 409, 0};
		bbOnDebugEnterStm(&__stmt_4);
		((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(bbt_PB))->_maxgui_proxygadgets_progressbar_tpbar_style =1;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_11 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 413, 0};
	bbOnDebugEnterStm(&__stmt_11);
	if(((unsigned int)(bbt_flags)&32)!=0){
		BBINT bbt_ww2=0;
		BBINT bbt_X12=0;
		struct BBDebugScope_2 __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_LOCAL,
					"ww",
					"i",
					.var_address=&bbt_ww2
				},
				{
					BBDEBUGDECL_LOCAL,
					"X1",
					"i",
					.var_address=&bbt_X12
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 415, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(bbt_PB))->_maxgui_proxygadgets_progressbar_tpbar_style =2;
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 416, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(bbt_PB))->_maxgui_proxygadgets_progressbar_tpbar_panel =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreatePanel(bbt_x,bbt_y,bbt_WIDTH,bbt_HEIGHT,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group,0,&bbEmptyString);
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 417, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_ww2=32;
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 418, 0};
		bbOnDebugEnterStm(&__stmt_3);
		bbt_X12=1;
		struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 419, 0};
		bbOnDebugEnterStm(&__stmt_4);
		if(((BBObject*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(bbt_PB))->_maxgui_proxygadgets_progressbar_tpbar__star_pixmap )!= &bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 419, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_ww2=brl_pixmap_PixmapWidth((struct brl_pixmap_TPixmap_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(bbt_PB))->_maxgui_proxygadgets_progressbar_tpbar__star_pixmap );
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 421, 0};
		bbOnDebugEnterStm(&__stmt_5);
		{
			BBINT bbt_s2=0;
			for(;(bbt_s2<5);bbt_s2=(bbt_s2+1)){
				struct BBDebugScope_1 __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						{
							BBDEBUGDECL_LOCAL,
							"s",
							"i",
							.var_address=&bbt_s2
						},
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 422, 0};
				bbOnDebugEnterStm(&__stmt_0);
				((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(bbt_PB))->_maxgui_proxygadgets_progressbar_tpbar_panels ),(((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(bbt_PB))->_maxgui_proxygadgets_progressbar_tpbar_panels )->dims,((BBUINT)bbt_s2)))[((BBUINT)bbt_s2)]=(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreatePanel(bbt_X12,2,bbt_ww2,(bbt_HEIGHT-8),(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(bbt_PB))->_maxgui_proxygadgets_progressbar_tpbar_panel ,4,&bbEmptyString);
				struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 423, 0};
				bbOnDebugEnterStm(&__stmt_1);
				bbt_X12+=bbt_ww2;
				struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 424, 0};
				bbOnDebugEnterStm(&__stmt_2);
				if(((BBObject*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(bbt_PB))->_maxgui_proxygadgets_progressbar_tpbar__star_pixmap )!= &bbNullObject){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 425, 0};
					bbOnDebugEnterStm(&__stmt_0);
					maxgui_maxgui_SetPanelPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(bbt_PB))->_maxgui_proxygadgets_progressbar_tpbar_panels ),(((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(bbt_PB))->_maxgui_proxygadgets_progressbar_tpbar_panels )->dims,((BBUINT)bbt_s2)))[((BBUINT)bbt_s2)],(struct brl_pixmap_TPixmap_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(bbt_PB))->_maxgui_proxygadgets_progressbar_tpbar__star_pixmap ,2);
					bbOnDebugLeaveScope();
				}
				bbOnDebugLeaveScope();
			}
		}
		struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 429, 0};
		bbOnDebugEnterStm(&__stmt_6);
		((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(bbt_PB))->clas->m_SetValue_f((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbt_PB,5.00000000f);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_12 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 434, 0};
	bbOnDebugEnterStm(&__stmt_12);
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(bbt_PB))->_maxgui_proxygadgets_progressbar_tpbar_flags =bbt_flags;
	struct BBDebugStm __stmt_13 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 435, 0};
	bbOnDebugEnterStm(&__stmt_13);
	((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(bbt_PB))->clas->m_SetProxy_TTGadget((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbt_PB,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_PB,(BBClass*)&maxgui_maxgui_gadget_TGadget)));
	struct BBDebugStm __stmt_14 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 436, 0};
	bbOnDebugEnterStm(&__stmt_14);
	brl_hook_AddHook(brl_event_EmitEventHook,maxgui_proxygadgets_progressbar_TPbar_EventHook_TObject_iTObjectTObject,(BBOBJECT)bbt_PB,0);
	struct BBDebugStm __stmt_15 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 437, 0};
	bbOnDebugEnterStm(&__stmt_15);
	bbOnDebugLeaveScope();
	return (struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbt_PB;
}
BBOBJECT maxgui_proxygadgets_progressbar_TPbar_EventHook_TObject_iTObjectTObject(BBINT bbt_id,BBOBJECT bbt_data,BBOBJECT bbt_context){
	struct brl_event_TEvent_obj* bbt_event=(struct brl_event_TEvent_obj*)&bbNullObject;
	struct maxgui_proxygadgets_progressbar_TPbar_obj* bbt_pbar=(struct maxgui_proxygadgets_progressbar_TPbar_obj*)&bbNullObject;
	BBINT bbt_i=0;
	struct BBDebugScope_6 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"EventHook",
		{
			{
				BBDEBUGDECL_LOCAL,
				"id",
				"i",
				.var_address=&bbt_id
			},
			{
				BBDEBUGDECL_LOCAL,
				"data",
				":Object",
				.var_address=&bbt_data
			},
			{
				BBDEBUGDECL_LOCAL,
				"context",
				":Object",
				.var_address=&bbt_context
			},
			{
				BBDEBUGDECL_LOCAL,
				"event",
				":TEvent",
				.var_address=&bbt_event
			},
			{
				BBDEBUGDECL_LOCAL,
				"pbar",
				":TPbar",
				.var_address=&bbt_pbar
			},
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 441, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_event=(struct brl_event_TEvent_obj*)&bbNullObject;
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 442, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_pbar=(struct maxgui_proxygadgets_progressbar_TPbar_obj*)&bbNullObject;
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 443, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_i=0;
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 444, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_event=(struct brl_event_TEvent_obj*)((struct brl_event_TEvent_obj*)bbObjectDowncast((BBOBJECT)bbt_data,(BBClass*)&brl_event_TEvent));
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 445, 0};
	bbOnDebugEnterStm(&__stmt_4);
	if(((BBObject*)bbt_event)!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 446, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_pbar=(struct maxgui_proxygadgets_progressbar_TPbar_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbObjectDowncast((BBOBJECT)bbt_context,(BBClass*)&maxgui_proxygadgets_progressbar_TPbar));
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 447, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(((BBObject*)bbt_pbar)!= &bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 449, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if(((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(bbt_pbar))->_maxgui_proxygadgets_progressbar_tpbar_style ==2){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 452, 0};
				bbOnDebugEnterStm(&__stmt_0);
				if(((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_event))->_brl_event_tevent_id ==1029){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 453, 0};
					bbOnDebugEnterStm(&__stmt_0);
					maxgui_maxgui_SetPointer(12);
					bbOnDebugLeaveScope();
				}
				struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 456, 0};
				bbOnDebugEnterStm(&__stmt_1);
				if(((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_event))->_brl_event_tevent_id ==1030){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 457, 0};
					bbOnDebugEnterStm(&__stmt_0);
					maxgui_maxgui_SetPointer(0);
					bbOnDebugLeaveScope();
				}
				struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 462, 0};
				bbOnDebugEnterStm(&__stmt_2);
				if(((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_event))->_brl_event_tevent_id ==1025){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 463, 0};
					bbOnDebugEnterStm(&__stmt_0);
					if(((unsigned int)(((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(bbt_pbar))->_maxgui_proxygadgets_progressbar_tpbar_flags )&64)!=0){
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 464, 0};
						bbOnDebugEnterStm(&__stmt_0);
						{
							BBINT bbt_s=0;
							for(;(bbt_s<5);bbt_s=(bbt_s+1)){
								struct BBDebugScope_1 __scope = {
									BBDEBUGSCOPE_LOCALBLOCK,
									0,
									{
										{
											BBDEBUGDECL_LOCAL,
											"s",
											"i",
											.var_address=&bbt_s
										},
										BBDEBUGDECL_END 
									}
								};
								bbOnDebugEnterScope(&__scope);
								struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 465, 0};
								bbOnDebugEnterStm(&__stmt_0);
								if(((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_event))->_brl_event_tevent_source ==((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(bbt_pbar))->_maxgui_proxygadgets_progressbar_tpbar_panels ),(((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(bbt_pbar))->_maxgui_proxygadgets_progressbar_tpbar_panels )->dims,((BBUINT)bbt_s)))[((BBUINT)bbt_s)]){
									struct BBDebugScope __scope = {
										BBDEBUGSCOPE_LOCALBLOCK,
										0,
										{
											BBDEBUGDECL_END 
										}
									};
									bbOnDebugEnterScope(&__scope);
									struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 466, 0};
									bbOnDebugEnterStm(&__stmt_0);
									((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(bbt_pbar))->clas->m_SetProp_i((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbt_pbar,(bbt_s+1));
									struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 467, 0};
									bbOnDebugEnterStm(&__stmt_1);
									brl_event_EmitEvent((struct brl_event_TEvent_obj*)brl_event_CreateEvent(8193,(BBOBJECT)bbt_pbar,((BBINT)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbNullObjectTest(bbt_pbar))->_maxgui_proxygadgets_progressbar_tpbar__value ),0,0,0,(BBOBJECT)&bbNullObject));
									struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 468, 0};
									bbOnDebugEnterStm(&__stmt_2);
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
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 478, 0};
	bbOnDebugEnterStm(&__stmt_5);
	bbOnDebugLeaveScope();
	return (BBOBJECT)bbt_data;
}
struct BBDebugScope_36 maxgui_proxygadgets_progressbar_TPbar_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TPbar",
	{
		{
			BBDEBUGDECL_FIELD,
			"_void_pixmap",
			":TPixmap",
			.field_offset=offsetof(struct maxgui_proxygadgets_progressbar_TPbar_obj,_maxgui_proxygadgets_progressbar_tpbar__void_pixmap)
		},
		{
			BBDEBUGDECL_FIELD,
			"_green_pixmap",
			":TPixmap",
			.field_offset=offsetof(struct maxgui_proxygadgets_progressbar_TPbar_obj,_maxgui_proxygadgets_progressbar_tpbar__green_pixmap)
		},
		{
			BBDEBUGDECL_FIELD,
			"_RED_pixmap",
			":TPixmap",
			.field_offset=offsetof(struct maxgui_proxygadgets_progressbar_TPbar_obj,_maxgui_proxygadgets_progressbar_tpbar__red_pixmap)
		},
		{
			BBDEBUGDECL_FIELD,
			"_YELLOW_pixmap",
			":TPixmap",
			.field_offset=offsetof(struct maxgui_proxygadgets_progressbar_TPbar_obj,_maxgui_proxygadgets_progressbar_tpbar__yellow_pixmap)
		},
		{
			BBDEBUGDECL_FIELD,
			"pixmap",
			":TPixmap",
			.field_offset=offsetof(struct maxgui_proxygadgets_progressbar_TPbar_obj,_maxgui_proxygadgets_progressbar_tpbar_pixmap)
		},
		{
			BBDEBUGDECL_FIELD,
			"_star_pixmap",
			":TPixmap",
			.field_offset=offsetof(struct maxgui_proxygadgets_progressbar_TPbar_obj,_maxgui_proxygadgets_progressbar_tpbar__star_pixmap)
		},
		{
			BBDEBUGDECL_FIELD,
			"pixmap_flags",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_progressbar_TPbar_obj,_maxgui_proxygadgets_progressbar_tpbar_pixmap_flags)
		},
		{
			BBDEBUGDECL_FIELD,
			"panel",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_progressbar_TPbar_obj,_maxgui_proxygadgets_progressbar_tpbar_panel)
		},
		{
			BBDEBUGDECL_FIELD,
			"panel_value",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_progressbar_TPbar_obj,_maxgui_proxygadgets_progressbar_tpbar_panel_value)
		},
		{
			BBDEBUGDECL_FIELD,
			"panels",
			"[]:TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_progressbar_TPbar_obj,_maxgui_proxygadgets_progressbar_tpbar_panels)
		},
		{
			BBDEBUGDECL_FIELD,
			"labels",
			"[]:TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_progressbar_TPbar_obj,_maxgui_proxygadgets_progressbar_tpbar_labels)
		},
		{
			BBDEBUGDECL_FIELD,
			"tcolor",
			"[]i",
			.field_offset=offsetof(struct maxgui_proxygadgets_progressbar_TPbar_obj,_maxgui_proxygadgets_progressbar_tpbar_tcolor)
		},
		{
			BBDEBUGDECL_FIELD,
			"w",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_progressbar_TPbar_obj,_maxgui_proxygadgets_progressbar_tpbar_w)
		},
		{
			BBDEBUGDECL_FIELD,
			"h",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_progressbar_TPbar_obj,_maxgui_proxygadgets_progressbar_tpbar_h)
		},
		{
			BBDEBUGDECL_FIELD,
			"_label_P",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_progressbar_TPbar_obj,_maxgui_proxygadgets_progressbar_tpbar__label_p)
		},
		{
			BBDEBUGDECL_FIELD,
			"_label_V",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_progressbar_TPbar_obj,_maxgui_proxygadgets_progressbar_tpbar__label_v)
		},
		{
			BBDEBUGDECL_FIELD,
			"_value",
			"f",
			.field_offset=offsetof(struct maxgui_proxygadgets_progressbar_TPbar_obj,_maxgui_proxygadgets_progressbar_tpbar__value)
		},
		{
			BBDEBUGDECL_FIELD,
			"_value_warning",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_progressbar_TPbar_obj,_maxgui_proxygadgets_progressbar_tpbar__value_warning)
		},
		{
			BBDEBUGDECL_FIELD,
			"_value_critical",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_progressbar_TPbar_obj,_maxgui_proxygadgets_progressbar_tpbar__value_critical)
		},
		{
			BBDEBUGDECL_FIELD,
			"STYLE",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_progressbar_TPbar_obj,_maxgui_proxygadgets_progressbar_tpbar_style)
		},
		{
			BBDEBUGDECL_FIELD,
			"flags",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_progressbar_TPbar_obj,_maxgui_proxygadgets_progressbar_tpbar_flags)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_maxgui_proxygadgets_progressbar_TPbar_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetFont",
			"(:TGuiFont)i",
			.var_address=(void*)&_maxgui_proxygadgets_progressbar_TPbar_SetFont_TTGuiFont
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetText",
			"()$",
			.var_address=(void*)&_maxgui_proxygadgets_progressbar_TPbar_GetText
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"CleanUp",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_progressbar_TPbar_CleanUp
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetProp",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_progressbar_TPbar_SetProp_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetRange",
			"(i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_progressbar_TPbar_SetRange_ii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetEnabled",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_progressbar_TPbar_SetEnabled_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetShow",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_progressbar_TPbar_SetShow_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Class",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_progressbar_TPbar_Class
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetValue",
			"(f)i",
			.var_address=(void*)&_maxgui_proxygadgets_progressbar_TPbar_SetValue_f
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetColor",
			"(i,i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_progressbar_TPbar_SetColor_iii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetTextColor",
			"(i,i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_progressbar_TPbar_SetTextColor_iii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetPixmap",
			"(:TPixmap,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_progressbar_TPbar_SetPixmap_TTPixmapi
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Create",
			"(i,i,i,i,:TGadget,i):TPbar",
			.var_address=(void*)&maxgui_proxygadgets_progressbar_TPbar_Create_TTPbar_iiiiTTGadgeti
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"EventHook",
			"(i,:Object,:Object):Object",
			.var_address=(void*)&maxgui_proxygadgets_progressbar_TPbar_EventHook_TObject_iTObjectTObject
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_maxgui_proxygadgets_progressbar_TPbar maxgui_proxygadgets_progressbar_TPbar={
	&maxgui_maxgui_gadget_TProxyGadget,
	bbObjectFree,
	(BBDebugScope*)&maxgui_proxygadgets_progressbar_TPbar_scope,
	sizeof(struct maxgui_proxygadgets_progressbar_TPbar_obj),
	(void (*)(BBOBJECT))_maxgui_proxygadgets_progressbar_TPbar_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct maxgui_proxygadgets_progressbar_TPbar_obj,_maxgui_proxygadgets_progressbar_tpbar_flags) - sizeof(void*) + sizeof(BBINT)
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
	,_maxgui_maxgui_gadget_TProxyGadget_SetItem_iSSiTObjecti
	,_maxgui_maxgui_gadget_TProxyGadget_RemoveItem_i
	,_maxgui_maxgui_gadget_TProxyGadget_ItemCount
	,_maxgui_maxgui_gadget_TProxyGadget_ItemText_i
	,_maxgui_maxgui_gadget_TProxyGadget_ItemTip_i
	,_maxgui_maxgui_gadget_TProxyGadget_ItemFlags_i
	,_maxgui_maxgui_gadget_TProxyGadget_ItemIcon_i
	,_maxgui_maxgui_gadget_TProxyGadget_ItemExtra_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetItemState_ii
	,_maxgui_maxgui_gadget_TProxyGadget_ItemState_i
	,_maxgui_maxgui_gadget_TProxyGadget_SelectItem_ii
	,_maxgui_maxgui_gadget_TProxyGadget_SelectedItem
	,_maxgui_maxgui_gadget_TProxyGadget_SelectedItems
	,_maxgui_maxgui_gadget_TGadget_Insert_TTGadgeti
	,_maxgui_maxgui_gadget_TProxyGadget_Query_i
	,_maxgui_maxgui_gadget_TGadget_ScaleFactor
	,_maxgui_proxygadgets_progressbar_TPbar_CleanUp
	,_maxgui_maxgui_gadget_TProxyGadget_Free
	,_maxgui_maxgui_gadget_TProxyGadget_Rethink
	,_maxgui_maxgui_gadget_TProxyGadget_ClientWidth
	,_maxgui_maxgui_gadget_TProxyGadget_ClientHeight
	,_maxgui_maxgui_gadget_TProxyGadget_Activate_i
	,_maxgui_maxgui_gadget_TProxyGadget_State
	,_maxgui_maxgui_gadget_TProxyGadget_SetText_S
	,_maxgui_proxygadgets_progressbar_TPbar_GetText
	,_maxgui_proxygadgets_progressbar_TPbar_SetFont_TTGuiFont
	,_maxgui_proxygadgets_progressbar_TPbar_SetColor_iii
	,_maxgui_maxgui_gadget_TProxyGadget_RemoveColor
	,_maxgui_maxgui_gadget_TProxyGadget_SetAlpha_f
	,_maxgui_proxygadgets_progressbar_TPbar_SetTextColor_iii
	,_maxgui_maxgui_gadget_TProxyGadget_SetTooltip_S
	,_maxgui_maxgui_gadget_TProxyGadget_GetTooltip
	,_maxgui_proxygadgets_progressbar_TPbar_SetPixmap_TTPixmapi
	,_maxgui_maxgui_gadget_TProxyGadget_SetIconStrip_TTIconStrip
	,_maxgui_proxygadgets_progressbar_TPbar_SetShow_i
	,_maxgui_proxygadgets_progressbar_TPbar_SetEnabled_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetSelected_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetHotKey_ii
	,_maxgui_maxgui_gadget_TProxyGadget_SetSensitivity_i
	,_maxgui_maxgui_gadget_TProxyGadget_GetSensitivity
	,_maxgui_proxygadgets_progressbar_TPbar_Class
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
	,_maxgui_proxygadgets_progressbar_TPbar_SetValue_f
	,_maxgui_proxygadgets_progressbar_TPbar_SetRange_ii
	,_maxgui_proxygadgets_progressbar_TPbar_SetProp_i
	,_maxgui_maxgui_gadget_TProxyGadget_GetProp
	,_maxgui_maxgui_gadget_TProxyGadget_AttachGraphics_i
	,_maxgui_maxgui_gadget_TProxyGadget_CanvasGraphics
	,_maxgui_maxgui_gadget_TProxyGadget_Run_S
	,_maxgui_maxgui_gadget_TProxyGadget_SetProxy_TTGadget
	,_maxgui_maxgui_gadget_TProxyGadget_GetProxy
	,_maxgui_maxgui_gadget_TProxyGadget_SetStatus_S
	,maxgui_proxygadgets_progressbar_TPbar_Create_TTPbar_iiiiTTGadgeti
	,maxgui_proxygadgets_progressbar_TPbar_EventHook_TObject_iTObjectTObject
};

struct maxgui_maxgui_gadget_TGadget_obj* maxgui_proxygadgets_progressbar_CreatePbar(BBINT bbt_x,BBINT bbt_y,BBINT bbt_WIDTH,BBINT bbt_HEIGHT,struct maxgui_maxgui_gadget_TGadget_obj* bbt_group,BBINT bbt_flags){
	struct BBDebugScope_6 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"CreatePbar",
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
				"WIDTH",
				"i",
				.var_address=&bbt_WIDTH
			},
			{
				BBDEBUGDECL_LOCAL,
				"HEIGHT",
				"i",
				.var_address=&bbt_HEIGHT
			},
			{
				BBDEBUGDECL_LOCAL,
				"group",
				":TGadget",
				.var_address=&bbt_group
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ProgressBar.bmx", 52, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return (struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)maxgui_proxygadgets_progressbar_TPbar_Create_TTPbar_iiiiTTGadgeti(bbt_x,bbt_y,bbt_WIDTH,bbt_HEIGHT,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group,bbt_flags),(BBClass*)&maxgui_maxgui_gadget_TGadget));
}
static int _bb_maxgui_proxygadgets_progressbar_inited = 0;
int _bb_maxgui_proxygadgets_progressbar(){
	if (!_bb_maxgui_proxygadgets_progressbar_inited) {
		_bb_maxgui_proxygadgets_progressbar_inited = 1;
		__bb_brl_blitz_blitz();
		__bb_maxgui_drivers_drivers();
		bbObjectRegisterType((BBCLASS)&maxgui_proxygadgets_progressbar_TPbar);
		struct BBDebugScope_8 __scope = {
			BBDEBUGSCOPE_FUNCTION,
			"ProgressBar",
			{
				{
					BBDEBUGDECL_CONST,
					"PBAR_STANDARD",
					"i",
					.const_value=&_s6
				},
				{
					BBDEBUGDECL_CONST,
					"PBAR_SHOW",
					"i",
					.const_value=&_s7
				},
				{
					BBDEBUGDECL_CONST,
					"PBAR_DISCRETE",
					"i",
					.const_value=&_s8
				},
				{
					BBDEBUGDECL_CONST,
					"PBAR_INDICATOR",
					"i",
					.const_value=&_s9
				},
				{
					BBDEBUGDECL_CONST,
					"PBAR_ALERT",
					"i",
					.const_value=&_s10
				},
				{
					BBDEBUGDECL_CONST,
					"PBAR_RATING",
					"i",
					.const_value=&_s11
				},
				{
					BBDEBUGDECL_CONST,
					"PBAR_ACTIVE",
					"i",
					.const_value=&_s12
				},
				{
					BBDEBUGDECL_CONST,
					"PBAR_NOBORDER",
					"i",
					.const_value=&_s13
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