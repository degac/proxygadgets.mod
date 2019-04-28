#include "Notify.bmx.debug.win32.x64.h"
static BBString _s0={
	&bbStringClass,
	22,
	{69,86,69,78,84,95,78,79,84,73,70,89,95,67,79,77,80
	,76,69,84,69,68}
};
static BBString _s1={
	&bbStringClass,
	2,
	{79,107}
};
struct BBDebugScope_1{int kind; const char *name; BBDebugDecl decls[2]; };
struct BBDebugScope_11{int kind; const char *name; BBDebugDecl decls[12]; };
struct BBDebugScope_17{int kind; const char *name; BBDebugDecl decls[18]; };
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
struct BBDebugScope_4{int kind; const char *name; BBDebugDecl decls[5]; };
struct BBDebugScope_5{int kind; const char *name; BBDebugDecl decls[6]; };
BBINT maxgui_proxygadgets_notify_EVENT_NOTIFY_COMPLETED=0;
void _maxgui_proxygadgets_notify_Tnotifygadget_New(struct maxgui_proxygadgets_notify_Tnotifygadget_obj* o) {
	_maxgui_maxgui_gadget_TProxyGadget_New((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o);
	o->clas = &maxgui_proxygadgets_notify_Tnotifygadget;
	((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_notify_tnotifygadget_text = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_notify_tnotifygadget_button_ok = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_notify_tnotifygadget_button_cancel = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_notify_tnotifygadget_button_abort = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_notify_tnotifygadget_window = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_notify_tnotifygadget_old_window = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_notify_tnotifygadget_line = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_notify_tnotifygadget_style = 0;
	((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_notify_tnotifygadget__destroy = 0;
	((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_notify_tnotifygadget_icongadget = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
}
BBINT _maxgui_proxygadgets_notify_Tnotifygadget_CleanUp(struct maxgui_proxygadgets_notify_Tnotifygadget_obj* o){
	((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"CleanUp",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":Tnotifygadget",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 42, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(((BBObject*)((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_notify_tnotifygadget_icongadget )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 42, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_notify_tnotifygadget_icongadget );
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 42, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_notify_tnotifygadget_icongadget =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 43, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(((BBObject*)((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_notify_tnotifygadget_button_ok )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 43, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_notify_tnotifygadget_button_ok );
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 43, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_notify_tnotifygadget_button_ok =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 44, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(((BBObject*)((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_notify_tnotifygadget_button_cancel )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 44, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_notify_tnotifygadget_button_cancel );
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 44, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_notify_tnotifygadget_button_cancel =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 45, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if(((BBObject*)((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_notify_tnotifygadget_button_abort )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 45, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_notify_tnotifygadget_button_abort );
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 45, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_notify_tnotifygadget_button_abort =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 46, 0};
	bbOnDebugEnterStm(&__stmt_4);
	brl_hook_RemoveHook(brl_event_EmitEventHook,o->clas->f_eventHandler_TObject_iTObjectTObject,(BBOBJECT)o);
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 47, 0};
	bbOnDebugEnterStm(&__stmt_5);
	if(((BBObject*)((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_notify_tnotifygadget_text )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 47, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_notify_tnotifygadget_text );
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 47, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_notify_tnotifygadget_text =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 48, 0};
	bbOnDebugEnterStm(&__stmt_6);
	if(((BBObject*)((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_notify_tnotifygadget_window )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 48, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_notify_tnotifygadget_window );
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 48, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_notify_tnotifygadget_window =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_7 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 50, 0};
	bbOnDebugEnterStm(&__stmt_7);
	(&maxgui_proxygadgets_notify_Tnotifygadget)->super->m_CleanUp((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_notify_Tnotifygadget_Class(struct maxgui_proxygadgets_notify_Tnotifygadget_obj* o){
	((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Class",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":Tnotifygadget",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 55, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return 26;
}
BBSTRING _maxgui_proxygadgets_notify_Tnotifygadget_GetText(struct maxgui_proxygadgets_notify_Tnotifygadget_obj* o){
	((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"GetText",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":Tnotifygadget",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 59, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return &bbEmptyString;
}
BBINT _maxgui_proxygadgets_notify_Tnotifygadget_SetFont_TTGuiFont(struct maxgui_proxygadgets_notify_Tnotifygadget_obj* o,struct maxgui_maxgui_guifont_TGuiFont_obj* bbt_fnt){
	((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetFont",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":Tnotifygadget",
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 63, 0};
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 63, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return 0;
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 64, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(((BBObject*)((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_notify_tnotifygadget_button_ok )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 64, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_SetGadgetFont((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_notify_tnotifygadget_button_ok ,(struct maxgui_maxgui_guifont_TGuiFont_obj*)bbt_fnt,0);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 65, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(((BBObject*)((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_notify_tnotifygadget_button_cancel )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 65, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_SetGadgetFont((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_notify_tnotifygadget_button_cancel ,(struct maxgui_maxgui_guifont_TGuiFont_obj*)bbt_fnt,0);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 66, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if(((BBObject*)((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_notify_tnotifygadget_button_abort )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 66, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_SetGadgetFont((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_notify_tnotifygadget_button_abort ,(struct maxgui_maxgui_guifont_TGuiFont_obj*)bbt_fnt,0);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 67, 0};
	bbOnDebugEnterStm(&__stmt_4);
	if(((BBObject*)((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_notify_tnotifygadget_text )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 67, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_SetGadgetFont((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_notify_tnotifygadget_text ,(struct maxgui_maxgui_guifont_TGuiFont_obj*)bbt_fnt,0);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT maxgui_proxygadgets_notify_Tnotifygadget_Create_i_SiTTGadgetTObjectTTGuiFont(BBSTRING bbt_msg,BBINT bbt_style,struct maxgui_maxgui_gadget_TGadget_obj* bbt_group,BBOBJECT bbt_img,struct maxgui_maxgui_guifont_TGuiFont_obj* bbt_fnt){
	struct maxgui_proxygadgets_notify_Tnotifygadget_obj* bbt_sp=(struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)&bbNullObject;
	BBINT bbt_size=0;
	BBINT bbt_xtext=0;
	BBINT bbt_cx=0;
	BBINT bbt_cy=0;
	BBINT bbt_x=0;
	struct BBDebugScope_11 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Create",
		{
			{
				BBDEBUGDECL_LOCAL,
				"msg",
				"$",
				.var_address=&bbt_msg
			},
			{
				BBDEBUGDECL_LOCAL,
				"style",
				"i",
				.var_address=&bbt_style
			},
			{
				BBDEBUGDECL_LOCAL,
				"group",
				":TGadget",
				.var_address=&bbt_group
			},
			{
				BBDEBUGDECL_LOCAL,
				"img",
				":Object",
				.var_address=&bbt_img
			},
			{
				BBDEBUGDECL_LOCAL,
				"fnt",
				":TGuiFont",
				.var_address=&bbt_fnt
			},
			{
				BBDEBUGDECL_LOCAL,
				"sp",
				":Tnotifygadget",
				.var_address=&bbt_sp
			},
			{
				BBDEBUGDECL_LOCAL,
				"size",
				"i",
				.var_address=&bbt_size
			},
			{
				BBDEBUGDECL_LOCAL,
				"xtext",
				"i",
				.var_address=&bbt_xtext
			},
			{
				BBDEBUGDECL_LOCAL,
				"cx",
				"i",
				.var_address=&bbt_cx
			},
			{
				BBDEBUGDECL_LOCAL,
				"cy",
				"i",
				.var_address=&bbt_cy
			},
			{
				BBDEBUGDECL_LOCAL,
				"x",
				"i",
				.var_address=&bbt_x
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 71, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_sp=(struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)(struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbObjectNew((BBClass *)&maxgui_proxygadgets_notify_Tnotifygadget);
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 72, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_size=200;
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 72, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_xtext=10;
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 73, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_notify_tnotifygadget_style =bbt_style;
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 75, 0};
	bbOnDebugEnterStm(&__stmt_4);
	if(bbt_img!=&bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 75, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_size=400;
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 75, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_xtext=150;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 77, 0};
	bbOnDebugEnterStm(&__stmt_5);
	bbt_cx=0;
	struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 77, 0};
	bbOnDebugEnterStm(&__stmt_6);
	bbt_cy=0;
	struct BBDebugStm __stmt_7 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 78, 0};
	bbOnDebugEnterStm(&__stmt_7);
	bbt_cx=((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(bbt_group))->_maxgui_maxgui_gadget_tgadget_xpos ;
	struct BBDebugStm __stmt_8 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 79, 0};
	bbOnDebugEnterStm(&__stmt_8);
	bbt_cy=(((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(bbt_group))->_maxgui_maxgui_gadget_tgadget_ypos +20);
	struct BBDebugStm __stmt_9 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 81, 0};
	bbOnDebugEnterStm(&__stmt_9);
	((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_notify_tnotifygadget_window =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateWindow(bbAppTitle,bbt_cx,bbt_cy,bbt_size,200,(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject,1);
	struct BBDebugStm __stmt_10 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 82, 0};
	bbOnDebugEnterStm(&__stmt_10);
	maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group);
	struct BBDebugStm __stmt_11 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 84, 0};
	bbOnDebugEnterStm(&__stmt_11);
	((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_notify_tnotifygadget_old_window =(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group;
	struct BBDebugStm __stmt_12 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 86, 0};
	bbOnDebugEnterStm(&__stmt_12);
	((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_notify_tnotifygadget_text =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateLabel(bbt_msg,bbt_xtext,10,((maxgui_maxgui_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_notify_tnotifygadget_window )-bbt_xtext)-10),(maxgui_maxgui_ClientHeight((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_notify_tnotifygadget_window )-40),(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_notify_tnotifygadget_window ,0);
	struct BBDebugStm __stmt_13 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 87, 0};
	bbOnDebugEnterStm(&__stmt_13);
	((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_notify_tnotifygadget_line =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateLabel(&bbEmptyString,0,(maxgui_maxgui_ClientHeight((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_notify_tnotifygadget_window )-30),maxgui_maxgui_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_notify_tnotifygadget_window ),30,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_notify_tnotifygadget_window ,3);
	struct BBDebugStm __stmt_14 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 89, 0};
	bbOnDebugEnterStm(&__stmt_14);
	bbt_x=((maxgui_maxgui_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_notify_tnotifygadget_window )/2)-40);
	struct BBDebugStm __stmt_15 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 90, 0};
	bbOnDebugEnterStm(&__stmt_15);
	((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_notify_tnotifygadget_button_ok =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateButton(&_s1,bbt_x,(maxgui_maxgui_ClientHeight((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_notify_tnotifygadget_window )-25),80,24,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_notify_tnotifygadget_window ,4);
	struct BBDebugStm __stmt_16 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 91, 0};
	bbOnDebugEnterStm(&__stmt_16);
	((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_notify_tnotifygadget_icongadget =(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)maxgui_proxygadgets_icongadget_CreateIconGadget(10,10,128,128,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_notify_tnotifygadget_window ,(BBOBJECT)bbt_img,0),(BBClass*)&maxgui_maxgui_gadget_TGadget));
	struct BBDebugStm __stmt_17 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 92, 0};
	bbOnDebugEnterStm(&__stmt_17);
	maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group);
	struct BBDebugStm __stmt_18 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 93, 0};
	bbOnDebugEnterStm(&__stmt_18);
	maxgui_maxgui_ActivateWindow((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_notify_tnotifygadget_window );
	struct BBDebugStm __stmt_19 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 94, 0};
	bbOnDebugEnterStm(&__stmt_19);
	((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(bbt_sp))->clas->m_SetProxy_TTGadget((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbt_sp,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_notify_tnotifygadget_window );
	struct BBDebugStm __stmt_20 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 96, 0};
	bbOnDebugEnterStm(&__stmt_20);
	if(((BBObject*)bbt_fnt)!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 96, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_SetGadgetFont((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_sp,(BBClass*)&maxgui_maxgui_gadget_TGadget)),(struct maxgui_maxgui_guifont_TGuiFont_obj*)bbt_fnt,0);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_21 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 98, 0};
	bbOnDebugEnterStm(&__stmt_21);
	brl_hook_AddHook(brl_event_EmitEventHook,maxgui_proxygadgets_notify_Tnotifygadget_eventHandler_TObject_iTObjectTObject,(BBOBJECT)bbt_sp,0);
	bbOnDebugLeaveScope();
	return 0;
}
BBOBJECT maxgui_proxygadgets_notify_Tnotifygadget_eventHandler_TObject_iTObjectTObject(BBINT bbt_pID,BBOBJECT bbt_pData,BBOBJECT bbt_pContext){
	struct brl_event_TEvent_obj* bbt_pEvent=(struct brl_event_TEvent_obj*)&bbNullObject;
	struct maxgui_proxygadgets_notify_Tnotifygadget_obj* bbt_obj=(struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)&bbNullObject;
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
				":Tnotifygadget",
				.var_address=&bbt_obj
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 102, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_pEvent=(struct brl_event_TEvent_obj*)((struct brl_event_TEvent_obj*)bbObjectDowncast((BBOBJECT)bbt_pData,(BBClass*)&brl_event_TEvent));
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 103, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_obj=(struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbObjectDowncast((BBOBJECT)bbt_pContext,(BBClass*)&maxgui_proxygadgets_notify_Tnotifygadget));
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 104, 0};
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 106, 0};
		bbOnDebugEnterStm(&__stmt_0);
		BBINT bbt_=((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_pEvent))->_brl_event_tevent_id ;
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 108, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(bbt_==8193){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 109, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if(((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_notify_tnotifygadget_style ==0){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 110, 0};
				bbOnDebugEnterStm(&__stmt_0);
				if(((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_pEvent))->_brl_event_tevent_source ==((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_notify_tnotifygadget_button_ok ){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 111, 0};
					bbOnDebugEnterStm(&__stmt_0);
					maxgui_maxgui_ActivateWindow((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_notify_tnotifygadget_old_window );
					struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 112, 0};
					bbOnDebugEnterStm(&__stmt_1);
					maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_notify_tnotifygadget_old_window );
					struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 113, 0};
					bbOnDebugEnterStm(&__stmt_2);
					maxgui_maxgui_ActivateGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_notify_tnotifygadget_old_window );
					struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 114, 0};
					bbOnDebugEnterStm(&__stmt_3);
					maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_obj,(BBClass*)&maxgui_maxgui_gadget_TGadget)));
					struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 116, 0};
					bbOnDebugEnterStm(&__stmt_4);
					brl_event_EmitEvent((struct brl_event_TEvent_obj*)brl_event_CreateEvent(maxgui_proxygadgets_notify_EVENT_NOTIFY_COMPLETED,(BBOBJECT)&bbNullObject,0,0,0,0,(BBOBJECT)&bbNullObject));
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
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 121, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if(bbt_==16387){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 123, 0};
				bbOnDebugEnterStm(&__stmt_0);
				if(((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_pEvent))->_brl_event_tevent_source ==bbt_obj){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 124, 0};
					bbOnDebugEnterStm(&__stmt_0);
					maxgui_maxgui_ActivateWindow((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_notify_tnotifygadget_old_window );
					struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 125, 0};
					bbOnDebugEnterStm(&__stmt_1);
					maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_obj,(BBClass*)&maxgui_maxgui_gadget_TGadget)));
					struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 126, 0};
					bbOnDebugEnterStm(&__stmt_2);
					maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_notify_tnotifygadget_old_window );
					struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 127, 0};
					bbOnDebugEnterStm(&__stmt_3);
					maxgui_maxgui_ActivateGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_notify_tnotifygadget_old_window );
					struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 129, 0};
					bbOnDebugEnterStm(&__stmt_4);
					brl_event_EmitEvent((struct brl_event_TEvent_obj*)brl_event_CreateEvent(maxgui_proxygadgets_notify_EVENT_NOTIFY_COMPLETED,(BBOBJECT)&bbNullObject,0,0,0,0,(BBOBJECT)&bbNullObject));
					bbOnDebugLeaveScope();
				}
				bbOnDebugLeaveScope();
			}
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return (BBOBJECT)&bbNullObject;
}
struct BBDebugScope_17 maxgui_proxygadgets_notify_Tnotifygadget_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"Tnotifygadget",
	{
		{
			BBDEBUGDECL_FIELD,
			"Text",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_notify_Tnotifygadget_obj,_maxgui_proxygadgets_notify_tnotifygadget_text)
		},
		{
			BBDEBUGDECL_FIELD,
			"BUTTON_OK",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_notify_Tnotifygadget_obj,_maxgui_proxygadgets_notify_tnotifygadget_button_ok)
		},
		{
			BBDEBUGDECL_FIELD,
			"BUTTON_CANCEL",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_notify_Tnotifygadget_obj,_maxgui_proxygadgets_notify_tnotifygadget_button_cancel)
		},
		{
			BBDEBUGDECL_FIELD,
			"button_abort",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_notify_Tnotifygadget_obj,_maxgui_proxygadgets_notify_tnotifygadget_button_abort)
		},
		{
			BBDEBUGDECL_FIELD,
			"window",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_notify_Tnotifygadget_obj,_maxgui_proxygadgets_notify_tnotifygadget_window)
		},
		{
			BBDEBUGDECL_FIELD,
			"old_window",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_notify_Tnotifygadget_obj,_maxgui_proxygadgets_notify_tnotifygadget_old_window)
		},
		{
			BBDEBUGDECL_FIELD,
			"LINE",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_notify_Tnotifygadget_obj,_maxgui_proxygadgets_notify_tnotifygadget_line)
		},
		{
			BBDEBUGDECL_FIELD,
			"style",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_notify_Tnotifygadget_obj,_maxgui_proxygadgets_notify_tnotifygadget_style)
		},
		{
			BBDEBUGDECL_FIELD,
			"_destroy",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_notify_Tnotifygadget_obj,_maxgui_proxygadgets_notify_tnotifygadget__destroy)
		},
		{
			BBDEBUGDECL_FIELD,
			"IconGadget",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_notify_Tnotifygadget_obj,_maxgui_proxygadgets_notify_tnotifygadget_icongadget)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_maxgui_proxygadgets_notify_Tnotifygadget_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"CleanUp",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_notify_Tnotifygadget_CleanUp
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Class",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_notify_Tnotifygadget_Class
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetText",
			"()$",
			.var_address=(void*)&_maxgui_proxygadgets_notify_Tnotifygadget_GetText
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetFont",
			"(:TGuiFont)i",
			.var_address=(void*)&_maxgui_proxygadgets_notify_Tnotifygadget_SetFont_TTGuiFont
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Create",
			"($,i,:TGadget,:Object,:TGuiFont)i",
			.var_address=(void*)&maxgui_proxygadgets_notify_Tnotifygadget_Create_i_SiTTGadgetTObjectTTGuiFont
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"eventHandler",
			"(i,:Object,:Object):Object",
			.var_address=(void*)&maxgui_proxygadgets_notify_Tnotifygadget_eventHandler_TObject_iTObjectTObject
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_maxgui_proxygadgets_notify_Tnotifygadget maxgui_proxygadgets_notify_Tnotifygadget={
	&maxgui_maxgui_gadget_TProxyGadget,
	bbObjectFree,
	(BBDebugScope*)&maxgui_proxygadgets_notify_Tnotifygadget_scope,
	sizeof(struct maxgui_proxygadgets_notify_Tnotifygadget_obj),
	(void (*)(BBOBJECT))_maxgui_proxygadgets_notify_Tnotifygadget_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct maxgui_proxygadgets_notify_Tnotifygadget_obj,_maxgui_proxygadgets_notify_tnotifygadget_icongadget) - sizeof(void*) + sizeof(struct maxgui_maxgui_gadget_TGadget_obj*)
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
	,_maxgui_proxygadgets_notify_Tnotifygadget_CleanUp
	,_maxgui_maxgui_gadget_TProxyGadget_Free
	,_maxgui_maxgui_gadget_TProxyGadget_Rethink
	,_maxgui_maxgui_gadget_TProxyGadget_ClientWidth
	,_maxgui_maxgui_gadget_TProxyGadget_ClientHeight
	,_maxgui_maxgui_gadget_TProxyGadget_Activate_i
	,_maxgui_maxgui_gadget_TProxyGadget_State
	,_maxgui_maxgui_gadget_TProxyGadget_SetText_S
	,_maxgui_proxygadgets_notify_Tnotifygadget_GetText
	,_maxgui_proxygadgets_notify_Tnotifygadget_SetFont_TTGuiFont
	,_maxgui_maxgui_gadget_TProxyGadget_SetColor_iii
	,_maxgui_maxgui_gadget_TProxyGadget_RemoveColor
	,_maxgui_maxgui_gadget_TProxyGadget_SetAlpha_f
	,_maxgui_maxgui_gadget_TProxyGadget_SetTextColor_iii
	,_maxgui_maxgui_gadget_TProxyGadget_SetTooltip_S
	,_maxgui_maxgui_gadget_TProxyGadget_GetTooltip
	,_maxgui_maxgui_gadget_TProxyGadget_SetPixmap_TTPixmapi
	,_maxgui_maxgui_gadget_TProxyGadget_SetIconStrip_TTIconStrip
	,_maxgui_maxgui_gadget_TProxyGadget_SetShow_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetEnabled_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetSelected_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetHotKey_ii
	,_maxgui_maxgui_gadget_TProxyGadget_SetSensitivity_i
	,_maxgui_maxgui_gadget_TProxyGadget_GetSensitivity
	,_maxgui_proxygadgets_notify_Tnotifygadget_Class
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
	,maxgui_proxygadgets_notify_Tnotifygadget_Create_i_SiTTGadgetTObjectTTGuiFont
	,maxgui_proxygadgets_notify_Tnotifygadget_eventHandler_TObject_iTObjectTObject
};

BBINT maxgui_proxygadgets_notify_CreateNotify(BBSTRING bbt_msg,struct maxgui_maxgui_gadget_TGadget_obj* bbt_group,BBOBJECT bbt_pix,struct maxgui_maxgui_guifont_TGuiFont_obj* bbt_fnt){
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"CreateNotify",
		{
			{
				BBDEBUGDECL_LOCAL,
				"msg",
				"$",
				.var_address=&bbt_msg
			},
			{
				BBDEBUGDECL_LOCAL,
				"group",
				":TGadget",
				.var_address=&bbt_group
			},
			{
				BBDEBUGDECL_LOCAL,
				"pix",
				":Object",
				.var_address=&bbt_pix
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 22, 0};
	bbOnDebugEnterStm(&__stmt_0);
	maxgui_proxygadgets_notify_Tnotifygadget_Create_i_SiTTGadgetTObjectTTGuiFont(bbt_msg,0,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group,(BBOBJECT)bbt_pix,(struct maxgui_maxgui_guifont_TGuiFont_obj*)bbt_fnt);
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 26, 0};
	bbOnDebugEnterStm(&__stmt_1);
	do{
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 24, 0};
		bbOnDebugEnterStm(&__stmt_0);
		brl_eventqueue_WaitEvent();
		bbOnDebugLeaveScope();
	}while(!(brl_eventqueue_EventID()==maxgui_proxygadgets_notify_EVENT_NOTIFY_COMPLETED));
	bbOnDebugLeaveScope();
	return 0;
}
static int _bb_maxgui_proxygadgets_notify_inited = 0;
int _bb_maxgui_proxygadgets_notify(){
	if (!_bb_maxgui_proxygadgets_notify_inited) {
		_bb_maxgui_proxygadgets_notify_inited = 1;
		GC_add_roots(&maxgui_proxygadgets_notify_EVENT_NOTIFY_COMPLETED, &maxgui_proxygadgets_notify_EVENT_NOTIFY_COMPLETED + 1);
		__bb_brl_blitz_blitz();
		__bb_maxgui_maxgui_maxgui();
		__bb_brl_eventqueue_eventqueue();
		_bb_maxgui_proxygadgets_icongadget();
		bbObjectRegisterType((BBCLASS)&maxgui_proxygadgets_notify_Tnotifygadget);
		struct BBDebugScope_1 __scope = {
			BBDEBUGSCOPE_FUNCTION,
			"Notify",
			{
				{
					BBDEBUGDECL_GLOBAL,
					"EVENT_NOTIFY_COMPLETED",
					"i",
					.var_address=(void*)&maxgui_proxygadgets_notify_EVENT_NOTIFY_COMPLETED
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/Notify.bmx", 15, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_proxygadgets_notify_EVENT_NOTIFY_COMPLETED=brl_event_AllocUserEventId(&_s0);
		bbOnDebugLeaveScope();
		return 0;
	}
	return 0;
}