#include "colorpicker.bmx.debug.win32.x64.h"
static BBString _s5={
	&bbStringClass,
	1,
	{32}
};
static BBString _s4={
	&bbStringClass,
	3,
	{32,66,58}
};
static BBString _s3={
	&bbStringClass,
	3,
	{32,71,58}
};
static BBString _s6={
	&bbStringClass,
	1,
	{36}
};
static BBString _s0={
	&bbStringClass,
	1,
	{44}
};
static BBString _s2={
	&bbStringClass,
	3,
	{48,48,48}
};
static BBString _s1={
	&bbStringClass,
	2,
	{82,58}
};
struct BBDebugScope_1{int kind; const char *name; BBDebugDecl decls[2]; };
struct BBDebugScope_18{int kind; const char *name; BBDebugDecl decls[19]; };
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
struct BBDebugScope_3{int kind; const char *name; BBDebugDecl decls[4]; };
struct BBDebugScope_4{int kind; const char *name; BBDebugDecl decls[5]; };
struct BBDebugScope_5{int kind; const char *name; BBDebugDecl decls[6]; };
struct BBDebugScope_6{int kind; const char *name; BBDebugDecl decls[7]; };
struct BBDebugScope_8{int kind; const char *name; BBDebugDecl decls[9]; };
void _maxgui_proxygadgets_colorpicker_tColorpicker_New(struct maxgui_proxygadgets_colorpicker_tColorpicker_obj* o) {
	_maxgui_maxgui_gadget_TProxyGadget_New((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o);
	o->clas = &maxgui_proxygadgets_colorpicker_tColorpicker;
	((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_panel = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_label = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_button = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb = bbArrayNew1D("i", 3);
	((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner = bbArrayNew1D(":TSpinner", 3);
}
BBINT _maxgui_proxygadgets_colorpicker_tColorpicker_Class(struct maxgui_proxygadgets_colorpicker_tColorpicker_obj* o){
	((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Class",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tColorpicker",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 42, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return 33;
}
BBINT _maxgui_proxygadgets_colorpicker_tColorpicker_SetFont_TTGuiFont(struct maxgui_proxygadgets_colorpicker_tColorpicker_obj* o,struct maxgui_maxgui_guifont_TGuiFont_obj* bbt_fnt){
	((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetFont",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tColorpicker",
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 46, 0};
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 46, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return 0;
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 47, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(((BBObject*)((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_label )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 47, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_SetGadgetFont((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_label ,(struct maxgui_maxgui_guifont_TGuiFont_obj*)bbt_fnt,0);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 48, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(((BBObject*)((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_button )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 48, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_SetGadgetFont((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_button ,(struct maxgui_maxgui_guifont_TGuiFont_obj*)bbt_fnt,0);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 50, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner != &bbEmptyArray){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 51, 0};
		bbOnDebugEnterStm(&__stmt_0);
		BBARRAY bbt_=((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ;
		BBUINT bbt_2=0U;
		while(bbt_2<((BBUINT)(bbt_->scales[0]))){
			struct maxgui_proxygadgets_spinner_TSpinner_obj* bbt_sp=(struct maxgui_proxygadgets_spinner_TSpinner_obj*)&bbNullObject;
			struct BBDebugScope_1 __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					{
						BBDEBUGDECL_LOCAL,
						"sp",
						":TSpinner",
						.var_address=&bbt_sp
					},
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 51, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_sp=(struct maxgui_proxygadgets_spinner_TSpinner_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATAINDEX((bbt_),(bbt_)->dims,bbt_2))[bbt_2];
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 51, 0};
			bbOnDebugEnterStm(&__stmt_1);
			bbt_2=(bbt_2+1U);
			struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 51, 0};
			bbOnDebugEnterStm(&__stmt_2);
			if(bbt_sp==&bbNullObject){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 51, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				continue;
			}
			struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 52, 0};
			bbOnDebugEnterStm(&__stmt_3);
			maxgui_maxgui_SetGadgetFont((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_sp,(BBClass*)&maxgui_maxgui_gadget_TGadget)),(struct maxgui_maxgui_guifont_TGuiFont_obj*)bbt_fnt,0);
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_colorpicker_tColorpicker_CleanUp(struct maxgui_proxygadgets_colorpicker_tColorpicker_obj* o){
	((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"CleanUp",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tColorpicker",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 59, 0};
	bbOnDebugEnterStm(&__stmt_0);
	brl_hook_RemoveHook(brl_event_EmitEventHook,o->clas->f_eventHandler_TObject_iTObjectTObject,(BBOBJECT)o);
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 61, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(((BBObject*)((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_label )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 61, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_label );
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 61, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_label =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 62, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(((BBObject*)((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_button )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 62, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_button );
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 62, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_button =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 63, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if(((BBObject*)((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_panel )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 63, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_panel );
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 63, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_panel =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 64, 0};
	bbOnDebugEnterStm(&__stmt_4);
	if(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner != &bbEmptyArray){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 65, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner )->dims,0U))[0U],(BBClass*)&maxgui_maxgui_gadget_TGadget)));
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 66, 0};
		bbOnDebugEnterStm(&__stmt_1);
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner )->dims,1U))[1U],(BBClass*)&maxgui_maxgui_gadget_TGadget)));
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 67, 0};
		bbOnDebugEnterStm(&__stmt_2);
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner )->dims,2U))[2U],(BBClass*)&maxgui_maxgui_gadget_TGadget)));
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 68, 0};
		bbOnDebugEnterStm(&__stmt_3);
		((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner =&bbEmptyArray;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 70, 0};
	bbOnDebugEnterStm(&__stmt_5);
	(&maxgui_proxygadgets_colorpicker_tColorpicker)->super->m_CleanUp((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_colorpicker_tColorpicker_SetShow_i(struct maxgui_proxygadgets_colorpicker_tColorpicker_obj* o,BBINT bbt_bool){
	((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetShow",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tColorpicker",
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 74, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_panel ))->clas->m_SetShow_i((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_panel ,bbt_bool);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_colorpicker_tColorpicker_SetEnabled_i(struct maxgui_proxygadgets_colorpicker_tColorpicker_obj* o,BBINT bbt_status){
	((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetEnabled",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tColorpicker",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"status",
				"i",
				.var_address=&bbt_status
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 78, 0};
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 79, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_panel );
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 80, 0};
		bbOnDebugEnterStm(&__stmt_1);
		maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_label );
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 81, 0};
		bbOnDebugEnterStm(&__stmt_2);
		maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_button );
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 82, 0};
		bbOnDebugEnterStm(&__stmt_3);
		if(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner != &bbEmptyArray){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 83, 0};
			bbOnDebugEnterStm(&__stmt_0);
			maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner )->dims,0U))[0U],(BBClass*)&maxgui_maxgui_gadget_TGadget)));
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 84, 0};
			bbOnDebugEnterStm(&__stmt_1);
			maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner )->dims,1U))[1U],(BBClass*)&maxgui_maxgui_gadget_TGadget)));
			struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 85, 0};
			bbOnDebugEnterStm(&__stmt_2);
			maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner )->dims,2U))[2U],(BBClass*)&maxgui_maxgui_gadget_TGadget)));
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 88, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_panel );
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 89, 0};
		bbOnDebugEnterStm(&__stmt_1);
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_label );
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 90, 0};
		bbOnDebugEnterStm(&__stmt_2);
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_button );
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 91, 0};
		bbOnDebugEnterStm(&__stmt_3);
		if(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner != &bbEmptyArray){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 92, 0};
			bbOnDebugEnterStm(&__stmt_0);
			maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner )->dims,0U))[0U],(BBClass*)&maxgui_maxgui_gadget_TGadget)));
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 93, 0};
			bbOnDebugEnterStm(&__stmt_1);
			maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner )->dims,1U))[1U],(BBClass*)&maxgui_maxgui_gadget_TGadget)));
			struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 94, 0};
			bbOnDebugEnterStm(&__stmt_2);
			maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner )->dims,2U))[2U],(BBClass*)&maxgui_maxgui_gadget_TGadget)));
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
struct maxgui_proxygadgets_colorpicker_tColorpicker_obj* maxgui_proxygadgets_colorpicker_tColorpicker_Create_TtColorpicker_iiiiTTGadgeti(BBINT bbt_x,BBINT bbt_y,BBINT bbt_w,BBINT bbt_h,struct maxgui_maxgui_gadget_TGadget_obj* bbt_group,BBINT bbt_style){
	struct maxgui_proxygadgets_colorpicker_tColorpicker_obj* bbt_sp=(struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)&bbNullObject;
	BBINT bbt_w1=0;
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
				"style",
				"i",
				.var_address=&bbt_style
			},
			{
				BBDEBUGDECL_LOCAL,
				"sp",
				":tColorpicker",
				.var_address=&bbt_sp
			},
			{
				BBDEBUGDECL_LOCAL,
				"w1",
				"i",
				.var_address=&bbt_w1
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 103, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_sp=(struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)(struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbObjectNew((BBClass *)&maxgui_proxygadgets_colorpicker_tColorpicker);
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 104, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_w1=((bbt_w-25)/3);
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 105, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_colorpicker_tcolorpicker_panel =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreatePanel(bbt_x,bbt_y,bbt_w,bbt_h,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group,0,&bbEmptyString);
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 106, 0};
	bbOnDebugEnterStm(&__stmt_3);
	BBINT bbt_[]={255,255,255};
	BBARRAY bbt_2 = bbArrayFromData("i",3,bbt_);
	((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb =bbt_2;
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 107, 0};
	bbOnDebugEnterStm(&__stmt_4);
	if(bbt_style==2){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 108, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_colorpicker_tcolorpicker_label =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateTextField(1,1,(bbt_w-25),(bbt_h-3),(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_colorpicker_tcolorpicker_panel ,0);
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 107, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(bbt_style==3){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 110, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner )->dims,0U))[0U]=(struct maxgui_proxygadgets_spinner_TSpinner_obj*)maxgui_proxygadgets_spinner_CreateSpinner(0,0,bbt_w1,25,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_colorpicker_tcolorpicker_panel ,0);
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 111, 0};
			bbOnDebugEnterStm(&__stmt_1);
			((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner )->dims,1U))[1U]=(struct maxgui_proxygadgets_spinner_TSpinner_obj*)maxgui_proxygadgets_spinner_CreateSpinner(bbt_w1,0,bbt_w1,25,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_colorpicker_tcolorpicker_panel ,0);
			struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 112, 0};
			bbOnDebugEnterStm(&__stmt_2);
			((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner )->dims,2U))[2U]=(struct maxgui_proxygadgets_spinner_TSpinner_obj*)maxgui_proxygadgets_spinner_CreateSpinner((bbt_w1*2),0,bbt_w1,25,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_colorpicker_tcolorpicker_panel ,0);
			struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 113, 0};
			bbOnDebugEnterStm(&__stmt_3);
			maxgui_proxygadgets_spinner_SetSpinnerRange((struct maxgui_proxygadgets_spinner_TSpinner_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner )->dims,0U))[0U],0.00000000000000000,255.00000000000000,0);
			struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 114, 0};
			bbOnDebugEnterStm(&__stmt_4);
			maxgui_proxygadgets_spinner_SetSpinnerRange((struct maxgui_proxygadgets_spinner_TSpinner_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner )->dims,1U))[1U],0.00000000000000000,255.00000000000000,0);
			struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 115, 0};
			bbOnDebugEnterStm(&__stmt_5);
			maxgui_proxygadgets_spinner_SetSpinnerRange((struct maxgui_proxygadgets_spinner_TSpinner_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner )->dims,2U))[2U],0.00000000000000000,255.00000000000000,0);
			struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 116, 0};
			bbOnDebugEnterStm(&__stmt_6);
			maxgui_proxygadgets_spinner_SetSpinnerValue((struct maxgui_proxygadgets_spinner_TSpinner_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner )->dims,0U))[0U],255.00000000000000);
			struct BBDebugStm __stmt_7 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 117, 0};
			bbOnDebugEnterStm(&__stmt_7);
			maxgui_proxygadgets_spinner_SetSpinnerValue((struct maxgui_proxygadgets_spinner_TSpinner_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner )->dims,1U))[1U],255.00000000000000);
			struct BBDebugStm __stmt_8 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 118, 0};
			bbOnDebugEnterStm(&__stmt_8);
			maxgui_proxygadgets_spinner_SetSpinnerValue((struct maxgui_proxygadgets_spinner_TSpinner_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner )->dims,2U))[2U],255.00000000000000);
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
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 120, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_colorpicker_tcolorpicker_label =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateLabel(&bbEmptyString,1,1,(bbt_w-25),(bbt_h-3),(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_colorpicker_tcolorpicker_panel ,18);
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 123, 0};
	bbOnDebugEnterStm(&__stmt_5);
	((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_colorpicker_tcolorpicker_button =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreatePanel((bbt_w-24),1,22,(bbt_h-2),(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_colorpicker_tcolorpicker_panel ,1,&bbEmptyString);
	struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 125, 0};
	bbOnDebugEnterStm(&__stmt_6);
	((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_maxgui_gadget_tgadget_style =bbt_style;
	struct BBDebugStm __stmt_7 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 127, 0};
	bbOnDebugEnterStm(&__stmt_7);
	((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_sp))->clas->m_UpdateValue((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbt_sp);
	struct BBDebugStm __stmt_8 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 130, 0};
	bbOnDebugEnterStm(&__stmt_8);
	maxgui_maxgui_SetGadgetSensitivity((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_colorpicker_tcolorpicker_button ,3);
	struct BBDebugStm __stmt_9 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 131, 0};
	bbOnDebugEnterStm(&__stmt_9);
	if(((BBObject*)((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_colorpicker_tcolorpicker_label )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 131, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_SetGadgetSensitivity((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_colorpicker_tcolorpicker_label ,1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_10 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 133, 0};
	bbOnDebugEnterStm(&__stmt_10);
	brl_hook_AddHook(brl_event_EmitEventHook,maxgui_proxygadgets_colorpicker_tColorpicker_eventHandler_TObject_iTObjectTObject,(BBOBJECT)bbt_sp,0);
	struct BBDebugStm __stmt_11 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 134, 0};
	bbOnDebugEnterStm(&__stmt_11);
	((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_sp))->clas->m_SetProxy_TTGadget((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbt_sp,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_colorpicker_tcolorpicker_panel );
	struct BBDebugStm __stmt_12 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 136, 0};
	bbOnDebugEnterStm(&__stmt_12);
	maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_colorpicker_tcolorpicker_panel ,1,1,0,0);
	struct BBDebugStm __stmt_13 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 137, 0};
	bbOnDebugEnterStm(&__stmt_13);
	if(((BBObject*)((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_colorpicker_tcolorpicker_label )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 137, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_colorpicker_tcolorpicker_label ,1,1,2,2);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_14 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 138, 0};
	bbOnDebugEnterStm(&__stmt_14);
	maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_colorpicker_tcolorpicker_button ,0,1,2,2);
	struct BBDebugStm __stmt_15 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 139, 0};
	bbOnDebugEnterStm(&__stmt_15);
	if(((BBObject*)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner )->dims,0U))[0U])!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 139, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner )->dims,0U))[0U],(BBClass*)&maxgui_maxgui_gadget_TGadget)),1,2,2,2);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_16 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 140, 0};
	bbOnDebugEnterStm(&__stmt_16);
	if(((BBObject*)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner )->dims,1U))[1U])!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 140, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner )->dims,1U))[1U],(BBClass*)&maxgui_maxgui_gadget_TGadget)),2,2,2,2);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_17 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 141, 0};
	bbOnDebugEnterStm(&__stmt_17);
	if(((BBObject*)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner )->dims,2U))[2U])!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 141, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner )->dims,2U))[2U],(BBClass*)&maxgui_maxgui_gadget_TGadget)),2,1,2,2);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_18 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 143, 0};
	bbOnDebugEnterStm(&__stmt_18);
	bbOnDebugLeaveScope();
	return (struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbt_sp;
}
BBINT _maxgui_proxygadgets_colorpicker_tColorpicker_SetColor_iii(struct maxgui_proxygadgets_colorpicker_tColorpicker_obj* o,BBINT bbt_RED,BBINT bbt_green,BBINT bbt_blue){
	((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o));
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetColor",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tColorpicker",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"RED",
				"i",
				.var_address=&bbt_RED
			},
			{
				BBDEBUGDECL_LOCAL,
				"green",
				"i",
				.var_address=&bbt_green
			},
			{
				BBDEBUGDECL_LOCAL,
				"blue",
				"i",
				.var_address=&bbt_blue
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 149, 0};
	bbOnDebugEnterStm(&__stmt_0);
	maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_label ,bbt_RED,bbt_green,bbt_blue,1);
	bbOnDebugLeaveScope();
	return 0;
}
BBSTRING _maxgui_proxygadgets_colorpicker_tColorpicker_GetText(struct maxgui_proxygadgets_colorpicker_tColorpicker_obj* o){
	((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"GetText",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tColorpicker",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 154, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(bbStringFromInt(((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb )->dims,0U))[0U]),&_s0),bbStringFromInt(((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb )->dims,1U))[1U])),&_s0),bbStringFromInt(((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb )->dims,2U))[2U]));
}
BBINT _maxgui_proxygadgets_colorpicker_tColorpicker_UpdateValue(struct maxgui_proxygadgets_colorpicker_tColorpicker_obj* o){
	((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"UpdateValue",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tColorpicker",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 158, 0};
	bbOnDebugEnterStm(&__stmt_0);
	BBINT bbt_=((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(o))->_maxgui_maxgui_gadget_tgadget_style ;
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 159, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(bbt_==0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 160, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_label ,bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(&_s1,brl_retro_RSet(bbStringConcat(&_s2,bbStringFromInt(((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb )->dims,0U))[0U])),3)),&_s3),brl_retro_RSet(bbStringConcat(&_s2,bbStringFromInt(((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb )->dims,1U))[1U])),3)),&_s4),brl_retro_RSet(bbStringConcat(&_s2,bbStringFromInt(((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb )->dims,2U))[2U])),3)));
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 161, 0};
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
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 162, 0};
			bbOnDebugEnterStm(&__stmt_0);
			maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_label ,bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(brl_retro_RSet(bbStringConcat(&_s2,bbStringFromInt(((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb )->dims,0U))[0U])),3),&_s5),brl_retro_RSet(bbStringConcat(&_s2,bbStringFromInt(((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb )->dims,1U))[1U])),3)),&_s5),brl_retro_RSet(bbStringConcat(&_s2,bbStringFromInt(((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb )->dims,2U))[2U])),3)));
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
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 163, 0};
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
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 164, 0};
				bbOnDebugEnterStm(&__stmt_0);
				maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_label ,bbStringConcat(bbStringConcat(bbStringSlice(brl_retro_Hex(((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb )->dims,0U))[0U]),6,(brl_retro_Hex(((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb )->dims,0U))[0U]))->length),bbStringSlice(brl_retro_Hex(((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb )->dims,1U))[1U]),6,(brl_retro_Hex(((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb )->dims,1U))[1U]))->length)),bbStringSlice(brl_retro_Hex(((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb )->dims,2U))[2U]),6,(brl_retro_Hex(((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb )->dims,2U))[2U]))->length)));
				bbOnDebugLeaveScope();
			}
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 166, 0};
	bbOnDebugEnterStm(&__stmt_2);
	maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_button ,((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb )->dims,0U))[0U],((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb )->dims,1U))[1U],((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb )->dims,2U))[2U],1);
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 168, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if(((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(o))->_maxgui_maxgui_gadget_tgadget_style ==3){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 169, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_proxygadgets_spinner_SetSpinnerValue((struct maxgui_proxygadgets_spinner_TSpinner_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner )->dims,0U))[0U],((BBDOUBLE)((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb )->dims,0U))[0U]));
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 170, 0};
		bbOnDebugEnterStm(&__stmt_1);
		maxgui_proxygadgets_spinner_SetSpinnerValue((struct maxgui_proxygadgets_spinner_TSpinner_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner )->dims,1U))[1U],((BBDOUBLE)((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb )->dims,1U))[1U]));
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 171, 0};
		bbOnDebugEnterStm(&__stmt_2);
		maxgui_proxygadgets_spinner_SetSpinnerValue((struct maxgui_proxygadgets_spinner_TSpinner_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner )->dims,2U))[2U],((BBDOUBLE)((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb )->dims,2U))[2U]));
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 174, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_colorpicker_tColorpicker_SetText_S(struct maxgui_proxygadgets_colorpicker_tColorpicker_obj* o,BBSTRING bbt_tx){
	((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o));
	BBARRAY volatile bbt_tmp=&bbEmptyArray;
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetText",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tColorpicker",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"tx",
				"$",
				.var_address=&bbt_tx
			},
			{
				BBDEBUGDECL_LOCAL,
				"tmp",
				"[]$",
				.var_address=&bbt_tmp
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 180, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(bbt_tx==&bbEmptyString){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 180, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return -1;
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 181, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_tmp=bbStringSplit((BBSTRING)bbt_tx,&_s0);
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 182, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_tmp=bbArraySlice("$",bbt_tmp,0,3);
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 183, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb )->dims,0U))[0U]=bbStringToInt(((BBSTRING*)BBARRAYDATAINDEX((bbt_tmp),(bbt_tmp)->dims,0U))[0U]);
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 184, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb )->dims,1U))[1U]=bbStringToInt(((BBSTRING*)BBARRAYDATAINDEX((bbt_tmp),(bbt_tmp)->dims,1U))[1U]);
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 185, 0};
	bbOnDebugEnterStm(&__stmt_5);
	((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb )->dims,2U))[2U]=bbStringToInt(((BBSTRING*)BBARRAYDATAINDEX((bbt_tmp),(bbt_tmp)->dims,2U))[2U]);
	struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 186, 0};
	bbOnDebugEnterStm(&__stmt_6);
	((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o));
	((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)o)->clas->m_UpdateValue((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)o);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_colorpicker_tColorpicker_SetLayout_iiii(struct maxgui_proxygadgets_colorpicker_tColorpicker_obj* o,BBINT bbt_a,BBINT bbt_b,BBINT bbt_c,BBINT bbt_d){
	((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(o));
	struct BBDebugScope_5 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetLayout",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tColorpicker",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"a",
				"i",
				.var_address=&bbt_a
			},
			{
				BBDEBUGDECL_LOCAL,
				"b",
				"i",
				.var_address=&bbt_b
			},
			{
				BBDEBUGDECL_LOCAL,
				"c",
				"i",
				.var_address=&bbt_c
			},
			{
				BBDEBUGDECL_LOCAL,
				"d",
				"i",
				.var_address=&bbt_d
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	bbOnDebugLeaveScope();
	return 0;
}
BBOBJECT maxgui_proxygadgets_colorpicker_tColorpicker_eventHandler_TObject_iTObjectTObject(BBINT bbt_pID,BBOBJECT bbt_pData,BBOBJECT bbt_pContext){
	struct brl_event_TEvent_obj* bbt_pEvent=(struct brl_event_TEvent_obj*)&bbNullObject;
	struct maxgui_proxygadgets_colorpicker_tColorpicker_obj* bbt_obj=(struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)&bbNullObject;
	struct BBDebugScope_5 __scope = {
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
				":tColorpicker",
				.var_address=&bbt_obj
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 194, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_pEvent=(struct brl_event_TEvent_obj*)((struct brl_event_TEvent_obj*)bbObjectDowncast((BBOBJECT)bbt_pData,(BBClass*)&brl_event_TEvent));
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 195, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_obj=(struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbObjectDowncast((BBOBJECT)bbt_pContext,(BBClass*)&maxgui_proxygadgets_colorpicker_tColorpicker));
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 197, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(((BBObject*)bbt_pEvent)!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 199, 0};
		bbOnDebugEnterStm(&__stmt_0);
		BBINT bbt_=((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_pEvent))->_brl_event_tevent_id ;
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 201, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if((bbt_==8193) || (bbt_==8200)){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 203, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if(((((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_pEvent))->_brl_event_tevent_source ==((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner )->dims,0U))[0U]) || (((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_pEvent))->_brl_event_tevent_source ==((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner )->dims,1U))[1U])) || (((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_pEvent))->_brl_event_tevent_source ==((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner )->dims,2U))[2U])){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 204, 0};
				bbOnDebugEnterStm(&__stmt_0);
				((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb )->dims,0U))[0U]=((BBINT)maxgui_proxygadgets_spinner_SpinnerValue((struct maxgui_proxygadgets_spinner_TSpinner_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner )->dims,0U))[0U]));
				struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 205, 0};
				bbOnDebugEnterStm(&__stmt_1);
				((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb )->dims,1U))[1U]=((BBINT)maxgui_proxygadgets_spinner_SpinnerValue((struct maxgui_proxygadgets_spinner_TSpinner_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner )->dims,1U))[1U]));
				struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 206, 0};
				bbOnDebugEnterStm(&__stmt_2);
				((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb )->dims,2U))[2U]=((BBINT)maxgui_proxygadgets_spinner_SpinnerValue((struct maxgui_proxygadgets_spinner_TSpinner_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner )->dims,2U))[2U]));
				struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 207, 0};
				bbOnDebugEnterStm(&__stmt_3);
				maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_button ,((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb )->dims,0U))[0U],((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb )->dims,1U))[1U],((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb )->dims,2U))[2U],1);
				struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 208, 0};
				bbOnDebugEnterStm(&__stmt_4);
				brl_event_EmitEvent((struct brl_event_TEvent_obj*)brl_event_CreateEvent(8193,(BBOBJECT)bbt_obj,0,0,0,0,(BBOBJECT)bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(bbStringFromInt(((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb )->dims,0U))[0U]),&_s0),bbStringFromInt(((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb )->dims,1U))[1U])),&_s0),bbStringFromInt(((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb )->dims,2U))[2U]))));
				struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 209, 0};
				bbOnDebugEnterStm(&__stmt_5);
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				return (BBOBJECT)bbt_pEvent;
			}
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 212, 0};
			bbOnDebugEnterStm(&__stmt_1);
			if(((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_pEvent))->_brl_event_tevent_source ==((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_label ){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 213, 0};
				bbOnDebugEnterStm(&__stmt_0);
				if(((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(bbt_obj))->_maxgui_maxgui_gadget_tgadget_style ==2){
					BBSTRING bbt_ty=&bbEmptyString;
					struct BBDebugScope_1 __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							{
								BBDEBUGDECL_LOCAL,
								"ty",
								"$",
								.var_address=&bbt_ty
							},
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 214, 0};
					bbOnDebugEnterStm(&__stmt_0);
					bbt_ty=maxgui_maxgui_GadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_label );
					struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 215, 0};
					bbOnDebugEnterStm(&__stmt_1);
					if((bbt_ty)->length>=6){
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 216, 0};
						bbOnDebugEnterStm(&__stmt_0);
						((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb )->dims,0U))[0U]=bbStringToInt((BBSTRING)(bbStringConcat(&_s6,bbStringSlice(bbt_ty,0,2))));
						struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 217, 0};
						bbOnDebugEnterStm(&__stmt_1);
						((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb )->dims,1U))[1U]=bbStringToInt((BBSTRING)(bbStringConcat(&_s6,bbStringSlice(bbt_ty,2,4))));
						struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 218, 0};
						bbOnDebugEnterStm(&__stmt_2);
						((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb )->dims,2U))[2U]=bbStringToInt((BBSTRING)(bbStringConcat(&_s6,bbStringSlice(bbt_ty,4,6))));
						struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 219, 0};
						bbOnDebugEnterStm(&__stmt_3);
						maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_button ,((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb )->dims,0U))[0U],((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb )->dims,1U))[1U],((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb )->dims,2U))[2U],1);
						struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 220, 0};
						bbOnDebugEnterStm(&__stmt_4);
						brl_event_EmitEvent((struct brl_event_TEvent_obj*)brl_event_CreateEvent(8193,(BBOBJECT)bbt_obj,0,0,0,0,(BBOBJECT)bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(bbStringFromInt(((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb )->dims,0U))[0U]),&_s0),bbStringFromInt(((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb )->dims,1U))[1U])),&_s0),bbStringFromInt(((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb )->dims,2U))[2U]))));
						struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 221, 0};
						bbOnDebugEnterStm(&__stmt_5);
						bbOnDebugLeaveScope();
						bbOnDebugLeaveScope();
						bbOnDebugLeaveScope();
						bbOnDebugLeaveScope();
						bbOnDebugLeaveScope();
						bbOnDebugLeaveScope();
						return (BBOBJECT)bbt_pEvent;
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
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 226, 0};
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
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 228, 0};
				bbOnDebugEnterStm(&__stmt_0);
				if(((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_pEvent))->_brl_event_tevent_source ==((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_button ){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 230, 0};
					bbOnDebugEnterStm(&__stmt_0);
					if(maxgui_maxgui_RequestColor(((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb )->dims,0U))[0U],((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb )->dims,1U))[1U],((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb )->dims,2U))[2U])!=0){
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 231, 0};
						bbOnDebugEnterStm(&__stmt_0);
						((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb )->dims,0U))[0U]=maxgui_maxgui_RequestedRed();
						struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 232, 0};
						bbOnDebugEnterStm(&__stmt_1);
						((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb )->dims,1U))[1U]=maxgui_maxgui_RequestedGreen();
						struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 233, 0};
						bbOnDebugEnterStm(&__stmt_2);
						((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb )->dims,2U))[2U]=maxgui_maxgui_RequestedBlue();
						struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 234, 0};
						bbOnDebugEnterStm(&__stmt_3);
						((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->clas->m_UpdateValue((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbt_obj);
						bbOnDebugLeaveScope();
					}
					struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 236, 0};
					bbOnDebugEnterStm(&__stmt_1);
					brl_event_EmitEvent((struct brl_event_TEvent_obj*)brl_event_CreateEvent(8193,(BBOBJECT)bbt_obj,0,0,0,0,(BBOBJECT)bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(bbStringFromInt(((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb )->dims,0U))[0U]),&_s0),bbStringFromInt(((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb )->dims,1U))[1U])),&_s0),bbStringFromInt(((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ),(((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb )->dims,2U))[2U]))));
					struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 237, 0};
					bbOnDebugEnterStm(&__stmt_2);
					bbOnDebugLeaveScope();
					bbOnDebugLeaveScope();
					bbOnDebugLeaveScope();
					bbOnDebugLeaveScope();
					bbOnDebugLeaveScope();
					return (BBOBJECT)bbt_pEvent;
				}
				bbOnDebugLeaveScope();
			}
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 244, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbOnDebugLeaveScope();
	return (BBOBJECT)bbt_pData;
}
struct BBDebugScope_18 maxgui_proxygadgets_colorpicker_tColorpicker_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"tColorpicker",
	{
		{
			BBDEBUGDECL_FIELD,
			"panel",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_colorpicker_tColorpicker_obj,_maxgui_proxygadgets_colorpicker_tcolorpicker_panel)
		},
		{
			BBDEBUGDECL_FIELD,
			"label",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_colorpicker_tColorpicker_obj,_maxgui_proxygadgets_colorpicker_tcolorpicker_label)
		},
		{
			BBDEBUGDECL_FIELD,
			"button",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_colorpicker_tColorpicker_obj,_maxgui_proxygadgets_colorpicker_tcolorpicker_button)
		},
		{
			BBDEBUGDECL_FIELD,
			"rgb",
			"[]i",
			.field_offset=offsetof(struct maxgui_proxygadgets_colorpicker_tColorpicker_obj,_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb)
		},
		{
			BBDEBUGDECL_FIELD,
			"spinner",
			"[]:TSpinner",
			.field_offset=offsetof(struct maxgui_proxygadgets_colorpicker_tColorpicker_obj,_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_maxgui_proxygadgets_colorpicker_tColorpicker_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Class",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_colorpicker_tColorpicker_Class
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetFont",
			"(:TGuiFont)i",
			.var_address=(void*)&_maxgui_proxygadgets_colorpicker_tColorpicker_SetFont_TTGuiFont
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"CleanUp",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_colorpicker_tColorpicker_CleanUp
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetShow",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_colorpicker_tColorpicker_SetShow_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetEnabled",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_colorpicker_tColorpicker_SetEnabled_i
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Create",
			"(i,i,i,i,:TGadget,i):tColorpicker",
			.var_address=(void*)&maxgui_proxygadgets_colorpicker_tColorpicker_Create_TtColorpicker_iiiiTTGadgeti
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetColor",
			"(i,i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_colorpicker_tColorpicker_SetColor_iii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetText",
			"()$",
			.var_address=(void*)&_maxgui_proxygadgets_colorpicker_tColorpicker_GetText
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"UpdateValue",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_colorpicker_tColorpicker_UpdateValue
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetText",
			"($)i",
			.var_address=(void*)&_maxgui_proxygadgets_colorpicker_tColorpicker_SetText_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetLayout",
			"(i,i,i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_colorpicker_tColorpicker_SetLayout_iiii
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"eventHandler",
			"(i,:Object,:Object):Object",
			.var_address=(void*)&maxgui_proxygadgets_colorpicker_tColorpicker_eventHandler_TObject_iTObjectTObject
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_maxgui_proxygadgets_colorpicker_tColorpicker maxgui_proxygadgets_colorpicker_tColorpicker={
	&maxgui_maxgui_gadget_TProxyGadget,
	bbObjectFree,
	(BBDebugScope*)&maxgui_proxygadgets_colorpicker_tColorpicker_scope,
	sizeof(struct maxgui_proxygadgets_colorpicker_tColorpicker_obj),
	(void (*)(BBOBJECT))_maxgui_proxygadgets_colorpicker_tColorpicker_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct maxgui_proxygadgets_colorpicker_tColorpicker_obj,_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner) - sizeof(void*) + sizeof(BBARRAY)
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
	,_maxgui_proxygadgets_colorpicker_tColorpicker_SetLayout_iiii
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
	,_maxgui_proxygadgets_colorpicker_tColorpicker_CleanUp
	,_maxgui_maxgui_gadget_TProxyGadget_Free
	,_maxgui_maxgui_gadget_TProxyGadget_Rethink
	,_maxgui_maxgui_gadget_TProxyGadget_ClientWidth
	,_maxgui_maxgui_gadget_TProxyGadget_ClientHeight
	,_maxgui_maxgui_gadget_TProxyGadget_Activate_i
	,_maxgui_maxgui_gadget_TProxyGadget_State
	,_maxgui_proxygadgets_colorpicker_tColorpicker_SetText_S
	,_maxgui_proxygadgets_colorpicker_tColorpicker_GetText
	,_maxgui_proxygadgets_colorpicker_tColorpicker_SetFont_TTGuiFont
	,_maxgui_proxygadgets_colorpicker_tColorpicker_SetColor_iii
	,_maxgui_maxgui_gadget_TProxyGadget_RemoveColor
	,_maxgui_maxgui_gadget_TProxyGadget_SetAlpha_f
	,_maxgui_maxgui_gadget_TProxyGadget_SetTextColor_iii
	,_maxgui_maxgui_gadget_TProxyGadget_SetTooltip_S
	,_maxgui_maxgui_gadget_TProxyGadget_GetTooltip
	,_maxgui_maxgui_gadget_TProxyGadget_SetPixmap_TTPixmapi
	,_maxgui_maxgui_gadget_TProxyGadget_SetIconStrip_TTIconStrip
	,_maxgui_proxygadgets_colorpicker_tColorpicker_SetShow_i
	,_maxgui_proxygadgets_colorpicker_tColorpicker_SetEnabled_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetSelected_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetHotKey_ii
	,_maxgui_maxgui_gadget_TProxyGadget_SetSensitivity_i
	,_maxgui_maxgui_gadget_TProxyGadget_GetSensitivity
	,_maxgui_proxygadgets_colorpicker_tColorpicker_Class
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
	,maxgui_proxygadgets_colorpicker_tColorpicker_Create_TtColorpicker_iiiiTTGadgeti
	,_maxgui_proxygadgets_colorpicker_tColorpicker_UpdateValue
	,maxgui_proxygadgets_colorpicker_tColorpicker_eventHandler_TObject_iTObjectTObject
};

struct maxgui_proxygadgets_colorpicker_tColorpicker_obj* maxgui_proxygadgets_colorpicker_CreateColorPicker(BBINT bbt_x,BBINT bbt_y,BBINT bbt_w,BBINT bbt_h,struct maxgui_maxgui_gadget_TGadget_obj* bbt_group,BBINT bbt_style){
	struct BBDebugScope_6 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"CreateColorPicker",
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
				"style",
				"i",
				.var_address=&bbt_style
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/colorpicker.bmx", 30, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return (struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)maxgui_proxygadgets_colorpicker_tColorpicker_Create_TtColorpicker_iiiiTTGadgeti(bbt_x,bbt_y,bbt_w,bbt_h,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group,bbt_style);
}
static int _bb_maxgui_proxygadgets_colorpicker_inited = 0;
int _bb_maxgui_proxygadgets_colorpicker(){
	if (!_bb_maxgui_proxygadgets_colorpicker_inited) {
		_bb_maxgui_proxygadgets_colorpicker_inited = 1;
		__bb_brl_blitz_blitz();
		__bb_maxgui_maxgui_maxgui();
		__bb_brl_retro_retro();
		_bb_maxgui_proxygadgets_spinner();
		bbObjectRegisterType((BBCLASS)&maxgui_proxygadgets_colorpicker_tColorpicker);
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_FUNCTION,
			"colorpicker",
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