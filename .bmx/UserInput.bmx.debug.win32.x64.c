#include "UserInput.bmx.debug.win32.x64.h"
static BBString _s3={
	&bbStringClass,
	2,
	{42,42}
};
static BBString _s2={
	&bbStringClass,
	6,
	{67,97,110,99,101,108}
};
static BBString _s1={
	&bbStringClass,
	2,
	{79,107}
};
static BBString _s0={
	&bbStringClass,
	1,
	{124}
};
struct BBDebugScope_1{int kind; const char *name; BBDebugDecl decls[2]; };
struct BBDebugScope_13{int kind; const char *name; BBDebugDecl decls[14]; };
struct BBDebugScope_17{int kind; const char *name; BBDebugDecl decls[18]; };
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
struct BBDebugScope_4{int kind; const char *name; BBDebugDecl decls[5]; };
struct BBDebugScope_6{int kind; const char *name; BBDebugDecl decls[7]; };
struct BBDebugScope_8{int kind; const char *name; BBDebugDecl decls[9]; };
void _maxgui_proxygadgets_userinput_tUserInput_New(struct maxgui_proxygadgets_userinput_tUserInput_obj* o) {
	_maxgui_maxgui_gadget_TProxyGadget_New((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o);
	o->clas = &maxgui_proxygadgets_userinput_tUserInput;
	((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_userinput_tuserinput_panel = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_userinput_tuserinput_label = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_userinput_tuserinput_txt = &bbEmptyArray;
	((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_userinput_tuserinput_lbl = &bbEmptyArray;
	((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_userinput_tuserinput_btn_ok = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_userinput_tuserinput_btn_cancel = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_userinput_tuserinput__window = 0;
	((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_userinput_tuserinput_window = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
}
BBINT _maxgui_proxygadgets_userinput_tUserInput_Class(struct maxgui_proxygadgets_userinput_tUserInput_obj* o){
	((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Class",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tUserInput",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 39, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return 28;
}
BBINT _maxgui_proxygadgets_userinput_tUserInput_SetFont_TTGuiFont(struct maxgui_proxygadgets_userinput_tUserInput_obj* o,struct maxgui_maxgui_guifont_TGuiFont_obj* bbt_fnt){
	((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetFont",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tUserInput",
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 43, 0};
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 43, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return 0;
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 44, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(((BBObject*)((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_userinput_tuserinput_window )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 45, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_SetGadgetFont((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_userinput_tuserinput_window ,(struct maxgui_maxgui_guifont_TGuiFont_obj*)bbt_fnt,0);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_userinput_tUserInput_CleanUp(struct maxgui_proxygadgets_userinput_tUserInput_obj* o){
	((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"CleanUp",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tUserInput",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 52, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(((BBObject*)((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_userinput_tuserinput_btn_ok )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 52, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_userinput_tuserinput_btn_ok );
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 53, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(((BBObject*)((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_userinput_tuserinput_btn_cancel )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 53, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_userinput_tuserinput_btn_cancel );
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 55, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_userinput_tuserinput_txt != &bbEmptyArray){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 56, 0};
		bbOnDebugEnterStm(&__stmt_0);
		BBARRAY bbt_=((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_userinput_tuserinput_txt ;
		BBUINT bbt_2=0U;
		while(bbt_2<((BBUINT)(bbt_->scales[0]))){
			struct maxgui_maxgui_gadget_TGadget_obj* bbt_s=(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
			struct BBDebugScope_1 __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					{
						BBDEBUGDECL_LOCAL,
						"s",
						":TGadget",
						.var_address=&bbt_s
					},
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 56, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_s=(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATAINDEX((bbt_),(bbt_)->dims,bbt_2))[bbt_2];
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 56, 0};
			bbOnDebugEnterStm(&__stmt_1);
			bbt_2=(bbt_2+1U);
			struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 56, 0};
			bbOnDebugEnterStm(&__stmt_2);
			if(bbt_s==&bbNullObject){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 56, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				continue;
			}
			struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 57, 0};
			bbOnDebugEnterStm(&__stmt_3);
			maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_s);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 59, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_userinput_tuserinput_txt =&bbEmptyArray;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 62, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if(((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_userinput_tuserinput_lbl != &bbEmptyArray){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 63, 0};
		bbOnDebugEnterStm(&__stmt_0);
		BBARRAY bbt_3=((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_userinput_tuserinput_lbl ;
		BBUINT bbt_4=0U;
		while(bbt_4<((BBUINT)(bbt_3->scales[0]))){
			struct maxgui_maxgui_gadget_TGadget_obj* bbt_s2=(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
			struct BBDebugScope_1 __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					{
						BBDEBUGDECL_LOCAL,
						"s",
						":TGadget",
						.var_address=&bbt_s2
					},
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 63, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_s2=(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATAINDEX((bbt_3),(bbt_3)->dims,bbt_4))[bbt_4];
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 63, 0};
			bbOnDebugEnterStm(&__stmt_1);
			bbt_4=(bbt_4+1U);
			struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 63, 0};
			bbOnDebugEnterStm(&__stmt_2);
			if(bbt_s2==&bbNullObject){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 63, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				continue;
			}
			struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 64, 0};
			bbOnDebugEnterStm(&__stmt_3);
			maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_s2);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 66, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_userinput_tuserinput_lbl =&bbEmptyArray;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 70, 0};
	bbOnDebugEnterStm(&__stmt_4);
	if(((BBObject*)((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_userinput_tuserinput_window )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 70, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_userinput_tuserinput_window );
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 70, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_userinput_tuserinput_window =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 71, 0};
	bbOnDebugEnterStm(&__stmt_5);
	if(((BBObject*)((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_userinput_tuserinput_panel )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 71, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_userinput_tuserinput_panel );
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 71, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_userinput_tuserinput_panel =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 72, 0};
	bbOnDebugEnterStm(&__stmt_6);
	if(((BBObject*)((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_userinput_tuserinput_label )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 72, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_userinput_tuserinput_label );
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 72, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_userinput_tuserinput_label =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_7 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 73, 0};
	bbOnDebugEnterStm(&__stmt_7);
	bbGCCollect();
	struct BBDebugStm __stmt_8 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 74, 0};
	bbOnDebugEnterStm(&__stmt_8);
	brl_hook_RemoveHook(brl_event_EmitEventHook,o->clas->f_eventHandler_TObject_iTObjectTObject,(BBOBJECT)o);
	struct BBDebugStm __stmt_9 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 75, 0};
	bbOnDebugEnterStm(&__stmt_9);
	(&maxgui_proxygadgets_userinput_tUserInput)->super->m_CleanUp((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_userinput_tUserInput_SetText_S(struct maxgui_proxygadgets_userinput_tUserInput_obj* o,BBSTRING bbt_tx){
	((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(o));
	BBARRAY volatile bbt_r=&bbEmptyArray;
	BBINT bbt_c=0;
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetText",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tUserInput",
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
				"r",
				"[]$",
				.var_address=&bbt_r
			},
			{
				BBDEBUGDECL_LOCAL,
				"c",
				"i",
				.var_address=&bbt_c
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 80, 0};
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 80, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return -1;
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 81, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_r=bbStringSplit((BBSTRING)bbt_tx,&_s0);
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 82, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_r=bbArraySlice("$",bbt_r,0,(((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_userinput_tuserinput_txt )->scales[0]);
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 83, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_c=0;
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 84, 0};
	bbOnDebugEnterStm(&__stmt_4);
	BBARRAY bbt_=((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_userinput_tuserinput_txt ;
	BBUINT bbt_2=0U;
	while(bbt_2<((BBUINT)(bbt_->scales[0]))){
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 84, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_g=(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATAINDEX((bbt_),(bbt_)->dims,bbt_2))[bbt_2];
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 84, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_2=(bbt_2+1U);
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 84, 0};
		bbOnDebugEnterStm(&__stmt_2);
		if(bbt_g==&bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 84, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			continue;
		}
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 85, 0};
		bbOnDebugEnterStm(&__stmt_3);
		maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_g,((BBSTRING*)BBARRAYDATAINDEX((bbt_r),(bbt_r)->dims,((BBUINT)bbt_c)))[((BBUINT)bbt_c)]);
		struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 86, 0};
		bbOnDebugEnterStm(&__stmt_4);
		bbt_c+=1;
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
struct maxgui_proxygadgets_userinput_tUserInput_obj* maxgui_proxygadgets_userinput_tUserInput_Create_TtUserInput_SSiiTTGadgetaS(BBSTRING bbt_msg,BBSTRING bbt_fields,BBINT bbt_x,BBINT bbt_y,struct maxgui_maxgui_gadget_TGadget_obj* bbt_group,BBARRAY bbt_def){
	struct maxgui_proxygadgets_userinput_tUserInput_obj* bbt_sp=(struct maxgui_proxygadgets_userinput_tUserInput_obj*)&bbNullObject;
	BBINT bbt_w=0;
	BBINT bbt_h=0;
	BBARRAY volatile bbt_it=&bbEmptyArray;
	BBINT bbt_c=0;
	BBINT bbt__style=0;
	BBSTRING bbt__txt=&bbEmptyString;
	struct BBDebugScope_13 __scope = {
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
				"fields",
				"$",
				.var_address=&bbt_fields
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
				"group",
				":TGadget",
				.var_address=&bbt_group
			},
			{
				BBDEBUGDECL_LOCAL,
				"def",
				"[]$",
				.var_address=&bbt_def
			},
			{
				BBDEBUGDECL_LOCAL,
				"sp",
				":tUserInput",
				.var_address=&bbt_sp
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
				"it",
				"[]$",
				.var_address=&bbt_it
			},
			{
				BBDEBUGDECL_LOCAL,
				"c",
				"i",
				.var_address=&bbt_c
			},
			{
				BBDEBUGDECL_LOCAL,
				"_style",
				"i",
				.var_address=&bbt__style
			},
			{
				BBDEBUGDECL_LOCAL,
				"_txt",
				"$",
				.var_address=&bbt__txt
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 94, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_sp=(struct maxgui_proxygadgets_userinput_tUserInput_obj*)(struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbObjectNew((BBClass *)&maxgui_proxygadgets_userinput_tUserInput);
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 95, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_w=0;
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 95, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_h=0;
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 96, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if(((BBObject*)bbt_group)!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 96, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_w=maxgui_maxgui_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 97, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbt_h=24;
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 99, 0};
	bbOnDebugEnterStm(&__stmt_5);
	bbt_it=bbStringSplit((BBSTRING)bbt_fields,&_s0);
	struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 100, 0};
	bbOnDebugEnterStm(&__stmt_6);
	bbt_h=((((bbt_it)->scales[0]*48)+24)+48);
	struct BBDebugStm __stmt_7 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 101, 0};
	bbOnDebugEnterStm(&__stmt_7);
	((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_userinput_tuserinput_lbl =bbArrayNew1D(":TGadget", (bbt_it)->scales[0]);
	struct BBDebugStm __stmt_8 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 102, 0};
	bbOnDebugEnterStm(&__stmt_8);
	((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_userinput_tuserinput_txt =bbArrayNew1D(":TGadget", (bbt_it)->scales[0]);
	struct BBDebugStm __stmt_9 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 103, 0};
	bbOnDebugEnterStm(&__stmt_9);
	bbt_def=bbArraySlice("$",bbt_def,0,(bbt_it)->scales[0]);
	struct BBDebugStm __stmt_10 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 106, 0};
	bbOnDebugEnterStm(&__stmt_10);
	if(bbt_group==&bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 107, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_group=(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateWindow(bbt_msg,10,10,300,(bbt_h+40),(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject,513);
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 108, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_userinput_tuserinput__window =1;
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 109, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_w=295;
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 110, 0};
		bbOnDebugEnterStm(&__stmt_3);
		((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_userinput_tuserinput_window =(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_11 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 114, 0};
	bbOnDebugEnterStm(&__stmt_11);
	if(((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_userinput_tuserinput__window ==1){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 115, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_x=0;
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 115, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_y=0;
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 116, 0};
		bbOnDebugEnterStm(&__stmt_2);
		((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_userinput_tuserinput_btn_ok =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateButton(&_s1,(maxgui_maxgui_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group)-80),(bbt_h-15),70,24,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group,4);
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 117, 0};
		bbOnDebugEnterStm(&__stmt_3);
		((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_userinput_tuserinput_btn_cancel =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateButton(&_s2,10,(bbt_h-15),70,24,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group,8);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_12 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 120, 0};
	bbOnDebugEnterStm(&__stmt_12);
	((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_userinput_tuserinput_panel =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreatePanel(bbt_x,bbt_y,(bbt_w-(bbt_x*2)),(bbt_h-22),(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group,3,&bbEmptyString);
	struct BBDebugStm __stmt_13 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 121, 0};
	bbOnDebugEnterStm(&__stmt_13);
	if((bbt_msg!=&bbEmptyString) && (((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_userinput_tuserinput__window ==0)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 121, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_userinput_tuserinput_label =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateLabel(bbt_msg,0,0,bbt_w,24,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_userinput_tuserinput_panel ,0);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_14 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 123, 0};
	bbOnDebugEnterStm(&__stmt_14);
	bbt_c=0;
	struct BBDebugStm __stmt_15 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 123, 0};
	bbOnDebugEnterStm(&__stmt_15);
	bbt__style=0;
	struct BBDebugStm __stmt_16 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 123, 0};
	bbOnDebugEnterStm(&__stmt_16);
	bbt__txt=&bbEmptyString;
	struct BBDebugStm __stmt_17 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 124, 0};
	bbOnDebugEnterStm(&__stmt_17);
	BBARRAY bbt_=bbt_it;
	BBUINT bbt_2=0U;
	while(bbt_2<((BBUINT)(bbt_->scales[0]))){
		BBSTRING bbt_i=&bbEmptyString;
		struct BBDebugScope_1 __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_LOCAL,
					"i",
					"$",
					.var_address=&bbt_i
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		bbt_i=((BBSTRING*)BBARRAYDATAINDEX((bbt_),(bbt_)->dims,bbt_2))[bbt_2];
		bbt_2=(bbt_2+1U);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 126, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(bbStringContains((BBSTRING)bbt_i,&_s3)!=0){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 126, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt__style=1;
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 126, 0};
			bbOnDebugEnterStm(&__stmt_1);
			bbt__txt=bbStringReplace((BBSTRING)bbt_i,&_s3,&bbEmptyString);
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
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 126, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt__style=0;
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 126, 0};
			bbOnDebugEnterStm(&__stmt_1);
			bbt__txt=bbt_i;
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 128, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_userinput_tuserinput_lbl ),(((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_userinput_tuserinput_lbl )->dims,((BBUINT)bbt_c)))[((BBUINT)bbt_c)]=(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateLabel(bbt__txt,1,(((bbt_c*48)+8)+(24*(((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_userinput_tuserinput__window ==0))),bbt_w,18,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_userinput_tuserinput_panel ,0);
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 129, 0};
		bbOnDebugEnterStm(&__stmt_2);
		((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_userinput_tuserinput_txt ),(((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_userinput_tuserinput_txt )->dims,((BBUINT)bbt_c)))[((BBUINT)bbt_c)]=(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateTextField(0,(((bbt_c*48)+26)+(24*(((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_userinput_tuserinput__window ==0))),((bbt_w-(bbt_x*2))-10),22,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_userinput_tuserinput_panel ,bbt__style);
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 130, 0};
		bbOnDebugEnterStm(&__stmt_3);
		maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_userinput_tuserinput_txt ),(((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_userinput_tuserinput_txt )->dims,((BBUINT)bbt_c)))[((BBUINT)bbt_c)],((BBSTRING*)BBARRAYDATAINDEX((bbt_def),(bbt_def)->dims,((BBUINT)bbt_c)))[((BBUINT)bbt_c)]);
		struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 131, 0};
		bbOnDebugEnterStm(&__stmt_4);
		bbt_c+=1;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_18 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 134, 0};
	bbOnDebugEnterStm(&__stmt_18);
	brl_hook_AddHook(brl_event_EmitEventHook,maxgui_proxygadgets_userinput_tUserInput_eventHandler_TObject_iTObjectTObject,(BBOBJECT)bbt_sp,0);
	struct BBDebugStm __stmt_19 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 135, 0};
	bbOnDebugEnterStm(&__stmt_19);
	((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(bbt_sp))->clas->m_SetProxy_TTGadget((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbt_sp,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(bbt_sp))->_maxgui_proxygadgets_userinput_tuserinput_panel );
	struct BBDebugStm __stmt_20 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 136, 0};
	bbOnDebugEnterStm(&__stmt_20);
	bbOnDebugLeaveScope();
	return (struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbt_sp;
}
BBINT _maxgui_proxygadgets_userinput_tUserInput_SetColor_iii(struct maxgui_proxygadgets_userinput_tUserInput_obj* o,BBINT bbt_RED,BBINT bbt_green,BBINT bbt_blue){
	((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(o));
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetColor",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tUserInput",
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 140, 0};
	bbOnDebugEnterStm(&__stmt_0);
	BBARRAY bbt_=((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_userinput_tuserinput_txt ;
	BBUINT bbt_2=0U;
	while(bbt_2<((BBUINT)(bbt_->scales[0]))){
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 140, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_g=(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATAINDEX((bbt_),(bbt_)->dims,bbt_2))[bbt_2];
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 140, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_2=(bbt_2+1U);
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 140, 0};
		bbOnDebugEnterStm(&__stmt_2);
		if(bbt_g==&bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 140, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			continue;
		}
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 141, 0};
		bbOnDebugEnterStm(&__stmt_3);
		maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_g,bbt_RED,bbt_green,bbt_blue,1);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_userinput_tUserInput_SetEnabled_i(struct maxgui_proxygadgets_userinput_tUserInput_obj* o,BBINT bbt_sta){
	((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetEnabled",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":tUserInput",
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 146, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(bbt_sta!=0){
		struct maxgui_maxgui_gadget_TGadget_obj* bbt_tg=(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
		struct BBDebugScope_1 __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_LOCAL,
					"tg",
					":TGadget",
					.var_address=&bbt_tg
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 147, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_tg=(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 148, 0};
		bbOnDebugEnterStm(&__stmt_1);
		BBARRAY bbt_=((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_userinput_tuserinput_lbl ;
		BBUINT bbt_2=0U;
		while(bbt_2<((BBUINT)(bbt_->scales[0]))){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			bbt_tg=(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATAINDEX((bbt_),(bbt_)->dims,bbt_2))[bbt_2];
			bbt_2=(bbt_2+1U);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 148, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if(bbt_tg==&bbNullObject){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 148, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				continue;
			}
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 149, 0};
			bbOnDebugEnterStm(&__stmt_1);
			maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_tg);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 151, 0};
		bbOnDebugEnterStm(&__stmt_2);
		BBARRAY bbt_3=((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_userinput_tuserinput_txt ;
		BBUINT bbt_4=0U;
		while(bbt_4<((BBUINT)(bbt_3->scales[0]))){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			bbt_tg=(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATAINDEX((bbt_3),(bbt_3)->dims,bbt_4))[bbt_4];
			bbt_4=(bbt_4+1U);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 151, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if(bbt_tg==&bbNullObject){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 151, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				continue;
			}
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 152, 0};
			bbOnDebugEnterStm(&__stmt_1);
			maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_tg);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 154, 0};
		bbOnDebugEnterStm(&__stmt_3);
		maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_userinput_tuserinput_label );
		bbOnDebugLeaveScope();
	}else{
		struct maxgui_maxgui_gadget_TGadget_obj* bbt_tg2=(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
		struct BBDebugScope_1 __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_LOCAL,
					"tg",
					":TGadget",
					.var_address=&bbt_tg2
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 157, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_tg2=(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 158, 0};
		bbOnDebugEnterStm(&__stmt_1);
		BBARRAY bbt_5=((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_userinput_tuserinput_lbl ;
		BBUINT bbt_6=0U;
		while(bbt_6<((BBUINT)(bbt_5->scales[0]))){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			bbt_tg2=(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATAINDEX((bbt_5),(bbt_5)->dims,bbt_6))[bbt_6];
			bbt_6=(bbt_6+1U);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 158, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if(bbt_tg2==&bbNullObject){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 158, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				continue;
			}
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 159, 0};
			bbOnDebugEnterStm(&__stmt_1);
			maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_tg2);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 161, 0};
		bbOnDebugEnterStm(&__stmt_2);
		BBARRAY bbt_7=((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_userinput_tuserinput_txt ;
		BBUINT bbt_8=0U;
		while(bbt_8<((BBUINT)(bbt_7->scales[0]))){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			bbt_tg2=(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATAINDEX((bbt_7),(bbt_7)->dims,bbt_8))[bbt_8];
			bbt_8=(bbt_8+1U);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 161, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if(bbt_tg2==&bbNullObject){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 161, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				continue;
			}
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 162, 0};
			bbOnDebugEnterStm(&__stmt_1);
			maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_tg2);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 164, 0};
		bbOnDebugEnterStm(&__stmt_3);
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_userinput_tuserinput_label );
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBOBJECT maxgui_proxygadgets_userinput_tUserInput_eventHandler_TObject_iTObjectTObject(BBINT bbt_pID,BBOBJECT bbt_pData,BBOBJECT bbt_pContext){
	struct brl_event_TEvent_obj* bbt_pEvent=(struct brl_event_TEvent_obj*)&bbNullObject;
	struct maxgui_proxygadgets_userinput_tUserInput_obj* bbt_obj=(struct maxgui_proxygadgets_userinput_tUserInput_obj*)&bbNullObject;
	BBARRAY volatile bbt_res=&bbEmptyArray;
	struct maxgui_maxgui_gadget_TGadget_obj* bbt_gad=(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	BBINT bbt_count=0;
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
				":tUserInput",
				.var_address=&bbt_obj
			},
			{
				BBDEBUGDECL_LOCAL,
				"res",
				"[]$",
				.var_address=&bbt_res
			},
			{
				BBDEBUGDECL_LOCAL,
				"gad",
				":TGadget",
				.var_address=&bbt_gad
			},
			{
				BBDEBUGDECL_LOCAL,
				"count",
				"i",
				.var_address=&bbt_count
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 170, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_pEvent=(struct brl_event_TEvent_obj*)((struct brl_event_TEvent_obj*)bbObjectDowncast((BBOBJECT)bbt_pData,(BBClass*)&brl_event_TEvent));
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 171, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_obj=(struct maxgui_proxygadgets_userinput_tUserInput_obj*)((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbObjectDowncast((BBOBJECT)bbt_pContext,(BBClass*)&maxgui_proxygadgets_userinput_tUserInput));
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 172, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_res=&bbEmptyArray;
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 172, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_gad=(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 172, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbt_count=0;
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 174, 0};
	bbOnDebugEnterStm(&__stmt_5);
	if(((BBObject*)bbt_pEvent)!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 176, 0};
		bbOnDebugEnterStm(&__stmt_0);
		BBINT bbt_=((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_pEvent))->_brl_event_tevent_id ;
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 178, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(bbt_==16387){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 179, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if(((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_userinput_tuserinput__window ==1){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 180, 0};
				bbOnDebugEnterStm(&__stmt_0);
				if(((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_pEvent))->_brl_event_tevent_source ==((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_userinput_tuserinput_window ){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 181, 0};
					bbOnDebugEnterStm(&__stmt_0);
					maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_obj,(BBClass*)&maxgui_maxgui_gadget_TGadget)));
					struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 182, 0};
					bbOnDebugEnterStm(&__stmt_1);
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
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 186, 0};
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
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 188, 0};
				bbOnDebugEnterStm(&__stmt_0);
				if(((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_userinput_tuserinput__window ==1){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 189, 0};
					bbOnDebugEnterStm(&__stmt_0);
					if(((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_pEvent))->_brl_event_tevent_source ==((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_userinput_tuserinput_btn_ok ){
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 190, 0};
						bbOnDebugEnterStm(&__stmt_0);
						bbt_count=0;
						struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 191, 0};
						bbOnDebugEnterStm(&__stmt_1);
						bbt_res=bbArrayNew1D("$", (((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_userinput_tuserinput_txt )->scales[0]);
						struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 192, 0};
						bbOnDebugEnterStm(&__stmt_2);
						BBARRAY bbt_2=((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_userinput_tuserinput_txt ;
						BBUINT bbt_3=0U;
						while(bbt_3<((BBUINT)(bbt_2->scales[0]))){
							struct BBDebugScope __scope = {
								BBDEBUGSCOPE_LOCALBLOCK,
								0,
								{
									BBDEBUGDECL_END 
								}
							};
							bbOnDebugEnterScope(&__scope);
							bbt_gad=(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATAINDEX((bbt_2),(bbt_2)->dims,bbt_3))[bbt_3];
							bbt_3=(bbt_3+1U);
							struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 192, 0};
							bbOnDebugEnterStm(&__stmt_0);
							if(bbt_gad==&bbNullObject){
								struct BBDebugScope __scope = {
									BBDEBUGSCOPE_LOCALBLOCK,
									0,
									{
										BBDEBUGDECL_END 
									}
								};
								bbOnDebugEnterScope(&__scope);
								struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 192, 0};
								bbOnDebugEnterStm(&__stmt_0);
								bbOnDebugLeaveScope();
								bbOnDebugLeaveScope();
								continue;
							}
							struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 193, 0};
							bbOnDebugEnterStm(&__stmt_1);
							((BBSTRING*)BBARRAYDATAINDEX((bbt_res),(bbt_res)->dims,((BBUINT)bbt_count)))[((BBUINT)bbt_count)]=maxgui_maxgui_GadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_gad);
							struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 194, 0};
							bbOnDebugEnterStm(&__stmt_2);
							bbt_count+=1;
							bbOnDebugLeaveScope();
						}
						struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 196, 0};
						bbOnDebugEnterStm(&__stmt_3);
						((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_pEvent))->_brl_event_tevent_extra =(BBOBJECT)bbt_res;
						struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 198, 0};
						bbOnDebugEnterStm(&__stmt_4);
						brl_event_EmitEvent((struct brl_event_TEvent_obj*)brl_event_CreateEvent(8198,(BBOBJECT)bbt_obj,0,0,0,0,(BBOBJECT)bbt_res));
						struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 199, 0};
						bbOnDebugEnterStm(&__stmt_5);
						maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_obj,(BBClass*)&maxgui_maxgui_gadget_TGadget)));
						bbOnDebugLeaveScope();
					}
					struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 202, 0};
					bbOnDebugEnterStm(&__stmt_1);
					if(((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_pEvent))->_brl_event_tevent_source ==((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_userinput_tuserinput_btn_cancel ){
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 203, 0};
						bbOnDebugEnterStm(&__stmt_0);
						maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_obj,(BBClass*)&maxgui_maxgui_gadget_TGadget)));
						struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 204, 0};
						bbOnDebugEnterStm(&__stmt_1);
						bbDelay(10);
						struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 205, 0};
						bbOnDebugEnterStm(&__stmt_2);
						brl_event_EmitEvent((struct brl_event_TEvent_obj*)brl_event_CreateEvent(8198,(BBOBJECT)&bbNullObject,0,0,0,0,(BBOBJECT)&bbNullObject));
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
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 209, 0};
					bbOnDebugEnterStm(&__stmt_0);
					bbt_count=0;
					struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 210, 0};
					bbOnDebugEnterStm(&__stmt_1);
					bbt_res=bbArrayNew1D("$", (((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_userinput_tuserinput_txt )->scales[0]);
					struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 211, 0};
					bbOnDebugEnterStm(&__stmt_2);
					BBARRAY bbt_4=((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbNullObjectTest(bbt_obj))->_maxgui_proxygadgets_userinput_tuserinput_txt ;
					BBUINT bbt_5=0U;
					while(bbt_5<((BBUINT)(bbt_4->scales[0]))){
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						bbt_gad=(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATAINDEX((bbt_4),(bbt_4)->dims,bbt_5))[bbt_5];
						bbt_5=(bbt_5+1U);
						struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 211, 0};
						bbOnDebugEnterStm(&__stmt_0);
						if(bbt_gad==&bbNullObject){
							struct BBDebugScope __scope = {
								BBDEBUGSCOPE_LOCALBLOCK,
								0,
								{
									BBDEBUGDECL_END 
								}
							};
							bbOnDebugEnterScope(&__scope);
							struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 211, 0};
							bbOnDebugEnterStm(&__stmt_0);
							bbOnDebugLeaveScope();
							bbOnDebugLeaveScope();
							continue;
						}
						struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 212, 0};
						bbOnDebugEnterStm(&__stmt_1);
						((BBSTRING*)BBARRAYDATAINDEX((bbt_res),(bbt_res)->dims,((BBUINT)bbt_count)))[((BBUINT)bbt_count)]=maxgui_maxgui_GadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_gad);
						struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 213, 0};
						bbOnDebugEnterStm(&__stmt_2);
						bbt_count+=1;
						bbOnDebugLeaveScope();
					}
					struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 215, 0};
					bbOnDebugEnterStm(&__stmt_3);
					((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_pEvent))->_brl_event_tevent_extra =(BBOBJECT)bbt_res;
					struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 216, 0};
					bbOnDebugEnterStm(&__stmt_4);
					maxgui_maxgui_SetGadgetExtra((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_obj,(BBClass*)&maxgui_maxgui_gadget_TGadget)),(BBOBJECT)bbt_res);
					struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 217, 0};
					bbOnDebugEnterStm(&__stmt_5);
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
	struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 226, 0};
	bbOnDebugEnterStm(&__stmt_6);
	bbOnDebugLeaveScope();
	return (BBOBJECT)bbt_pData;
}
struct BBDebugScope_17 maxgui_proxygadgets_userinput_tUserInput_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"tUserInput",
	{
		{
			BBDEBUGDECL_FIELD,
			"panel",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_userinput_tUserInput_obj,_maxgui_proxygadgets_userinput_tuserinput_panel)
		},
		{
			BBDEBUGDECL_FIELD,
			"label",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_userinput_tUserInput_obj,_maxgui_proxygadgets_userinput_tuserinput_label)
		},
		{
			BBDEBUGDECL_FIELD,
			"txt",
			"[]:TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_userinput_tUserInput_obj,_maxgui_proxygadgets_userinput_tuserinput_txt)
		},
		{
			BBDEBUGDECL_FIELD,
			"lbl",
			"[]:TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_userinput_tUserInput_obj,_maxgui_proxygadgets_userinput_tuserinput_lbl)
		},
		{
			BBDEBUGDECL_FIELD,
			"btn_ok",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_userinput_tUserInput_obj,_maxgui_proxygadgets_userinput_tuserinput_btn_ok)
		},
		{
			BBDEBUGDECL_FIELD,
			"btn_cancel",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_userinput_tUserInput_obj,_maxgui_proxygadgets_userinput_tuserinput_btn_cancel)
		},
		{
			BBDEBUGDECL_FIELD,
			"_window",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_userinput_tUserInput_obj,_maxgui_proxygadgets_userinput_tuserinput__window)
		},
		{
			BBDEBUGDECL_FIELD,
			"window",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_userinput_tUserInput_obj,_maxgui_proxygadgets_userinput_tuserinput_window)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_maxgui_proxygadgets_userinput_tUserInput_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Class",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_userinput_tUserInput_Class
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetFont",
			"(:TGuiFont)i",
			.var_address=(void*)&_maxgui_proxygadgets_userinput_tUserInput_SetFont_TTGuiFont
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"CleanUp",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_userinput_tUserInput_CleanUp
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetText",
			"($)i",
			.var_address=(void*)&_maxgui_proxygadgets_userinput_tUserInput_SetText_S
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Create",
			"($,$,i,i,:TGadget,[]$):tUserInput",
			.var_address=(void*)&maxgui_proxygadgets_userinput_tUserInput_Create_TtUserInput_SSiiTTGadgetaS
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetColor",
			"(i,i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_userinput_tUserInput_SetColor_iii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetEnabled",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_userinput_tUserInput_SetEnabled_i
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"eventHandler",
			"(i,:Object,:Object):Object",
			.var_address=(void*)&maxgui_proxygadgets_userinput_tUserInput_eventHandler_TObject_iTObjectTObject
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_maxgui_proxygadgets_userinput_tUserInput maxgui_proxygadgets_userinput_tUserInput={
	&maxgui_maxgui_gadget_TProxyGadget,
	bbObjectFree,
	(BBDebugScope*)&maxgui_proxygadgets_userinput_tUserInput_scope,
	sizeof(struct maxgui_proxygadgets_userinput_tUserInput_obj),
	(void (*)(BBOBJECT))_maxgui_proxygadgets_userinput_tUserInput_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct maxgui_proxygadgets_userinput_tUserInput_obj,_maxgui_proxygadgets_userinput_tuserinput_window) - sizeof(void*) + sizeof(struct maxgui_maxgui_gadget_TGadget_obj*)
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
	,_maxgui_proxygadgets_userinput_tUserInput_CleanUp
	,_maxgui_maxgui_gadget_TProxyGadget_Free
	,_maxgui_maxgui_gadget_TProxyGadget_Rethink
	,_maxgui_maxgui_gadget_TProxyGadget_ClientWidth
	,_maxgui_maxgui_gadget_TProxyGadget_ClientHeight
	,_maxgui_maxgui_gadget_TProxyGadget_Activate_i
	,_maxgui_maxgui_gadget_TProxyGadget_State
	,_maxgui_proxygadgets_userinput_tUserInput_SetText_S
	,_maxgui_maxgui_gadget_TProxyGadget_GetText
	,_maxgui_proxygadgets_userinput_tUserInput_SetFont_TTGuiFont
	,_maxgui_proxygadgets_userinput_tUserInput_SetColor_iii
	,_maxgui_maxgui_gadget_TProxyGadget_RemoveColor
	,_maxgui_maxgui_gadget_TProxyGadget_SetAlpha_f
	,_maxgui_maxgui_gadget_TProxyGadget_SetTextColor_iii
	,_maxgui_maxgui_gadget_TProxyGadget_SetTooltip_S
	,_maxgui_maxgui_gadget_TProxyGadget_GetTooltip
	,_maxgui_maxgui_gadget_TProxyGadget_SetPixmap_TTPixmapi
	,_maxgui_maxgui_gadget_TProxyGadget_SetIconStrip_TTIconStrip
	,_maxgui_maxgui_gadget_TProxyGadget_SetShow_i
	,_maxgui_proxygadgets_userinput_tUserInput_SetEnabled_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetSelected_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetHotKey_ii
	,_maxgui_maxgui_gadget_TProxyGadget_SetSensitivity_i
	,_maxgui_maxgui_gadget_TProxyGadget_GetSensitivity
	,_maxgui_proxygadgets_userinput_tUserInput_Class
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
	,maxgui_proxygadgets_userinput_tUserInput_Create_TtUserInput_SSiiTTGadgetaS
	,maxgui_proxygadgets_userinput_tUserInput_eventHandler_TObject_iTObjectTObject
};

struct maxgui_proxygadgets_userinput_tUserInput_obj* maxgui_proxygadgets_userinput_CreateInput(BBSTRING bbt_msg,BBSTRING bbt_Fields,BBINT bbt_x,BBINT bbt_y,struct maxgui_maxgui_gadget_TGadget_obj* bbt_group,BBARRAY bbt_defaults){
	struct BBDebugScope_6 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"CreateInput",
		{
			{
				BBDEBUGDECL_LOCAL,
				"msg",
				"$",
				.var_address=&bbt_msg
			},
			{
				BBDEBUGDECL_LOCAL,
				"Fields",
				"$",
				.var_address=&bbt_Fields
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
				"group",
				":TGadget",
				.var_address=&bbt_group
			},
			{
				BBDEBUGDECL_LOCAL,
				"defaults",
				"[]$",
				.var_address=&bbt_defaults
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/UserInput.bmx", 23, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return (struct maxgui_proxygadgets_userinput_tUserInput_obj*)maxgui_proxygadgets_userinput_tUserInput_Create_TtUserInput_SSiiTTGadgetaS(bbt_msg,bbt_Fields,bbt_x,bbt_y,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group,bbt_defaults);
}
static int _bb_maxgui_proxygadgets_userinput_inited = 0;
int _bb_maxgui_proxygadgets_userinput(){
	if (!_bb_maxgui_proxygadgets_userinput_inited) {
		_bb_maxgui_proxygadgets_userinput_inited = 1;
		__bb_brl_blitz_blitz();
		__bb_maxgui_maxgui_maxgui();
		_bb_maxgui_proxygadgets_common();
		bbObjectRegisterType((BBCLASS)&maxgui_proxygadgets_userinput_tUserInput);
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_FUNCTION,
			"UserInput",
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