#include "DatePicker.bmx.debug.win32.x64.h"
static BBString _s1={
	&bbStringClass,
	1,
	{42}
};
static BBString _s0={
	&bbStringClass,
	10,
	{100,100,47,109,109,47,121,121,121,121}
};
struct BBDebugScope_1{int kind; const char *name; BBDebugDecl decls[2]; };
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
struct BBDebugScope_27{int kind; const char *name; BBDebugDecl decls[28]; };
struct BBDebugScope_3{int kind; const char *name; BBDebugDecl decls[4]; };
struct BBDebugScope_4{int kind; const char *name; BBDebugDecl decls[5]; };
struct BBDebugScope_5{int kind; const char *name; BBDebugDecl decls[6]; };
struct BBDebugScope_6{int kind; const char *name; BBDebugDecl decls[7]; };
struct BBDebugScope_8{int kind; const char *name; BBDebugDecl decls[9]; };
void _maxgui_proxygadgets_datepicker_tdatepicker_New(struct maxgui_proxygadgets_datepicker_tdatepicker_obj* o) {
	_maxgui_maxgui_gadget_TProxyGadget_New((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o);
	o->clas = &maxgui_proxygadgets_datepicker_tdatepicker;
	((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_panel = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_panel2 = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_label = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_button = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_window = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_superparent = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_style = 0;
	((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_calendar = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_active = 0;
	((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_x = 0;
	((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_y = 0;
	((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_h = 0;
	((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_pixmap = (struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_grey_pixmap = (struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_format = &_s0;
}
BBINT _maxgui_proxygadgets_datepicker_tdatepicker_SetFont_TTGuiFont(struct maxgui_proxygadgets_datepicker_tdatepicker_obj* o,struct maxgui_maxgui_guifont_TGuiFont_obj* bbt_fnt){
	((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetFont",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tdatepicker",
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 51, 0};
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 51, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return 0;
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 52, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(((BBObject*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_label )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 52, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_SetGadgetFont((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_label ,(struct maxgui_maxgui_guifont_TGuiFont_obj*)bbt_fnt,0);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 53, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(((BBObject*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_button )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 53, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_SetGadgetFont((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_button ,(struct maxgui_maxgui_guifont_TGuiFont_obj*)bbt_fnt,0);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_datepicker_tdatepicker_CleanUp(struct maxgui_proxygadgets_datepicker_tdatepicker_obj* o){
	((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"CleanUp",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tdatepicker",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 58, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_pixmap =(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 59, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_grey_pixmap =(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 60, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(((BBObject*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_panel )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 60, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_panel );
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 60, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_panel =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 61, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if(((BBObject*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_panel2 )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 61, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_panel2 );
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 61, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_panel2 =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 62, 0};
	bbOnDebugEnterStm(&__stmt_4);
	if(((BBObject*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_label )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 62, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_label );
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 62, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_label =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 63, 0};
	bbOnDebugEnterStm(&__stmt_5);
	if(((BBObject*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_button )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 63, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_button );
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 63, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_button =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 64, 0};
	bbOnDebugEnterStm(&__stmt_6);
	if(((BBObject*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_window )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 64, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_window );
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 64, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_window =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_7 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 65, 0};
	bbOnDebugEnterStm(&__stmt_7);
	if(((BBObject*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_calendar )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 65, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_calendar );
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 65, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_calendar =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_8 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 67, 0};
	bbOnDebugEnterStm(&__stmt_8);
	brl_hook_RemoveHook(brl_event_EmitEventHook,o->clas->f_eventHandler_TObject_iTObjectTObject,(BBOBJECT)o);
	struct BBDebugStm __stmt_9 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 68, 0};
	bbOnDebugEnterStm(&__stmt_9);
	(&maxgui_proxygadgets_datepicker_tdatepicker)->super->m_CleanUp((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_datepicker_tdatepicker_SetShow_i(struct maxgui_proxygadgets_datepicker_tdatepicker_obj* o,BBINT bbt_bool){
	((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetShow",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tdatepicker",
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 72, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_panel ))->clas->m_SetShow_i((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_panel ,bbt_bool);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_datepicker_tdatepicker_SetText_S(struct maxgui_proxygadgets_datepicker_tdatepicker_obj* o,BBSTRING bbt_txt){
	((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetText",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tdatepicker",
				.var_address=&o
			},
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 76, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(bbStringStartsWith((BBSTRING)bbt_txt,&_s1)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 77, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(((BBObject*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_calendar )!= &bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 77, 0};
			bbOnDebugEnterStm(&__stmt_0);
			maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_calendar ,bbStringSlice(bbt_txt,1,(bbt_txt)->length));
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 79, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(((BBObject*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_label )!= &bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 79, 0};
			bbOnDebugEnterStm(&__stmt_0);
			maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_label ,bbt_txt);
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_datepicker_tdatepicker_SetEnabled_i(struct maxgui_proxygadgets_datepicker_tdatepicker_obj* o,BBINT bbt_status){
	((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetEnabled",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tdatepicker",
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 84, 0};
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 85, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_panel );
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 86, 0};
		bbOnDebugEnterStm(&__stmt_1);
		maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_button ,(struct brl_pixmap_TPixmap_obj*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_pixmap ,8);
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 88, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_button ,(struct brl_pixmap_TPixmap_obj*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_grey_pixmap ,8);
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 89, 0};
		bbOnDebugEnterStm(&__stmt_1);
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_panel );
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBSTRING _maxgui_proxygadgets_datepicker_tdatepicker_GetText(struct maxgui_proxygadgets_datepicker_tdatepicker_obj* o){
	((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"GetText",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tdatepicker",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 98, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return maxgui_maxgui_GadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_label );
}
BBINT _maxgui_proxygadgets_datepicker_tdatepicker_Class(struct maxgui_proxygadgets_datepicker_tdatepicker_obj* o){
	((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Class",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tdatepicker",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 102, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return 22;
}
BBINT _maxgui_proxygadgets_datepicker_tdatepicker_SetPixmap_TTPixmapi(struct maxgui_proxygadgets_datepicker_tdatepicker_obj* o,struct brl_pixmap_TPixmap_obj* bbt_pix,BBINT bbt_flags){
	((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o));
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetPixmap",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tdatepicker",
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 106, 0};
	bbOnDebugEnterStm(&__stmt_0);
	maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_button ,(struct brl_pixmap_TPixmap_obj*)bbt_pix,8);
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 107, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_pixmap =(struct brl_pixmap_TPixmap_obj*)bbt_pix;
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 108, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_grey_pixmap =(struct brl_pixmap_TPixmap_obj*)((struct brl_pixmap_TPixmap_obj*)bbObjectDowncast((BBOBJECT)maxgui_proxygadgets_common_MakeGrey((BBOBJECT)bbt_pix),(BBClass*)&brl_pixmap_TPixmap));
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_datepicker_tdatepicker_SetColor_iii(struct maxgui_proxygadgets_datepicker_tdatepicker_obj* o,BBINT bbt_rr,BBINT bbt_gg,BBINT bbt_bb){
	((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o));
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetColor",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tdatepicker",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"rr",
				"i",
				.var_address=&bbt_rr
			},
			{
				BBDEBUGDECL_LOCAL,
				"gg",
				"i",
				.var_address=&bbt_gg
			},
			{
				BBDEBUGDECL_LOCAL,
				"bb",
				"i",
				.var_address=&bbt_bb
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 112, 0};
	bbOnDebugEnterStm(&__stmt_0);
	maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_datepicker_tdatepicker_label ,bbt_rr,bbt_gg,bbt_bb,1);
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 113, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbOnDebugLeaveScope();
	return 0;
}
struct maxgui_proxygadgets_datepicker_tdatepicker_obj* maxgui_proxygadgets_datepicker_tdatepicker_Create_Ttdatepicker_iiiiTTGadget(BBINT bbt_x,BBINT bbt_y,BBINT bbt_w,BBINT bbt_h,struct maxgui_maxgui_gadget_TGadget_obj* bbt_group){
	struct maxgui_proxygadgets_datepicker_tdatepicker_obj* bbt_sp=(struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)&bbNullObject;
	struct BBDebugScope_6 __scope = {
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
				"sp",
				":tdatepicker",
				.var_address=&bbt_sp
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 117, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_sp=(struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)(struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbObjectNew((BBClass *)&maxgui_proxygadgets_datepicker_tdatepicker);
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 119, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_datepicker_tdatepicker_panel =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreatePanel(bbt_x,bbt_y,bbt_w,bbt_h,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group,0,&bbEmptyString);
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 120, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_datepicker_tdatepicker_label =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateLabel(&bbEmptyString,1,1,(bbt_w-25),(bbt_h-2),(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_datepicker_tdatepicker_panel ,1);
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 121, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_datepicker_tdatepicker_button =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateButton(&bbEmptyString,(bbt_w-24),1,22,(bbt_h-2),(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_datepicker_tdatepicker_panel ,8);
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 122, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_datepicker_tdatepicker_window =(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group;
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 123, 0};
	bbOnDebugEnterStm(&__stmt_5);
	((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_datepicker_tdatepicker_superparent =(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_datepicker_tdatepicker_window ;
	struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 125, 0};
	bbOnDebugEnterStm(&__stmt_6);
	struct maxgui_maxgui_gadget_TGadget_obj* bbt_;
	if((((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest((bbt_ = ((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_datepicker_tdatepicker_window ))))->clas)->m_Class((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_)!=1){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 126, 0};
		bbOnDebugEnterStm(&__stmt_0);
		while(maxgui_maxgui_GadgetClass((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_datepicker_tdatepicker_window )!=1){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 127, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_datepicker_tdatepicker_window =(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_datepicker_tdatepicker_window ))->_maxgui_maxgui_gadget_tgadget_parent ;
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_7 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 132, 0};
	bbOnDebugEnterStm(&__stmt_7);
	((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_datepicker_tdatepicker_style =13;
	struct BBDebugStm __stmt_8 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 134, 0};
	bbOnDebugEnterStm(&__stmt_8);
	((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_datepicker_tdatepicker_x =bbt_x;
	struct BBDebugStm __stmt_9 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 135, 0};
	bbOnDebugEnterStm(&__stmt_9);
	((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_datepicker_tdatepicker_y =bbt_y;
	struct BBDebugStm __stmt_10 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 136, 0};
	bbOnDebugEnterStm(&__stmt_10);
	((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_datepicker_tdatepicker_h =bbt_h;
	struct BBDebugStm __stmt_11 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 138, 0};
	bbOnDebugEnterStm(&__stmt_11);
	((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_datepicker_tdatepicker_panel2 =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateWindow(&bbEmptyString,(((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(bbt_group))->_maxgui_maxgui_gadget_tgadget_xpos +bbt_x),(((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(bbt_group))->_maxgui_maxgui_gadget_tgadget_ypos +bbt_h),180,230,(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject,64);
	struct BBDebugStm __stmt_12 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 140, 0};
	bbOnDebugEnterStm(&__stmt_12);
	maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_datepicker_tdatepicker_panel2 ,(((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_datepicker_tdatepicker_window ))->_maxgui_maxgui_gadget_tgadget_xpos +bbt_x),((((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_datepicker_tdatepicker_window ))->_maxgui_maxgui_gadget_tgadget_ypos +bbt_y)+bbt_h),160,230);
	struct BBDebugStm __stmt_13 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 141, 0};
	bbOnDebugEnterStm(&__stmt_13);
	((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_datepicker_tdatepicker_calendar =(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)maxgui_proxygadgets_calendar_CreateCalendar(0,0,maxgui_maxgui_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_datepicker_tdatepicker_panel2 ),maxgui_maxgui_ClientHeight((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_datepicker_tdatepicker_panel2 ),(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_datepicker_tdatepicker_panel2 ,((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_datepicker_tdatepicker_style ),(BBClass*)&maxgui_maxgui_gadget_TGadget));
	struct BBDebugStm __stmt_14 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 144, 0};
	bbOnDebugEnterStm(&__stmt_14);
	maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_datepicker_tdatepicker_label ,200,200,200,1);
	struct BBDebugStm __stmt_15 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 145, 0};
	bbOnDebugEnterStm(&__stmt_15);
	brl_hook_AddHook(brl_event_EmitEventHook,maxgui_proxygadgets_datepicker_tdatepicker_eventHandler_TObject_iTObjectTObject,(BBOBJECT)bbt_sp,0);
	struct BBDebugStm __stmt_16 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 146, 0};
	bbOnDebugEnterStm(&__stmt_16);
	((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_sp))->clas->m_SetProxy_TTGadget((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbt_sp,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_datepicker_tdatepicker_panel );
	struct BBDebugStm __stmt_17 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 147, 0};
	bbOnDebugEnterStm(&__stmt_17);
	bbOnDebugLeaveScope();
	return (struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbt_sp;
}
BBOBJECT maxgui_proxygadgets_datepicker_tdatepicker_eventHandler_TObject_iTObjectTObject(BBINT bbt_pID,BBOBJECT bbt_pData,BBOBJECT bbt_pContext){
	struct brl_event_TEvent_obj* bbt_pEvent=(struct brl_event_TEvent_obj*)&bbNullObject;
	struct maxgui_proxygadgets_datepicker_tdatepicker_obj* bbt_obj=(struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)&bbNullObject;
	BBINT bbt_spx=0;
	BBINT bbt_spy=0;
	struct maxgui_maxgui_gadget_TGadget_obj* bbt_sparent=(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	struct BBDebugScope_8 __scope = {
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
				":tdatepicker",
				.var_address=&bbt_obj
			},
			{
				BBDEBUGDECL_LOCAL,
				"spx",
				"i",
				.var_address=&bbt_spx
			},
			{
				BBDEBUGDECL_LOCAL,
				"spy",
				"i",
				.var_address=&bbt_spy
			},
			{
				BBDEBUGDECL_LOCAL,
				"sparent",
				":TGadget",
				.var_address=&bbt_sparent
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 151, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_pEvent=(struct brl_event_TEvent_obj*)((struct brl_event_TEvent_obj*)bbObjectDowncast((BBOBJECT)bbt_pData,(BBClass*)&brl_event_TEvent));
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 152, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_obj=(struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbObjectDowncast((BBOBJECT)bbt_pContext,(BBClass*)&maxgui_proxygadgets_datepicker_tdatepicker));
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 153, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_spx=0;
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 153, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_spy=0;
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 154, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbt_sparent=(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_datepicker_tdatepicker_panel ))->_maxgui_maxgui_gadget_tgadget_parent ;
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 157, 0};
	bbOnDebugEnterStm(&__stmt_5);
	if(((BBObject*)bbt_sparent)!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 158, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(maxgui_maxgui_GadgetClass((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sparent)==3){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 159, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_spx+=((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(bbt_sparent))->_maxgui_maxgui_gadget_tgadget_xpos ;
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 160, 0};
			bbOnDebugEnterStm(&__stmt_1);
			bbt_spy+=((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(bbt_sparent))->_maxgui_maxgui_gadget_tgadget_ypos ;
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 168, 0};
	bbOnDebugEnterStm(&__stmt_6);
	if(((BBObject*)bbt_pEvent)!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 170, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if((((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_pEvent))->_brl_event_tevent_id ==16385) || (((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_pEvent))->_brl_event_tevent_id ==16386)){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 171, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if(((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_pEvent))->_brl_event_tevent_source ==((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_datepicker_tdatepicker_window ){
				BBINT bbt_ox=0;
				BBINT bbt_oy=0;
				struct BBDebugScope_2 __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						{
							BBDEBUGDECL_LOCAL,
							"ox",
							"i",
							.var_address=&bbt_ox
						},
						{
							BBDEBUGDECL_LOCAL,
							"oy",
							"i",
							.var_address=&bbt_oy
						},
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 172, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbt_ox=0;
				struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 172, 0};
				bbOnDebugEnterStm(&__stmt_1);
				bbt_oy=0;
				struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 173, 0};
				bbOnDebugEnterStm(&__stmt_2);
				bbt_ox=((((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_datepicker_tdatepicker_window ))->_maxgui_maxgui_gadget_tgadget_xpos +((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_datepicker_tdatepicker_panel ))->_maxgui_maxgui_gadget_tgadget_xpos )+bbt_spx);
				struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 174, 0};
				bbOnDebugEnterStm(&__stmt_3);
				bbt_oy=(((((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_datepicker_tdatepicker_window ))->_maxgui_maxgui_gadget_tgadget_ypos +((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_datepicker_tdatepicker_panel ))->_maxgui_maxgui_gadget_tgadget_ypos )+((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_datepicker_tdatepicker_panel ))->_maxgui_maxgui_gadget_tgadget_height )+bbt_spy);
				struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 176, 0};
				bbOnDebugEnterStm(&__stmt_4);
				if((bbt_ox+160)>brl_system_DesktopWidth()){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 176, 0};
					bbOnDebugEnterStm(&__stmt_0);
					bbt_ox-=((bbt_ox+160)-brl_system_DesktopWidth());
					bbOnDebugLeaveScope();
				}
				struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 177, 0};
				bbOnDebugEnterStm(&__stmt_5);
				if((bbt_oy+230)>brl_system_DesktopHeight()){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 177, 0};
					bbOnDebugEnterStm(&__stmt_0);
					bbt_oy-=((bbt_oy+230)-brl_system_DesktopHeight());
					bbOnDebugLeaveScope();
				}
				struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 178, 0};
				bbOnDebugEnterStm(&__stmt_6);
				maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_datepicker_tdatepicker_panel2 ,bbt_ox,bbt_oy,160,230);
				struct BBDebugStm __stmt_7 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 181, 0};
				bbOnDebugEnterStm(&__stmt_7);
				maxgui_maxgui_RedrawGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_datepicker_tdatepicker_panel2 );
				struct BBDebugStm __stmt_8 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 182, 0};
				bbOnDebugEnterStm(&__stmt_8);
				if(((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_datepicker_tdatepicker_active ==1){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 183, 0};
					bbOnDebugEnterStm(&__stmt_0);
					maxgui_maxgui_ActivateWindow((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_datepicker_tdatepicker_panel2 );
					struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 184, 0};
					bbOnDebugEnterStm(&__stmt_1);
					maxgui_maxgui_RestoreWindow((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_datepicker_tdatepicker_panel2 );
					bbOnDebugLeaveScope();
				}
				struct BBDebugStm __stmt_9 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 186, 0};
				bbOnDebugEnterStm(&__stmt_9);
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				return (BBOBJECT)bbt_pEvent;
			}
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 190, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_pEvent))->_brl_event_tevent_id ==16387){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 191, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if(((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_pEvent))->_brl_event_tevent_source ==((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_datepicker_tdatepicker_window ){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 192, 0};
				bbOnDebugEnterStm(&__stmt_0);
				maxgui_maxgui_HideGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_datepicker_tdatepicker_panel2 );
				struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 193, 0};
				bbOnDebugEnterStm(&__stmt_1);
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				return (BBOBJECT)bbt_pEvent;
			}
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 199, 0};
		bbOnDebugEnterStm(&__stmt_2);
		if(((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_pEvent))->_brl_event_tevent_id ==8198){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 200, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if(((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_pEvent))->_brl_event_tevent_source ==((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_datepicker_tdatepicker_calendar ){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 201, 0};
				bbOnDebugEnterStm(&__stmt_0);
				maxgui_maxgui_HideGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_datepicker_tdatepicker_panel2 );
				struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 202, 0};
				bbOnDebugEnterStm(&__stmt_1);
				maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_datepicker_tdatepicker_label ,((BBString *)bbObjectDowncast((BBOBJECT)((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_pEvent))->_brl_event_tevent_extra ,(BBClass*)&bbStringClass)));
				struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 203, 0};
				bbOnDebugEnterStm(&__stmt_2);
				maxgui_maxgui_SetGadgetExtra((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_obj,(BBClass*)&maxgui_maxgui_gadget_TGadget)),(BBOBJECT)((BBString *)bbObjectDowncast((BBOBJECT)((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_pEvent))->_brl_event_tevent_extra ,(BBClass*)&bbStringClass)));
				struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 204, 0};
				bbOnDebugEnterStm(&__stmt_3);
				((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_datepicker_tdatepicker_active =0;
				struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 205, 0};
				bbOnDebugEnterStm(&__stmt_4);
				brl_event_EmitEvent((struct brl_event_TEvent_obj*)brl_event_CreateEvent(8193,(BBOBJECT)bbt_obj,0,0,0,0,(BBOBJECT)((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_pEvent))->_brl_event_tevent_extra ));
				struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 207, 0};
				bbOnDebugEnterStm(&__stmt_5);
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				return (BBOBJECT)bbt_pEvent;
			}
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 212, 0};
		bbOnDebugEnterStm(&__stmt_3);
		BBOBJECT bbt_=(BBOBJECT)((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_pEvent))->_brl_event_tevent_source ;
		struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 213, 0};
		bbOnDebugEnterStm(&__stmt_4);
		if(bbt_==((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_datepicker_tdatepicker_button ){
			BBINT bbt_ox2=0;
			BBINT bbt_oy2=0;
			struct BBDebugScope_2 __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					{
						BBDEBUGDECL_LOCAL,
						"ox",
						"i",
						.var_address=&bbt_ox2
					},
					{
						BBDEBUGDECL_LOCAL,
						"oy",
						"i",
						.var_address=&bbt_oy2
					},
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 215, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_ox2=0;
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 215, 0};
			bbOnDebugEnterStm(&__stmt_1);
			bbt_oy2=0;
			struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 216, 0};
			bbOnDebugEnterStm(&__stmt_2);
			bbt_ox2=((((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_datepicker_tdatepicker_window ))->_maxgui_maxgui_gadget_tgadget_xpos +((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_datepicker_tdatepicker_panel ))->_maxgui_maxgui_gadget_tgadget_xpos )+bbt_spx);
			struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 217, 0};
			bbOnDebugEnterStm(&__stmt_3);
			bbt_oy2=(((((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_datepicker_tdatepicker_window ))->_maxgui_maxgui_gadget_tgadget_ypos +((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_datepicker_tdatepicker_panel ))->_maxgui_maxgui_gadget_tgadget_ypos )+((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_datepicker_tdatepicker_panel ))->_maxgui_maxgui_gadget_tgadget_height )+bbt_spy);
			struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 219, 0};
			bbOnDebugEnterStm(&__stmt_4);
			if((bbt_ox2+160)>brl_system_DesktopWidth()){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 219, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbt_ox2-=((bbt_ox2+160)-brl_system_DesktopWidth());
				bbOnDebugLeaveScope();
			}
			struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 220, 0};
			bbOnDebugEnterStm(&__stmt_5);
			if((bbt_oy2+230)>brl_system_DesktopHeight()){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 220, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbt_oy2-=((bbt_oy2+230)-brl_system_DesktopHeight());
				bbOnDebugLeaveScope();
			}
			struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 223, 0};
			bbOnDebugEnterStm(&__stmt_6);
			maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_datepicker_tdatepicker_panel2 ,bbt_ox2,bbt_oy2,160,230);
			struct BBDebugStm __stmt_7 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 227, 0};
			bbOnDebugEnterStm(&__stmt_7);
			maxgui_maxgui_RedrawGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_datepicker_tdatepicker_panel2 );
			struct BBDebugStm __stmt_8 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 228, 0};
			bbOnDebugEnterStm(&__stmt_8);
			maxgui_maxgui_RedrawGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_datepicker_tdatepicker_calendar );
			struct BBDebugStm __stmt_9 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 229, 0};
			bbOnDebugEnterStm(&__stmt_9);
			maxgui_maxgui_ShowGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_datepicker_tdatepicker_panel2 );
			struct BBDebugStm __stmt_10 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 230, 0};
			bbOnDebugEnterStm(&__stmt_10);
			((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_datepicker_tdatepicker_active =1;
			struct BBDebugStm __stmt_11 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 231, 0};
			bbOnDebugEnterStm(&__stmt_11);
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			return (BBOBJECT)bbt_pEvent;
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_7 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 238, 0};
	bbOnDebugEnterStm(&__stmt_7);
	bbOnDebugLeaveScope();
	return (BBOBJECT)bbt_pData;
}
struct BBDebugScope_27 maxgui_proxygadgets_datepicker_tdatepicker_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"tdatepicker",
	{
		{
			BBDEBUGDECL_FIELD,
			"panel",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_datepicker_tdatepicker_obj,_maxgui_proxygadgets_datepicker_tdatepicker_panel)
		},
		{
			BBDEBUGDECL_FIELD,
			"panel2",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_datepicker_tdatepicker_obj,_maxgui_proxygadgets_datepicker_tdatepicker_panel2)
		},
		{
			BBDEBUGDECL_FIELD,
			"label",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_datepicker_tdatepicker_obj,_maxgui_proxygadgets_datepicker_tdatepicker_label)
		},
		{
			BBDEBUGDECL_FIELD,
			"button",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_datepicker_tdatepicker_obj,_maxgui_proxygadgets_datepicker_tdatepicker_button)
		},
		{
			BBDEBUGDECL_FIELD,
			"window",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_datepicker_tdatepicker_obj,_maxgui_proxygadgets_datepicker_tdatepicker_window)
		},
		{
			BBDEBUGDECL_FIELD,
			"superParent",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_datepicker_tdatepicker_obj,_maxgui_proxygadgets_datepicker_tdatepicker_superparent)
		},
		{
			BBDEBUGDECL_FIELD,
			"style",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_datepicker_tdatepicker_obj,_maxgui_proxygadgets_datepicker_tdatepicker_style)
		},
		{
			BBDEBUGDECL_FIELD,
			"calendar",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_datepicker_tdatepicker_obj,_maxgui_proxygadgets_datepicker_tdatepicker_calendar)
		},
		{
			BBDEBUGDECL_FIELD,
			"active",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_datepicker_tdatepicker_obj,_maxgui_proxygadgets_datepicker_tdatepicker_active)
		},
		{
			BBDEBUGDECL_FIELD,
			"x",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_datepicker_tdatepicker_obj,_maxgui_proxygadgets_datepicker_tdatepicker_x)
		},
		{
			BBDEBUGDECL_FIELD,
			"y",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_datepicker_tdatepicker_obj,_maxgui_proxygadgets_datepicker_tdatepicker_y)
		},
		{
			BBDEBUGDECL_FIELD,
			"h",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_datepicker_tdatepicker_obj,_maxgui_proxygadgets_datepicker_tdatepicker_h)
		},
		{
			BBDEBUGDECL_FIELD,
			"pixmap",
			":TPixmap",
			.field_offset=offsetof(struct maxgui_proxygadgets_datepicker_tdatepicker_obj,_maxgui_proxygadgets_datepicker_tdatepicker_pixmap)
		},
		{
			BBDEBUGDECL_FIELD,
			"grey_pixmap",
			":TPixmap",
			.field_offset=offsetof(struct maxgui_proxygadgets_datepicker_tdatepicker_obj,_maxgui_proxygadgets_datepicker_tdatepicker_grey_pixmap)
		},
		{
			BBDEBUGDECL_FIELD,
			"format",
			"$",
			.field_offset=offsetof(struct maxgui_proxygadgets_datepicker_tdatepicker_obj,_maxgui_proxygadgets_datepicker_tdatepicker_format)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_maxgui_proxygadgets_datepicker_tdatepicker_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetFont",
			"(:TGuiFont)i",
			.var_address=(void*)&_maxgui_proxygadgets_datepicker_tdatepicker_SetFont_TTGuiFont
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"CleanUp",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_datepicker_tdatepicker_CleanUp
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetShow",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_datepicker_tdatepicker_SetShow_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetText",
			"($)i",
			.var_address=(void*)&_maxgui_proxygadgets_datepicker_tdatepicker_SetText_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetEnabled",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_datepicker_tdatepicker_SetEnabled_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetText",
			"()$",
			.var_address=(void*)&_maxgui_proxygadgets_datepicker_tdatepicker_GetText
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Class",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_datepicker_tdatepicker_Class
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetPixmap",
			"(:TPixmap,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_datepicker_tdatepicker_SetPixmap_TTPixmapi
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetColor",
			"(i,i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_datepicker_tdatepicker_SetColor_iii
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Create",
			"(i,i,i,i,:TGadget):tdatepicker",
			.var_address=(void*)&maxgui_proxygadgets_datepicker_tdatepicker_Create_Ttdatepicker_iiiiTTGadget
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"eventHandler",
			"(i,:Object,:Object):Object",
			.var_address=(void*)&maxgui_proxygadgets_datepicker_tdatepicker_eventHandler_TObject_iTObjectTObject
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_maxgui_proxygadgets_datepicker_tdatepicker maxgui_proxygadgets_datepicker_tdatepicker={
	&maxgui_maxgui_gadget_TProxyGadget,
	bbObjectFree,
	(BBDebugScope*)&maxgui_proxygadgets_datepicker_tdatepicker_scope,
	sizeof(struct maxgui_proxygadgets_datepicker_tdatepicker_obj),
	(void (*)(BBOBJECT))_maxgui_proxygadgets_datepicker_tdatepicker_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct maxgui_proxygadgets_datepicker_tdatepicker_obj,_maxgui_proxygadgets_datepicker_tdatepicker_format) - sizeof(void*) + sizeof(BBSTRING)
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
	,_maxgui_proxygadgets_datepicker_tdatepicker_CleanUp
	,_maxgui_maxgui_gadget_TProxyGadget_Free
	,_maxgui_maxgui_gadget_TProxyGadget_Rethink
	,_maxgui_maxgui_gadget_TProxyGadget_ClientWidth
	,_maxgui_maxgui_gadget_TProxyGadget_ClientHeight
	,_maxgui_maxgui_gadget_TProxyGadget_Activate_i
	,_maxgui_maxgui_gadget_TProxyGadget_State
	,_maxgui_proxygadgets_datepicker_tdatepicker_SetText_S
	,_maxgui_proxygadgets_datepicker_tdatepicker_GetText
	,_maxgui_proxygadgets_datepicker_tdatepicker_SetFont_TTGuiFont
	,_maxgui_proxygadgets_datepicker_tdatepicker_SetColor_iii
	,_maxgui_maxgui_gadget_TProxyGadget_RemoveColor
	,_maxgui_maxgui_gadget_TProxyGadget_SetAlpha_f
	,_maxgui_maxgui_gadget_TProxyGadget_SetTextColor_iii
	,_maxgui_maxgui_gadget_TProxyGadget_SetTooltip_S
	,_maxgui_maxgui_gadget_TProxyGadget_GetTooltip
	,_maxgui_proxygadgets_datepicker_tdatepicker_SetPixmap_TTPixmapi
	,_maxgui_maxgui_gadget_TProxyGadget_SetIconStrip_TTIconStrip
	,_maxgui_proxygadgets_datepicker_tdatepicker_SetShow_i
	,_maxgui_proxygadgets_datepicker_tdatepicker_SetEnabled_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetSelected_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetHotKey_ii
	,_maxgui_maxgui_gadget_TProxyGadget_SetSensitivity_i
	,_maxgui_maxgui_gadget_TProxyGadget_GetSensitivity
	,_maxgui_proxygadgets_datepicker_tdatepicker_Class
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
	,maxgui_proxygadgets_datepicker_tdatepicker_Create_Ttdatepicker_iiiiTTGadget
	,maxgui_proxygadgets_datepicker_tdatepicker_eventHandler_TObject_iTObjectTObject
};

struct maxgui_maxgui_gadget_TGadget_obj* maxgui_proxygadgets_datepicker_CreateDatePicker(BBINT bbt_x,BBINT bbt_y,BBINT bbt_w,BBINT bbt_h,struct maxgui_maxgui_gadget_TGadget_obj* bbt_group){
	struct BBDebugScope_5 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"CreateDatePicker",
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
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/DatePicker.bmx", 33, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return (struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)maxgui_proxygadgets_datepicker_tdatepicker_Create_Ttdatepicker_iiiiTTGadget(bbt_x,bbt_y,bbt_w,bbt_h,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group),(BBClass*)&maxgui_maxgui_gadget_TGadget));
}
static int _bb_maxgui_proxygadgets_datepicker_inited = 0;
int _bb_maxgui_proxygadgets_datepicker(){
	if (!_bb_maxgui_proxygadgets_datepicker_inited) {
		_bb_maxgui_proxygadgets_datepicker_inited = 1;
		__bb_brl_blitz_blitz();
		__bb_maxgui_maxgui_maxgui();
		_bb_maxgui_proxygadgets_calendar();
		_bb_maxgui_proxygadgets_common();
		bbObjectRegisterType((BBCLASS)&maxgui_proxygadgets_datepicker_tdatepicker);
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_FUNCTION,
			"DatePicker",
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