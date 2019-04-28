#include "spinner.bmx.debug.win32.x64.h"
static BBString _s5={
	&bbStringClass,
	6,
	{10,77,97,120,58,32}
};
static BBString _s3={
	&bbStringClass,
	1,
	{45}
};
static BBString _s1={
	&bbStringClass,
	1,
	{46}
};
static BBString _s2={
	&bbStringClass,
	2,
	{46,48}
};
static BBString _s0={
	&bbStringClass,
	1,
	{48}
};
static BBString _s8={
	&bbStringClass,
	1,
	{49}
};
static BBString _s6={
	&bbStringClass,
	2,
	{49,56}
};
static BBString _s7={
	&bbStringClass,
	2,
	{56,48}
};
static BBString _s4={
	&bbStringClass,
	5,
	{77,105,110,58,32}
};
struct BBDebugScope_1{int kind; const char *name; BBDebugDecl decls[2]; };
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
struct BBDebugScope_25{int kind; const char *name; BBDebugDecl decls[26]; };
struct BBDebugScope_4{int kind; const char *name; BBDebugDecl decls[5]; };
struct BBDebugScope_6{int kind; const char *name; BBDebugDecl decls[7]; };
struct BBDebugScope_7{int kind; const char *name; BBDebugDecl decls[8]; };
struct BBDebugScope_8{int kind; const char *name; BBDebugDecl decls[9]; };
void _maxgui_proxygadgets_spinner_TSpinner_New(struct maxgui_proxygadgets_spinner_TSpinner_obj* o) {
	_maxgui_maxgui_gadget_TProxyGadget_New((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o);
	o->clas = &maxgui_proxygadgets_spinner_TSpinner;
	((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_panel = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_textfield = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_slider = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_trackbar = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_value = .0000000000000000;
	((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_range = bbArrayNew1D("d", 2);
	((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_accuracy = 1;
	((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_floatitemmultiplier = 10.000000000000000;
}
BBINT _maxgui_proxygadgets_spinner_TSpinner_SetProp_i(struct maxgui_proxygadgets_spinner_TSpinner_obj* o,BBINT bbt_val){
	((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetProp",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TSpinner",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"val",
				"i",
				.var_address=&bbt_val
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 27, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o));
	((struct maxgui_proxygadgets_spinner_TSpinner_obj*)o)->clas->m_SetValue__d((struct maxgui_proxygadgets_spinner_TSpinner_obj*)o,((BBDOUBLE)bbt_val));
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_spinner_TSpinner_Class(struct maxgui_proxygadgets_spinner_TSpinner_obj* o){
	((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Class",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TSpinner",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 31, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return 19;
}
BBINT _maxgui_proxygadgets_spinner_TSpinner_SetFont_TTGuiFont(struct maxgui_proxygadgets_spinner_TSpinner_obj* o,struct maxgui_maxgui_guifont_TGuiFont_obj* bbt_fnt){
	((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetFont",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TSpinner",
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 35, 0};
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 35, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return 0;
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 36, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(((BBObject*)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_textfield )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 36, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_SetGadgetFont((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_textfield ,(struct maxgui_maxgui_guifont_TGuiFont_obj*)bbt_fnt,0);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_spinner_TSpinner_SetShow_i(struct maxgui_proxygadgets_spinner_TSpinner_obj* o,BBINT bbt_bool){
	((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetShow",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TSpinner",
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 40, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_panel ))->clas->m_SetShow_i((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_panel ,bbt_bool);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_spinner_TSpinner_SetRange__ddi(struct maxgui_proxygadgets_spinner_TSpinner_obj* o,BBDOUBLE bbt_minimum,BBDOUBLE bbt_maximum,BBINT bbt_accuracy){
	((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o));
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetRange_",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TSpinner",
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 44, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_accuracy =bbt_accuracy;
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 45, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_floatitemmultiplier =bbFloatPow(10.0, ((BBDOUBLE)bbt_accuracy));
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 46, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((BBDOUBLE*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_range ),(((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_range )->dims,0U))[0U]=(bbt_minimum*((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_floatitemmultiplier );
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 47, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((BBDOUBLE*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_range ),(((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_range )->dims,1U))[1U]=(((bbt_maximum*((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_floatitemmultiplier )-((BBDOUBLE*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_range ),(((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_range )->dims,0U))[0U])+1.0000000000000000);
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 48, 0};
	bbOnDebugEnterStm(&__stmt_4);
	maxgui_maxgui_SetSliderRange((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_slider ,1,((BBINT)((BBDOUBLE*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_range ),(((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_range )->dims,1U))[1U]));
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 49, 0};
	bbOnDebugEnterStm(&__stmt_5);
	if(((BBObject*)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_trackbar )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 50, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_SetSliderRange((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_trackbar ,1,((BBINT)((BBDOUBLE*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_range ),(((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_range )->dims,1U))[1U]));
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 52, 0};
	bbOnDebugEnterStm(&__stmt_6);
	((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o));
	((struct maxgui_proxygadgets_spinner_TSpinner_obj*)o)->clas->m_SetValue__d((struct maxgui_proxygadgets_spinner_TSpinner_obj*)o,((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_value );
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_spinner_TSpinner_SetColor_iii(struct maxgui_proxygadgets_spinner_TSpinner_obj* o,BBINT bbt_r,BBINT bbt_g,BBINT bbt_b){
	((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o));
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetColor",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TSpinner",
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 56, 0};
	bbOnDebugEnterStm(&__stmt_0);
	maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_textfield ,bbt_r,bbt_g,bbt_b,1);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_spinner_TSpinner_SetEnabled_i(struct maxgui_proxygadgets_spinner_TSpinner_obj* o,BBINT bbt_sta){
	((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetEnabled",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TSpinner",
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 60, 0};
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 61, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_panel );
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 62, 0};
		bbOnDebugEnterStm(&__stmt_1);
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_textfield );
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 63, 0};
		bbOnDebugEnterStm(&__stmt_2);
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_slider );
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 64, 0};
		bbOnDebugEnterStm(&__stmt_3);
		if(((BBObject*)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_trackbar )!= &bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 64, 0};
			bbOnDebugEnterStm(&__stmt_0);
			maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_trackbar );
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 66, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_panel );
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 67, 0};
		bbOnDebugEnterStm(&__stmt_1);
		maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_textfield );
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 68, 0};
		bbOnDebugEnterStm(&__stmt_2);
		maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_slider );
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 69, 0};
		bbOnDebugEnterStm(&__stmt_3);
		if(((BBObject*)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_trackbar )!= &bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 69, 0};
			bbOnDebugEnterStm(&__stmt_0);
			maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_trackbar );
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_spinner_TSpinner_CleanUp(struct maxgui_proxygadgets_spinner_TSpinner_obj* o){
	((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"CleanUp",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TSpinner",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 76, 0};
	bbOnDebugEnterStm(&__stmt_0);
	brl_hook_RemoveHook(brl_event_EmitEventHook,o->clas->f_EventHook_TObject_iTObjectTObject,(BBOBJECT)o);
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 77, 0};
	bbOnDebugEnterStm(&__stmt_1);
	(&maxgui_proxygadgets_spinner_TSpinner)->super->m_CleanUp((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o);
	bbOnDebugLeaveScope();
	return 0;
}
struct maxgui_proxygadgets_spinner_TSpinner_obj* maxgui_proxygadgets_spinner_TSpinner_Create_TTSpinner_iiiiTTGadgeti(BBINT bbt_x,BBINT bbt_y,BBINT bbt_WIDTH,BBINT bbt_HEIGHT,struct maxgui_maxgui_gadget_TGadget_obj* bbt_group,BBINT bbt_flags){
	struct maxgui_proxygadgets_spinner_TSpinner_obj* bbt_spinner=(struct maxgui_proxygadgets_spinner_TSpinner_obj*)&bbNullObject;
	BBINT bbt_w=0;
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
				"spinner",
				":TSpinner",
				.var_address=&bbt_spinner
			},
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 81, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_spinner=(struct maxgui_proxygadgets_spinner_TSpinner_obj*)&bbNullObject;
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 82, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_w=0;
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 84, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_spinner=(struct maxgui_proxygadgets_spinner_TSpinner_obj*)(struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbObjectNew((BBClass *)&maxgui_proxygadgets_spinner_TSpinner);
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 86, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_panel =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreatePanel(bbt_x,bbt_y,bbt_WIDTH,bbt_HEIGHT,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group,0,&bbEmptyString);
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 87, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->clas->m_SetProxy_TTGadget((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbt_spinner,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_panel );
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 89, 0};
	bbOnDebugEnterStm(&__stmt_5);
	struct maxgui_maxgui_gadget_TGadget_obj* bbt_;
	bbt_w=(((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest((bbt_ = ((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_panel ))))->clas)->m_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_);
	struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 90, 0};
	bbOnDebugEnterStm(&__stmt_6);
	if(((unsigned int)(1)&bbt_flags)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 91, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_w=80;
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 92, 0};
		bbOnDebugEnterStm(&__stmt_1);
		struct maxgui_maxgui_gadget_TGadget_obj* bbt_2;
		if(bbt_w>(((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest((bbt_2 = ((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_panel ))))->clas)->m_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_2)){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 92, 0};
			bbOnDebugEnterStm(&__stmt_0);
			struct maxgui_maxgui_gadget_TGadget_obj* bbt_3;
			bbt_w=(((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest((bbt_3 = ((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_panel ))))->clas)->m_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_3);
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_7 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 95, 0};
	bbOnDebugEnterStm(&__stmt_7);
	struct maxgui_maxgui_gadget_TGadget_obj* bbt_4;
	((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_textfield =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateTextField(0,0,(bbt_w-18),(((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest((bbt_4 = ((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_panel ))))->clas)->m_ClientHeight((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_4),(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_panel ,0);
	struct BBDebugStm __stmt_8 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 96, 0};
	bbOnDebugEnterStm(&__stmt_8);
	if(((unsigned int)(1)&bbt_flags)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 97, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_textfield ,1,0,1,1);
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 99, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_textfield ,1,1,1,1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_9 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 102, 0};
	bbOnDebugEnterStm(&__stmt_9);
	maxgui_maxgui_SetGadgetSensitivity((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_textfield ,2);
	struct BBDebugStm __stmt_10 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 104, 0};
	bbOnDebugEnterStm(&__stmt_10);
	struct maxgui_maxgui_gadget_TGadget_obj* bbt_5;
	((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_slider =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateSlider((bbt_w-18),0,18,(((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest((bbt_5 = ((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_panel ))))->clas)->m_ClientHeight((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_5),(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_panel ,2);
	struct BBDebugStm __stmt_11 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 105, 0};
	bbOnDebugEnterStm(&__stmt_11);
	if(((unsigned int)(1)&bbt_flags)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 106, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_slider ,1,0,1,1);
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 108, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_slider ,0,1,1,1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_12 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 110, 0};
	bbOnDebugEnterStm(&__stmt_12);
	brl_hook_AddHook(brl_event_EmitEventHook,maxgui_proxygadgets_spinner_TSpinner_EventHook_TObject_iTObjectTObject,(BBOBJECT)bbt_spinner,0);
	struct BBDebugStm __stmt_13 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 112, 0};
	bbOnDebugEnterStm(&__stmt_13);
	if(((unsigned int)(1)&bbt_flags)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 113, 0};
		bbOnDebugEnterStm(&__stmt_0);
		struct maxgui_maxgui_gadget_TGadget_obj* bbt_6;
		struct maxgui_maxgui_gadget_TGadget_obj* bbt_7;
		((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_trackbar =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateSlider(bbt_w,0,((((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest((bbt_6 = ((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_panel ))))->clas)->m_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_6)-bbt_w),(((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest((bbt_7 = ((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_panel ))))->clas)->m_ClientHeight((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_7),(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_panel ,5);
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 114, 0};
		bbOnDebugEnterStm(&__stmt_1);
		maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_trackbar ,1,1,1,1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_14 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 117, 0};
	bbOnDebugEnterStm(&__stmt_14);
	((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->clas->m_SetRange__ddi((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbt_spinner,0.00000000000000000,1.0000000000000000,1);
	struct BBDebugStm __stmt_15 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 118, 0};
	bbOnDebugEnterStm(&__stmt_15);
	bbOnDebugLeaveScope();
	return (struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbt_spinner;
}
BBINT _maxgui_proxygadgets_spinner_TSpinner_SetValue__d(struct maxgui_proxygadgets_spinner_TSpinner_obj* o,BBDOUBLE bbt_i){
	((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetValue_",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TSpinner",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"d",
				.var_address=&bbt_i
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 122, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_i=brl_blitz_Max4(bbt_i,((BBDOUBLE*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_range ),(((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_range )->dims,0U))[0U]);
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 123, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_i=brl_blitz_Min4(bbt_i,((BBDOUBLE*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_range ),(((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_range )->dims,1U))[1U]);
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 124, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_i=(((BBDOUBLE)o->clas->f_Round_i_d(bbt_i*((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_floatitemmultiplier ))/((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_floatitemmultiplier );
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 125, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_i*=((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_floatitemmultiplier ;
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 126, 0};
	bbOnDebugEnterStm(&__stmt_4);
	if(bbt_i<((BBDOUBLE*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_range ),(((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_range )->dims,0U))[0U]){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 126, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_i=((BBDOUBLE*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_range ),(((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_range )->dims,0U))[0U];
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 127, 0};
	bbOnDebugEnterStm(&__stmt_5);
	if(bbt_i>((((BBDOUBLE*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_range ),(((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_range )->dims,0U))[0U]+((BBDOUBLE*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_range ),(((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_range )->dims,1U))[1U])-1.0000000000000000)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 127, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_i=((((BBDOUBLE*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_range ),(((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_range )->dims,0U))[0U]+((BBDOUBLE*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_range ),(((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_range )->dims,1U))[1U])-1.0000000000000000);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 128, 0};
	bbOnDebugEnterStm(&__stmt_6);
	maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_textfield ,o->clas->f_FloatToString_S_fi(((BBFLOAT)(bbt_i/((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_floatitemmultiplier )),((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_accuracy ));
	struct BBDebugStm __stmt_7 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 129, 0};
	bbOnDebugEnterStm(&__stmt_7);
	maxgui_maxgui_SetSliderValue((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_slider ,((BBINT)(((BBDOUBLE*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_range ),(((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_range )->dims,1U))[1U]-((bbt_i-((BBDOUBLE*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_range ),(((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_range )->dims,0U))[0U])+1.0000000000000000))));
	struct BBDebugStm __stmt_8 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 130, 0};
	bbOnDebugEnterStm(&__stmt_8);
	if(((BBObject*)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_trackbar )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 130, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_SetSliderValue((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_trackbar ,((BBINT)((bbt_i-((BBDOUBLE*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_range ),(((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_range )->dims,0U))[0U])+1.0000000000000000)));
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_9 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 131, 0};
	bbOnDebugEnterStm(&__stmt_9);
	((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_value =bbt_i;
	bbOnDebugLeaveScope();
	return 0;
}
BBSTRING _maxgui_proxygadgets_spinner_TSpinner_GetText(struct maxgui_proxygadgets_spinner_TSpinner_obj* o){
	((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"GetText",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TSpinner",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 136, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return maxgui_maxgui_GadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_spinner_tspinner_textfield );
}
BBOBJECT maxgui_proxygadgets_spinner_TSpinner_EventHook_TObject_iTObjectTObject(BBINT bbt_id,BBOBJECT bbt_data,BBOBJECT bbt_context){
	struct brl_event_TEvent_obj* bbt_event=(struct brl_event_TEvent_obj*)&bbNullObject;
	struct maxgui_proxygadgets_spinner_TSpinner_obj* bbt_spinner=(struct maxgui_proxygadgets_spinner_TSpinner_obj*)&bbNullObject;
	BBINT bbt_i=0;
	BBDOUBLE bbt_value=0;
	struct BBDebugScope_7 __scope = {
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
				"spinner",
				":TSpinner",
				.var_address=&bbt_spinner
			},
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"i",
				.var_address=&bbt_i
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 140, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_event=(struct brl_event_TEvent_obj*)&bbNullObject;
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 141, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_spinner=(struct maxgui_proxygadgets_spinner_TSpinner_obj*)&bbNullObject;
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 142, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_i=0;
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 143, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_value=.0000000000000000;
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 146, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbt_event=(struct brl_event_TEvent_obj*)((struct brl_event_TEvent_obj*)bbObjectDowncast((BBOBJECT)bbt_data,(BBClass*)&brl_event_TEvent));
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 147, 0};
	bbOnDebugEnterStm(&__stmt_5);
	if(((BBObject*)bbt_event)!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 148, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_spinner=(struct maxgui_proxygadgets_spinner_TSpinner_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbObjectDowncast((BBOBJECT)bbt_context,(BBClass*)&maxgui_proxygadgets_spinner_TSpinner));
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 149, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(((BBObject*)bbt_spinner)!= &bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 150, 0};
			bbOnDebugEnterStm(&__stmt_0);
			BBINT bbt_=((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_event))->_brl_event_tevent_id ;
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 152, 0};
			bbOnDebugEnterStm(&__stmt_1);
			if(bbt_==513){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 153, 0};
				bbOnDebugEnterStm(&__stmt_0);
				if(((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_event))->_brl_event_tevent_source ==((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_textfield ){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 154, 0};
					bbOnDebugEnterStm(&__stmt_0);
					if(brl_eventqueue_EventData()==33){
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 155, 0};
						bbOnDebugEnterStm(&__stmt_0);
						bbt_value=((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_value ;
						struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 156, 0};
						bbOnDebugEnterStm(&__stmt_1);
						bbt_value=(bbt_value-((brl_blitz_Abs3(((BBDOUBLE*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_range ),(((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_range )->dims,0U))[0U])-brl_blitz_Abs3(((BBDOUBLE*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_range ),(((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_range )->dims,1U))[1U]))/10.000000000000000));
						struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 158, 0};
						bbOnDebugEnterStm(&__stmt_2);
						if(((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_accuracy ==1){
							struct BBDebugScope __scope = {
								BBDEBUGSCOPE_LOCALBLOCK,
								0,
								{
									BBDEBUGDECL_END 
								}
							};
							bbOnDebugEnterScope(&__scope);
							struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 158, 0};
							bbOnDebugEnterStm(&__stmt_0);
							bbt_value=(bbt_value/10.000000000000000);
							bbOnDebugLeaveScope();
						}
						struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 160, 0};
						bbOnDebugEnterStm(&__stmt_3);
						((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->clas->m_SetValue__d((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbt_spinner,bbt_value);
						struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 161, 0};
						bbOnDebugEnterStm(&__stmt_4);
						brl_event_EmitEvent((struct brl_event_TEvent_obj*)brl_event_CreateEvent(8193,(BBOBJECT)bbt_spinner,0,0,0,0,(BBOBJECT)&bbNullObject));
						struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 162, 0};
						bbOnDebugEnterStm(&__stmt_5);
						bbOnDebugLeaveScope();
						bbOnDebugLeaveScope();
						bbOnDebugLeaveScope();
						bbOnDebugLeaveScope();
						bbOnDebugLeaveScope();
						bbOnDebugLeaveScope();
						return (BBOBJECT)&bbNullObject;
					}
					struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 166, 0};
					bbOnDebugEnterStm(&__stmt_1);
					if(brl_eventqueue_EventData()==34){
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 167, 0};
						bbOnDebugEnterStm(&__stmt_0);
						bbt_value=((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_value ;
						struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 168, 0};
						bbOnDebugEnterStm(&__stmt_1);
						bbt_value=(bbt_value+((brl_blitz_Abs3(((BBDOUBLE*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_range ),(((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_range )->dims,0U))[0U])-brl_blitz_Abs3(((BBDOUBLE*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_range ),(((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_range )->dims,1U))[1U]))/10.000000000000000));
						struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 169, 0};
						bbOnDebugEnterStm(&__stmt_2);
						if(((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_accuracy ==1){
							struct BBDebugScope __scope = {
								BBDEBUGSCOPE_LOCALBLOCK,
								0,
								{
									BBDEBUGDECL_END 
								}
							};
							bbOnDebugEnterScope(&__scope);
							struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 169, 0};
							bbOnDebugEnterStm(&__stmt_0);
							bbt_value=(bbt_value/10.000000000000000);
							bbOnDebugLeaveScope();
						}
						struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 170, 0};
						bbOnDebugEnterStm(&__stmt_3);
						((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->clas->m_SetValue__d((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbt_spinner,bbt_value);
						struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 171, 0};
						bbOnDebugEnterStm(&__stmt_4);
						brl_event_EmitEvent((struct brl_event_TEvent_obj*)brl_event_CreateEvent(8193,(BBOBJECT)bbt_spinner,0,0,0,0,(BBOBJECT)&bbNullObject));
						struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 172, 0};
						bbOnDebugEnterStm(&__stmt_5);
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
			}else{
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 180, 0};
				bbOnDebugEnterStm(&__stmt_0);
				if(bbt_==8200){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 181, 0};
					bbOnDebugEnterStm(&__stmt_0);
					if(((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_event))->_brl_event_tevent_source ==((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_textfield ){
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 182, 0};
						bbOnDebugEnterStm(&__stmt_0);
						((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->clas->m_SetValue__d((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbt_spinner,bbStringToDouble(maxgui_maxgui_GadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_textfield )));
						struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 183, 0};
						bbOnDebugEnterStm(&__stmt_1);
						brl_event_EmitEvent((struct brl_event_TEvent_obj*)brl_event_CreateEvent(8193,(BBOBJECT)bbt_spinner,0,0,0,0,(BBOBJECT)&bbNullObject));
						struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 184, 0};
						bbOnDebugEnterStm(&__stmt_2);
						bbOnDebugLeaveScope();
						bbOnDebugLeaveScope();
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
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 186, 0};
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
						struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 187, 0};
						bbOnDebugEnterStm(&__stmt_0);
						BBOBJECT bbt_2=(BBOBJECT)((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_event))->_brl_event_tevent_source ;
						struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 188, 0};
						bbOnDebugEnterStm(&__stmt_1);
						if(bbt_2==((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_trackbar ){
							struct BBDebugScope __scope = {
								BBDEBUGSCOPE_LOCALBLOCK,
								0,
								{
									BBDEBUGDECL_END 
								}
							};
							bbOnDebugEnterScope(&__scope);
							struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 189, 0};
							bbOnDebugEnterStm(&__stmt_0);
							if(((BBObject*)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_trackbar )!= &bbNullObject){
								struct BBDebugScope __scope = {
									BBDEBUGSCOPE_LOCALBLOCK,
									0,
									{
										BBDEBUGDECL_END 
									}
								};
								bbOnDebugEnterScope(&__scope);
								struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 190, 0};
								bbOnDebugEnterStm(&__stmt_0);
								bbt_i=((BBINT)((((BBDOUBLE)maxgui_maxgui_SliderValue((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_trackbar ))+((BBDOUBLE*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_range ),(((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_range )->dims,0U))[0U])-1.0000000000000000));
								struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 191, 0};
								bbOnDebugEnterStm(&__stmt_1);
								((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->clas->m_SetValue__d((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbt_spinner,(((BBDOUBLE)bbt_i)/((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_floatitemmultiplier ));
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
							struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 193, 0};
							bbOnDebugEnterStm(&__stmt_0);
							if(bbt_2==((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_textfield ){
								struct BBDebugScope __scope = {
									BBDEBUGSCOPE_LOCALBLOCK,
									0,
									{
										BBDEBUGDECL_END 
									}
								};
								bbOnDebugEnterScope(&__scope);
								struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 194, 0};
								bbOnDebugEnterStm(&__stmt_0);
								bbOnDebugLeaveScope();
								bbOnDebugLeaveScope();
								bbOnDebugLeaveScope();
								bbOnDebugLeaveScope();
								bbOnDebugLeaveScope();
								bbOnDebugLeaveScope();
								bbOnDebugLeaveScope();
								bbOnDebugLeaveScope();
								return (BBOBJECT)&bbNullObject;
							}else{
								struct BBDebugScope __scope = {
									BBDEBUGSCOPE_LOCALBLOCK,
									0,
									{
										BBDEBUGDECL_END 
									}
								};
								bbOnDebugEnterScope(&__scope);
								struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 195, 0};
								bbOnDebugEnterStm(&__stmt_0);
								if(bbt_2==((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_slider ){
									struct BBDebugScope __scope = {
										BBDEBUGSCOPE_LOCALBLOCK,
										0,
										{
											BBDEBUGDECL_END 
										}
									};
									bbOnDebugEnterScope(&__scope);
									struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 196, 0};
									bbOnDebugEnterStm(&__stmt_0);
									bbt_i=((BBINT)(((BBDOUBLE*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_range ),(((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_range )->dims,1U))[1U]-((((BBDOUBLE)maxgui_maxgui_SliderValue((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_slider ))-((BBDOUBLE*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_range ),(((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_range )->dims,0U))[0U])+1.0000000000000000)));
									struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 197, 0};
									bbOnDebugEnterStm(&__stmt_1);
									((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->clas->m_SetValue__d((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbt_spinner,(((BBDOUBLE)bbt_i)/((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_floatitemmultiplier ));
									struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 198, 0};
									bbOnDebugEnterStm(&__stmt_2);
									brl_event_EmitEvent((struct brl_event_TEvent_obj*)brl_event_CreateEvent(8193,(BBOBJECT)bbt_spinner,0,0,0,0,(BBOBJECT)&bbNullObject));
									struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 199, 0};
									bbOnDebugEnterStm(&__stmt_3);
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
	struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 204, 0};
	bbOnDebugEnterStm(&__stmt_6);
	bbOnDebugLeaveScope();
	return (BBOBJECT)bbt_data;
}
BBINT maxgui_proxygadgets_spinner_TSpinner_Round_i_d(BBDOUBLE bbt_val){
	BBFLOAT bbt_dec=0;
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Round",
		{
			{
				BBDEBUGDECL_LOCAL,
				"val",
				"d",
				.var_address=&bbt_val
			},
			{
				BBDEBUGDECL_LOCAL,
				"dec",
				"f",
				.var_address=&bbt_dec
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 208, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_dec=.00000000f;
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 209, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_dec=((BBFLOAT)(bbt_val-bbFloor(bbt_val)));
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 210, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(bbt_dec<0.5f){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 210, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return ((BBINT)bbFloor(bbt_val));
	}else{
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 210, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return ((BBINT)bbCeil(bbt_val));
	}
}
BBSTRING maxgui_proxygadgets_spinner_TSpinner_FloatToString_S_fi(BBFLOAT bbt_value,BBINT bbt_places){
	BBINT bbt_sign=0;
	BBINT bbt_i=0;
	BBINT bbt_ipart=0;
	BBINT bbt_dpart=0;
	BBSTRING bbt_si=&bbEmptyString;
	BBSTRING bbt_di=&bbEmptyString;
	struct BBDebugScope_8 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"FloatToString",
		{
			{
				BBDEBUGDECL_LOCAL,
				"value",
				"f",
				.var_address=&bbt_value
			},
			{
				BBDEBUGDECL_LOCAL,
				"places",
				"i",
				.var_address=&bbt_places
			},
			{
				BBDEBUGDECL_LOCAL,
				"sign",
				"i",
				.var_address=&bbt_sign
			},
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"i",
				.var_address=&bbt_i
			},
			{
				BBDEBUGDECL_LOCAL,
				"ipart",
				"i",
				.var_address=&bbt_ipart
			},
			{
				BBDEBUGDECL_LOCAL,
				"dpart",
				"i",
				.var_address=&bbt_dpart
			},
			{
				BBDEBUGDECL_LOCAL,
				"si",
				"$",
				.var_address=&bbt_si
			},
			{
				BBDEBUGDECL_LOCAL,
				"di",
				"$",
				.var_address=&bbt_di
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 214, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_sign=((BBINT)brl_blitz_Sgn2(bbt_value));
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 215, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_value=brl_blitz_Abs2(bbt_value);
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 216, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_i=maxgui_proxygadgets_spinner_TSpinner_Round_i_d(((BBDOUBLE)bbt_value)*bbFloatPow(10.000000000000000, ((BBDOUBLE)bbt_places)));
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 217, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_ipart=((BBINT)(((BBDOUBLE)bbt_i)/bbFloatPow(10.000000000000000, ((BBDOUBLE)bbt_places))));
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 218, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbt_dpart=((BBINT)(((BBDOUBLE)bbt_i)-(((BBDOUBLE)bbt_ipart)*bbFloatPow(10.000000000000000, ((BBDOUBLE)bbt_places)))));
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 219, 0};
	bbOnDebugEnterStm(&__stmt_5);
	bbt_si=bbStringFromInt(bbt_ipart);
	struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 220, 0};
	bbOnDebugEnterStm(&__stmt_6);
	bbt_di=&bbEmptyString;
	struct BBDebugStm __stmt_7 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 221, 0};
	bbOnDebugEnterStm(&__stmt_7);
	if(bbt_dpart>0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 222, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_di=bbStringFromInt(bbt_dpart);
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 223, 0};
		bbOnDebugEnterStm(&__stmt_1);
		while((bbt_di->length)<bbt_places){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 224, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_di=bbStringConcat(&_s0,bbt_di);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 226, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_di=bbStringConcat(&_s1,bbt_di);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_8 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 228, 0};
	bbOnDebugEnterStm(&__stmt_8);
	while(bbStringCompare(bbStringSlice(bbt_di,((bbt_di)->length-1),(bbt_di)->length), &_s0)==0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 229, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_di=bbStringSlice(bbt_di,0,((bbt_di->length)-1));
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_9 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 231, 0};
	bbOnDebugEnterStm(&__stmt_9);
	if(bbt_places!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 232, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(bbt_di==&bbEmptyString){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 232, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_di=&_s2;
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_10 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 234, 0};
	bbOnDebugEnterStm(&__stmt_10);
	if(bbt_sign==-1){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 234, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_si=bbStringConcat(&_s3,bbt_si);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_11 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 235, 0};
	bbOnDebugEnterStm(&__stmt_11);
	bbOnDebugLeaveScope();
	return bbStringConcat(bbt_si,bbt_di);
}
struct BBDebugScope_25 maxgui_proxygadgets_spinner_TSpinner_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TSpinner",
	{
		{
			BBDEBUGDECL_CONST,
			"SLIDERWIDTH",
			"i",
			.const_value=&_s6
		},
		{
			BBDEBUGDECL_CONST,
			"DIV",
			"i",
			.const_value=&_s7
		},
		{
			BBDEBUGDECL_FIELD,
			"panel",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_spinner_TSpinner_obj,_maxgui_proxygadgets_spinner_tspinner_panel)
		},
		{
			BBDEBUGDECL_FIELD,
			"textfield",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_spinner_TSpinner_obj,_maxgui_proxygadgets_spinner_tspinner_textfield)
		},
		{
			BBDEBUGDECL_FIELD,
			"slider",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_spinner_TSpinner_obj,_maxgui_proxygadgets_spinner_tspinner_slider)
		},
		{
			BBDEBUGDECL_FIELD,
			"trackbar",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_spinner_TSpinner_obj,_maxgui_proxygadgets_spinner_tspinner_trackbar)
		},
		{
			BBDEBUGDECL_FIELD,
			"value",
			"d",
			.field_offset=offsetof(struct maxgui_proxygadgets_spinner_TSpinner_obj,_maxgui_proxygadgets_spinner_tspinner_value)
		},
		{
			BBDEBUGDECL_FIELD,
			"Range",
			"[]d",
			.field_offset=offsetof(struct maxgui_proxygadgets_spinner_TSpinner_obj,_maxgui_proxygadgets_spinner_tspinner_range)
		},
		{
			BBDEBUGDECL_FIELD,
			"accuracy",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_spinner_TSpinner_obj,_maxgui_proxygadgets_spinner_tspinner_accuracy)
		},
		{
			BBDEBUGDECL_FIELD,
			"floatitemmultiplier",
			"d",
			.field_offset=offsetof(struct maxgui_proxygadgets_spinner_TSpinner_obj,_maxgui_proxygadgets_spinner_tspinner_floatitemmultiplier)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_maxgui_proxygadgets_spinner_TSpinner_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetProp",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_spinner_TSpinner_SetProp_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Class",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_spinner_TSpinner_Class
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetFont",
			"(:TGuiFont)i",
			.var_address=(void*)&_maxgui_proxygadgets_spinner_TSpinner_SetFont_TTGuiFont
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetShow",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_spinner_TSpinner_SetShow_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetRange_",
			"(d,d,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_spinner_TSpinner_SetRange__ddi
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetColor",
			"(i,i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_spinner_TSpinner_SetColor_iii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetEnabled",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_spinner_TSpinner_SetEnabled_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"CleanUp",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_spinner_TSpinner_CleanUp
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Create",
			"(i,i,i,i,:TGadget,i):TSpinner",
			.var_address=(void*)&maxgui_proxygadgets_spinner_TSpinner_Create_TTSpinner_iiiiTTGadgeti
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetValue_",
			"(d)i",
			.var_address=(void*)&_maxgui_proxygadgets_spinner_TSpinner_SetValue__d
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetText",
			"()$",
			.var_address=(void*)&_maxgui_proxygadgets_spinner_TSpinner_GetText
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"EventHook",
			"(i,:Object,:Object):Object",
			.var_address=(void*)&maxgui_proxygadgets_spinner_TSpinner_EventHook_TObject_iTObjectTObject
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Round",
			"(d)i",
			.var_address=(void*)&maxgui_proxygadgets_spinner_TSpinner_Round_i_d
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"FloatToString",
			"(f,i)$",
			.var_address=(void*)&maxgui_proxygadgets_spinner_TSpinner_FloatToString_S_fi
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_maxgui_proxygadgets_spinner_TSpinner maxgui_proxygadgets_spinner_TSpinner={
	&maxgui_maxgui_gadget_TProxyGadget,
	bbObjectFree,
	(BBDebugScope*)&maxgui_proxygadgets_spinner_TSpinner_scope,
	sizeof(struct maxgui_proxygadgets_spinner_TSpinner_obj),
	(void (*)(BBOBJECT))_maxgui_proxygadgets_spinner_TSpinner_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct maxgui_proxygadgets_spinner_TSpinner_obj,_maxgui_proxygadgets_spinner_tspinner_floatitemmultiplier) - sizeof(void*) + sizeof(BBDOUBLE)
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
	,_maxgui_proxygadgets_spinner_TSpinner_CleanUp
	,_maxgui_maxgui_gadget_TProxyGadget_Free
	,_maxgui_maxgui_gadget_TProxyGadget_Rethink
	,_maxgui_maxgui_gadget_TProxyGadget_ClientWidth
	,_maxgui_maxgui_gadget_TProxyGadget_ClientHeight
	,_maxgui_maxgui_gadget_TProxyGadget_Activate_i
	,_maxgui_maxgui_gadget_TProxyGadget_State
	,_maxgui_maxgui_gadget_TProxyGadget_SetText_S
	,_maxgui_proxygadgets_spinner_TSpinner_GetText
	,_maxgui_proxygadgets_spinner_TSpinner_SetFont_TTGuiFont
	,_maxgui_proxygadgets_spinner_TSpinner_SetColor_iii
	,_maxgui_maxgui_gadget_TProxyGadget_RemoveColor
	,_maxgui_maxgui_gadget_TProxyGadget_SetAlpha_f
	,_maxgui_maxgui_gadget_TProxyGadget_SetTextColor_iii
	,_maxgui_maxgui_gadget_TProxyGadget_SetTooltip_S
	,_maxgui_maxgui_gadget_TProxyGadget_GetTooltip
	,_maxgui_maxgui_gadget_TProxyGadget_SetPixmap_TTPixmapi
	,_maxgui_maxgui_gadget_TProxyGadget_SetIconStrip_TTIconStrip
	,_maxgui_proxygadgets_spinner_TSpinner_SetShow_i
	,_maxgui_proxygadgets_spinner_TSpinner_SetEnabled_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetSelected_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetHotKey_ii
	,_maxgui_maxgui_gadget_TProxyGadget_SetSensitivity_i
	,_maxgui_maxgui_gadget_TProxyGadget_GetSensitivity
	,_maxgui_proxygadgets_spinner_TSpinner_Class
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
	,_maxgui_proxygadgets_spinner_TSpinner_SetProp_i
	,_maxgui_maxgui_gadget_TProxyGadget_GetProp
	,_maxgui_maxgui_gadget_TProxyGadget_AttachGraphics_i
	,_maxgui_maxgui_gadget_TProxyGadget_CanvasGraphics
	,_maxgui_maxgui_gadget_TProxyGadget_Run_S
	,_maxgui_maxgui_gadget_TProxyGadget_SetProxy_TTGadget
	,_maxgui_maxgui_gadget_TProxyGadget_GetProxy
	,_maxgui_maxgui_gadget_TProxyGadget_SetStatus_S
	,_maxgui_proxygadgets_spinner_TSpinner_SetRange__ddi
	,maxgui_proxygadgets_spinner_TSpinner_Create_TTSpinner_iiiiTTGadgeti
	,_maxgui_proxygadgets_spinner_TSpinner_SetValue__d
	,maxgui_proxygadgets_spinner_TSpinner_EventHook_TObject_iTObjectTObject
	,maxgui_proxygadgets_spinner_TSpinner_Round_i_d
	,maxgui_proxygadgets_spinner_TSpinner_FloatToString_S_fi
};

struct maxgui_proxygadgets_spinner_TSpinner_obj* maxgui_proxygadgets_spinner_CreateSpinner(BBINT bbt_x,BBINT bbt_y,BBINT bbt_W,BBINT bbt_H,struct maxgui_maxgui_gadget_TGadget_obj* bbt_group,BBINT bbt_flags){
	struct BBDebugScope_6 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"CreateSpinner",
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
				"W",
				"i",
				.var_address=&bbt_W
			},
			{
				BBDEBUGDECL_LOCAL,
				"H",
				"i",
				.var_address=&bbt_H
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 248, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return (struct maxgui_proxygadgets_spinner_TSpinner_obj*)maxgui_proxygadgets_spinner_TSpinner_Create_TTSpinner_iiiiTTGadgeti(bbt_x,bbt_y,bbt_W,bbt_H,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group,bbt_flags);
}
BBINT maxgui_proxygadgets_spinner_SetSpinnerRange(struct maxgui_proxygadgets_spinner_TSpinner_obj* bbt_spinner,BBDOUBLE bbt_minimum,BBDOUBLE bbt_maximum,BBINT bbt_accuracy){
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetSpinnerRange",
		{
			{
				BBDEBUGDECL_LOCAL,
				"spinner",
				":TSpinner",
				.var_address=&bbt_spinner
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 261, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->clas->m_SetRange__ddi((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbt_spinner,bbt_minimum,bbt_maximum,bbt_accuracy);
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 262, 0};
	bbOnDebugEnterStm(&__stmt_1);
	maxgui_maxgui_SetGadgetToolTip((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_textfield ,bbStringConcat(bbStringConcat(bbStringConcat(&_s4,((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->clas->f_FloatToString_S_fi(((BBFLOAT)bbt_minimum),3)),&_s5),((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->clas->f_FloatToString_S_fi(((BBFLOAT)bbt_maximum),3)));
	bbOnDebugLeaveScope();
	return 0;
}
BBINT maxgui_proxygadgets_spinner_SetSpinnerValue(struct maxgui_proxygadgets_spinner_TSpinner_obj* bbt_spinner,BBDOUBLE bbt_value){
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetSpinnerValue",
		{
			{
				BBDEBUGDECL_LOCAL,
				"spinner",
				":TSpinner",
				.var_address=&bbt_spinner
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 271, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->clas->m_SetValue__d((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbt_spinner,bbt_value);
	bbOnDebugLeaveScope();
	return 0;
}
BBDOUBLE maxgui_proxygadgets_spinner_SpinnerValue(struct maxgui_proxygadgets_spinner_TSpinner_obj* bbt_spinner){
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SpinnerValue",
		{
			{
				BBDEBUGDECL_LOCAL,
				"spinner",
				":TSpinner",
				.var_address=&bbt_spinner
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 280, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_accuracy ==0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 281, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return ((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_value ;
	}else{
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/spinner.bmx", 283, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return (((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbNullObjectTest(bbt_spinner))->_maxgui_proxygadgets_spinner_tspinner_value /10.000000000000000);
	}
}
static int _bb_maxgui_proxygadgets_spinner_inited = 0;
int _bb_maxgui_proxygadgets_spinner(){
	if (!_bb_maxgui_proxygadgets_spinner_inited) {
		_bb_maxgui_proxygadgets_spinner_inited = 1;
		__bb_brl_blitz_blitz();
		__bb_maxgui_drivers_drivers();
		__bb_brl_eventqueue_eventqueue();
		bbObjectRegisterType((BBCLASS)&maxgui_proxygadgets_spinner_TSpinner);
		struct BBDebugScope_1 __scope = {
			BBDEBUGSCOPE_FUNCTION,
			"spinner",
			{
				{
					BBDEBUGDECL_CONST,
					"SPINNER_TRACKBAR",
					"i",
					.const_value=&_s8
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