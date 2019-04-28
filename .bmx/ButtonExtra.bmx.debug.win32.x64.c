#include "ButtonExtra.bmx.debug.win32.x64.h"
static BBString _s1={
	&bbStringClass,
	1,
	{44}
};
static BBString _s4={
	&bbStringClass,
	8,
	{60,35,83,73,90,69,35,62}
};
static BBString _s3={
	&bbStringClass,
	9,
	{60,35,84,73,84,76,69,35,62}
};
static BBString _s0={
	&bbStringClass,
	9,
	{60,35,118,97,108,117,101,35,62}
};
static BBString _s2={
	&bbStringClass,
	10,
	{70,105,108,101,80,105,99,107,101,114}
};
struct BBDebugScope_1{int kind; const char *name; BBDebugDecl decls[2]; };
struct BBDebugScope_12{int kind; const char *name; BBDebugDecl decls[13]; };
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
struct BBDebugScope_3{int kind; const char *name; BBDebugDecl decls[4]; };
struct BBDebugScope_33{int kind; const char *name; BBDebugDecl decls[34]; };
struct BBDebugScope_4{int kind; const char *name; BBDebugDecl decls[5]; };
struct BBDebugScope_5{int kind; const char *name; BBDebugDecl decls[6]; };
struct BBDebugScope_7{int kind; const char *name; BBDebugDecl decls[8]; };
struct BBDebugScope_8{int kind; const char *name; BBDebugDecl decls[9]; };
void _maxgui_proxygadgets_buttonextra_tButtonExtra_New(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* o) {
	_maxgui_maxgui_gadget_TProxyGadget_New((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o);
	o->clas = &maxgui_proxygadgets_buttonextra_tButtonExtra;
	((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_panel = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_label = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_style = 0;
	((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_text = &bbEmptyString;
}
BBINT _maxgui_proxygadgets_buttonextra_tButtonExtra_SetFont_TTGuiFont(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* o,struct maxgui_maxgui_guifont_TGuiFont_obj* bbt_fnt){
	((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetFont",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tButtonExtra",
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 79, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_buttonextra_tButtonExtra_CleanUp(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* o){
	((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"CleanUp",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tButtonExtra",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 84, 0};
	bbOnDebugEnterStm(&__stmt_0);
	brl_hook_RemoveHook(brl_event_EmitEventHook,o->clas->f_eventHandler_TObject_iTObjectTObject,(BBOBJECT)o);
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 85, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(((BBObject*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_label )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 85, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_label );
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 85, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_label =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 86, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(((BBObject*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 86, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button );
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 86, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 87, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if(((BBObject*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_panel )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 87, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_panel );
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 87, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_panel =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 88, 0};
	bbOnDebugEnterStm(&__stmt_4);
	(&maxgui_proxygadgets_buttonextra_tButtonExtra)->super->m_CleanUp((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o);
	bbOnDebugLeaveScope();
	return 0;
}
BBOBJECT _maxgui_proxygadgets_buttonextra_tButtonExtra_ItemExtra_i(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* o,BBINT bbt_index){
	((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"ItemExtra",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tButtonExtra",
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 92, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_style ==6){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 93, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return (BBOBJECT)maxgui_maxgui_GadgetItemExtra((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,bbt_index);
	}
	bbOnDebugLeaveScope();
	return (BBOBJECT)&bbNullObject;
}
BBINT _maxgui_proxygadgets_buttonextra_tButtonExtra_Clear(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* o){
	((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Clear",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tButtonExtra",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 98, 0};
	bbOnDebugEnterStm(&__stmt_0);
	BBINT bbt_=((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_style ;
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 99, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(bbt_==6){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 99, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_ClearGadgetItems((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button );
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 101, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_buttonextra_tButtonExtra_SetPixmap_TTPixmapi(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* o,struct brl_pixmap_TPixmap_obj* bbt_pix,BBINT bbt_flags){
	((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o));
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetPixmap",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tButtonExtra",
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 105, 0};
	bbOnDebugEnterStm(&__stmt_0);
	BBINT bbt_=((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_style ;
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 106, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if((((bbt_==23) || (bbt_==40)) || (bbt_==22)) || (bbt_==2)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 107, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,(struct brl_pixmap_TPixmap_obj*)bbt_pix,bbt_flags);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 110, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_buttonextra_tButtonExtra_SetItem_iSSiTObjecti(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* o,BBINT bbt_index,BBSTRING bbt_Text,BBSTRING bbt_tip,BBINT bbt_icon,BBOBJECT bbt_extra,BBINT bbt_flags){
	((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o));
	struct BBDebugScope_7 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetItem",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tButtonExtra",
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 117, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_style ==6){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 118, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_ModifyGadgetItem((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,bbt_index,bbt_Text,bbt_flags,bbt_icon,bbt_tip,(BBOBJECT)bbt_extra);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_buttonextra_tButtonExtra_RemoveItem_i(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* o,BBINT bbt_index){
	((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"RemoveItem",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tButtonExtra",
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 124, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_style ==6){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 125, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_RemoveGadgetItem((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,bbt_index);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_buttonextra_tButtonExtra_ItemCount(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* o){
	((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"ItemCount",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tButtonExtra",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 130, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_style ==6){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 131, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return maxgui_maxgui_CountGadgetItems((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button );
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_buttonextra_tButtonExtra_SelectedItem(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* o){
	((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SelectedItem",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tButtonExtra",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 136, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_style ==6){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 136, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return maxgui_maxgui_SelectedGadgetItem((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button );
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 137, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbOnDebugLeaveScope();
	return -1;
}
BBINT _maxgui_proxygadgets_buttonextra_tButtonExtra_SelectItem_ii(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* o,BBINT bbt_it,BBINT bbt_st){
	((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o));
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SelectItem",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tButtonExtra",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"it",
				"i",
				.var_address=&bbt_it
			},
			{
				BBDEBUGDECL_LOCAL,
				"st",
				"i",
				.var_address=&bbt_st
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 142, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_style ==6){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 143, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_SelectGadgetItem((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,bbt_it);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_buttonextra_tButtonExtra_InsertItem_iSSiTObjecti(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* o,BBINT bbt_index,BBSTRING bbt_Text,BBSTRING bbt_tip,BBINT bbt_icon,BBOBJECT bbt_extra,BBINT bbt_flags){
	((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o));
	struct BBDebugScope_7 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"InsertItem",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tButtonExtra",
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 148, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_style ==6){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 149, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_AddGadgetItem((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,bbt_Text,bbt_flags,bbt_icon,bbt_tip,(BBOBJECT)bbt_extra);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_buttonextra_tButtonExtra_SetRange_ii(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* o,BBINT bbt_a,BBINT bbt_b){
	((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o));
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetRange",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tButtonExtra",
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
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 154, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_style ==13){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 154, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_SetSliderRange((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,bbt_a,bbt_b);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 155, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_style ==19){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 155, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_proxygadgets_spinner_SetSpinnerRange((struct maxgui_proxygadgets_spinner_TSpinner_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbObjectDowncast((BBOBJECT)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,(BBClass*)&maxgui_proxygadgets_spinner_TSpinner)),((BBDOUBLE)bbt_a),((BBDOUBLE)bbt_b),1);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_buttonextra_tButtonExtra_SetValue_f(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* o,BBFLOAT bbt_val){
	((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetValue",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tButtonExtra",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"val",
				"f",
				.var_address=&bbt_val
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 159, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_style ==14){
		BBSTRING bbt_txt=&bbEmptyString;
		struct BBDebugScope_1 __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_LOCAL,
					"txt",
					"$",
					.var_address=&bbt_txt
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 160, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_UpdateProgBar((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,bbt_val);
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 161, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_txt=bbStringReplace((BBSTRING)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_text ,&_s0,bbStringFromInt((BBINT)(bbt_val*100.000000f)));
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 162, 0};
		bbOnDebugEnterStm(&__stmt_2);
		maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_label ,bbt_txt);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
struct maxgui_maxgui_gadget_TGadget_obj* _maxgui_proxygadgets_buttonextra_tButtonExtra_GetProxy(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* o){
	((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"GetProxy",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tButtonExtra",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 170, 0};
	bbOnDebugEnterStm(&__stmt_0);
	BBINT bbt_=((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_style ;
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 171, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(bbt_==23){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 171, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return (struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)((struct maxgui_proxygadgets_filepicker_tFilepicker_obj*)bbObjectDowncast((BBOBJECT)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,(BBClass*)&maxgui_proxygadgets_filepicker_tFilepicker)),(BBClass*)&maxgui_maxgui_gadget_TGadget));
	}else{
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 172, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(bbt_==19){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 172, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			return (struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbObjectDowncast((BBOBJECT)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,(BBClass*)&maxgui_proxygadgets_spinner_TSpinner)),(BBClass*)&maxgui_maxgui_gadget_TGadget));
		}else{
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 173, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if(bbt_==22){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 173, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				return (struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbObjectDowncast((BBOBJECT)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,(BBClass*)&maxgui_proxygadgets_datepicker_tdatepicker)),(BBClass*)&maxgui_maxgui_gadget_TGadget));
			}else{
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 174, 0};
				bbOnDebugEnterStm(&__stmt_0);
				if(((bbt_==2) || (bbt_==4)) || (bbt_==6)){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 174, 0};
					bbOnDebugEnterStm(&__stmt_0);
					bbOnDebugLeaveScope();
					bbOnDebugLeaveScope();
					bbOnDebugLeaveScope();
					bbOnDebugLeaveScope();
					bbOnDebugLeaveScope();
					return (struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ;
				}else{
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 177, 0};
					bbOnDebugEnterStm(&__stmt_0);
					if(bbt_==33){
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 177, 0};
						bbOnDebugEnterStm(&__stmt_0);
						bbOnDebugLeaveScope();
						bbOnDebugLeaveScope();
						bbOnDebugLeaveScope();
						bbOnDebugLeaveScope();
						bbOnDebugLeaveScope();
						bbOnDebugLeaveScope();
						return (struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbObjectDowncast((BBOBJECT)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,(BBClass*)&maxgui_proxygadgets_colorpicker_tColorpicker)),(BBClass*)&maxgui_maxgui_gadget_TGadget));
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
	return (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
}
BBINT _maxgui_proxygadgets_buttonextra_tButtonExtra_SetProp_i(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* o,BBINT bbt_val){
	((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o));
	BBINT bbt_tw=0;
	BBINT bbt_ns=0;
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetProp",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tButtonExtra",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"val",
				"i",
				.var_address=&bbt_val
			},
			{
				BBDEBUGDECL_LOCAL,
				"tw",
				"i",
				.var_address=&bbt_tw
			},
			{
				BBDEBUGDECL_LOCAL,
				"ns",
				"i",
				.var_address=&bbt_ns
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 185, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if((((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_style ==13) || (((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_style ==19)){
		BBSTRING bbt_txt=&bbEmptyString;
		struct BBDebugScope_1 __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_LOCAL,
					"txt",
					"$",
					.var_address=&bbt_txt
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 186, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_SetSliderValue((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,bbt_val);
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 187, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_txt=bbStringReplace((BBSTRING)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_text ,&_s0,bbStringFromInt(maxgui_maxgui_SliderValue((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button )));
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 188, 0};
		bbOnDebugEnterStm(&__stmt_2);
		maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_label ,bbt_txt);
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 190, 0};
		bbOnDebugEnterStm(&__stmt_3);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return 0;
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 193, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_tw=maxgui_maxgui_GadgetWidth((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_panel );
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 194, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_ns=((BBINT)((((BBFLOAT)bbt_tw)*((BBFLOAT)bbt_val))/100.000000f));
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 195, 0};
	bbOnDebugEnterStm(&__stmt_3);
	maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_label ,0,0,bbt_ns,maxgui_maxgui_GadgetHeight((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_label ));
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 196, 0};
	bbOnDebugEnterStm(&__stmt_4);
	maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,bbt_ns,0,(bbt_tw-bbt_ns),maxgui_maxgui_GadgetHeight((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_label ));
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 198, 0};
	bbOnDebugEnterStm(&__stmt_5);
	bbOnDebugLeaveScope();
	return 0;
}
struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* maxgui_proxygadgets_buttonextra_tButtonExtra_Create_TtButtonExtra_SSiiiiTTGadgeti(BBSTRING bbt_msg,BBSTRING bbt_def,BBINT bbt_x,BBINT bbt_y,BBINT bbt_w,BBINT bbt_h,struct maxgui_maxgui_gadget_TGadget_obj* bbt_group,BBINT bbt_style){
	struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* bbt_sp=(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)&bbNullObject;
	BBSTRING bbt_txt=&bbEmptyString;
	BBINT bbt__substyle=0;
	BBARRAY volatile bbt__subvalue=&bbEmptyArray;
	struct BBDebugScope_12 __scope = {
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
				"def",
				"$",
				.var_address=&bbt_def
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
				":tButtonExtra",
				.var_address=&bbt_sp
			},
			{
				BBDEBUGDECL_LOCAL,
				"txt",
				"$",
				.var_address=&bbt_txt
			},
			{
				BBDEBUGDECL_LOCAL,
				"_substyle",
				"i",
				.var_address=&bbt__substyle
			},
			{
				BBDEBUGDECL_LOCAL,
				"_subvalue",
				"[]$",
				.var_address=&bbt__subvalue
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 202, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_sp=(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbObjectNew((BBClass *)&maxgui_proxygadgets_buttonextra_tButtonExtra);
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 203, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_txt=&bbEmptyString;
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 204, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_buttonextra_tbuttonextra_panel =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreatePanel(bbt_x,bbt_y,bbt_w,bbt_h,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group,0,&bbEmptyString);
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 205, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_buttonextra_tbuttonextra_label =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateLabel(bbt_msg,0,6,(bbt_w/2),(bbt_h-2),(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_buttonextra_tbuttonextra_panel ,0);
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 206, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_buttonextra_tbuttonextra_text =bbt_msg;
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 207, 0};
	bbOnDebugEnterStm(&__stmt_5);
	bbt__substyle=0;
	struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 208, 0};
	bbOnDebugEnterStm(&__stmt_6);
	bbt__subvalue=bbStringSplit((BBSTRING)bbt_def,&_s1);
	struct BBDebugStm __stmt_7 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 209, 0};
	bbOnDebugEnterStm(&__stmt_7);
	bbt__substyle=bbStringToInt(((BBSTRING*)BBARRAYDATAINDEX((bbt__subvalue),(bbt__subvalue)->dims,0U))[0U]);
	struct BBDebugStm __stmt_8 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 212, 0};
	bbOnDebugEnterStm(&__stmt_8);
	maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_buttonextra_tbuttonextra_label ,bbt_msg);
	struct BBDebugStm __stmt_9 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 215, 0};
	bbOnDebugEnterStm(&__stmt_9);
	if(bbt_style==4){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 219, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateTextField((bbt_w/2),0,(bbt_w/2),bbt_h,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_buttonextra_tbuttonextra_panel ,0);
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 223, 0};
		bbOnDebugEnterStm(&__stmt_1);
		maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,bbt_def);
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 215, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(bbt_style==2){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 225, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateButton(bbt_def,(bbt_w/2),0,(bbt_w/2),bbt_h,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_buttonextra_tbuttonextra_panel ,8);
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
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 215, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if(bbt_style==33){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 227, 0};
				bbOnDebugEnterStm(&__stmt_0);
				((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button =(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)maxgui_proxygadgets_colorpicker_CreateColorPicker((bbt_w/2),0,(bbt_w/2),bbt_h,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_buttonextra_tbuttonextra_panel ,bbt__substyle),(BBClass*)&maxgui_maxgui_gadget_TGadget));
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
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 215, 0};
				bbOnDebugEnterStm(&__stmt_0);
				if(bbt_style==32){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 229, 0};
					bbOnDebugEnterStm(&__stmt_0);
					((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateButton(bbt_def,(bbt_w/2),0,(bbt_w/2),bbt_h,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_buttonextra_tbuttonextra_panel ,2);
					struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 230, 0};
					bbOnDebugEnterStm(&__stmt_1);
					maxgui_maxgui_SetButtonState((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,bbt__substyle);
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
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 215, 0};
					bbOnDebugEnterStm(&__stmt_0);
					if(bbt_style==6){
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 232, 0};
						bbOnDebugEnterStm(&__stmt_0);
						((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateComboBox((bbt_w/2),0,(bbt_w/2),bbt_h,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_buttonextra_tbuttonextra_panel ,0);
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
						struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 215, 0};
						bbOnDebugEnterStm(&__stmt_0);
						if(bbt_style==13){
							struct BBDebugScope __scope = {
								BBDEBUGSCOPE_LOCALBLOCK,
								0,
								{
									BBDEBUGDECL_END 
								}
							};
							bbOnDebugEnterScope(&__scope);
							struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 234, 0};
							bbOnDebugEnterStm(&__stmt_0);
							((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateSlider((bbt_w/2),0,(bbt_w/2),bbt_h,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_buttonextra_tbuttonextra_panel ,5);
							struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 235, 0};
							bbOnDebugEnterStm(&__stmt_1);
							if((bbt__subvalue)->scales[0]==3){
								struct BBDebugScope __scope = {
									BBDEBUGSCOPE_LOCALBLOCK,
									0,
									{
										BBDEBUGDECL_END 
									}
								};
								bbOnDebugEnterScope(&__scope);
								struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 236, 0};
								bbOnDebugEnterStm(&__stmt_0);
								maxgui_maxgui_SetSliderRange((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,bbStringToInt(((BBSTRING*)BBARRAYDATAINDEX((bbt__subvalue),(bbt__subvalue)->dims,1U))[1U]),bbStringToInt(((BBSTRING*)BBARRAYDATAINDEX((bbt__subvalue),(bbt__subvalue)->dims,2U))[2U]));
								struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 237, 0};
								bbOnDebugEnterStm(&__stmt_1);
								maxgui_maxgui_SetSliderValue((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,bbt__substyle);
								bbOnDebugLeaveScope();
							}
							struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 239, 0};
							bbOnDebugEnterStm(&__stmt_2);
							bbt_txt=bbStringReplace((BBSTRING)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_buttonextra_tbuttonextra_text ,&_s0,bbStringFromInt(maxgui_maxgui_SliderValue((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button )));
							struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 240, 0};
							bbOnDebugEnterStm(&__stmt_3);
							maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_buttonextra_tbuttonextra_label ,bbt_txt);
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
							struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 215, 0};
							bbOnDebugEnterStm(&__stmt_0);
							if(bbt_style==14){
								struct BBDebugScope __scope = {
									BBDEBUGSCOPE_LOCALBLOCK,
									0,
									{
										BBDEBUGDECL_END 
									}
								};
								bbOnDebugEnterScope(&__scope);
								struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 243, 0};
								bbOnDebugEnterStm(&__stmt_0);
								((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateProgBar((bbt_w/2),0,(bbt_w/2),(bbt_h-5),(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_buttonextra_tbuttonextra_panel ,0);
								struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 244, 0};
								bbOnDebugEnterStm(&__stmt_1);
								bbt_txt=bbStringReplace((BBSTRING)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_buttonextra_tbuttonextra_text ,&_s0,&bbEmptyString);
								struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 245, 0};
								bbOnDebugEnterStm(&__stmt_2);
								maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_buttonextra_tbuttonextra_label ,bbt_txt);
								struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 246, 0};
								bbOnDebugEnterStm(&__stmt_3);
								if(bbt_def!=&bbEmptyString){
									struct BBDebugScope __scope = {
										BBDEBUGSCOPE_LOCALBLOCK,
										0,
										{
											BBDEBUGDECL_END 
										}
									};
									bbOnDebugEnterScope(&__scope);
									struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 247, 0};
									bbOnDebugEnterStm(&__stmt_0);
									maxgui_maxgui_UpdateProgBar((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,(((BBFLOAT)bbt__substyle)/100.000000f));
									struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 248, 0};
									bbOnDebugEnterStm(&__stmt_1);
									bbt_txt=bbStringReplace((BBSTRING)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_buttonextra_tbuttonextra_text ,&_s0,bbt_def);
									struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 249, 0};
									bbOnDebugEnterStm(&__stmt_2);
									maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_buttonextra_tbuttonextra_label ,bbt_txt);
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
								struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 215, 0};
								bbOnDebugEnterStm(&__stmt_0);
								if(((unsigned int)(bbt_style)&23)==23){
									struct BBDebugScope __scope = {
										BBDEBUGSCOPE_LOCALBLOCK,
										0,
										{
											BBDEBUGDECL_END 
										}
									};
									bbOnDebugEnterScope(&__scope);
									struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 253, 0};
									bbOnDebugEnterStm(&__stmt_0);
									((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button =(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)maxgui_proxygadgets_filepicker_CreateFilePicker(&bbEmptyString,bbt_def,(bbt_w/2),0,(bbt_w/2),(bbt_h-5),(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_buttonextra_tbuttonextra_panel ,1),(BBClass*)&maxgui_maxgui_gadget_TGadget));
									struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 254, 0};
									bbOnDebugEnterStm(&__stmt_1);
									((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ))->_maxgui_maxgui_gadget_tgadget_name =&_s2;
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
									struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 215, 0};
									bbOnDebugEnterStm(&__stmt_0);
									if(((unsigned int)(bbt_style)&40)==40){
										struct BBDebugScope __scope = {
											BBDEBUGSCOPE_LOCALBLOCK,
											0,
											{
												BBDEBUGDECL_END 
											}
										};
										bbOnDebugEnterScope(&__scope);
										struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 256, 0};
										bbOnDebugEnterStm(&__stmt_0);
										((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button =(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)maxgui_proxygadgets_filepicker_CreateFilePicker(&bbEmptyString,bbt_def,(bbt_w/2),0,(bbt_w/2),(bbt_h-5),(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_buttonextra_tbuttonextra_panel ,2),(BBClass*)&maxgui_maxgui_gadget_TGadget));
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
										struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 215, 0};
										bbOnDebugEnterStm(&__stmt_0);
										if(bbt_style==19){
											struct BBDebugScope __scope = {
												BBDEBUGSCOPE_LOCALBLOCK,
												0,
												{
													BBDEBUGDECL_END 
												}
											};
											bbOnDebugEnterScope(&__scope);
											struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 259, 0};
											bbOnDebugEnterStm(&__stmt_0);
											((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button =(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)maxgui_proxygadgets_spinner_CreateSpinner((bbt_w/2),0,(bbt_w/2),(bbt_h-5),(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_buttonextra_tbuttonextra_panel ,0),(BBClass*)&maxgui_maxgui_gadget_TGadget));
											struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 260, 0};
											bbOnDebugEnterStm(&__stmt_1);
											if(bbt_def!=&bbEmptyString){
												struct BBDebugScope __scope = {
													BBDEBUGSCOPE_LOCALBLOCK,
													0,
													{
														BBDEBUGDECL_END 
													}
												};
												bbOnDebugEnterScope(&__scope);
												struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 261, 0};
												bbOnDebugEnterStm(&__stmt_0);
												if((bbt__subvalue)->scales[0]==3){
													struct BBDebugScope __scope = {
														BBDEBUGSCOPE_LOCALBLOCK,
														0,
														{
															BBDEBUGDECL_END 
														}
													};
													bbOnDebugEnterScope(&__scope);
													struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 262, 0};
													bbOnDebugEnterStm(&__stmt_0);
													maxgui_proxygadgets_spinner_SetSpinnerRange((struct maxgui_proxygadgets_spinner_TSpinner_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbObjectDowncast((BBOBJECT)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,(BBClass*)&maxgui_proxygadgets_spinner_TSpinner)),((BBDOUBLE)bbStringToInt(((BBSTRING*)BBARRAYDATAINDEX((bbt__subvalue),(bbt__subvalue)->dims,1U))[1U])),((BBDOUBLE)bbStringToInt(((BBSTRING*)BBARRAYDATAINDEX((bbt__subvalue),(bbt__subvalue)->dims,2U))[2U])),1);
													struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 263, 0};
													bbOnDebugEnterStm(&__stmt_1);
													maxgui_proxygadgets_spinner_SetSpinnerValue((struct maxgui_proxygadgets_spinner_TSpinner_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbObjectDowncast((BBOBJECT)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,(BBClass*)&maxgui_proxygadgets_spinner_TSpinner)),((BBDOUBLE)bbt__substyle));
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
											struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 215, 0};
											bbOnDebugEnterStm(&__stmt_0);
											if(bbt_style==22){
												struct BBDebugScope __scope = {
													BBDEBUGSCOPE_LOCALBLOCK,
													0,
													{
														BBDEBUGDECL_END 
													}
												};
												bbOnDebugEnterScope(&__scope);
												struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 268, 0};
												bbOnDebugEnterStm(&__stmt_0);
												((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_proxygadgets_datepicker_CreateDatePicker((bbt_w/2),0,(bbt_w/2),(bbt_h-5),(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_buttonextra_tbuttonextra_panel );
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
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_10 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 273, 0};
	bbOnDebugEnterStm(&__stmt_10);
	((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_buttonextra_tbuttonextra_style =bbt_style;
	struct BBDebugStm __stmt_11 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 274, 0};
	bbOnDebugEnterStm(&__stmt_11);
	brl_hook_AddHook(brl_event_EmitEventHook,maxgui_proxygadgets_buttonextra_tButtonExtra_eventHandler_TObject_iTObjectTObject,(BBOBJECT)bbt_sp,0);
	struct BBDebugStm __stmt_12 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 275, 0};
	bbOnDebugEnterStm(&__stmt_12);
	((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_sp))->clas->m_SetProxy_TTGadget((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbt_sp,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_sp,(BBClass*)&maxgui_maxgui_gadget_TGadget)));
	struct BBDebugStm __stmt_13 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 279, 0};
	bbOnDebugEnterStm(&__stmt_13);
	maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_buttonextra_tbuttonextra_panel ,1,1,1,0);
	struct BBDebugStm __stmt_14 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 280, 0};
	bbOnDebugEnterStm(&__stmt_14);
	maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,0,1,1,0);
	struct BBDebugStm __stmt_15 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 281, 0};
	bbOnDebugEnterStm(&__stmt_15);
	maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_buttonextra_tbuttonextra_label ,1,0,1,0);
	struct BBDebugStm __stmt_16 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 283, 0};
	bbOnDebugEnterStm(&__stmt_16);
	BBINT bbt_=bbt_style;
	struct BBDebugStm __stmt_17 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 284, 0};
	bbOnDebugEnterStm(&__stmt_17);
	if(((bbt_==4) || (bbt_==14)) || (bbt_==13)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 285, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,1,1,1,0);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_18 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 291, 0};
	bbOnDebugEnterStm(&__stmt_18);
	bbOnDebugLeaveScope();
	return (struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbt_sp;
}
BBINT _maxgui_proxygadgets_buttonextra_tButtonExtra_SetLayout_iiii(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* o,BBINT bbt_a,BBINT bbt_b,BBINT bbt_c,BBINT bbt_d){
	((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o));
	struct BBDebugScope_5 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetLayout",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tButtonExtra",
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 295, 0};
	bbOnDebugEnterStm(&__stmt_0);
	maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_panel ,bbt_a,bbt_b,bbt_c,bbt_d);
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 298, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_buttonextra_tButtonExtra_SetValue__d(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* o,BBDOUBLE bbt_value){
	((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetValue_",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tButtonExtra",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"value",
				"d",
				.var_address=&bbt_value
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 303, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_style ==19){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 303, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_proxygadgets_spinner_SetSpinnerValue((struct maxgui_proxygadgets_spinner_TSpinner_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbObjectDowncast((BBOBJECT)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,(BBClass*)&maxgui_proxygadgets_spinner_TSpinner)),bbt_value);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_buttonextra_tButtonExtra_SetRange__ddi(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* o,BBDOUBLE bbt_minimum,BBDOUBLE bbt_maximum,BBINT bbt_accuracy){
	((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o));
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetRange_",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tButtonExtra",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"minimum",
				"d",
				.var_address=&bbt_minimum
			},
			{
				BBDEBUGDECL_LOCAL,
				"maximum",
				"d",
				.var_address=&bbt_maximum
			},
			{
				BBDEBUGDECL_LOCAL,
				"accuracy",
				"i",
				.var_address=&bbt_accuracy
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 307, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_style ==19){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 307, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_proxygadgets_spinner_SetSpinnerRange((struct maxgui_proxygadgets_spinner_TSpinner_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbObjectDowncast((BBOBJECT)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,(BBClass*)&maxgui_proxygadgets_spinner_TSpinner)),bbt_minimum,bbt_maximum,bbt_accuracy);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_buttonextra_tButtonExtra_SetEnabled_i(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* o,BBINT bbt_sta){
	((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetEnabled",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tButtonExtra",
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 311, 0};
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 312, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_panel );
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 313, 0};
		bbOnDebugEnterStm(&__stmt_1);
		maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button );
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 314, 0};
		bbOnDebugEnterStm(&__stmt_2);
		maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_label );
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 317, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_label );
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 318, 0};
		bbOnDebugEnterStm(&__stmt_1);
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button );
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 319, 0};
		bbOnDebugEnterStm(&__stmt_2);
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_panel );
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_buttonextra_tButtonExtra_State(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* o){
	((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"State",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tButtonExtra",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 325, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_style ==32){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 325, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return ((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ))->clas->m_State((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button );
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_buttonextra_tButtonExtra_SetSelected_i(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* o,BBINT bbt_st){
	((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetSelected",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tButtonExtra",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"st",
				"i",
				.var_address=&bbt_st
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 329, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_style ==32){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 329, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_SetButtonState((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,bbt_st);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_buttonextra_tButtonExtra_SetColor_iii(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* o,BBINT bbt_RED,BBINT bbt_green,BBINT bbt_blue){
	((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o));
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetColor",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tButtonExtra",
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 333, 0};
	bbOnDebugEnterStm(&__stmt_0);
	maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_label ,bbt_RED,bbt_green,bbt_blue,1);
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 334, 0};
	bbOnDebugEnterStm(&__stmt_1);
	maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_panel ,bbt_RED,bbt_green,bbt_blue,1);
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 335, 0};
	bbOnDebugEnterStm(&__stmt_2);
	maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,bbt_RED,bbt_green,bbt_blue,1);
	bbOnDebugLeaveScope();
	return 0;
}
BBSTRING _maxgui_proxygadgets_buttonextra_tButtonExtra_GetText(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* o){
	((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o));
	BBSTRING bbt__extradata=&bbEmptyString;
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"GetText",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tButtonExtra",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"_extradata",
				"$",
				.var_address=&bbt__extradata
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 340, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt__extradata=&bbEmptyString;
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 341, 0};
	bbOnDebugEnterStm(&__stmt_1);
	BBINT bbt_=((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_style ;
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 342, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if((bbt_==4) || (bbt_==22)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 342, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return maxgui_maxgui_GadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button );
	}
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 344, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbOnDebugLeaveScope();
	return &bbEmptyString;
}
BBINT _maxgui_proxygadgets_buttonextra_tButtonExtra_SetTooltip_S(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* o,BBSTRING bbt__tip){
	((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetTooltip",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tButtonExtra",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"_tip",
				"$",
				.var_address=&bbt__tip
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 348, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_style ==4){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 348, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o));
		((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)o)->clas->m_SetTooltip_S((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)o,bbt__tip);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 349, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_buttonextra_tButtonExtra_SetText_S(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* o,BBSTRING bbt_tx){
	((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetText",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tButtonExtra",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"tx",
				"$",
				.var_address=&bbt_tx
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 354, 0};
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 354, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return 0;
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 358, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(bbStringContains((BBSTRING)bbStringToUpper((BBSTRING)bbt_tx),&_s3)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 359, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_tx=bbStringReplace((BBSTRING)bbt_tx,&_s3,&bbEmptyString);
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 360, 0};
		bbOnDebugEnterStm(&__stmt_1);
		maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_label ,bbt_tx);
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 361, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return 1;
	}
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 364, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(bbStringContains((BBSTRING)bbStringToUpper((BBSTRING)bbt_tx),&_s4)!=0){
		BBINT bbt_tw=0;
		BBINT bbt_ns=0;
		struct BBDebugScope_2 __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_LOCAL,
					"tw",
					"i",
					.var_address=&bbt_tw
				},
				{
					BBDEBUGDECL_LOCAL,
					"ns",
					"i",
					.var_address=&bbt_ns
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 365, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_tx=bbStringReplace((BBSTRING)bbt_tx,&_s4,&bbEmptyString);
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 367, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_tw=maxgui_maxgui_GadgetWidth((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_panel );
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 368, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_ns=((BBINT)((((BBFLOAT)bbt_tw)*((BBFLOAT)bbStringToInt(bbt_tx)))/100.000000f));
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 369, 0};
		bbOnDebugEnterStm(&__stmt_3);
		maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_label ,0,0,bbt_ns,maxgui_maxgui_GadgetHeight((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_label ));
		struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 370, 0};
		bbOnDebugEnterStm(&__stmt_4);
		maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,bbt_ns,0,(bbt_tw-bbt_ns),maxgui_maxgui_GadgetHeight((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_label ));
		struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 371, 0};
		bbOnDebugEnterStm(&__stmt_5);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return 1;
	}
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 374, 0};
	bbOnDebugEnterStm(&__stmt_3);
	maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,bbt_tx);
	bbOnDebugLeaveScope();
	return 0;
}
BBOBJECT maxgui_proxygadgets_buttonextra_tButtonExtra_eventHandler_TObject_iTObjectTObject(BBINT bbt_pID,BBOBJECT bbt_pData,BBOBJECT bbt_pContext){
	struct brl_event_TEvent_obj* bbt_pEvent=(struct brl_event_TEvent_obj*)&bbNullObject;
	struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* bbt_obj=(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)&bbNullObject;
	BBINT bbt__data=0;
	BBSTRING bbt__extraData=&bbEmptyString;
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
				":tButtonExtra",
				.var_address=&bbt_obj
			},
			{
				BBDEBUGDECL_LOCAL,
				"_data",
				"i",
				.var_address=&bbt__data
			},
			{
				BBDEBUGDECL_LOCAL,
				"_extraData",
				"$",
				.var_address=&bbt__extraData
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 378, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_pEvent=(struct brl_event_TEvent_obj*)((struct brl_event_TEvent_obj*)bbObjectDowncast((BBOBJECT)bbt_pData,(BBClass*)&brl_event_TEvent));
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 379, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_obj=(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbObjectDowncast((BBOBJECT)bbt_pContext,(BBClass*)&maxgui_proxygadgets_buttonextra_tButtonExtra));
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 380, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt__data=0;
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 380, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt__extraData=&bbEmptyString;
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 382, 0};
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 384, 0};
		bbOnDebugEnterStm(&__stmt_0);
		BBINT bbt_=((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_pEvent))->_brl_event_tevent_id ;
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 385, 0};
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
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 386, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if(((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_pEvent))->_brl_event_tevent_source ==((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 388, 0};
				bbOnDebugEnterStm(&__stmt_0);
				BBINT bbt_2=((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_buttonextra_tbuttonextra_style ;
				struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 389, 0};
				bbOnDebugEnterStm(&__stmt_1);
				if(((bbt_2==4) || (bbt_2==40)) || (bbt_2==23)){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 390, 0};
					bbOnDebugEnterStm(&__stmt_0);
					bbt__extraData=maxgui_maxgui_GadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button );
					struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 391, 0};
					bbOnDebugEnterStm(&__stmt_1);
					maxgui_maxgui_SetGadgetExtra((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_obj,(BBClass*)&maxgui_maxgui_gadget_TGadget)),(BBOBJECT)bbt__extraData);
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
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 394, 0};
					bbOnDebugEnterStm(&__stmt_0);
					if(bbt_2==22){
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 395, 0};
						bbOnDebugEnterStm(&__stmt_0);
						bbt__extraData=((BBString *)bbObjectDowncast((BBOBJECT)maxgui_maxgui_GadgetExtra((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ),(BBClass*)&bbStringClass));
						struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 396, 0};
						bbOnDebugEnterStm(&__stmt_1);
						maxgui_maxgui_SetGadgetExtra((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_obj,(BBClass*)&maxgui_maxgui_gadget_TGadget)),(BBOBJECT)bbt__extraData);
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
						struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 398, 0};
						bbOnDebugEnterStm(&__stmt_0);
						if(bbt_2==6){
							struct BBDebugScope __scope = {
								BBDEBUGSCOPE_LOCALBLOCK,
								0,
								{
									BBDEBUGDECL_END 
								}
							};
							bbOnDebugEnterScope(&__scope);
							struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 399, 0};
							bbOnDebugEnterStm(&__stmt_0);
							bbt__data=maxgui_maxgui_SelectedGadgetItem((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button );
							struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 400, 0};
							bbOnDebugEnterStm(&__stmt_1);
							maxgui_maxgui_SetGadgetExtra((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_obj,(BBClass*)&maxgui_maxgui_gadget_TGadget)),(BBOBJECT)bbStringFromInt(bbt__data));
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
							struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 402, 0};
							bbOnDebugEnterStm(&__stmt_0);
							if(bbt_2==13){
								BBSTRING bbt_txt=&bbEmptyString;
								struct BBDebugScope_1 __scope = {
									BBDEBUGSCOPE_LOCALBLOCK,
									0,
									{
										{
											BBDEBUGDECL_LOCAL,
											"txt",
											"$",
											.var_address=&bbt_txt
										},
										BBDEBUGDECL_END 
									}
								};
								bbOnDebugEnterScope(&__scope);
								struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 403, 0};
								bbOnDebugEnterStm(&__stmt_0);
								bbt_txt=&bbEmptyString;
								struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 404, 0};
								bbOnDebugEnterStm(&__stmt_1);
								bbt_txt=bbStringReplace((BBSTRING)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_buttonextra_tbuttonextra_text ,&_s0,bbStringFromInt(maxgui_maxgui_SliderValue((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button )));
								struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 405, 0};
								bbOnDebugEnterStm(&__stmt_2);
								maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_buttonextra_tbuttonextra_label ,bbt_txt);
								struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 406, 0};
								bbOnDebugEnterStm(&__stmt_3);
								bbt__data=maxgui_maxgui_SliderValue((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button );
								struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 407, 0};
								bbOnDebugEnterStm(&__stmt_4);
								maxgui_maxgui_SetGadgetExtra((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_obj,(BBClass*)&maxgui_maxgui_gadget_TGadget)),(BBOBJECT)bbStringFromInt(bbt__data));
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
								struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 409, 0};
								bbOnDebugEnterStm(&__stmt_0);
								if(bbt_2==19){
									struct BBDebugScope __scope = {
										BBDEBUGSCOPE_LOCALBLOCK,
										0,
										{
											BBDEBUGDECL_END 
										}
									};
									bbOnDebugEnterScope(&__scope);
									struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 410, 0};
									bbOnDebugEnterStm(&__stmt_0);
									bbt__data=((BBINT)maxgui_proxygadgets_spinner_SpinnerValue((struct maxgui_proxygadgets_spinner_TSpinner_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbObjectDowncast((BBOBJECT)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,(BBClass*)&maxgui_proxygadgets_spinner_TSpinner))));
									struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 411, 0};
									bbOnDebugEnterStm(&__stmt_1);
									bbt__extraData=bbStringFromFloat((BBFLOAT)bbt__data);
									struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 412, 0};
									bbOnDebugEnterStm(&__stmt_2);
									maxgui_maxgui_SetGadgetExtra((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_obj,(BBClass*)&maxgui_maxgui_gadget_TGadget)),(BBOBJECT)bbStringFromInt(bbt__data));
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
									struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 413, 0};
									bbOnDebugEnterStm(&__stmt_0);
									if(bbt_2==32){
										struct BBDebugScope __scope = {
											BBDEBUGSCOPE_LOCALBLOCK,
											0,
											{
												BBDEBUGDECL_END 
											}
										};
										bbOnDebugEnterScope(&__scope);
										struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 415, 0};
										bbOnDebugEnterStm(&__stmt_0);
										bbt__data=maxgui_maxgui_ButtonState((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button );
										struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 416, 0};
										bbOnDebugEnterStm(&__stmt_1);
										bbt__extraData=bbStringFromInt(maxgui_maxgui_ButtonState((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ));
										struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 417, 0};
										bbOnDebugEnterStm(&__stmt_2);
										maxgui_maxgui_SetGadgetExtra((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_obj,(BBClass*)&maxgui_maxgui_gadget_TGadget)),(BBOBJECT)bbStringFromInt(bbt__data));
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
				struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 421, 0};
				bbOnDebugEnterStm(&__stmt_2);
				brl_event_EmitEvent((struct brl_event_TEvent_obj*)brl_event_CreateEvent(8193,(BBOBJECT)bbt_obj,bbt__data,0,0,0,(BBOBJECT)bbt__extraData));
				struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 422, 0};
				bbOnDebugEnterStm(&__stmt_3);
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
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 429, 0};
	bbOnDebugEnterStm(&__stmt_5);
	bbOnDebugLeaveScope();
	return (BBOBJECT)bbt_pData;
}
struct BBDebugScope_33 maxgui_proxygadgets_buttonextra_tButtonExtra_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"tButtonExtra",
	{
		{
			BBDEBUGDECL_FIELD,
			"panel",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj,_maxgui_proxygadgets_buttonextra_tbuttonextra_panel)
		},
		{
			BBDEBUGDECL_FIELD,
			"label",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj,_maxgui_proxygadgets_buttonextra_tbuttonextra_label)
		},
		{
			BBDEBUGDECL_FIELD,
			"button",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj,_maxgui_proxygadgets_buttonextra_tbuttonextra_button)
		},
		{
			BBDEBUGDECL_FIELD,
			"style",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj,_maxgui_proxygadgets_buttonextra_tbuttonextra_style)
		},
		{
			BBDEBUGDECL_FIELD,
			"Text",
			"$",
			.field_offset=offsetof(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj,_maxgui_proxygadgets_buttonextra_tbuttonextra_text)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_maxgui_proxygadgets_buttonextra_tButtonExtra_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetFont",
			"(:TGuiFont)i",
			.var_address=(void*)&_maxgui_proxygadgets_buttonextra_tButtonExtra_SetFont_TTGuiFont
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"CleanUp",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_buttonextra_tButtonExtra_CleanUp
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ItemExtra",
			"(i):Object",
			.var_address=(void*)&_maxgui_proxygadgets_buttonextra_tButtonExtra_ItemExtra_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Clear",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_buttonextra_tButtonExtra_Clear
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetPixmap",
			"(:TPixmap,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_buttonextra_tButtonExtra_SetPixmap_TTPixmapi
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetItem",
			"(i,$,$,i,:Object,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_buttonextra_tButtonExtra_SetItem_iSSiTObjecti
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"RemoveItem",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_buttonextra_tButtonExtra_RemoveItem_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ItemCount",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_buttonextra_tButtonExtra_ItemCount
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SelectedItem",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_buttonextra_tButtonExtra_SelectedItem
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SelectItem",
			"(i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_buttonextra_tButtonExtra_SelectItem_ii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"InsertItem",
			"(i,$,$,i,:Object,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_buttonextra_tButtonExtra_InsertItem_iSSiTObjecti
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetRange",
			"(i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_buttonextra_tButtonExtra_SetRange_ii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetValue",
			"(f)i",
			.var_address=(void*)&_maxgui_proxygadgets_buttonextra_tButtonExtra_SetValue_f
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetProxy",
			"():TGadget",
			.var_address=(void*)&_maxgui_proxygadgets_buttonextra_tButtonExtra_GetProxy
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetProp",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_buttonextra_tButtonExtra_SetProp_i
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Create",
			"($,$,i,i,i,i,:TGadget,i):tButtonExtra",
			.var_address=(void*)&maxgui_proxygadgets_buttonextra_tButtonExtra_Create_TtButtonExtra_SSiiiiTTGadgeti
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetLayout",
			"(i,i,i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_buttonextra_tButtonExtra_SetLayout_iiii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetValue_",
			"(d)i",
			.var_address=(void*)&_maxgui_proxygadgets_buttonextra_tButtonExtra_SetValue__d
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetRange_",
			"(d,d,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_buttonextra_tButtonExtra_SetRange__ddi
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetEnabled",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_buttonextra_tButtonExtra_SetEnabled_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"State",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_buttonextra_tButtonExtra_State
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetSelected",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_buttonextra_tButtonExtra_SetSelected_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetColor",
			"(i,i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_buttonextra_tButtonExtra_SetColor_iii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetText",
			"()$",
			.var_address=(void*)&_maxgui_proxygadgets_buttonextra_tButtonExtra_GetText
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetTooltip",
			"($)i",
			.var_address=(void*)&_maxgui_proxygadgets_buttonextra_tButtonExtra_SetTooltip_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetText",
			"($)i",
			.var_address=(void*)&_maxgui_proxygadgets_buttonextra_tButtonExtra_SetText_S
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"eventHandler",
			"(i,:Object,:Object):Object",
			.var_address=(void*)&maxgui_proxygadgets_buttonextra_tButtonExtra_eventHandler_TObject_iTObjectTObject
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_maxgui_proxygadgets_buttonextra_tButtonExtra maxgui_proxygadgets_buttonextra_tButtonExtra={
	&maxgui_maxgui_gadget_TProxyGadget,
	bbObjectFree,
	(BBDebugScope*)&maxgui_proxygadgets_buttonextra_tButtonExtra_scope,
	sizeof(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj),
	(void (*)(BBOBJECT))_maxgui_proxygadgets_buttonextra_tButtonExtra_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj,_maxgui_proxygadgets_buttonextra_tbuttonextra_text) - sizeof(void*) + sizeof(BBSTRING)
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
	,_maxgui_proxygadgets_buttonextra_tButtonExtra_SetLayout_iiii
	,_maxgui_maxgui_gadget_TGadget_LayoutKids
	,_maxgui_maxgui_gadget_TGadget_DoLayout
	,_maxgui_maxgui_gadget_TGadget_SetDataSource_TObject
	,maxgui_maxgui_gadget_TGadget_KeysFromList_aS_TTList
	,maxgui_maxgui_gadget_TGadget_KeysFromObjectArray_aS_aTObject
	,_maxgui_maxgui_gadget_TGadget_SyncDataSource
	,_maxgui_maxgui_gadget_TGadget_SyncData_aS
	,_maxgui_maxgui_gadget_TGadget_InsertItemFromKey_iS
	,_maxgui_proxygadgets_buttonextra_tButtonExtra_Clear
	,_maxgui_proxygadgets_buttonextra_tButtonExtra_InsertItem_iSSiTObjecti
	,_maxgui_proxygadgets_buttonextra_tButtonExtra_SetItem_iSSiTObjecti
	,_maxgui_proxygadgets_buttonextra_tButtonExtra_RemoveItem_i
	,_maxgui_proxygadgets_buttonextra_tButtonExtra_ItemCount
	,_maxgui_maxgui_gadget_TProxyGadget_ItemText_i
	,_maxgui_maxgui_gadget_TProxyGadget_ItemTip_i
	,_maxgui_maxgui_gadget_TProxyGadget_ItemFlags_i
	,_maxgui_maxgui_gadget_TProxyGadget_ItemIcon_i
	,_maxgui_proxygadgets_buttonextra_tButtonExtra_ItemExtra_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetItemState_ii
	,_maxgui_maxgui_gadget_TProxyGadget_ItemState_i
	,_maxgui_proxygadgets_buttonextra_tButtonExtra_SelectItem_ii
	,_maxgui_proxygadgets_buttonextra_tButtonExtra_SelectedItem
	,_maxgui_maxgui_gadget_TProxyGadget_SelectedItems
	,_maxgui_maxgui_gadget_TGadget_Insert_TTGadgeti
	,_maxgui_maxgui_gadget_TProxyGadget_Query_i
	,_maxgui_maxgui_gadget_TGadget_ScaleFactor
	,_maxgui_proxygadgets_buttonextra_tButtonExtra_CleanUp
	,_maxgui_maxgui_gadget_TProxyGadget_Free
	,_maxgui_maxgui_gadget_TProxyGadget_Rethink
	,_maxgui_maxgui_gadget_TProxyGadget_ClientWidth
	,_maxgui_maxgui_gadget_TProxyGadget_ClientHeight
	,_maxgui_maxgui_gadget_TProxyGadget_Activate_i
	,_maxgui_proxygadgets_buttonextra_tButtonExtra_State
	,_maxgui_proxygadgets_buttonextra_tButtonExtra_SetText_S
	,_maxgui_proxygadgets_buttonextra_tButtonExtra_GetText
	,_maxgui_proxygadgets_buttonextra_tButtonExtra_SetFont_TTGuiFont
	,_maxgui_proxygadgets_buttonextra_tButtonExtra_SetColor_iii
	,_maxgui_maxgui_gadget_TProxyGadget_RemoveColor
	,_maxgui_maxgui_gadget_TProxyGadget_SetAlpha_f
	,_maxgui_maxgui_gadget_TProxyGadget_SetTextColor_iii
	,_maxgui_proxygadgets_buttonextra_tButtonExtra_SetTooltip_S
	,_maxgui_maxgui_gadget_TProxyGadget_GetTooltip
	,_maxgui_proxygadgets_buttonextra_tButtonExtra_SetPixmap_TTPixmapi
	,_maxgui_maxgui_gadget_TProxyGadget_SetIconStrip_TTIconStrip
	,_maxgui_maxgui_gadget_TProxyGadget_SetShow_i
	,_maxgui_proxygadgets_buttonextra_tButtonExtra_SetEnabled_i
	,_maxgui_proxygadgets_buttonextra_tButtonExtra_SetSelected_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetHotKey_ii
	,_maxgui_maxgui_gadget_TProxyGadget_SetSensitivity_i
	,_maxgui_maxgui_gadget_TProxyGadget_GetSensitivity
	,_maxgui_maxgui_gadget_TProxyGadget_Class
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
	,_maxgui_proxygadgets_buttonextra_tButtonExtra_SetValue_f
	,_maxgui_proxygadgets_buttonextra_tButtonExtra_SetRange_ii
	,_maxgui_proxygadgets_buttonextra_tButtonExtra_SetProp_i
	,_maxgui_maxgui_gadget_TProxyGadget_GetProp
	,_maxgui_maxgui_gadget_TProxyGadget_AttachGraphics_i
	,_maxgui_maxgui_gadget_TProxyGadget_CanvasGraphics
	,_maxgui_maxgui_gadget_TProxyGadget_Run_S
	,_maxgui_maxgui_gadget_TProxyGadget_SetProxy_TTGadget
	,_maxgui_proxygadgets_buttonextra_tButtonExtra_GetProxy
	,_maxgui_maxgui_gadget_TProxyGadget_SetStatus_S
	,maxgui_proxygadgets_buttonextra_tButtonExtra_Create_TtButtonExtra_SSiiiiTTGadgeti
	,_maxgui_proxygadgets_buttonextra_tButtonExtra_SetValue__d
	,_maxgui_proxygadgets_buttonextra_tButtonExtra_SetRange__ddi
	,maxgui_proxygadgets_buttonextra_tButtonExtra_eventHandler_TObject_iTObjectTObject
};

struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* maxgui_proxygadgets_buttonextra_CreateButtonExtra(BBSTRING bbt_msg,BBSTRING bbt_def,BBINT bbt_x,BBINT bbt_y,BBINT bbt_w,BBINT bbt_h,struct maxgui_maxgui_gadget_TGadget_obj* bbt_group,BBINT bbt_style){
	struct BBDebugScope_8 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"CreateButtonExtra",
		{
			{
				BBDEBUGDECL_LOCAL,
				"msg",
				"$",
				.var_address=&bbt_msg
			},
			{
				BBDEBUGDECL_LOCAL,
				"def",
				"$",
				.var_address=&bbt_def
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/ButtonExtra.bmx", 62, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return (struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)maxgui_proxygadgets_buttonextra_tButtonExtra_Create_TtButtonExtra_SSiiiiTTGadgeti(bbt_msg,bbt_def,bbt_x,bbt_y,bbt_w,bbt_h,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group,bbt_style);
}
static int _bb_maxgui_proxygadgets_buttonextra_inited = 0;
int _bb_maxgui_proxygadgets_buttonextra(){
	if (!_bb_maxgui_proxygadgets_buttonextra_inited) {
		_bb_maxgui_proxygadgets_buttonextra_inited = 1;
		__bb_brl_blitz_blitz();
		_bb_maxgui_proxygadgets_spinner();
		_bb_maxgui_proxygadgets_filepicker();
		_bb_maxgui_proxygadgets_datepicker();
		_bb_maxgui_proxygadgets_colorpicker();
		bbObjectRegisterType((BBCLASS)&maxgui_proxygadgets_buttonextra_tButtonExtra);
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_FUNCTION,
			"ButtonExtra",
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