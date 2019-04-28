#include "splitter.bmx.debug.win32.x64.h"
static BBString _s8={
	&bbStringClass,
	2,
	{45,49}
};
static BBString _s2={
	&bbStringClass,
	1,
	{48}
};
static BBString _s3={
	&bbStringClass,
	1,
	{49}
};
static BBString _s4={
	&bbStringClass,
	1,
	{50}
};
static BBString _s1={
	&bbStringClass,
	3,
	{50,48,48}
};
static BBString _s7={
	&bbStringClass,
	2,
	{51,50}
};
static BBString _s5={
	&bbStringClass,
	1,
	{52}
};
static BBString _s6={
	&bbStringClass,
	1,
	{56}
};
static BBString _s0={
	&bbStringClass,
	16,
	{67,108,105,99,107,32,116,111,32,116,111,103,103,108,101,33}
};
struct BBDebugScope_1{int kind; const char *name; BBDebugDecl decls[2]; };
struct BBDebugScope_12{int kind; const char *name; BBDebugDecl decls[13]; };
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
struct BBDebugScope_3{int kind; const char *name; BBDebugDecl decls[4]; };
struct BBDebugScope_4{int kind; const char *name; BBDebugDecl decls[5]; };
struct BBDebugScope_5{int kind; const char *name; BBDebugDecl decls[6]; };
struct BBDebugScope_55{int kind; const char *name; BBDebugDecl decls[56]; };
struct BBDebugScope_6{int kind; const char *name; BBDebugDecl decls[7]; };
struct BBDebugScope_7{int kind; const char *name; BBDebugDecl decls[8]; };
struct BBDebugScope_8{int kind; const char *name; BBDebugDecl decls[9]; };
struct BBDebugScope_9{int kind; const char *name; BBDebugDecl decls[10]; };
void _maxgui_proxygadgets_splitter_TSplitter_New(struct maxgui_proxygadgets_splitter_TSplitter_obj* o) {
	_maxgui_maxgui_gadget_TProxyGadget_New((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o);
	o->clas = &maxgui_proxygadgets_splitter_TSplitter;
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_strtoggletooltip = &_s0;
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intorientation = 0;
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intminpanelspace = 0;
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intsavepanelspace = 220;
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intbehavior = 0;
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intguttersize = 0;
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intpanelspace = ((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intminpanelspace ;
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intmousedown = bbArrayNew1D("i", 2);
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_inthasmoved = 0;
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intshouldupdate = 0;
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pnlpanes = &bbEmptyArray;
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle1 = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle2 = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_gadparent = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	struct brl_pixmap_TPixmap_obj* bbt_[]={&bbNullObject,&bbNullObject};
	BBARRAY bbt_2 = bbArrayFromData(":TPixmap",2,bbt_);
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pixhandle = bbt_2;
}
struct maxgui_proxygadgets_splitter_TSplitter_obj* _maxgui_proxygadgets_splitter_TSplitter_Create_iiiiTTGadgetii(struct maxgui_proxygadgets_splitter_TSplitter_obj* o,BBINT bbt_pX,BBINT bbt_pY,BBINT bbt_pW,BBINT bbt_pH,struct maxgui_maxgui_gadget_TGadget_obj* bbt_pParent,BBINT bbt_pOrientation,BBINT bbt_pHandleSize){
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
	struct BBDebugScope_8 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Create",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TSplitter",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"pX",
				"i",
				.var_address=&bbt_pX
			},
			{
				BBDEBUGDECL_LOCAL,
				"pY",
				"i",
				.var_address=&bbt_pY
			},
			{
				BBDEBUGDECL_LOCAL,
				"pW",
				"i",
				.var_address=&bbt_pW
			},
			{
				BBDEBUGDECL_LOCAL,
				"pH",
				"i",
				.var_address=&bbt_pH
			},
			{
				BBDEBUGDECL_LOCAL,
				"pParent",
				":TGadget",
				.var_address=&bbt_pParent
			},
			{
				BBDEBUGDECL_LOCAL,
				"pOrientation",
				"i",
				.var_address=&bbt_pOrientation
			},
			{
				BBDEBUGDECL_LOCAL,
				"pHandleSize",
				"i",
				.var_address=&bbt_pHandleSize
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 168, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_gadparent =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreatePanel(bbt_pX,bbt_pY,bbt_pW,bbt_pH,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_pParent,0,&bbEmptyString);
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 168, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(o));
	((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)->clas->m_SetProxy_TTGadget((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_gadparent );
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 170, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intguttersize =brl_blitz_Max(bbt_pHandleSize,4);
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 171, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_DrawHandle((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o);
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 171, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_DrawPanes((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o);
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 171, 0};
	bbOnDebugEnterStm(&__stmt_5);
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_ChangeOrientation_i((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o,bbt_pOrientation);
	struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 173, 0};
	bbOnDebugEnterStm(&__stmt_6);
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_SetBehavior_i((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o,-3);
	struct BBDebugStm __stmt_7 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 175, 0};
	bbOnDebugEnterStm(&__stmt_7);
	brl_hook_AddHook(brl_event_EmitEventHook,o->clas->f_eventHandler_TObject_iTObjectTObject,(BBOBJECT)o,-1);
	struct BBDebugStm __stmt_8 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 177, 0};
	bbOnDebugEnterStm(&__stmt_8);
	bbOnDebugLeaveScope();
	return (struct maxgui_proxygadgets_splitter_TSplitter_obj*)o;
}
BBINT _maxgui_proxygadgets_splitter_TSplitter_GetOrientation(struct maxgui_proxygadgets_splitter_TSplitter_obj* o){
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"GetOrientation",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TSplitter",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 184, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return ((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intorientation ;
}
void _maxgui_proxygadgets_splitter_TSplitter_SetOrientation_i(struct maxgui_proxygadgets_splitter_TSplitter_obj* o,BBINT bbt_pOrientation){
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetOrientation",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TSplitter",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"pOrientation",
				"i",
				.var_address=&bbt_pOrientation
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 188, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_ChangeOrientation_i((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o,bbt_pOrientation);
	bbOnDebugLeaveScope();
}
void _maxgui_proxygadgets_splitter_TSplitter_SetBehavior_i(struct maxgui_proxygadgets_splitter_TSplitter_obj* o,BBINT bbt_pBehavior){
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetBehavior",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TSplitter",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"pBehavior",
				"i",
				.var_address=&bbt_pBehavior
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 192, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intbehavior =bbt_pBehavior;
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 193, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(((unsigned int)(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intbehavior )&32)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 194, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_strtoggletooltip != &bbEmptyString){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 194, 0};
			bbOnDebugEnterStm(&__stmt_0);
			maxgui_maxgui_SetGadgetToolTip((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle ,((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_strtoggletooltip );
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 196, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_strtoggletooltip != &bbEmptyString){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 196, 0};
			bbOnDebugEnterStm(&__stmt_0);
			maxgui_maxgui_SetGadgetToolTip((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle ,&bbEmptyString);
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
}
BBINT _maxgui_proxygadgets_splitter_TSplitter_GetBehavior(struct maxgui_proxygadgets_splitter_TSplitter_obj* o){
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"GetBehavior",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TSplitter",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 201, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return ((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intbehavior ;
}
struct maxgui_maxgui_gadget_TGadget_obj* _maxgui_proxygadgets_splitter_TSplitter_GetPanel_i(struct maxgui_proxygadgets_splitter_TSplitter_obj* o,BBINT bbt_pPane){
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"GetPanel",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TSplitter",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"pPane",
				"i",
				.var_address=&bbt_pPane
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 205, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return (struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pnlpanes ),(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pnlpanes )->dims,((BBUINT)bbt_pPane)))[((BBUINT)bbt_pPane)];
}
BBINT _maxgui_proxygadgets_splitter_TSplitter_GetPanelSpace_i(struct maxgui_proxygadgets_splitter_TSplitter_obj* o,BBINT bbt_pPane){
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"GetPanelSpace",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TSplitter",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"pPane",
				"i",
				.var_address=&bbt_pPane
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 209, 0};
	bbOnDebugEnterStm(&__stmt_0);
	BBINT bbt_=bbt_pPane;
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 210, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(bbt_==1){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 211, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return ((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intpanelspace ;
	}else{
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 212, 0};
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
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 213, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if(((unsigned int)(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intorientation )&1)!=0){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 214, 0};
				bbOnDebugEnterStm(&__stmt_0);
				((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(o));
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				return ((((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)->clas->m_ClientWidth((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)-((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intpanelspace )-((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intguttersize );
			}else{
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 216, 0};
				bbOnDebugEnterStm(&__stmt_0);
				((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(o));
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				return ((((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)->clas->m_ClientHeight((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)-((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intpanelspace )-((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intguttersize );
			}
		}
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
void _maxgui_proxygadgets_splitter_TSplitter_SetPanelSpace_ii(struct maxgui_proxygadgets_splitter_TSplitter_obj* o,BBINT bbt_pPanelSpace,BBINT bbt_flgSave){
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
	BBINT bbt_tmpOldPanelSpace=0;
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetPanelSpace",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TSplitter",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"pPanelSpace",
				"i",
				.var_address=&bbt_pPanelSpace
			},
			{
				BBDEBUGDECL_LOCAL,
				"flgSave",
				"i",
				.var_address=&bbt_flgSave
			},
			{
				BBDEBUGDECL_LOCAL,
				"tmpOldPanelSpace",
				"i",
				.var_address=&bbt_tmpOldPanelSpace
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 223, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_tmpOldPanelSpace=((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intpanelspace ;
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 225, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(((unsigned int)(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intbehavior )&2)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 226, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(o));
		((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(o));
		BBINT bbt_2[]={((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)->clas->m_ClientHeight((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o),((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)->clas->m_ClientWidth((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)};
		BBARRAY bbt_3 = bbArrayFromData("i",2,bbt_2);
		BBARRAY volatile bbt_=bbt_3;
		bbt_pPanelSpace=brl_blitz_Min(bbt_pPanelSpace,((unsigned int)(((BBINT*)BBARRAYDATAINDEX((bbt_),(bbt_)->dims,((BBUINT)((unsigned int)(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intorientation )&1))))[((BBUINT)((unsigned int)(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intorientation )&1))])>>1));
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 229, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_pPanelSpace=brl_blitz_Max(bbt_pPanelSpace,((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intminpanelspace );
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 231, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intpanelspace =bbt_pPanelSpace;
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 232, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
	if(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_GetPanelSpace_i((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o,0)<((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intminpanelspace ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 232, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intpanelspace =bbt_tmpOldPanelSpace;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 234, 0};
	bbOnDebugEnterStm(&__stmt_5);
	if((bbt_flgSave!=0) && (((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intpanelspace >brl_blitz_Min(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intguttersize ,((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intminpanelspace ))){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 234, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intsavepanelspace =((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intpanelspace ;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 236, 0};
	bbOnDebugEnterStm(&__stmt_6);
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_DrawHandle((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o);
	struct BBDebugStm __stmt_7 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 236, 0};
	bbOnDebugEnterStm(&__stmt_7);
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_DrawPanes((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o);
	bbOnDebugLeaveScope();
}
BBINT _maxgui_proxygadgets_splitter_TSplitter_CleanUp(struct maxgui_proxygadgets_splitter_TSplitter_obj* o){
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"CleanUp",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TSplitter",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 243, 0};
	bbOnDebugEnterStm(&__stmt_0);
	brl_hook_RemoveHook(brl_event_EmitEventHook,o->clas->f_eventHandler_TObject_iTObjectTObject,(BBOBJECT)o);
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 244, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_gadparent =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 245, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbOnDebugLeaveScope();
	return (&maxgui_proxygadgets_splitter_TSplitter)->super->m_CleanUp((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o);
}
BBINT _maxgui_proxygadgets_splitter_TSplitter_SetTooltip_S(struct maxgui_proxygadgets_splitter_TSplitter_obj* o,BBSTRING bbt_pTooltip){
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetTooltip",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TSplitter",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"pTooltip",
				"$",
				.var_address=&bbt_pTooltip
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 249, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_strtoggletooltip =&bbEmptyString;
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 250, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle1 ))->clas->m_SetTooltip_S((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle1 ,bbt_pTooltip);
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 251, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle2 ))->clas->m_SetTooltip_S((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle2 ,bbt_pTooltip);
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 252, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbOnDebugLeaveScope();
	return ((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle ))->clas->m_SetTooltip_S((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle ,bbt_pTooltip);
}
BBSTRING _maxgui_proxygadgets_splitter_TSplitter_GetTooltip(struct maxgui_proxygadgets_splitter_TSplitter_obj* o){
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"GetTooltip",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TSplitter",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 256, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return ((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle ))->clas->m_GetTooltip((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle );
}
BBINT _maxgui_proxygadgets_splitter_TSplitter_SetTextColor_iii(struct maxgui_proxygadgets_splitter_TSplitter_obj* o,BBINT bbt_pRed,BBINT bbt_pGreen,BBINT bbt_pBlue){
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetTextColor",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TSplitter",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"pRed",
				"i",
				.var_address=&bbt_pRed
			},
			{
				BBDEBUGDECL_LOCAL,
				"pGreen",
				"i",
				.var_address=&bbt_pGreen
			},
			{
				BBDEBUGDECL_LOCAL,
				"pBlue",
				"i",
				.var_address=&bbt_pBlue
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 260, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct brl_pixmap_TPixmap_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pixhandle ),(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pixhandle )->dims,0U))[0U]=(struct brl_pixmap_TPixmap_obj*)o->clas->f_MakeColourHandlePixmap_TTPixmap_iiii(bbt_pRed,bbt_pGreen,bbt_pBlue,((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intguttersize );
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 261, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(((unsigned int)(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intorientation )&1)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 261, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct brl_pixmap_TPixmap_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pixhandle ),(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pixhandle )->dims,0U))[0U]=(struct brl_pixmap_TPixmap_obj*)o->clas->f_RotatePixmap_TTPixmap_TTPixmap((struct brl_pixmap_TPixmap_obj*)((struct brl_pixmap_TPixmap_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pixhandle ),(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pixhandle )->dims,0U))[0U]);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 262, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct brl_pixmap_TPixmap_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pixhandle ),(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pixhandle )->dims,1U))[1U]=(struct brl_pixmap_TPixmap_obj*)o->clas->f_BrightenPixmap_TTPixmap_TTPixmapf((struct brl_pixmap_TPixmap_obj*)((struct brl_pixmap_TPixmap_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pixhandle ),(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pixhandle )->dims,0U))[0U],1.05f);
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 263, 0};
	bbOnDebugEnterStm(&__stmt_3);
	maxgui_maxgui_HideGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle1 );
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 263, 0};
	bbOnDebugEnterStm(&__stmt_4);
	maxgui_maxgui_HideGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle2 );
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 264, 0};
	bbOnDebugEnterStm(&__stmt_5);
	maxgui_maxgui_SetPanelPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle ,(struct brl_pixmap_TPixmap_obj*)((struct brl_pixmap_TPixmap_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pixhandle ),(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pixhandle )->dims,0U))[0U],0);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_splitter_TSplitter_SetColor_iii(struct maxgui_proxygadgets_splitter_TSplitter_obj* o,BBINT bbt_pRed,BBINT bbt_pGreen,BBINT bbt_pBlue){
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetColor",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TSplitter",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"pRed",
				"i",
				.var_address=&bbt_pRed
			},
			{
				BBDEBUGDECL_LOCAL,
				"pGreen",
				"i",
				.var_address=&bbt_pGreen
			},
			{
				BBDEBUGDECL_LOCAL,
				"pBlue",
				"i",
				.var_address=&bbt_pBlue
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 268, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return maxgui_maxgui_SetPanelColor((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle ,bbt_pRed,bbt_pGreen,bbt_pBlue);
}
BBINT _maxgui_proxygadgets_splitter_TSplitter_SetSensitivity_i(struct maxgui_proxygadgets_splitter_TSplitter_obj* o,BBINT bbt_pSensitivity){
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetSensitivity",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TSplitter",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"pSensitivity",
				"i",
				.var_address=&bbt_pSensitivity
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 272, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_splitter_TSplitter_GetSensitivity(struct maxgui_proxygadgets_splitter_TSplitter_obj* o){
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"GetSensitivity",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TSplitter",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 276, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return 0;
}
void _maxgui_proxygadgets_splitter_TSplitter_ReapplyLocks(struct maxgui_proxygadgets_splitter_TSplitter_obj* o){
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
	BBARRAY volatile bbt_tmpLocks=&bbEmptyArray;
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"ReapplyLocks",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TSplitter",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"tmpLocks",
				"[][]i",
				.var_address=&bbt_tmpLocks
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 282, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_tmpLocks=((BBARRAY*)BBARRAYDATAINDEX((maxgui_proxygadgets_splitter_TSplitter_intOrientationLocks),(maxgui_proxygadgets_splitter_TSplitter_intOrientationLocks)->dims,((BBUINT)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intorientation )))[((BBUINT)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intorientation )];
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 283, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if((((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pnlpanes != &bbEmptyArray) && ((((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pnlpanes ->scales[0])>1)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 284, 0};
		bbOnDebugEnterStm(&__stmt_0);
		BBARRAY volatile bbt_=((BBARRAY*)BBARRAYDATAINDEX((bbt_tmpLocks),(bbt_tmpLocks)->dims,0U))[0U];
		BBARRAY volatile bbt_2=((BBARRAY*)BBARRAYDATAINDEX((bbt_tmpLocks),(bbt_tmpLocks)->dims,0U))[0U];
		BBARRAY volatile bbt_3=((BBARRAY*)BBARRAYDATAINDEX((bbt_tmpLocks),(bbt_tmpLocks)->dims,0U))[0U];
		BBARRAY volatile bbt_4=((BBARRAY*)BBARRAYDATAINDEX((bbt_tmpLocks),(bbt_tmpLocks)->dims,0U))[0U];
		maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pnlpanes ),(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pnlpanes )->dims,0U))[0U],((BBINT*)BBARRAYDATAINDEX((bbt_),(bbt_)->dims,0U))[0U],((BBINT*)BBARRAYDATAINDEX((bbt_2),(bbt_2)->dims,1U))[1U],((BBINT*)BBARRAYDATAINDEX((bbt_3),(bbt_3)->dims,2U))[2U],((BBINT*)BBARRAYDATAINDEX((bbt_4),(bbt_4)->dims,3U))[3U]);
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 285, 0};
		bbOnDebugEnterStm(&__stmt_1);
		BBARRAY volatile bbt_5=((BBARRAY*)BBARRAYDATAINDEX((bbt_tmpLocks),(bbt_tmpLocks)->dims,1U))[1U];
		BBARRAY volatile bbt_6=((BBARRAY*)BBARRAYDATAINDEX((bbt_tmpLocks),(bbt_tmpLocks)->dims,1U))[1U];
		BBARRAY volatile bbt_7=((BBARRAY*)BBARRAYDATAINDEX((bbt_tmpLocks),(bbt_tmpLocks)->dims,1U))[1U];
		BBARRAY volatile bbt_8=((BBARRAY*)BBARRAYDATAINDEX((bbt_tmpLocks),(bbt_tmpLocks)->dims,1U))[1U];
		maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pnlpanes ),(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pnlpanes )->dims,1U))[1U],((BBINT*)BBARRAYDATAINDEX((bbt_5),(bbt_5)->dims,0U))[0U],((BBINT*)BBARRAYDATAINDEX((bbt_6),(bbt_6)->dims,1U))[1U],((BBINT*)BBARRAYDATAINDEX((bbt_7),(bbt_7)->dims,2U))[2U],((BBINT*)BBARRAYDATAINDEX((bbt_8),(bbt_8)->dims,3U))[3U]);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 287, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(((BBObject*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 287, 0};
		bbOnDebugEnterStm(&__stmt_0);
		BBARRAY volatile bbt_9=((BBARRAY*)BBARRAYDATAINDEX((bbt_tmpLocks),(bbt_tmpLocks)->dims,2U))[2U];
		BBARRAY volatile bbt_10=((BBARRAY*)BBARRAYDATAINDEX((bbt_tmpLocks),(bbt_tmpLocks)->dims,2U))[2U];
		BBARRAY volatile bbt_11=((BBARRAY*)BBARRAYDATAINDEX((bbt_tmpLocks),(bbt_tmpLocks)->dims,2U))[2U];
		BBARRAY volatile bbt_12=((BBARRAY*)BBARRAYDATAINDEX((bbt_tmpLocks),(bbt_tmpLocks)->dims,2U))[2U];
		maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle ,((BBINT*)BBARRAYDATAINDEX((bbt_9),(bbt_9)->dims,0U))[0U],((BBINT*)BBARRAYDATAINDEX((bbt_10),(bbt_10)->dims,1U))[1U],((BBINT*)BBARRAYDATAINDEX((bbt_11),(bbt_11)->dims,2U))[2U],((BBINT*)BBARRAYDATAINDEX((bbt_12),(bbt_12)->dims,3U))[3U]);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
}
BBINT _maxgui_proxygadgets_splitter_TSplitter_GetSideSpace_i(struct maxgui_proxygadgets_splitter_TSplitter_obj* o,BBINT bbt_pSide){
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"GetSideSpace",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TSplitter",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"pSide",
				"i",
				.var_address=&bbt_pSide
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 297, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
	BBARRAY volatile bbt_=((BBARRAY*)BBARRAYDATAINDEX((maxgui_proxygadgets_splitter_TSplitter_intSideToPanelMapping),(maxgui_proxygadgets_splitter_TSplitter_intSideToPanelMapping)->dims,((BBUINT)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intorientation )))[((BBUINT)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intorientation )];
	bbOnDebugLeaveScope();
	return ((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_GetPanelSpace_i((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o,((BBINT*)BBARRAYDATAINDEX((bbt_),(bbt_)->dims,((BBUINT)bbt_pSide)))[((BBUINT)bbt_pSide)]);
}
void _maxgui_proxygadgets_splitter_TSplitter_DrawHandle(struct maxgui_proxygadgets_splitter_TSplitter_obj* o){
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
	BBARRAY volatile bbt_tmpDimensions=&bbEmptyArray;
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"DrawHandle",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TSplitter",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"tmpDimensions",
				"[]i",
				.var_address=&bbt_tmpDimensions
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 302, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_tmpDimensions=&bbEmptyArray;
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 304, 0};
	bbOnDebugEnterStm(&__stmt_1);
	BBINT bbt_=((unsigned int)(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intorientation )&1);
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 306, 0};
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 306, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
		((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(o));
		BBINT bbt_2[]={0,((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_GetSideSpace_i((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o,0),((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)->clas->m_ClientWidth((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o),((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intguttersize };
		BBARRAY bbt_3 = bbArrayFromData("i",4,bbt_2);
		bbt_tmpDimensions=bbt_3;
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 307, 0};
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
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 307, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
			((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(o));
			BBINT bbt_4[]={((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_GetSideSpace_i((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o,0),0,((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intguttersize ,((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)->clas->m_ClientHeight((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)};
			BBARRAY bbt_5 = bbArrayFromData("i",4,bbt_4);
			bbt_tmpDimensions=bbt_5;
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 311, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if(((BBObject*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 312, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle ,((BBINT*)BBARRAYDATAINDEX((bbt_tmpDimensions),(bbt_tmpDimensions)->dims,0U))[0U],((BBINT*)BBARRAYDATAINDEX((bbt_tmpDimensions),(bbt_tmpDimensions)->dims,1U))[1U],((BBINT*)BBARRAYDATAINDEX((bbt_tmpDimensions),(bbt_tmpDimensions)->dims,2U))[2U],((BBINT*)BBARRAYDATAINDEX((bbt_tmpDimensions),(bbt_tmpDimensions)->dims,3U))[3U]);
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 313, 0};
		bbOnDebugEnterStm(&__stmt_1);
		BBINT bbt_6=((unsigned int)(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intorientation )&1);
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 314, 0};
		bbOnDebugEnterStm(&__stmt_2);
		if(bbt_6==0){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 315, 0};
			bbOnDebugEnterStm(&__stmt_0);
			maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle1 ,0,((BBINT)(bbCeil((BBDOUBLE)(((BBFLOAT)((BBINT*)BBARRAYDATAINDEX((bbt_tmpDimensions),(bbt_tmpDimensions)->dims,3U))[3U])/2.0f))-2.0000000000000000)),((BBINT*)BBARRAYDATAINDEX((bbt_tmpDimensions),(bbt_tmpDimensions)->dims,2U))[2U],2);
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 316, 0};
			bbOnDebugEnterStm(&__stmt_1);
			maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle2 ,0,((BBINT)bbCeil((BBDOUBLE)(((BBFLOAT)((BBINT*)BBARRAYDATAINDEX((bbt_tmpDimensions),(bbt_tmpDimensions)->dims,3U))[3U])/2.0f))),((BBINT*)BBARRAYDATAINDEX((bbt_tmpDimensions),(bbt_tmpDimensions)->dims,2U))[2U],2);
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
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 317, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if(bbt_6==1){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 318, 0};
				bbOnDebugEnterStm(&__stmt_0);
				maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle1 ,((BBINT)(bbCeil((BBDOUBLE)(((BBFLOAT)((BBINT*)BBARRAYDATAINDEX((bbt_tmpDimensions),(bbt_tmpDimensions)->dims,2U))[2U])/2.0f))-2.0000000000000000)),0,2,((BBINT*)BBARRAYDATAINDEX((bbt_tmpDimensions),(bbt_tmpDimensions)->dims,3U))[3U]);
				struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 319, 0};
				bbOnDebugEnterStm(&__stmt_1);
				maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle2 ,((BBINT)bbCeil((BBDOUBLE)(((BBFLOAT)((BBINT*)BBARRAYDATAINDEX((bbt_tmpDimensions),(bbt_tmpDimensions)->dims,2U))[2U])/2.0f))),0,2,((BBINT*)BBARRAYDATAINDEX((bbt_tmpDimensions),(bbt_tmpDimensions)->dims,3U))[3U]);
				bbOnDebugLeaveScope();
			}
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 321, 0};
		bbOnDebugEnterStm(&__stmt_3);
		if(((BBObject*)((struct brl_pixmap_TPixmap_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pixhandle ),(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pixhandle )->dims,0U))[0U])!= &bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 322, 0};
			bbOnDebugEnterStm(&__stmt_0);
			maxgui_maxgui_HideGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle1 );
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 323, 0};
			bbOnDebugEnterStm(&__stmt_1);
			maxgui_maxgui_HideGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle2 );
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
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 325, 0};
			bbOnDebugEnterStm(&__stmt_0);
			maxgui_maxgui_ShowGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle1 );
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 326, 0};
			bbOnDebugEnterStm(&__stmt_1);
			maxgui_maxgui_ShowGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle2 );
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 329, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreatePanel(((BBINT*)BBARRAYDATAINDEX((bbt_tmpDimensions),(bbt_tmpDimensions)->dims,0U))[0U],((BBINT*)BBARRAYDATAINDEX((bbt_tmpDimensions),(bbt_tmpDimensions)->dims,1U))[1U],((BBINT*)BBARRAYDATAINDEX((bbt_tmpDimensions),(bbt_tmpDimensions)->dims,2U))[2U],((BBINT*)BBARRAYDATAINDEX((bbt_tmpDimensions),(bbt_tmpDimensions)->dims,3U))[3U],(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_gadparent ,4,&bbEmptyString);
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 331, 0};
		bbOnDebugEnterStm(&__stmt_1);
		maxgui_maxgui_SetPanelPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle ,(struct brl_pixmap_TPixmap_obj*)((struct brl_pixmap_TPixmap_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pixhandle ),(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pixhandle )->dims,0U))[0U],0);
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 331, 0};
		bbOnDebugEnterStm(&__stmt_2);
		maxgui_maxgui_SetGadgetToolTip((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle ,((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_strtoggletooltip );
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 333, 0};
		bbOnDebugEnterStm(&__stmt_3);
		BBINT bbt_7=((unsigned int)(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intorientation )&1);
		struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 334, 0};
		bbOnDebugEnterStm(&__stmt_4);
		if(bbt_7==0){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 335, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle1 =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateLabel(&bbEmptyString,0,((BBINT)(bbCeil((BBDOUBLE)(((BBFLOAT)((BBINT*)BBARRAYDATAINDEX((bbt_tmpDimensions),(bbt_tmpDimensions)->dims,3U))[3U])/2.0f))-2.0000000000000000)),((BBINT*)BBARRAYDATAINDEX((bbt_tmpDimensions),(bbt_tmpDimensions)->dims,2U))[2U],2,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle ,3);
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 336, 0};
			bbOnDebugEnterStm(&__stmt_1);
			((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle2 =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateLabel(&bbEmptyString,0,((BBINT)bbCeil((BBDOUBLE)(((BBFLOAT)((BBINT*)BBARRAYDATAINDEX((bbt_tmpDimensions),(bbt_tmpDimensions)->dims,3U))[3U])/2.0f))),((BBINT*)BBARRAYDATAINDEX((bbt_tmpDimensions),(bbt_tmpDimensions)->dims,2U))[2U],2,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle ,3);
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
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 337, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if(bbt_7==1){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 338, 0};
				bbOnDebugEnterStm(&__stmt_0);
				((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle1 =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateLabel(&bbEmptyString,((BBINT)(bbCeil((BBDOUBLE)(((BBFLOAT)((BBINT*)BBARRAYDATAINDEX((bbt_tmpDimensions),(bbt_tmpDimensions)->dims,2U))[2U])/2.0f))-2.0000000000000000)),0,2,((BBINT*)BBARRAYDATAINDEX((bbt_tmpDimensions),(bbt_tmpDimensions)->dims,3U))[3U],(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle ,3);
				struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 339, 0};
				bbOnDebugEnterStm(&__stmt_1);
				((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle2 =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateLabel(&bbEmptyString,((BBINT)bbCeil((BBDOUBLE)(((BBFLOAT)((BBINT*)BBARRAYDATAINDEX((bbt_tmpDimensions),(bbt_tmpDimensions)->dims,2U))[2U])/2.0f))),0,2,((BBINT*)BBARRAYDATAINDEX((bbt_tmpDimensions),(bbt_tmpDimensions)->dims,3U))[3U],(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle ,3);
				bbOnDebugLeaveScope();
			}
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 341, 0};
		bbOnDebugEnterStm(&__stmt_5);
		maxgui_maxgui_SetGadgetSensitivity((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle1 ,1);
		struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 341, 0};
		bbOnDebugEnterStm(&__stmt_6);
		maxgui_maxgui_SetGadgetSensitivity((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle2 ,1);
		struct BBDebugStm __stmt_7 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 344, 0};
		bbOnDebugEnterStm(&__stmt_7);
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle1 );
		struct BBDebugStm __stmt_8 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 344, 0};
		bbOnDebugEnterStm(&__stmt_8);
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle2 );
		struct BBDebugStm __stmt_9 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 347, 0};
		bbOnDebugEnterStm(&__stmt_9);
		maxgui_maxgui_SetGadgetToolTip((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle1 ,((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_strtoggletooltip );
		struct BBDebugStm __stmt_10 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 347, 0};
		bbOnDebugEnterStm(&__stmt_10);
		maxgui_maxgui_SetGadgetToolTip((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle2 ,((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_strtoggletooltip );
		struct BBDebugStm __stmt_11 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 348, 0};
		bbOnDebugEnterStm(&__stmt_11);
		maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle1 ,1,1,1,1);
		struct BBDebugStm __stmt_12 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 349, 0};
		bbOnDebugEnterStm(&__stmt_12);
		maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle2 ,1,1,1,1);
		struct BBDebugStm __stmt_13 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 350, 0};
		bbOnDebugEnterStm(&__stmt_13);
		if(((BBObject*)((struct brl_pixmap_TPixmap_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pixhandle ),(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pixhandle )->dims,0U))[0U])!= &bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 350, 0};
			bbOnDebugEnterStm(&__stmt_0);
			maxgui_maxgui_HideGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle1 );
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 350, 0};
			bbOnDebugEnterStm(&__stmt_1);
			maxgui_maxgui_HideGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle2 );
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
}
void _maxgui_proxygadgets_splitter_TSplitter_DrawPanes(struct maxgui_proxygadgets_splitter_TSplitter_obj* o){
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
	BBARRAY volatile bbt_tmpDimensions=&bbEmptyArray;
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"DrawPanes",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TSplitter",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"tmpDimensions",
				"[][]i",
				.var_address=&bbt_tmpDimensions
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 358, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_tmpDimensions=&bbEmptyArray;
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 360, 0};
	bbOnDebugEnterStm(&__stmt_1);
	BBINT bbt_=((unsigned int)(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intorientation )&1);
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 361, 0};
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 362, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(o));
		((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
		BBINT bbt_4[]={0,0,((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)->clas->m_ClientWidth((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o),((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_GetSideSpace_i((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o,0)};
		BBARRAY bbt_5 = bbArrayFromData("i",4,bbt_4);
		((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
		((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(o));
		((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
		BBINT bbt_6[]={0,(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_GetSideSpace_i((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o,0)+((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intguttersize ),((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)->clas->m_ClientWidth((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o),((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_GetSideSpace_i((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o,1)};
		BBARRAY bbt_7 = bbArrayFromData("i",4,bbt_6);
		BBARRAY bbt_2[]={bbt_5,bbt_7};
		BBARRAY bbt_3 = bbArrayFromData("[]i",2,bbt_2);
		bbt_tmpDimensions=bbt_3;
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 363, 0};
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
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 364, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
			((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(o));
			BBINT bbt_10[]={0,0,((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_GetSideSpace_i((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o,0),((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)->clas->m_ClientHeight((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)};
			BBARRAY bbt_11 = bbArrayFromData("i",4,bbt_10);
			((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
			((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
			((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(o));
			BBINT bbt_12[]={(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_GetSideSpace_i((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o,0)+((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intguttersize ),0,((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_GetSideSpace_i((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o,1),((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)->clas->m_ClientHeight((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)};
			BBARRAY bbt_13 = bbArrayFromData("i",4,bbt_12);
			BBARRAY bbt_8[]={bbt_11,bbt_13};
			BBARRAY bbt_9 = bbArrayFromData("[]i",2,bbt_8);
			bbt_tmpDimensions=bbt_9;
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 367, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if(((unsigned int)(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intorientation )&2)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 367, 0};
		bbOnDebugEnterStm(&__stmt_0);
		BBARRAY bbt_14[]={((BBARRAY*)BBARRAYDATAINDEX((bbt_tmpDimensions),(bbt_tmpDimensions)->dims,1U))[1U],((BBARRAY*)BBARRAYDATAINDEX((bbt_tmpDimensions),(bbt_tmpDimensions)->dims,0U))[0U]};
		BBARRAY bbt_15 = bbArrayFromData("[]i",2,bbt_14);
		bbt_tmpDimensions=bbt_15;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 369, 0};
	bbOnDebugEnterStm(&__stmt_4);
	if((((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pnlpanes ->scales[0])!=2){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 370, 0};
		bbOnDebugEnterStm(&__stmt_0);
		struct maxgui_maxgui_gadget_TGadget_obj* bbt_16[]={maxgui_maxgui_CreatePanel(0,0,1,1,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_gadparent ,0,&bbEmptyString),maxgui_maxgui_CreatePanel(0,0,1,1,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_gadparent ,0,&bbEmptyString)};
		BBARRAY bbt_17 = bbArrayFromData(":TGadget",2,bbt_16);
		((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pnlpanes =bbt_17;
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 371, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
		((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_ReapplyLocks((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 374, 0};
	bbOnDebugEnterStm(&__stmt_5);
	BBARRAY volatile bbt_18=((BBARRAY*)BBARRAYDATAINDEX((bbt_tmpDimensions),(bbt_tmpDimensions)->dims,0U))[0U];
	BBARRAY volatile bbt_19=((BBARRAY*)BBARRAYDATAINDEX((bbt_tmpDimensions),(bbt_tmpDimensions)->dims,0U))[0U];
	BBARRAY volatile bbt_20=((BBARRAY*)BBARRAYDATAINDEX((bbt_tmpDimensions),(bbt_tmpDimensions)->dims,0U))[0U];
	BBARRAY volatile bbt_21=((BBARRAY*)BBARRAYDATAINDEX((bbt_tmpDimensions),(bbt_tmpDimensions)->dims,0U))[0U];
	maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pnlpanes ),(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pnlpanes )->dims,0U))[0U],((BBINT*)BBARRAYDATAINDEX((bbt_18),(bbt_18)->dims,0U))[0U],((BBINT*)BBARRAYDATAINDEX((bbt_19),(bbt_19)->dims,1U))[1U],((BBINT*)BBARRAYDATAINDEX((bbt_20),(bbt_20)->dims,2U))[2U],((BBINT*)BBARRAYDATAINDEX((bbt_21),(bbt_21)->dims,3U))[3U]);
	struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 375, 0};
	bbOnDebugEnterStm(&__stmt_6);
	BBARRAY volatile bbt_22=((BBARRAY*)BBARRAYDATAINDEX((bbt_tmpDimensions),(bbt_tmpDimensions)->dims,1U))[1U];
	BBARRAY volatile bbt_23=((BBARRAY*)BBARRAYDATAINDEX((bbt_tmpDimensions),(bbt_tmpDimensions)->dims,1U))[1U];
	BBARRAY volatile bbt_24=((BBARRAY*)BBARRAYDATAINDEX((bbt_tmpDimensions),(bbt_tmpDimensions)->dims,1U))[1U];
	BBARRAY volatile bbt_25=((BBARRAY*)BBARRAYDATAINDEX((bbt_tmpDimensions),(bbt_tmpDimensions)->dims,1U))[1U];
	maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pnlpanes ),(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pnlpanes )->dims,1U))[1U],((BBINT*)BBARRAYDATAINDEX((bbt_22),(bbt_22)->dims,0U))[0U],((BBINT*)BBARRAYDATAINDEX((bbt_23),(bbt_23)->dims,1U))[1U],((BBINT*)BBARRAYDATAINDEX((bbt_24),(bbt_24)->dims,2U))[2U],((BBINT*)BBARRAYDATAINDEX((bbt_25),(bbt_25)->dims,3U))[3U]);
	bbOnDebugLeaveScope();
}
void _maxgui_proxygadgets_splitter_TSplitter_ChangeOrientation_i(struct maxgui_proxygadgets_splitter_TSplitter_obj* o,BBINT bbt_pOrientation){
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"ChangeOrientation",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TSplitter",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"pOrientation",
				"i",
				.var_address=&bbt_pOrientation
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 380, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(bbt_pOrientation==((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intorientation ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 380, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return;
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 381, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(bbt_pOrientation<0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 382, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intorientation =(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intorientation ^2);
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 384, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if((((BBObject*)((struct brl_pixmap_TPixmap_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pixhandle ),(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pixhandle )->dims,0U))[0U])!= &bbNullObject) && (((unsigned int)(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intorientation )&1)!=((unsigned int)(bbt_pOrientation)&1))){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 385, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct brl_pixmap_TPixmap_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pixhandle ),(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pixhandle )->dims,0U))[0U]=(struct brl_pixmap_TPixmap_obj*)o->clas->f_RotatePixmap_TTPixmap_TTPixmap((struct brl_pixmap_TPixmap_obj*)((struct brl_pixmap_TPixmap_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pixhandle ),(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pixhandle )->dims,0U))[0U]);
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 385, 0};
			bbOnDebugEnterStm(&__stmt_1);
			((struct brl_pixmap_TPixmap_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pixhandle ),(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pixhandle )->dims,1U))[1U]=(struct brl_pixmap_TPixmap_obj*)o->clas->f_RotatePixmap_TTPixmap_TTPixmap((struct brl_pixmap_TPixmap_obj*)((struct brl_pixmap_TPixmap_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pixhandle ),(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pixhandle )->dims,1U))[1U]);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 387, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intorientation =bbt_pOrientation;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 389, 0};
	bbOnDebugEnterStm(&__stmt_2);
	maxgui_maxgui_SetPanelPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle ,(struct brl_pixmap_TPixmap_obj*)((struct brl_pixmap_TPixmap_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pixhandle ),(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pixhandle )->dims,0U))[0U],0);
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 389, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_DrawHandle((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o);
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 389, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_DrawPanes((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o);
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 389, 0};
	bbOnDebugEnterStm(&__stmt_5);
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_ReapplyLocks((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o);
	struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 389, 0};
	bbOnDebugEnterStm(&__stmt_6);
	maxgui_maxgui_RedrawGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_gadparent );
	bbOnDebugLeaveScope();
}
void _maxgui_proxygadgets_splitter_TSplitter_Toggle(struct maxgui_proxygadgets_splitter_TSplitter_obj* o){
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Toggle",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TSplitter",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 393, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intpanelspace >((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intminpanelspace ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 393, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
		((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_SetPanelSpace_ii((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o,((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intminpanelspace ,1);
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 393, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
		((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_SetPanelSpace_ii((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o,((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intsavepanelspace ,1);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
}
BBOBJECT _maxgui_proxygadgets_splitter_TSplitter_eventHook_iTObject(struct maxgui_proxygadgets_splitter_TSplitter_obj* o,BBINT bbt_pID,BBOBJECT bbt_pData){
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
	struct brl_event_TEvent_obj* bbt_tmpEvent=(struct brl_event_TEvent_obj*)&bbNullObject;
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"eventHook",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TSplitter",
				.var_address=&o
			},
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
				"tmpEvent",
				":TEvent",
				.var_address=&bbt_tmpEvent
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 398, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_tmpEvent=(struct brl_event_TEvent_obj*)((struct brl_event_TEvent_obj*)bbObjectDowncast((BBOBJECT)bbt_pData,(BBClass*)&brl_event_TEvent));
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 399, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(!(((BBObject*)bbt_tmpEvent)!= &bbNullObject) || !(((BBObject*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_tmpEvent))->_brl_event_tevent_source ,(BBClass*)&maxgui_maxgui_gadget_TGadget)))!= &bbNullObject)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 399, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return (BBOBJECT)bbt_pData;
	}
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 401, 0};
	bbOnDebugEnterStm(&__stmt_2);
	BBOBJECT bbt_=(BBOBJECT)((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_tmpEvent))->_brl_event_tevent_source ;
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 403, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if(((bbt_==((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle ) || (bbt_==((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle1 )) || (bbt_==((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle2 )){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 405, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if((((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_tmpEvent))->_brl_event_tevent_source ==((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle1 ) || (((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_tmpEvent))->_brl_event_tevent_source ==((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle2 )){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 406, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_tmpEvent))->_brl_event_tevent_x +=maxgui_maxgui_GadgetX((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_tmpEvent))->_brl_event_tevent_source ,(BBClass*)&maxgui_maxgui_gadget_TGadget)));
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 407, 0};
			bbOnDebugEnterStm(&__stmt_1);
			((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_tmpEvent))->_brl_event_tevent_y +=maxgui_maxgui_GadgetY((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_tmpEvent))->_brl_event_tevent_source ,(BBClass*)&maxgui_maxgui_gadget_TGadget)));
			struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 408, 0};
			bbOnDebugEnterStm(&__stmt_2);
			((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_tmpEvent))->_brl_event_tevent_source =(BBOBJECT)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle ;
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 411, 0};
		bbOnDebugEnterStm(&__stmt_1);
		BBINT bbt_2=((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_tmpEvent))->_brl_event_tevent_id ;
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 413, 0};
		bbOnDebugEnterStm(&__stmt_2);
		if(bbt_2==1025){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 415, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if(((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_tmpEvent))->_brl_event_tevent_data !=1){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 415, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				return (BBOBJECT)&bbNullObject;
			}
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 416, 0};
			bbOnDebugEnterStm(&__stmt_1);
			BBINT bbt_3[]={((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_tmpEvent))->_brl_event_tevent_x ,((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_tmpEvent))->_brl_event_tevent_y };
			BBARRAY bbt_4 = bbArrayFromData("i",2,bbt_3);
			((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intmousedown =bbt_4;
			struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 417, 0};
			bbOnDebugEnterStm(&__stmt_2);
			((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_inthasmoved =0;
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
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 419, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if(bbt_2==1027){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 421, 0};
				bbOnDebugEnterStm(&__stmt_0);
				((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_inthasmoved =1;
				struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 423, 0};
				bbOnDebugEnterStm(&__stmt_1);
				if(((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_tmpEvent))->_brl_event_tevent_data !=0){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 425, 0};
					bbOnDebugEnterStm(&__stmt_0);
					if((((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intmousedown != &bbEmptyArray) || ((((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_tmpEvent))->_brl_event_tevent_data ==1) && (((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intshouldupdate !=0))){
						BBINT bbt_tmpOrientation=0;
						BBINT bbt_tmpPanelSpace=0;
						BBINT bbt_tmpPanelSave=0;
						BBINT bbt_tmpDraggedSpace=0;
						struct BBDebugScope_4 __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								{
									BBDEBUGDECL_LOCAL,
									"tmpOrientation",
									"i",
									.var_address=&bbt_tmpOrientation
								},
								{
									BBDEBUGDECL_LOCAL,
									"tmpPanelSpace",
									"i",
									.var_address=&bbt_tmpPanelSpace
								},
								{
									BBDEBUGDECL_LOCAL,
									"tmpPanelSave",
									"i",
									.var_address=&bbt_tmpPanelSave
								},
								{
									BBDEBUGDECL_LOCAL,
									"tmpDraggedSpace",
									"i",
									.var_address=&bbt_tmpDraggedSpace
								},
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 428, 0};
						bbOnDebugEnterStm(&__stmt_0);
						((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
						((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_ShowDragPointer((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o);
						struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 429, 0};
						bbOnDebugEnterStm(&__stmt_1);
						if((((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intshouldupdate !=0) || !(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intmousedown != &bbEmptyArray)){
							struct BBDebugScope __scope = {
								BBDEBUGSCOPE_LOCALBLOCK,
								0,
								{
									BBDEBUGDECL_END 
								}
							};
							bbOnDebugEnterScope(&__scope);
							struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 430, 0};
							bbOnDebugEnterStm(&__stmt_0);
							BBINT bbt_5[]={((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_tmpEvent))->_brl_event_tevent_x ,((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_tmpEvent))->_brl_event_tevent_y };
							BBARRAY bbt_6 = bbArrayFromData("i",2,bbt_5);
							((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intmousedown =bbt_6;
							struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 431, 0};
							bbOnDebugEnterStm(&__stmt_1);
							((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intshouldupdate =0;
							bbOnDebugLeaveScope();
						}
						struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 435, 0};
						bbOnDebugEnterStm(&__stmt_2);
						((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
						bbt_tmpOrientation=((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_GetOrientation((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o);
						struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 435, 0};
						bbOnDebugEnterStm(&__stmt_3);
						bbt_tmpPanelSpace=-1;
						struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 435, 0};
						bbOnDebugEnterStm(&__stmt_4);
						bbt_tmpPanelSave=0;
						struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 438, 0};
						bbOnDebugEnterStm(&__stmt_5);
						BBINT bbt_8[]={(((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_tmpEvent))->_brl_event_tevent_y -((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intmousedown ),(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intmousedown )->dims,1U))[1U]),(((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_tmpEvent))->_brl_event_tevent_x -((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intmousedown ),(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intmousedown )->dims,0U))[0U])};
						BBARRAY bbt_9 = bbArrayFromData("i",2,bbt_8);
						BBARRAY volatile bbt_7=bbt_9;
						bbt_tmpDraggedSpace=-((BBINT*)BBARRAYDATAINDEX((bbt_7),(bbt_7)->dims,((BBUINT)((unsigned int)(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intorientation )&1))))[((BBUINT)((unsigned int)(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intorientation )&1))];
						struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 439, 0};
						bbOnDebugEnterStm(&__stmt_6);
						if(((unsigned int)(bbt_tmpOrientation)&2)!=0){
							struct BBDebugScope __scope = {
								BBDEBUGSCOPE_LOCALBLOCK,
								0,
								{
									BBDEBUGDECL_END 
								}
							};
							bbOnDebugEnterScope(&__scope);
							struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 439, 0};
							bbOnDebugEnterStm(&__stmt_0);
							bbt_tmpDraggedSpace*=-1;
							bbOnDebugLeaveScope();
						}
						struct BBDebugStm __stmt_7 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 440, 0};
						bbOnDebugEnterStm(&__stmt_7);
						bbt_tmpDraggedSpace+=((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intpanelspace ;
						struct BBDebugStm __stmt_8 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 443, 0};
						bbOnDebugEnterStm(&__stmt_8);
						if((((unsigned int)(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intbehavior )&1)!=0) && (bbt_tmpDraggedSpace!=((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intpanelspace )){
							struct BBDebugScope __scope = {
								BBDEBUGSCOPE_LOCALBLOCK,
								0,
								{
									BBDEBUGDECL_END 
								}
							};
							bbOnDebugEnterScope(&__scope);
							struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 446, 0};
							bbOnDebugEnterStm(&__stmt_0);
							if(bbt_tmpDraggedSpace<((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intguttersize ){
								struct BBDebugScope __scope = {
									BBDEBUGSCOPE_LOCALBLOCK,
									0,
									{
										BBDEBUGDECL_END 
									}
								};
								bbOnDebugEnterScope(&__scope);
								struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 446, 0};
								bbOnDebugEnterStm(&__stmt_0);
								bbt_tmpDraggedSpace=((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intminpanelspace ;
								bbOnDebugLeaveScope();
							}
							struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 448, 0};
							bbOnDebugEnterStm(&__stmt_1);
							bbt_tmpPanelSpace=bbt_tmpDraggedSpace;
							struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 449, 0};
							bbOnDebugEnterStm(&__stmt_2);
							((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intpanelspace =bbt_tmpDraggedSpace;
							bbOnDebugLeaveScope();
						}
						struct BBDebugStm __stmt_9 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 453, 0};
						bbOnDebugEnterStm(&__stmt_9);
						if(((unsigned int)(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intbehavior )&2)!=0){
							BBARRAY volatile bbt_tmpDimensions=&bbEmptyArray;
							struct BBDebugScope_1 __scope = {
								BBDEBUGSCOPE_LOCALBLOCK,
								0,
								{
									{
										BBDEBUGDECL_LOCAL,
										"tmpDimensions",
										"[]i",
										.var_address=&bbt_tmpDimensions
									},
									BBDEBUGDECL_END 
								}
							};
							bbOnDebugEnterScope(&__scope);
							struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 454, 0};
							bbOnDebugEnterStm(&__stmt_0);
							((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(o));
							((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(o));
							BBINT bbt_10[]={((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)->clas->m_ClientHeight((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o),((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)->clas->m_ClientWidth((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)};
							BBARRAY bbt_11 = bbArrayFromData("i",2,bbt_10);
							bbt_tmpDimensions=bbt_11;
							struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 455, 0};
							bbOnDebugEnterStm(&__stmt_1);
							((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
							if(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_GetPanelSpace_i((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o,1)>(((BBINT*)BBARRAYDATAINDEX((bbt_tmpDimensions),(bbt_tmpDimensions)->dims,((BBUINT)((unsigned int)(bbt_tmpOrientation)&1))))[((BBUINT)((unsigned int)(bbt_tmpOrientation)&1))]/2)){
								struct BBDebugScope __scope = {
									BBDEBUGSCOPE_LOCALBLOCK,
									0,
									{
										BBDEBUGDECL_END 
									}
								};
								bbOnDebugEnterScope(&__scope);
								struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 456, 0};
								bbOnDebugEnterStm(&__stmt_0);
								if(((unsigned int)(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intbehavior )&4)!=0){
									struct BBDebugScope __scope = {
										BBDEBUGSCOPE_LOCALBLOCK,
										0,
										{
											BBDEBUGDECL_END 
										}
									};
									bbOnDebugEnterScope(&__scope);
									struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 457, 0};
									bbOnDebugEnterStm(&__stmt_0);
									bbt_tmpOrientation=(bbt_tmpOrientation^2);
									struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 458, 0};
									bbOnDebugEnterStm(&__stmt_1);
									((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
									bbt_tmpPanelSpace=((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_GetPanelSpace_i((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o,0);
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
									struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 460, 0};
									bbOnDebugEnterStm(&__stmt_0);
									bbt_tmpPanelSpace=(((BBINT*)BBARRAYDATAINDEX((bbt_tmpDimensions),(bbt_tmpDimensions)->dims,((BBUINT)((unsigned int)(bbt_tmpOrientation)&1))))[((BBUINT)((unsigned int)(bbt_tmpOrientation)&1))]/2);
									bbOnDebugLeaveScope();
								}
								struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 462, 0};
								bbOnDebugEnterStm(&__stmt_1);
								bbt_tmpPanelSave=1;
								bbOnDebugLeaveScope();
							}
							bbOnDebugLeaveScope();
						}
						struct BBDebugStm __stmt_10 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 467, 0};
						bbOnDebugEnterStm(&__stmt_10);
						if(((unsigned int)(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intbehavior )&12)!=0){
							BBINT bbt_tmpLeftCond=0;
							BBINT bbt_tmpRightCond=0;
							BBINT bbt_tmpTopCond=0;
							BBINT bbt_tmpBottomCond=0;
							struct BBDebugScope_4 __scope = {
								BBDEBUGSCOPE_LOCALBLOCK,
								0,
								{
									{
										BBDEBUGDECL_LOCAL,
										"tmpLeftCond",
										"i",
										.var_address=&bbt_tmpLeftCond
									},
									{
										BBDEBUGDECL_LOCAL,
										"tmpRightCond",
										"i",
										.var_address=&bbt_tmpRightCond
									},
									{
										BBDEBUGDECL_LOCAL,
										"tmpTopCond",
										"i",
										.var_address=&bbt_tmpTopCond
									},
									{
										BBDEBUGDECL_LOCAL,
										"tmpBottomCond",
										"i",
										.var_address=&bbt_tmpBottomCond
									},
									BBDEBUGDECL_END 
								}
							};
							bbOnDebugEnterScope(&__scope);
							struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 470, 0};
							bbOnDebugEnterStm(&__stmt_0);
							bbt_tmpLeftCond=((maxgui_maxgui_GadgetX((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle )+((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_tmpEvent))->_brl_event_tevent_x )<1);
							struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 471, 0};
							bbOnDebugEnterStm(&__stmt_1);
							((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(o));
							bbt_tmpRightCond=((maxgui_maxgui_GadgetX((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle )+((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_tmpEvent))->_brl_event_tevent_x )>(((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)->clas->m_ClientWidth((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)-((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intguttersize ));
							struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 472, 0};
							bbOnDebugEnterStm(&__stmt_2);
							bbt_tmpTopCond=((maxgui_maxgui_GadgetY((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle )+((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_tmpEvent))->_brl_event_tevent_y )<1);
							struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 473, 0};
							bbOnDebugEnterStm(&__stmt_3);
							((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(o));
							bbt_tmpBottomCond=((maxgui_maxgui_GadgetY((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle )+((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_tmpEvent))->_brl_event_tevent_y )>(((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)->clas->m_ClientHeight((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)-((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intguttersize ));
							struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 475, 0};
							bbOnDebugEnterStm(&__stmt_4);
							BBINT bbt_12=1;
							struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 477, 0};
							bbOnDebugEnterStm(&__stmt_5);
							if((((bbt_12==((bbt_tmpRightCond!=0) && !(((unsigned int)(bbt_tmpTopCond)|bbt_tmpBottomCond)!=0))) || (bbt_12==((bbt_tmpLeftCond!=0) && !(((unsigned int)(bbt_tmpTopCond)|bbt_tmpBottomCond)!=0)))) || (bbt_12==((bbt_tmpBottomCond!=0) && !(((unsigned int)(bbt_tmpLeftCond)|bbt_tmpRightCond)!=0)))) || (bbt_12==((bbt_tmpTopCond!=0) && !(((unsigned int)(bbt_tmpLeftCond)|bbt_tmpRightCond)!=0)))){
								struct BBDebugScope __scope = {
									BBDEBUGSCOPE_LOCALBLOCK,
									0,
									{
										BBDEBUGDECL_END 
									}
								};
								bbOnDebugEnterScope(&__scope);
								struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 478, 0};
								bbOnDebugEnterStm(&__stmt_0);
								if((((unsigned int)(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intbehavior )&4)!=0) || (((unsigned int)(bbt_tmpLeftCond)|bbt_tmpTopCond)==((unsigned int)(bbt_tmpOrientation)&2))){
									struct BBDebugScope __scope = {
										BBDEBUGSCOPE_LOCALBLOCK,
										0,
										{
											BBDEBUGDECL_END 
										}
									};
									bbOnDebugEnterScope(&__scope);
									struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 479, 0};
									bbOnDebugEnterStm(&__stmt_0);
									if(((unsigned int)(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intbehavior )&8)!=0){
										struct BBDebugScope __scope = {
											BBDEBUGSCOPE_LOCALBLOCK,
											0,
											{
												BBDEBUGDECL_END 
											}
										};
										bbOnDebugEnterScope(&__scope);
										struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 480, 0};
										bbOnDebugEnterStm(&__stmt_0);
										if(((unsigned int)(bbt_tmpLeftCond)|bbt_tmpRightCond)!=0){
											struct BBDebugScope __scope = {
												BBDEBUGSCOPE_LOCALBLOCK,
												0,
												{
													BBDEBUGDECL_END 
												}
											};
											bbOnDebugEnterScope(&__scope);
											struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 480, 0};
											bbOnDebugEnterStm(&__stmt_0);
											bbt_tmpOrientation|=1;
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
											struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 480, 0};
											bbOnDebugEnterStm(&__stmt_0);
											bbt_tmpOrientation&=-2;
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
										struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 482, 0};
										bbOnDebugEnterStm(&__stmt_0);
										BBINT bbt_13=((unsigned int)(bbt_tmpOrientation)&1);
										struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 483, 0};
										bbOnDebugEnterStm(&__stmt_1);
										if(bbt_13==1){
											struct BBDebugScope __scope = {
												BBDEBUGSCOPE_LOCALBLOCK,
												0,
												{
													BBDEBUGDECL_END 
												}
											};
											bbOnDebugEnterScope(&__scope);
											struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 483, 0};
											bbOnDebugEnterStm(&__stmt_0);
											bbt_tmpTopCond=0;
											struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 483, 0};
											bbOnDebugEnterStm(&__stmt_1);
											bbt_tmpBottomCond=0;
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
											struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 484, 0};
											bbOnDebugEnterStm(&__stmt_0);
											if(bbt_13==0){
												struct BBDebugScope __scope = {
													BBDEBUGSCOPE_LOCALBLOCK,
													0,
													{
														BBDEBUGDECL_END 
													}
												};
												bbOnDebugEnterScope(&__scope);
												struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 484, 0};
												bbOnDebugEnterStm(&__stmt_0);
												bbt_tmpLeftCond=0;
												struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 484, 0};
												bbOnDebugEnterStm(&__stmt_1);
												bbt_tmpRightCond=0;
												bbOnDebugLeaveScope();
											}
											bbOnDebugLeaveScope();
										}
										bbOnDebugLeaveScope();
									}
									struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 488, 0};
									bbOnDebugEnterStm(&__stmt_1);
									if(((unsigned int)(bbt_tmpLeftCond)|bbt_tmpTopCond)!=0){
										struct BBDebugScope __scope = {
											BBDEBUGSCOPE_LOCALBLOCK,
											0,
											{
												BBDEBUGDECL_END 
											}
										};
										bbOnDebugEnterScope(&__scope);
										struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 488, 0};
										bbOnDebugEnterStm(&__stmt_0);
										bbt_tmpOrientation|=2;
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
										struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 488, 0};
										bbOnDebugEnterStm(&__stmt_0);
										if(((unsigned int)(bbt_tmpRightCond)|bbt_tmpBottomCond)!=0){
											struct BBDebugScope __scope = {
												BBDEBUGSCOPE_LOCALBLOCK,
												0,
												{
													BBDEBUGDECL_END 
												}
											};
											bbOnDebugEnterScope(&__scope);
											struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 488, 0};
											bbOnDebugEnterStm(&__stmt_0);
											bbt_tmpOrientation&=-3;
											bbOnDebugLeaveScope();
										}
										bbOnDebugLeaveScope();
									}
									struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 490, 0};
									bbOnDebugEnterStm(&__stmt_2);
									if((((unsigned int)(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intbehavior )&1)!=0) && (bbt_tmpOrientation!=((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intorientation )){
										struct BBDebugScope __scope = {
											BBDEBUGSCOPE_LOCALBLOCK,
											0,
											{
												BBDEBUGDECL_END 
											}
										};
										bbOnDebugEnterScope(&__scope);
										struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 490, 0};
										bbOnDebugEnterStm(&__stmt_0);
										bbt_tmpPanelSpace=((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intminpanelspace ;
										struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 490, 0};
										bbOnDebugEnterStm(&__stmt_1);
										bbt_tmpPanelSave=1;
										bbOnDebugLeaveScope();
									}
									bbOnDebugLeaveScope();
								}
								bbOnDebugLeaveScope();
							}
							bbOnDebugLeaveScope();
						}
						struct BBDebugStm __stmt_11 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 497, 0};
						bbOnDebugEnterStm(&__stmt_11);
						((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
						if(bbt_tmpOrientation!=((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_GetOrientation((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)){
							struct BBDebugScope __scope = {
								BBDEBUGSCOPE_LOCALBLOCK,
								0,
								{
									BBDEBUGDECL_END 
								}
							};
							bbOnDebugEnterScope(&__scope);
							struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 498, 0};
							bbOnDebugEnterStm(&__stmt_0);
							((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
							if(((unsigned int)(bbt_tmpOrientation)&1)!=((unsigned int)(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_GetOrientation((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o))&1)){
								struct BBDebugScope __scope = {
									BBDEBUGSCOPE_LOCALBLOCK,
									0,
									{
										BBDEBUGDECL_END 
									}
								};
								bbOnDebugEnterScope(&__scope);
								struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 499, 0};
								bbOnDebugEnterStm(&__stmt_0);
								((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intmousedown =&bbEmptyArray;
								struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 500, 0};
								bbOnDebugEnterStm(&__stmt_1);
								((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intshouldupdate =1;
								bbOnDebugLeaveScope();
							}
							struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 502, 0};
							bbOnDebugEnterStm(&__stmt_1);
							((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
							((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_ChangeOrientation_i((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o,bbt_tmpOrientation);
							struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 503, 0};
							bbOnDebugEnterStm(&__stmt_2);
							((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
							((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_ShowActivePointer((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o);
							bbOnDebugLeaveScope();
						}
						struct BBDebugStm __stmt_12 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 506, 0};
						bbOnDebugEnterStm(&__stmt_12);
						if(bbt_tmpPanelSpace>-1){
							struct BBDebugScope __scope = {
								BBDEBUGSCOPE_LOCALBLOCK,
								0,
								{
									BBDEBUGDECL_END 
								}
							};
							bbOnDebugEnterScope(&__scope);
							struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 506, 0};
							bbOnDebugEnterStm(&__stmt_0);
							((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
							((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_SetPanelSpace_ii((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o,bbt_tmpPanelSpace,bbt_tmpPanelSave);
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
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 512, 0};
					bbOnDebugEnterStm(&__stmt_0);
					((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intmousedown =&bbEmptyArray;
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
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 516, 0};
				bbOnDebugEnterStm(&__stmt_0);
				if(bbt_2==1026){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 518, 0};
					bbOnDebugEnterStm(&__stmt_0);
					if((((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intmousedown != &bbEmptyArray) && (((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_tmpEvent))->_brl_event_tevent_data ==1)){
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 520, 0};
						bbOnDebugEnterStm(&__stmt_0);
						if(!(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_inthasmoved !=0)){
							struct BBDebugScope __scope = {
								BBDEBUGSCOPE_LOCALBLOCK,
								0,
								{
									BBDEBUGDECL_END 
								}
							};
							bbOnDebugEnterScope(&__scope);
							struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 521, 0};
							bbOnDebugEnterStm(&__stmt_0);
							if(((unsigned int)(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intbehavior )&32)!=0){
								struct BBDebugScope __scope = {
									BBDEBUGSCOPE_LOCALBLOCK,
									0,
									{
										BBDEBUGDECL_END 
									}
								};
								bbOnDebugEnterScope(&__scope);
								struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 521, 0};
								bbOnDebugEnterStm(&__stmt_0);
								((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
								((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_Toggle((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o);
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
							struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 523, 0};
							bbOnDebugEnterStm(&__stmt_0);
							((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
							((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_SetPanelSpace_ii((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o,((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intpanelspace ,1);
							bbOnDebugLeaveScope();
						}
						struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 526, 0};
						bbOnDebugEnterStm(&__stmt_1);
						((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intmousedown =&bbEmptyArray;
						struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 528, 0};
						bbOnDebugEnterStm(&__stmt_2);
						o->clas->f_ShowNormalPointer_v();
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
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 532, 0};
					bbOnDebugEnterStm(&__stmt_0);
					if(bbt_2==1030){
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 534, 0};
						bbOnDebugEnterStm(&__stmt_0);
						if(((unsigned int)(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intbehavior )&33)!=0){
							struct BBDebugScope __scope = {
								BBDEBUGSCOPE_LOCALBLOCK,
								0,
								{
									BBDEBUGDECL_END 
								}
							};
							bbOnDebugEnterScope(&__scope);
							struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 535, 0};
							bbOnDebugEnterStm(&__stmt_0);
							maxgui_maxgui_SetPanelPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle ,(struct brl_pixmap_TPixmap_obj*)((struct brl_pixmap_TPixmap_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pixhandle ),(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pixhandle )->dims,0U))[0U],0);
							bbOnDebugLeaveScope();
						}
						struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 538, 0};
						bbOnDebugEnterStm(&__stmt_1);
						o->clas->f_ShowNormalPointer_v();
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
						struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 540, 0};
						bbOnDebugEnterStm(&__stmt_0);
						if(bbt_2==1029){
							struct BBDebugScope __scope = {
								BBDEBUGSCOPE_LOCALBLOCK,
								0,
								{
									BBDEBUGDECL_END 
								}
							};
							bbOnDebugEnterScope(&__scope);
							struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 542, 0};
							bbOnDebugEnterStm(&__stmt_0);
							if(((unsigned int)(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intbehavior )&33)!=0){
								struct BBDebugScope __scope = {
									BBDEBUGSCOPE_LOCALBLOCK,
									0,
									{
										BBDEBUGDECL_END 
									}
								};
								bbOnDebugEnterScope(&__scope);
								struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 543, 0};
								bbOnDebugEnterStm(&__stmt_0);
								maxgui_maxgui_SetPanelPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle ,(struct brl_pixmap_TPixmap_obj*)((struct brl_pixmap_TPixmap_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pixhandle ),(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pixhandle )->dims,1U))[1U],0);
								bbOnDebugLeaveScope();
							}
							struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 546, 0};
							bbOnDebugEnterStm(&__stmt_1);
							((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
							((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_ShowActivePointer((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o);
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
	}else{
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 550, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(((bbt_==((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pnlpanes ),(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pnlpanes )->dims,0U))[0U]) || (bbt_==((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pnlpanes ),(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_pnlpanes )->dims,1U))[1U])) || (bbt_==((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_gadparent )){
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
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 556, 0};
			bbOnDebugEnterStm(&__stmt_0);
			BBINT bbt_14=((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_tmpEvent))->_brl_event_tevent_id ;
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 557, 0};
			bbOnDebugEnterStm(&__stmt_1);
			if(bbt_14==16386){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 558, 0};
				bbOnDebugEnterStm(&__stmt_0);
				struct maxgui_maxgui_gadget_TGadget_obj* bbt_15;
				if((((unsigned int)(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intbehavior )&1)!=0) && ((((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest((bbt_15 = ((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_tmpEvent))->_brl_event_tevent_source ,(BBClass*)&maxgui_maxgui_gadget_TGadget))))))->clas)->m_HasDescendant_TTGadget((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_15,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_gadparent )!=0)){
					BBINT bbt_tmpLimit=0;
					struct BBDebugScope_1 __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							{
								BBDEBUGDECL_LOCAL,
								"tmpLimit",
								"i",
								.var_address=&bbt_tmpLimit
							},
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 559, 0};
					bbOnDebugEnterStm(&__stmt_0);
					((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(o));
					((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(o));
					BBINT bbt_17[]={((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)->clas->m_ClientHeight((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o),((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)->clas->m_ClientWidth((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)};
					BBARRAY bbt_18 = bbArrayFromData("i",2,bbt_17);
					BBARRAY volatile bbt_16=bbt_18;
					bbt_tmpLimit=((BBINT*)BBARRAYDATAINDEX((bbt_16),(bbt_16)->dims,((BBUINT)((unsigned int)(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intorientation )&1))))[((BBUINT)((unsigned int)(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intorientation )&1))];
					struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 560, 0};
					bbOnDebugEnterStm(&__stmt_1);
					if(((unsigned int)(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intbehavior )&2)!=0){
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 560, 0};
						bbOnDebugEnterStm(&__stmt_0);
						bbt_tmpLimit>>=1;
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
						struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 560, 0};
						bbOnDebugEnterStm(&__stmt_0);
						bbt_tmpLimit-=((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intguttersize ;
						bbOnDebugLeaveScope();
					}
					struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 561, 0};
					bbOnDebugEnterStm(&__stmt_2);
					((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
					if(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_GetPanelSpace_i((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o,1)>bbt_tmpLimit){
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 561, 0};
						bbOnDebugEnterStm(&__stmt_0);
						((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
						((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_SetPanelSpace_ii((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o,bbt_tmpLimit,1);
						bbOnDebugLeaveScope();
					}
					bbOnDebugLeaveScope();
				}
				bbOnDebugLeaveScope();
			}
			struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 565, 0};
			bbOnDebugEnterStm(&__stmt_2);
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			return (BBOBJECT)bbt_pData;
		}
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return (BBOBJECT)&bbNullObject;
}
void maxgui_proxygadgets_splitter_TSplitter_ShowNormalPointer_v(){
	struct BBDebugScope __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"ShowNormalPointer",
		{
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 572, 0};
	bbOnDebugEnterStm(&__stmt_0);
	maxgui_maxgui_SetPointer(0);
	bbOnDebugLeaveScope();
}
void _maxgui_proxygadgets_splitter_TSplitter_ShowActivePointer(struct maxgui_proxygadgets_splitter_TSplitter_obj* o){
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"ShowActivePointer",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TSplitter",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 576, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(((unsigned int)(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intbehavior )&1)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 577, 0};
		bbOnDebugEnterStm(&__stmt_0);
		BBINT bbt_=((unsigned int)(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intorientation )&1);
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 578, 0};
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
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 578, 0};
			bbOnDebugEnterStm(&__stmt_0);
			maxgui_maxgui_SetPointer(9);
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
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 579, 0};
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
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 579, 0};
				bbOnDebugEnterStm(&__stmt_0);
				maxgui_maxgui_SetPointer(8);
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 576, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(((unsigned int)(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intbehavior )&32)!=0){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 582, 0};
			bbOnDebugEnterStm(&__stmt_0);
			maxgui_maxgui_SetPointer(12);
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
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 584, 0};
			bbOnDebugEnterStm(&__stmt_0);
			maxgui_maxgui_SetPointer(0);
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
}
void _maxgui_proxygadgets_splitter_TSplitter_ShowDragPointer(struct maxgui_proxygadgets_splitter_TSplitter_obj* o){
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"ShowDragPointer",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TSplitter",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 589, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(((unsigned int)(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intbehavior )&1)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 590, 0};
		bbOnDebugEnterStm(&__stmt_0);
		BBINT bbt_=((unsigned int)(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intorientation )&1);
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 591, 0};
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
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 591, 0};
			bbOnDebugEnterStm(&__stmt_0);
			maxgui_maxgui_SetPointer(9);
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
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 592, 0};
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
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 592, 0};
				bbOnDebugEnterStm(&__stmt_0);
				maxgui_maxgui_SetPointer(8);
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 589, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(((unsigned int)(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tsplitter_intbehavior )&12)!=0){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 595, 0};
			bbOnDebugEnterStm(&__stmt_0);
			maxgui_maxgui_SetPointer(10);
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
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 597, 0};
			bbOnDebugEnterStm(&__stmt_0);
			maxgui_maxgui_SetPointer(0);
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
}
BBOBJECT maxgui_proxygadgets_splitter_TSplitter_eventHandler_TObject_iTObjectTObject(BBINT bbt_pID,BBOBJECT bbt_pData,BBOBJECT bbt_pContext){
	struct BBDebugScope_3 __scope = {
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
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 604, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(((BBObject*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbObjectDowncast((BBOBJECT)bbt_pContext,(BBClass*)&maxgui_proxygadgets_splitter_TSplitter)))!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 604, 0};
		bbOnDebugEnterStm(&__stmt_0);
		struct maxgui_proxygadgets_splitter_TSplitter_obj* bbt_;
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return (BBOBJECT)(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest((bbt_ = ((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbObjectDowncast((BBOBJECT)bbt_pContext,(BBClass*)&maxgui_proxygadgets_splitter_TSplitter))))))->clas)->m_eventHook_iTObject((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbt_,bbt_pID,(BBOBJECT)bbt_pData);
	}else{
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 604, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return (BBOBJECT)bbt_pData;
	}
}
struct brl_pixmap_TPixmap_obj* maxgui_proxygadgets_splitter_TSplitter_RotatePixmap_TTPixmap_TTPixmap(struct brl_pixmap_TPixmap_obj* bbt_pSrcPixmap){
	struct brl_pixmap_TPixmap_obj* bbt_tmpDestPixmap=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"RotatePixmap",
		{
			{
				BBDEBUGDECL_LOCAL,
				"pSrcPixmap",
				":TPixmap",
				.var_address=&bbt_pSrcPixmap
			},
			{
				BBDEBUGDECL_LOCAL,
				"tmpDestPixmap",
				":TPixmap",
				.var_address=&bbt_tmpDestPixmap
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 608, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_tmpDestPixmap=(struct brl_pixmap_TPixmap_obj*)brl_pixmap_CreatePixmap(((struct brl_pixmap_TPixmap_obj*)bbNullObjectTest(bbt_pSrcPixmap))->_brl_pixmap_tpixmap_height ,((struct brl_pixmap_TPixmap_obj*)bbNullObjectTest(bbt_pSrcPixmap))->_brl_pixmap_tpixmap_width ,((struct brl_pixmap_TPixmap_obj*)bbNullObjectTest(bbt_pSrcPixmap))->_brl_pixmap_tpixmap_format ,4);
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 609, 0};
	bbOnDebugEnterStm(&__stmt_1);
	{
		BBINT bbt_y=0;
		BBINT bbt_=((struct brl_pixmap_TPixmap_obj*)bbNullObjectTest(bbt_pSrcPixmap))->_brl_pixmap_tpixmap_height ;
		for(;(bbt_y<bbt_);bbt_y=(bbt_y+1)){
			struct BBDebugScope_1 __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					{
						BBDEBUGDECL_LOCAL,
						"y",
						"i",
						.var_address=&bbt_y
					},
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 610, 0};
			bbOnDebugEnterStm(&__stmt_0);
			{
				BBINT bbt_x=0;
				BBINT bbt_2=((struct brl_pixmap_TPixmap_obj*)bbNullObjectTest(bbt_pSrcPixmap))->_brl_pixmap_tpixmap_width ;
				for(;(bbt_x<bbt_2);bbt_x=(bbt_x+1)){
					struct BBDebugScope_1 __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
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
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 611, 0};
					bbOnDebugEnterStm(&__stmt_0);
					brl_pixmap_WritePixel((struct brl_pixmap_TPixmap_obj*)bbt_tmpDestPixmap,bbt_y,bbt_x,brl_pixmap_ReadPixel((struct brl_pixmap_TPixmap_obj*)bbt_pSrcPixmap,bbt_x,bbt_y));
					bbOnDebugLeaveScope();
				}
			}
			bbOnDebugLeaveScope();
		}
	}
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 614, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbOnDebugLeaveScope();
	return (struct brl_pixmap_TPixmap_obj*)bbt_tmpDestPixmap;
}
struct brl_pixmap_TPixmap_obj* maxgui_proxygadgets_splitter_TSplitter_BrightenPixmap_TTPixmap_TTPixmapf(struct brl_pixmap_TPixmap_obj* bbt_pSrcPixmap,BBFLOAT bbt_pBrightness){
	struct brl_pixmap_TPixmap_obj* bbt_tmpDestPixmap=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"BrightenPixmap",
		{
			{
				BBDEBUGDECL_LOCAL,
				"pSrcPixmap",
				":TPixmap",
				.var_address=&bbt_pSrcPixmap
			},
			{
				BBDEBUGDECL_LOCAL,
				"pBrightness",
				"f",
				.var_address=&bbt_pBrightness
			},
			{
				BBDEBUGDECL_LOCAL,
				"tmpDestPixmap",
				":TPixmap",
				.var_address=&bbt_tmpDestPixmap
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 618, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_tmpDestPixmap=(struct brl_pixmap_TPixmap_obj*)brl_pixmap_CreatePixmap(((struct brl_pixmap_TPixmap_obj*)bbNullObjectTest(bbt_pSrcPixmap))->_brl_pixmap_tpixmap_width ,((struct brl_pixmap_TPixmap_obj*)bbNullObjectTest(bbt_pSrcPixmap))->_brl_pixmap_tpixmap_height ,((struct brl_pixmap_TPixmap_obj*)bbNullObjectTest(bbt_pSrcPixmap))->_brl_pixmap_tpixmap_format ,4);
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 619, 0};
	bbOnDebugEnterStm(&__stmt_1);
	{
		BBINT bbt_y=0;
		BBINT bbt_=((struct brl_pixmap_TPixmap_obj*)bbNullObjectTest(bbt_pSrcPixmap))->_brl_pixmap_tpixmap_height ;
		for(;(bbt_y<bbt_);bbt_y=(bbt_y+1)){
			struct BBDebugScope_1 __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					{
						BBDEBUGDECL_LOCAL,
						"y",
						"i",
						.var_address=&bbt_y
					},
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 620, 0};
			bbOnDebugEnterStm(&__stmt_0);
			{
				BBINT bbt_x=0;
				BBINT bbt_2=((struct brl_pixmap_TPixmap_obj*)bbNullObjectTest(bbt_pSrcPixmap))->_brl_pixmap_tpixmap_width ;
				for(;(bbt_x<bbt_2);bbt_x=(bbt_x+1)){
					struct BBDebugScope_1 __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
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
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 621, 0};
					bbOnDebugEnterStm(&__stmt_0);
					brl_pixmap_WritePixel((struct brl_pixmap_TPixmap_obj*)bbt_tmpDestPixmap,bbt_x,bbt_y,maxgui_proxygadgets_splitter_TSplitter_BrightenPixel_i_if(brl_pixmap_ReadPixel((struct brl_pixmap_TPixmap_obj*)bbt_pSrcPixmap,bbt_x,bbt_y),bbt_pBrightness));
					bbOnDebugLeaveScope();
				}
			}
			bbOnDebugLeaveScope();
		}
	}
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 624, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbOnDebugLeaveScope();
	return (struct brl_pixmap_TPixmap_obj*)bbt_tmpDestPixmap;
}
BBINT maxgui_proxygadgets_splitter_TSplitter_BrightenPixel_i_if(BBINT bbt_pARGB,BBFLOAT bbt_pBrightness){
	struct maxgui_proxygadgets_splitter_TColorHSV_obj* bbt_tmpHSV=(struct maxgui_proxygadgets_splitter_TColorHSV_obj*)&bbNullObject;
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"BrightenPixel",
		{
			{
				BBDEBUGDECL_LOCAL,
				"pARGB",
				"i",
				.var_address=&bbt_pARGB
			},
			{
				BBDEBUGDECL_LOCAL,
				"pBrightness",
				"f",
				.var_address=&bbt_pBrightness
			},
			{
				BBDEBUGDECL_LOCAL,
				"tmpHSV",
				":TColorHSV",
				.var_address=&bbt_tmpHSV
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 628, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_tmpHSV=(struct maxgui_proxygadgets_splitter_TColorHSV_obj*)((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbObjectAtomicNew((BBClass *)&maxgui_proxygadgets_splitter_TColorHSV)))->clas->f_fromARGB_TTColorHSV_i(bbt_pARGB);
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 629, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbNullObjectTest(bbt_tmpHSV))->_maxgui_proxygadgets_splitter_tcolorhsv_v =brl_blitz_Min3((((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbNullObjectTest(bbt_tmpHSV))->_maxgui_proxygadgets_splitter_tcolorhsv_v *bbt_pBrightness),1.00000000f);
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 630, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbOnDebugLeaveScope();
	return ((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbNullObjectTest(bbt_tmpHSV))->clas->m_toARGB((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbt_tmpHSV);
}
BBINT maxgui_proxygadgets_splitter_TSplitter_WhitenPixel_i_if(BBINT bbt_pARGB,BBFLOAT bbt_pWhiteness){
	struct maxgui_proxygadgets_splitter_TColorHSV_obj* bbt_tmpHSV=(struct maxgui_proxygadgets_splitter_TColorHSV_obj*)&bbNullObject;
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"WhitenPixel",
		{
			{
				BBDEBUGDECL_LOCAL,
				"pARGB",
				"i",
				.var_address=&bbt_pARGB
			},
			{
				BBDEBUGDECL_LOCAL,
				"pWhiteness",
				"f",
				.var_address=&bbt_pWhiteness
			},
			{
				BBDEBUGDECL_LOCAL,
				"tmpHSV",
				":TColorHSV",
				.var_address=&bbt_tmpHSV
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 634, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_tmpHSV=(struct maxgui_proxygadgets_splitter_TColorHSV_obj*)((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbObjectAtomicNew((BBClass *)&maxgui_proxygadgets_splitter_TColorHSV)))->clas->f_fromARGB_TTColorHSV_i(bbt_pARGB);
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 635, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbNullObjectTest(bbt_tmpHSV))->_maxgui_proxygadgets_splitter_tcolorhsv_s =brl_blitz_Min3((((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbNullObjectTest(bbt_tmpHSV))->_maxgui_proxygadgets_splitter_tcolorhsv_s *bbt_pWhiteness),1.00000000f);
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 636, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbOnDebugLeaveScope();
	return ((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbNullObjectTest(bbt_tmpHSV))->clas->m_toARGB((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbt_tmpHSV);
}
struct brl_pixmap_TPixmap_obj* maxgui_proxygadgets_splitter_TSplitter_MakeColourHandlePixmap_TTPixmap_iiii(BBINT bbt_pRed,BBINT bbt_pGreen,BBINT bbt_pBlue,BBINT bbt_pWidth){
	struct brl_pixmap_TPixmap_obj* bbt_tmpPixmap=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	BBINT bbt_tmpPixel=0;
	struct BBDebugScope_6 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"MakeColourHandlePixmap",
		{
			{
				BBDEBUGDECL_LOCAL,
				"pRed",
				"i",
				.var_address=&bbt_pRed
			},
			{
				BBDEBUGDECL_LOCAL,
				"pGreen",
				"i",
				.var_address=&bbt_pGreen
			},
			{
				BBDEBUGDECL_LOCAL,
				"pBlue",
				"i",
				.var_address=&bbt_pBlue
			},
			{
				BBDEBUGDECL_LOCAL,
				"pWidth",
				"i",
				.var_address=&bbt_pWidth
			},
			{
				BBDEBUGDECL_LOCAL,
				"tmpPixmap",
				":TPixmap",
				.var_address=&bbt_tmpPixmap
			},
			{
				BBDEBUGDECL_LOCAL,
				"tmpPixel",
				"i",
				.var_address=&bbt_tmpPixel
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 640, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_tmpPixmap=(struct brl_pixmap_TPixmap_obj*)brl_pixmap_CreatePixmap(1,bbt_pWidth,4,4);
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 641, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_tmpPixel=((unsigned int)(((unsigned int)((bbt_pRed<<16))|(bbt_pGreen<<8)))|bbt_pBlue);
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 642, 0};
	bbOnDebugEnterStm(&__stmt_2);
	{
		BBINT bbt_i=0;
		BBINT bbt_=(bbt_pWidth/2);
		for(;(bbt_i<=bbt_);bbt_i=(bbt_i+1)){
			BBINT bbt_tmpCalculatedPixel=0;
			struct BBDebugScope_2 __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					{
						BBDEBUGDECL_LOCAL,
						"i",
						"i",
						.var_address=&bbt_i
					},
					{
						BBDEBUGDECL_LOCAL,
						"tmpCalculatedPixel",
						"i",
						.var_address=&bbt_tmpCalculatedPixel
					},
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 643, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_tmpCalculatedPixel=maxgui_proxygadgets_splitter_TSplitter_BrightenPixel_i_if(bbt_tmpPixel,((BBFLOAT)bbFloatPow(1.05, ((BBDOUBLE)bbt_i))));
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 644, 0};
			bbOnDebugEnterStm(&__stmt_1);
			brl_pixmap_WritePixel((struct brl_pixmap_TPixmap_obj*)bbt_tmpPixmap,0,bbt_i,bbt_tmpCalculatedPixel);
			struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 645, 0};
			bbOnDebugEnterStm(&__stmt_2);
			brl_pixmap_WritePixel((struct brl_pixmap_TPixmap_obj*)bbt_tmpPixmap,0,((bbt_pWidth-1)-bbt_i),bbt_tmpCalculatedPixel);
			bbOnDebugLeaveScope();
		}
	}
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 647, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbOnDebugLeaveScope();
	return (struct brl_pixmap_TPixmap_obj*)bbt_tmpPixmap;
}
BBARRAY maxgui_proxygadgets_splitter_TSplitter_intSideToPanelMapping;
BBARRAY maxgui_proxygadgets_splitter_TSplitter_intOrientationLocks;
struct BBDebugScope_55 maxgui_proxygadgets_splitter_TSplitter_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TSplitter",
	{
		{
			BBDEBUGDECL_CONST,
			"JUMP",
			"i",
			.const_value=&_s1
		},
		{
			BBDEBUGDECL_CONST,
			"SPLITSIDE_LEFT",
			"i",
			.const_value=&_s2
		},
		{
			BBDEBUGDECL_CONST,
			"SPLITSIDE_RIGHT",
			"i",
			.const_value=&_s3
		},
		{
			BBDEBUGDECL_CONST,
			"SPLITSIDE_TOP",
			"i",
			.const_value=&_s2
		},
		{
			BBDEBUGDECL_CONST,
			"SPLITSIDE_BOTTOM",
			"i",
			.const_value=&_s3
		},
		{
			BBDEBUGDECL_FIELD,
			"strToggleTooltip",
			"$",
			.field_offset=offsetof(struct maxgui_proxygadgets_splitter_TSplitter_obj,_maxgui_proxygadgets_splitter_tsplitter_strtoggletooltip)
		},
		{
			BBDEBUGDECL_FIELD,
			"intOrientation",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_splitter_TSplitter_obj,_maxgui_proxygadgets_splitter_tsplitter_intorientation)
		},
		{
			BBDEBUGDECL_FIELD,
			"intMinPanelSpace",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_splitter_TSplitter_obj,_maxgui_proxygadgets_splitter_tsplitter_intminpanelspace)
		},
		{
			BBDEBUGDECL_FIELD,
			"intSavePanelSpace",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_splitter_TSplitter_obj,_maxgui_proxygadgets_splitter_tsplitter_intsavepanelspace)
		},
		{
			BBDEBUGDECL_FIELD,
			"intBehavior",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_splitter_TSplitter_obj,_maxgui_proxygadgets_splitter_tsplitter_intbehavior)
		},
		{
			BBDEBUGDECL_FIELD,
			"intGutterSize",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_splitter_TSplitter_obj,_maxgui_proxygadgets_splitter_tsplitter_intguttersize)
		},
		{
			BBDEBUGDECL_FIELD,
			"intPanelSpace",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_splitter_TSplitter_obj,_maxgui_proxygadgets_splitter_tsplitter_intpanelspace)
		},
		{
			BBDEBUGDECL_FIELD,
			"intMouseDown",
			"[]i",
			.field_offset=offsetof(struct maxgui_proxygadgets_splitter_TSplitter_obj,_maxgui_proxygadgets_splitter_tsplitter_intmousedown)
		},
		{
			BBDEBUGDECL_FIELD,
			"intHasMoved",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_splitter_TSplitter_obj,_maxgui_proxygadgets_splitter_tsplitter_inthasmoved)
		},
		{
			BBDEBUGDECL_FIELD,
			"intShouldUpdate",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_splitter_TSplitter_obj,_maxgui_proxygadgets_splitter_tsplitter_intshouldupdate)
		},
		{
			BBDEBUGDECL_FIELD,
			"pnlPanes",
			"[]:TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_splitter_TSplitter_obj,_maxgui_proxygadgets_splitter_tsplitter_pnlpanes)
		},
		{
			BBDEBUGDECL_FIELD,
			"pnlSplitHandle",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_splitter_TSplitter_obj,_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle)
		},
		{
			BBDEBUGDECL_FIELD,
			"divSplitHandle1",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_splitter_TSplitter_obj,_maxgui_proxygadgets_splitter_tsplitter_divsplithandle1)
		},
		{
			BBDEBUGDECL_FIELD,
			"divSplitHandle2",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_splitter_TSplitter_obj,_maxgui_proxygadgets_splitter_tsplitter_divsplithandle2)
		},
		{
			BBDEBUGDECL_FIELD,
			"gadParent",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_splitter_TSplitter_obj,_maxgui_proxygadgets_splitter_tsplitter_gadparent)
		},
		{
			BBDEBUGDECL_FIELD,
			"pixHandle",
			"[]:TPixmap",
			.field_offset=offsetof(struct maxgui_proxygadgets_splitter_TSplitter_obj,_maxgui_proxygadgets_splitter_tsplitter_pixhandle)
		},
		{
			BBDEBUGDECL_GLOBAL,
			"intOrientationLocks",
			"[][][]i",
			.var_address=(void*)&maxgui_proxygadgets_splitter_TSplitter_intOrientationLocks
		},
		{
			BBDEBUGDECL_GLOBAL,
			"intSideToPanelMapping",
			"[][]i",
			.var_address=(void*)&maxgui_proxygadgets_splitter_TSplitter_intSideToPanelMapping
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TSplitter_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Create",
			"(i,i,i,i,:TGadget,i,i):TSplitter",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TSplitter_Create_iiiiTTGadgetii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetOrientation",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TSplitter_GetOrientation
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetOrientation",
			"(i)",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TSplitter_SetOrientation_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetBehavior",
			"(i)",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TSplitter_SetBehavior_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetBehavior",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TSplitter_GetBehavior
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetPanel",
			"(i):TGadget",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TSplitter_GetPanel_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetPanelSpace",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TSplitter_GetPanelSpace_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetPanelSpace",
			"(i,i)",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TSplitter_SetPanelSpace_ii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"CleanUp",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TSplitter_CleanUp
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetTooltip",
			"($)i",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TSplitter_SetTooltip_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetTooltip",
			"()$",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TSplitter_GetTooltip
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetTextColor",
			"(i,i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TSplitter_SetTextColor_iii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetColor",
			"(i,i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TSplitter_SetColor_iii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetSensitivity",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TSplitter_SetSensitivity_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetSensitivity",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TSplitter_GetSensitivity
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ReapplyLocks",
			"()",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TSplitter_ReapplyLocks
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetSideSpace",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TSplitter_GetSideSpace_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"DrawHandle",
			"()",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TSplitter_DrawHandle
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"DrawPanes",
			"()",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TSplitter_DrawPanes
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ChangeOrientation",
			"(i)",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TSplitter_ChangeOrientation_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Toggle",
			"()",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TSplitter_Toggle
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"eventHook",
			"(i,:Object):Object",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TSplitter_eventHook_iTObject
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"ShowNormalPointer",
			"()",
			.var_address=(void*)&maxgui_proxygadgets_splitter_TSplitter_ShowNormalPointer_v
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ShowActivePointer",
			"()",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TSplitter_ShowActivePointer
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ShowDragPointer",
			"()",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TSplitter_ShowDragPointer
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"eventHandler",
			"(i,:Object,:Object):Object",
			.var_address=(void*)&maxgui_proxygadgets_splitter_TSplitter_eventHandler_TObject_iTObjectTObject
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"RotatePixmap",
			"(:TPixmap):TPixmap",
			.var_address=(void*)&maxgui_proxygadgets_splitter_TSplitter_RotatePixmap_TTPixmap_TTPixmap
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"BrightenPixmap",
			"(:TPixmap,f):TPixmap",
			.var_address=(void*)&maxgui_proxygadgets_splitter_TSplitter_BrightenPixmap_TTPixmap_TTPixmapf
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"BrightenPixel",
			"(i,f)i",
			.var_address=(void*)&maxgui_proxygadgets_splitter_TSplitter_BrightenPixel_i_if
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"WhitenPixel",
			"(i,f)i",
			.var_address=(void*)&maxgui_proxygadgets_splitter_TSplitter_WhitenPixel_i_if
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"MakeColourHandlePixmap",
			"(i,i,i,i):TPixmap",
			.var_address=(void*)&maxgui_proxygadgets_splitter_TSplitter_MakeColourHandlePixmap_TTPixmap_iiii
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_maxgui_proxygadgets_splitter_TSplitter maxgui_proxygadgets_splitter_TSplitter={
	&maxgui_maxgui_gadget_TProxyGadget,
	bbObjectFree,
	(BBDebugScope*)&maxgui_proxygadgets_splitter_TSplitter_scope,
	sizeof(struct maxgui_proxygadgets_splitter_TSplitter_obj),
	(void (*)(BBOBJECT))_maxgui_proxygadgets_splitter_TSplitter_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct maxgui_proxygadgets_splitter_TSplitter_obj,_maxgui_proxygadgets_splitter_tsplitter_pixhandle) - sizeof(void*) + sizeof(BBARRAY)
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
	,_maxgui_proxygadgets_splitter_TSplitter_CleanUp
	,_maxgui_maxgui_gadget_TProxyGadget_Free
	,_maxgui_maxgui_gadget_TProxyGadget_Rethink
	,_maxgui_maxgui_gadget_TProxyGadget_ClientWidth
	,_maxgui_maxgui_gadget_TProxyGadget_ClientHeight
	,_maxgui_maxgui_gadget_TProxyGadget_Activate_i
	,_maxgui_maxgui_gadget_TProxyGadget_State
	,_maxgui_maxgui_gadget_TProxyGadget_SetText_S
	,_maxgui_maxgui_gadget_TProxyGadget_GetText
	,_maxgui_maxgui_gadget_TProxyGadget_SetFont_TTGuiFont
	,_maxgui_proxygadgets_splitter_TSplitter_SetColor_iii
	,_maxgui_maxgui_gadget_TProxyGadget_RemoveColor
	,_maxgui_maxgui_gadget_TProxyGadget_SetAlpha_f
	,_maxgui_proxygadgets_splitter_TSplitter_SetTextColor_iii
	,_maxgui_proxygadgets_splitter_TSplitter_SetTooltip_S
	,_maxgui_proxygadgets_splitter_TSplitter_GetTooltip
	,_maxgui_maxgui_gadget_TProxyGadget_SetPixmap_TTPixmapi
	,_maxgui_maxgui_gadget_TProxyGadget_SetIconStrip_TTIconStrip
	,_maxgui_maxgui_gadget_TProxyGadget_SetShow_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetEnabled_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetSelected_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetHotKey_ii
	,_maxgui_proxygadgets_splitter_TSplitter_SetSensitivity_i
	,_maxgui_proxygadgets_splitter_TSplitter_GetSensitivity
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
	,_maxgui_proxygadgets_splitter_TSplitter_Create_iiiiTTGadgetii
	,_maxgui_proxygadgets_splitter_TSplitter_GetOrientation
	,_maxgui_proxygadgets_splitter_TSplitter_SetOrientation_i
	,_maxgui_proxygadgets_splitter_TSplitter_SetBehavior_i
	,_maxgui_proxygadgets_splitter_TSplitter_GetBehavior
	,_maxgui_proxygadgets_splitter_TSplitter_GetPanel_i
	,_maxgui_proxygadgets_splitter_TSplitter_GetPanelSpace_i
	,_maxgui_proxygadgets_splitter_TSplitter_SetPanelSpace_ii
	,_maxgui_proxygadgets_splitter_TSplitter_ReapplyLocks
	,_maxgui_proxygadgets_splitter_TSplitter_GetSideSpace_i
	,_maxgui_proxygadgets_splitter_TSplitter_DrawHandle
	,_maxgui_proxygadgets_splitter_TSplitter_DrawPanes
	,_maxgui_proxygadgets_splitter_TSplitter_ChangeOrientation_i
	,_maxgui_proxygadgets_splitter_TSplitter_Toggle
	,_maxgui_proxygadgets_splitter_TSplitter_eventHook_iTObject
	,maxgui_proxygadgets_splitter_TSplitter_ShowNormalPointer_v
	,_maxgui_proxygadgets_splitter_TSplitter_ShowActivePointer
	,_maxgui_proxygadgets_splitter_TSplitter_ShowDragPointer
	,maxgui_proxygadgets_splitter_TSplitter_eventHandler_TObject_iTObjectTObject
	,maxgui_proxygadgets_splitter_TSplitter_RotatePixmap_TTPixmap_TTPixmap
	,maxgui_proxygadgets_splitter_TSplitter_BrightenPixmap_TTPixmap_TTPixmapf
	,maxgui_proxygadgets_splitter_TSplitter_BrightenPixel_i_if
	,maxgui_proxygadgets_splitter_TSplitter_WhitenPixel_i_if
	,maxgui_proxygadgets_splitter_TSplitter_MakeColourHandlePixmap_TTPixmap_iiii
};

void _maxgui_proxygadgets_splitter_TColor_New(struct maxgui_proxygadgets_splitter_TColor_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &maxgui_proxygadgets_splitter_TColor;
}
BBINT _maxgui_proxygadgets_splitter_TColor_toARGB(struct maxgui_proxygadgets_splitter_TColor_obj* o){
	brl_blitz_NullMethodError();
	return 0;
}
struct BBDebugScope_1 maxgui_proxygadgets_splitter_TColor_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TColor",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TColor_New
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_maxgui_proxygadgets_splitter_TColor maxgui_proxygadgets_splitter_TColor={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&maxgui_proxygadgets_splitter_TColor_scope,
	sizeof(struct maxgui_proxygadgets_splitter_TColor_obj),
	(void (*)(BBOBJECT))_maxgui_proxygadgets_splitter_TColor_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,_maxgui_proxygadgets_splitter_TColor_toARGB
};

void _maxgui_proxygadgets_splitter_TColorHSV_New(struct maxgui_proxygadgets_splitter_TColorHSV_obj* o) {
	_maxgui_proxygadgets_splitter_TColor_New((struct maxgui_proxygadgets_splitter_TColor_obj*)o);
	o->clas = &maxgui_proxygadgets_splitter_TColorHSV;
	((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tcolorhsv_h = .00000000f;
	((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tcolorhsv_s = .00000000f;
	((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tcolorhsv_v = .00000000f;
	((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tcolorhsv_a = 1.0f;
}
struct maxgui_proxygadgets_splitter_TColorRGB_obj* _maxgui_proxygadgets_splitter_TColorHSV_toRGB(struct maxgui_proxygadgets_splitter_TColorHSV_obj* o){
	((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbNullObjectTest(o));
	BBFLOAT bbt_temph=0;
	BBFLOAT bbt_temps=0;
	BBFLOAT bbt_tempv=0;
	struct maxgui_proxygadgets_splitter_TColorRGB_obj* bbt_rgb=(struct maxgui_proxygadgets_splitter_TColorRGB_obj*)&bbNullObject;
	struct BBDebugScope_5 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"toRGB",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TColorHSV",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"temph",
				"f",
				.var_address=&bbt_temph
			},
			{
				BBDEBUGDECL_LOCAL,
				"temps",
				"f",
				.var_address=&bbt_temps
			},
			{
				BBDEBUGDECL_LOCAL,
				"tempv",
				"f",
				.var_address=&bbt_tempv
			},
			{
				BBDEBUGDECL_LOCAL,
				"rgb",
				":TColorRGB",
				.var_address=&bbt_rgb
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 667, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_temph=((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tcolorhsv_h ;
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 668, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_temps=((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tcolorhsv_s ;
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 669, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_tempv=((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tcolorhsv_v ;
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 671, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_rgb=(struct maxgui_proxygadgets_splitter_TColorRGB_obj*)(struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbObjectAtomicNew((BBClass *)&maxgui_proxygadgets_splitter_TColorRGB);
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 673, 0};
	bbOnDebugEnterStm(&__stmt_4);
	if((bbt_temph>=360.0f) || (bbt_temph<0.0f)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 673, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_temph=0.0f;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 675, 0};
	bbOnDebugEnterStm(&__stmt_5);
	if(bbt_temps==0.000000000f){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 676, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbNullObjectTest(bbt_rgb))->_maxgui_proxygadgets_splitter_tcolorrgb_r =((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tcolorhsv_v ;
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 677, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbNullObjectTest(bbt_rgb))->_maxgui_proxygadgets_splitter_tcolorrgb_g =((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tcolorhsv_v ;
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 678, 0};
		bbOnDebugEnterStm(&__stmt_2);
		((struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbNullObjectTest(bbt_rgb))->_maxgui_proxygadgets_splitter_tcolorrgb_b =((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tcolorhsv_v ;
		bbOnDebugLeaveScope();
	}else{
		BBINT bbt_i=0;
		BBFLOAT bbt_f=0;
		BBFLOAT bbt_p=0;
		BBFLOAT bbt_q=0;
		BBFLOAT bbt_t=0;
		struct BBDebugScope_5 __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_LOCAL,
					"i",
					"i",
					.var_address=&bbt_i
				},
				{
					BBDEBUGDECL_LOCAL,
					"f",
					"f",
					.var_address=&bbt_f
				},
				{
					BBDEBUGDECL_LOCAL,
					"p",
					"f",
					.var_address=&bbt_p
				},
				{
					BBDEBUGDECL_LOCAL,
					"q",
					"f",
					.var_address=&bbt_q
				},
				{
					BBDEBUGDECL_LOCAL,
					"t",
					"f",
					.var_address=&bbt_t
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 680, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_temph=(bbt_temph/60.0f);
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 682, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_i=((BBINT)bbFloor((BBDOUBLE)bbt_temph));
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 683, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_f=(bbt_temph-((BBFLOAT)bbt_i));
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 684, 0};
		bbOnDebugEnterStm(&__stmt_3);
		bbt_p=(bbt_tempv*(1.00000000f-bbt_temps));
		struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 685, 0};
		bbOnDebugEnterStm(&__stmt_4);
		bbt_q=(bbt_tempv*(1.00000000f-(bbt_temps*bbt_f)));
		struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 686, 0};
		bbOnDebugEnterStm(&__stmt_5);
		bbt_t=(bbt_tempv*(1.00000000f-(bbt_temps*(1.00000000f-bbt_f))));
		struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 688, 0};
		bbOnDebugEnterStm(&__stmt_6);
		BBINT bbt_=bbt_i;
		struct BBDebugStm __stmt_7 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 689, 0};
		bbOnDebugEnterStm(&__stmt_7);
		if(bbt_==0){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 690, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbNullObjectTest(bbt_rgb))->_maxgui_proxygadgets_splitter_tcolorrgb_r =((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tcolorhsv_v ;
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 691, 0};
			bbOnDebugEnterStm(&__stmt_1);
			((struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbNullObjectTest(bbt_rgb))->_maxgui_proxygadgets_splitter_tcolorrgb_g =bbt_t;
			struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 692, 0};
			bbOnDebugEnterStm(&__stmt_2);
			((struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbNullObjectTest(bbt_rgb))->_maxgui_proxygadgets_splitter_tcolorrgb_b =bbt_p;
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
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 693, 0};
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
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 694, 0};
				bbOnDebugEnterStm(&__stmt_0);
				((struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbNullObjectTest(bbt_rgb))->_maxgui_proxygadgets_splitter_tcolorrgb_r =bbt_q;
				struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 695, 0};
				bbOnDebugEnterStm(&__stmt_1);
				((struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbNullObjectTest(bbt_rgb))->_maxgui_proxygadgets_splitter_tcolorrgb_g =((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tcolorhsv_v ;
				struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 696, 0};
				bbOnDebugEnterStm(&__stmt_2);
				((struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbNullObjectTest(bbt_rgb))->_maxgui_proxygadgets_splitter_tcolorrgb_b =bbt_p;
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
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 697, 0};
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
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 698, 0};
					bbOnDebugEnterStm(&__stmt_0);
					((struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbNullObjectTest(bbt_rgb))->_maxgui_proxygadgets_splitter_tcolorrgb_r =bbt_p;
					struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 699, 0};
					bbOnDebugEnterStm(&__stmt_1);
					((struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbNullObjectTest(bbt_rgb))->_maxgui_proxygadgets_splitter_tcolorrgb_g =((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tcolorhsv_v ;
					struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 700, 0};
					bbOnDebugEnterStm(&__stmt_2);
					((struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbNullObjectTest(bbt_rgb))->_maxgui_proxygadgets_splitter_tcolorrgb_b =bbt_t;
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
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 701, 0};
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
						struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 702, 0};
						bbOnDebugEnterStm(&__stmt_0);
						((struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbNullObjectTest(bbt_rgb))->_maxgui_proxygadgets_splitter_tcolorrgb_r =bbt_p;
						struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 703, 0};
						bbOnDebugEnterStm(&__stmt_1);
						((struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbNullObjectTest(bbt_rgb))->_maxgui_proxygadgets_splitter_tcolorrgb_g =bbt_q;
						struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 704, 0};
						bbOnDebugEnterStm(&__stmt_2);
						((struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbNullObjectTest(bbt_rgb))->_maxgui_proxygadgets_splitter_tcolorrgb_b =((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tcolorhsv_v ;
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
						struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 705, 0};
						bbOnDebugEnterStm(&__stmt_0);
						if(bbt_==4){
							struct BBDebugScope __scope = {
								BBDEBUGSCOPE_LOCALBLOCK,
								0,
								{
									BBDEBUGDECL_END 
								}
							};
							bbOnDebugEnterScope(&__scope);
							struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 706, 0};
							bbOnDebugEnterStm(&__stmt_0);
							((struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbNullObjectTest(bbt_rgb))->_maxgui_proxygadgets_splitter_tcolorrgb_r =bbt_t;
							struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 707, 0};
							bbOnDebugEnterStm(&__stmt_1);
							((struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbNullObjectTest(bbt_rgb))->_maxgui_proxygadgets_splitter_tcolorrgb_g =bbt_p;
							struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 708, 0};
							bbOnDebugEnterStm(&__stmt_2);
							((struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbNullObjectTest(bbt_rgb))->_maxgui_proxygadgets_splitter_tcolorrgb_b =((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tcolorhsv_v ;
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
							struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 710, 0};
							bbOnDebugEnterStm(&__stmt_0);
							((struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbNullObjectTest(bbt_rgb))->_maxgui_proxygadgets_splitter_tcolorrgb_r =((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tcolorhsv_v ;
							struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 711, 0};
							bbOnDebugEnterStm(&__stmt_1);
							((struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbNullObjectTest(bbt_rgb))->_maxgui_proxygadgets_splitter_tcolorrgb_g =bbt_p;
							struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 712, 0};
							bbOnDebugEnterStm(&__stmt_2);
							((struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbNullObjectTest(bbt_rgb))->_maxgui_proxygadgets_splitter_tcolorrgb_b =bbt_q;
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
	struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 716, 0};
	bbOnDebugEnterStm(&__stmt_6);
	((struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbNullObjectTest(bbt_rgb))->_maxgui_proxygadgets_splitter_tcolorrgb_a =((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tcolorhsv_a ;
	struct BBDebugStm __stmt_7 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 718, 0};
	bbOnDebugEnterStm(&__stmt_7);
	bbOnDebugLeaveScope();
	return (struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbt_rgb;
}
struct maxgui_proxygadgets_splitter_TColorHSV_obj* maxgui_proxygadgets_splitter_TColorHSV_fromARGB_TTColorHSV_i(BBINT bbt_argb){
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"fromARGB",
		{
			{
				BBDEBUGDECL_LOCAL,
				"argb",
				"i",
				.var_address=&bbt_argb
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 723, 0};
	bbOnDebugEnterStm(&__stmt_0);
	struct maxgui_proxygadgets_splitter_TColorRGB_obj* bbt_;
	bbOnDebugLeaveScope();
	return (struct maxgui_proxygadgets_splitter_TColorHSV_obj*)(((struct maxgui_proxygadgets_splitter_TColorRGB_obj*)((struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbNullObjectTest((bbt_ = maxgui_proxygadgets_splitter_TColorRGB_fromARGB_TTColorRGB_ii(bbt_argb,1)))))->clas)->m_toHSV((struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbt_);
}
BBINT _maxgui_proxygadgets_splitter_TColorHSV_toARGB(struct maxgui_proxygadgets_splitter_TColorHSV_obj* o){
	((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"toARGB",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TColorHSV",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 727, 0};
	bbOnDebugEnterStm(&__stmt_0);
	struct maxgui_proxygadgets_splitter_TColorRGB_obj* bbt_;
	((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbNullObjectTest(o));
	bbOnDebugLeaveScope();
	return ((struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbNullObjectTest((bbt_ = ((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)o)->clas->m_toRGB((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)o))))->clas->m_toARGB((struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbt_);
}
struct BBDebugScope_8 maxgui_proxygadgets_splitter_TColorHSV_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TColorHSV",
	{
		{
			BBDEBUGDECL_FIELD,
			"h",
			"f",
			.field_offset=offsetof(struct maxgui_proxygadgets_splitter_TColorHSV_obj,_maxgui_proxygadgets_splitter_tcolorhsv_h)
		},
		{
			BBDEBUGDECL_FIELD,
			"s",
			"f",
			.field_offset=offsetof(struct maxgui_proxygadgets_splitter_TColorHSV_obj,_maxgui_proxygadgets_splitter_tcolorhsv_s)
		},
		{
			BBDEBUGDECL_FIELD,
			"v",
			"f",
			.field_offset=offsetof(struct maxgui_proxygadgets_splitter_TColorHSV_obj,_maxgui_proxygadgets_splitter_tcolorhsv_v)
		},
		{
			BBDEBUGDECL_FIELD,
			"a",
			"f",
			.field_offset=offsetof(struct maxgui_proxygadgets_splitter_TColorHSV_obj,_maxgui_proxygadgets_splitter_tcolorhsv_a)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TColorHSV_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"toRGB",
			"():TColorRGB",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TColorHSV_toRGB
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"fromARGB",
			"(i):TColorHSV",
			.var_address=(void*)&maxgui_proxygadgets_splitter_TColorHSV_fromARGB_TTColorHSV_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"toARGB",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TColorHSV_toARGB
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_maxgui_proxygadgets_splitter_TColorHSV maxgui_proxygadgets_splitter_TColorHSV={
	&maxgui_proxygadgets_splitter_TColor,
	bbObjectFree,
	(BBDebugScope*)&maxgui_proxygadgets_splitter_TColorHSV_scope,
	sizeof(struct maxgui_proxygadgets_splitter_TColorHSV_obj),
	(void (*)(BBOBJECT))_maxgui_proxygadgets_splitter_TColorHSV_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct maxgui_proxygadgets_splitter_TColorHSV_obj,_maxgui_proxygadgets_splitter_tcolorhsv_a) - sizeof(void*) + sizeof(BBFLOAT)
	,_maxgui_proxygadgets_splitter_TColorHSV_toARGB
	,_maxgui_proxygadgets_splitter_TColorHSV_toRGB
	,maxgui_proxygadgets_splitter_TColorHSV_fromARGB_TTColorHSV_i
};

void _maxgui_proxygadgets_splitter_TColorRGB_New(struct maxgui_proxygadgets_splitter_TColorRGB_obj* o) {
	_maxgui_proxygadgets_splitter_TColor_New((struct maxgui_proxygadgets_splitter_TColor_obj*)o);
	o->clas = &maxgui_proxygadgets_splitter_TColorRGB;
	((struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tcolorrgb_r = .00000000f;
	((struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tcolorrgb_g = .00000000f;
	((struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tcolorrgb_b = .00000000f;
	((struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tcolorrgb_a = 1.0f;
}
struct maxgui_proxygadgets_splitter_TColorHSV_obj* _maxgui_proxygadgets_splitter_TColorRGB_toHSV(struct maxgui_proxygadgets_splitter_TColorRGB_obj* o){
	((struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbNullObjectTest(o));
	BBFLOAT bbt_tempr=0;
	BBFLOAT bbt_tempg=0;
	BBFLOAT bbt_tempb=0;
	BBFLOAT bbt_minVal=0;
	BBFLOAT bbt_maxVal=0;
	BBFLOAT bbt_diff=0;
	struct maxgui_proxygadgets_splitter_TColorHSV_obj* bbt_hsv=(struct maxgui_proxygadgets_splitter_TColorHSV_obj*)&bbNullObject;
	struct BBDebugScope_8 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"toHSV",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TColorRGB",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"tempr",
				"f",
				.var_address=&bbt_tempr
			},
			{
				BBDEBUGDECL_LOCAL,
				"tempg",
				"f",
				.var_address=&bbt_tempg
			},
			{
				BBDEBUGDECL_LOCAL,
				"tempb",
				"f",
				.var_address=&bbt_tempb
			},
			{
				BBDEBUGDECL_LOCAL,
				"minVal",
				"f",
				.var_address=&bbt_minVal
			},
			{
				BBDEBUGDECL_LOCAL,
				"maxVal",
				"f",
				.var_address=&bbt_maxVal
			},
			{
				BBDEBUGDECL_LOCAL,
				"diff",
				"f",
				.var_address=&bbt_diff
			},
			{
				BBDEBUGDECL_LOCAL,
				"hsv",
				":TColorHSV",
				.var_address=&bbt_hsv
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 738, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_tempr=brl_blitz_Min3(1.0f,brl_blitz_Max3(0.0f,((struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tcolorrgb_r ));
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 739, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_tempg=brl_blitz_Min3(1.0f,brl_blitz_Max3(0.0f,((struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tcolorrgb_g ));
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 740, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_tempb=brl_blitz_Min3(1.0f,brl_blitz_Max3(0.0f,((struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tcolorrgb_b ));
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 742, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_minVal=brl_blitz_Min3(brl_blitz_Min3(bbt_tempr,bbt_tempg),bbt_tempb);
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 743, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbt_maxVal=brl_blitz_Max3(brl_blitz_Max3(bbt_tempr,bbt_tempg),bbt_tempb);
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 745, 0};
	bbOnDebugEnterStm(&__stmt_5);
	bbt_diff=(bbt_maxVal-bbt_minVal);
	struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 747, 0};
	bbOnDebugEnterStm(&__stmt_6);
	bbt_hsv=(struct maxgui_proxygadgets_splitter_TColorHSV_obj*)(struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbObjectAtomicNew((BBClass *)&maxgui_proxygadgets_splitter_TColorHSV);
	struct BBDebugStm __stmt_7 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 748, 0};
	bbOnDebugEnterStm(&__stmt_7);
	((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbNullObjectTest(bbt_hsv))->_maxgui_proxygadgets_splitter_tcolorhsv_v =bbt_maxVal;
	struct BBDebugStm __stmt_8 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 750, 0};
	bbOnDebugEnterStm(&__stmt_8);
	if(bbt_maxVal==0.0f){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 751, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbNullObjectTest(bbt_hsv))->_maxgui_proxygadgets_splitter_tcolorhsv_s =0.0f;
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 752, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbNullObjectTest(bbt_hsv))->_maxgui_proxygadgets_splitter_tcolorhsv_h =0.0f;
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 754, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbNullObjectTest(bbt_hsv))->_maxgui_proxygadgets_splitter_tcolorhsv_s =(bbt_diff/bbt_maxVal);
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 756, 0};
		bbOnDebugEnterStm(&__stmt_1);
		if(bbt_tempr==bbt_maxVal){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 757, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbNullObjectTest(bbt_hsv))->_maxgui_proxygadgets_splitter_tcolorhsv_h =((bbt_tempg-bbt_tempb)/bbt_diff);
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
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 756, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if(bbt_tempg==bbt_maxVal){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 759, 0};
				bbOnDebugEnterStm(&__stmt_0);
				((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbNullObjectTest(bbt_hsv))->_maxgui_proxygadgets_splitter_tcolorhsv_h =(2.0f+((bbt_tempb-bbt_tempr)/bbt_diff));
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
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 761, 0};
				bbOnDebugEnterStm(&__stmt_0);
				((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbNullObjectTest(bbt_hsv))->_maxgui_proxygadgets_splitter_tcolorhsv_h =(4.0f+((bbt_tempr-bbt_tempg)/bbt_diff));
				bbOnDebugLeaveScope();
			}
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 764, 0};
		bbOnDebugEnterStm(&__stmt_2);
		((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbNullObjectTest(bbt_hsv))->_maxgui_proxygadgets_splitter_tcolorhsv_h =(((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbNullObjectTest(bbt_hsv))->_maxgui_proxygadgets_splitter_tcolorhsv_h *60.0f);
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 765, 0};
		bbOnDebugEnterStm(&__stmt_3);
		if(((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbNullObjectTest(bbt_hsv))->_maxgui_proxygadgets_splitter_tcolorhsv_h <0.000000000f){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 765, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbNullObjectTest(bbt_hsv))->_maxgui_proxygadgets_splitter_tcolorhsv_h =(((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbNullObjectTest(bbt_hsv))->_maxgui_proxygadgets_splitter_tcolorhsv_h +360.0f);
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_9 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 768, 0};
	bbOnDebugEnterStm(&__stmt_9);
	if(((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbNullObjectTest(bbt_hsv))->_maxgui_proxygadgets_splitter_tcolorhsv_h <0.0f){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 768, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbNullObjectTest(bbt_hsv))->_maxgui_proxygadgets_splitter_tcolorhsv_h =0.0f;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_10 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 769, 0};
	bbOnDebugEnterStm(&__stmt_10);
	if(((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbNullObjectTest(bbt_hsv))->_maxgui_proxygadgets_splitter_tcolorhsv_h >360.0f){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 769, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbNullObjectTest(bbt_hsv))->_maxgui_proxygadgets_splitter_tcolorhsv_h =0.0f;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_11 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 771, 0};
	bbOnDebugEnterStm(&__stmt_11);
	((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbNullObjectTest(bbt_hsv))->_maxgui_proxygadgets_splitter_tcolorhsv_a =((struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tcolorrgb_a ;
	struct BBDebugStm __stmt_12 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 773, 0};
	bbOnDebugEnterStm(&__stmt_12);
	bbOnDebugLeaveScope();
	return (struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbt_hsv;
}
struct maxgui_proxygadgets_splitter_TColorRGB_obj* maxgui_proxygadgets_splitter_TColorRGB_fromARGB_TTColorRGB_ii(BBINT bbt_argb,BBINT bbt_alpha){
	struct maxgui_proxygadgets_splitter_TColorRGB_obj* bbt_rgb=(struct maxgui_proxygadgets_splitter_TColorRGB_obj*)&bbNullObject;
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"fromARGB",
		{
			{
				BBDEBUGDECL_LOCAL,
				"argb",
				"i",
				.var_address=&bbt_argb
			},
			{
				BBDEBUGDECL_LOCAL,
				"alpha",
				"i",
				.var_address=&bbt_alpha
			},
			{
				BBDEBUGDECL_LOCAL,
				"rgb",
				":TColorRGB",
				.var_address=&bbt_rgb
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 779, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_rgb=(struct maxgui_proxygadgets_splitter_TColorRGB_obj*)(struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbObjectAtomicNew((BBClass *)&maxgui_proxygadgets_splitter_TColorRGB);
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 781, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(bbt_alpha!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 782, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbNullObjectTest(bbt_rgb))->_maxgui_proxygadgets_splitter_tcolorrgb_a =(((BBFLOAT)((unsigned int)(((unsigned int)(bbt_argb)>>24))&255))/255.0f);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 785, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbNullObjectTest(bbt_rgb))->_maxgui_proxygadgets_splitter_tcolorrgb_r =(((BBFLOAT)((unsigned int)(((unsigned int)(bbt_argb)>>16))&255))/255.0f);
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 786, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbNullObjectTest(bbt_rgb))->_maxgui_proxygadgets_splitter_tcolorrgb_g =(((BBFLOAT)((unsigned int)(((unsigned int)(bbt_argb)>>8))&255))/255.0f);
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 787, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbNullObjectTest(bbt_rgb))->_maxgui_proxygadgets_splitter_tcolorrgb_b =(((BBFLOAT)((unsigned int)(bbt_argb)&255))/255.0f);
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 789, 0};
	bbOnDebugEnterStm(&__stmt_5);
	bbOnDebugLeaveScope();
	return (struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbt_rgb;
}
struct maxgui_proxygadgets_splitter_TColorRGB_obj* maxgui_proxygadgets_splitter_TColorRGB_fromBGR_TTColorRGB_i(BBINT bbt_argb){
	struct maxgui_proxygadgets_splitter_TColorRGB_obj* bbt_rgb=(struct maxgui_proxygadgets_splitter_TColorRGB_obj*)&bbNullObject;
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"fromBGR",
		{
			{
				BBDEBUGDECL_LOCAL,
				"argb",
				"i",
				.var_address=&bbt_argb
			},
			{
				BBDEBUGDECL_LOCAL,
				"rgb",
				":TColorRGB",
				.var_address=&bbt_rgb
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 795, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_rgb=(struct maxgui_proxygadgets_splitter_TColorRGB_obj*)(struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbObjectAtomicNew((BBClass *)&maxgui_proxygadgets_splitter_TColorRGB);
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 797, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbNullObjectTest(bbt_rgb))->_maxgui_proxygadgets_splitter_tcolorrgb_r =(((BBFLOAT)((unsigned int)(bbt_argb)&255))/255.0f);
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 798, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbNullObjectTest(bbt_rgb))->_maxgui_proxygadgets_splitter_tcolorrgb_g =(((BBFLOAT)((unsigned int)(((unsigned int)(bbt_argb)>>8))&255))/255.0f);
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 799, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbNullObjectTest(bbt_rgb))->_maxgui_proxygadgets_splitter_tcolorrgb_b =(((BBFLOAT)((unsigned int)(((unsigned int)(bbt_argb)>>16))&255))/255.0f);
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 801, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbOnDebugLeaveScope();
	return (struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbt_rgb;
}
BBINT _maxgui_proxygadgets_splitter_TColorRGB_toARGB(struct maxgui_proxygadgets_splitter_TColorRGB_obj* o){
	((struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbNullObjectTest(o));
	BBINT bbt_tempr=0;
	BBINT bbt_tempg=0;
	BBINT bbt_tempb=0;
	BBINT bbt_tempa=0;
	struct BBDebugScope_5 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"toARGB",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TColorRGB",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"tempr",
				"i",
				.var_address=&bbt_tempr
			},
			{
				BBDEBUGDECL_LOCAL,
				"tempg",
				"i",
				.var_address=&bbt_tempg
			},
			{
				BBDEBUGDECL_LOCAL,
				"tempb",
				"i",
				.var_address=&bbt_tempb
			},
			{
				BBDEBUGDECL_LOCAL,
				"tempa",
				"i",
				.var_address=&bbt_tempa
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 807, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_tempr=brl_blitz_Min(255,brl_blitz_Max(0,((BBINT)(((struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tcolorrgb_r *255.000000f))));
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 808, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_tempg=brl_blitz_Min(255,brl_blitz_Max(0,((BBINT)(((struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tcolorrgb_g *255.000000f))));
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 809, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_tempb=brl_blitz_Min(255,brl_blitz_Max(0,((BBINT)(((struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tcolorrgb_b *255.000000f))));
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 810, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_tempa=brl_blitz_Min(255,brl_blitz_Max(0,((BBINT)(((struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_splitter_tcolorrgb_a *255.000000f))));
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 812, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbOnDebugLeaveScope();
	return ((unsigned int)(((unsigned int)(((unsigned int)((bbt_tempa<<24))|(bbt_tempr<<16)))|(bbt_tempg<<8)))|bbt_tempb);
}
struct BBDebugScope_9 maxgui_proxygadgets_splitter_TColorRGB_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TColorRGB",
	{
		{
			BBDEBUGDECL_FIELD,
			"r",
			"f",
			.field_offset=offsetof(struct maxgui_proxygadgets_splitter_TColorRGB_obj,_maxgui_proxygadgets_splitter_tcolorrgb_r)
		},
		{
			BBDEBUGDECL_FIELD,
			"g",
			"f",
			.field_offset=offsetof(struct maxgui_proxygadgets_splitter_TColorRGB_obj,_maxgui_proxygadgets_splitter_tcolorrgb_g)
		},
		{
			BBDEBUGDECL_FIELD,
			"b",
			"f",
			.field_offset=offsetof(struct maxgui_proxygadgets_splitter_TColorRGB_obj,_maxgui_proxygadgets_splitter_tcolorrgb_b)
		},
		{
			BBDEBUGDECL_FIELD,
			"a",
			"f",
			.field_offset=offsetof(struct maxgui_proxygadgets_splitter_TColorRGB_obj,_maxgui_proxygadgets_splitter_tcolorrgb_a)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TColorRGB_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"toHSV",
			"():TColorHSV",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TColorRGB_toHSV
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"fromARGB",
			"(i,i):TColorRGB",
			.var_address=(void*)&maxgui_proxygadgets_splitter_TColorRGB_fromARGB_TTColorRGB_ii
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"fromBGR",
			"(i):TColorRGB",
			.var_address=(void*)&maxgui_proxygadgets_splitter_TColorRGB_fromBGR_TTColorRGB_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"toARGB",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TColorRGB_toARGB
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_maxgui_proxygadgets_splitter_TColorRGB maxgui_proxygadgets_splitter_TColorRGB={
	&maxgui_proxygadgets_splitter_TColor,
	bbObjectFree,
	(BBDebugScope*)&maxgui_proxygadgets_splitter_TColorRGB_scope,
	sizeof(struct maxgui_proxygadgets_splitter_TColorRGB_obj),
	(void (*)(BBOBJECT))_maxgui_proxygadgets_splitter_TColorRGB_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct maxgui_proxygadgets_splitter_TColorRGB_obj,_maxgui_proxygadgets_splitter_tcolorrgb_a) - sizeof(void*) + sizeof(BBFLOAT)
	,_maxgui_proxygadgets_splitter_TColorRGB_toARGB
	,_maxgui_proxygadgets_splitter_TColorRGB_toHSV
	,maxgui_proxygadgets_splitter_TColorRGB_fromARGB_TTColorRGB_ii
	,maxgui_proxygadgets_splitter_TColorRGB_fromBGR_TTColorRGB_i
};

struct maxgui_proxygadgets_splitter_TSplitter_obj* maxgui_proxygadgets_splitter_CreateSplitter(BBINT bbt_pX,BBINT bbt_pY,BBINT bbt_pW,BBINT bbt_pH,struct maxgui_maxgui_gadget_TGadget_obj* bbt_pParent,BBINT bbt_pOrientation,BBINT bbt_pHandleSize){
	struct BBDebugScope_7 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"CreateSplitter",
		{
			{
				BBDEBUGDECL_LOCAL,
				"pX",
				"i",
				.var_address=&bbt_pX
			},
			{
				BBDEBUGDECL_LOCAL,
				"pY",
				"i",
				.var_address=&bbt_pY
			},
			{
				BBDEBUGDECL_LOCAL,
				"pW",
				"i",
				.var_address=&bbt_pW
			},
			{
				BBDEBUGDECL_LOCAL,
				"pH",
				"i",
				.var_address=&bbt_pH
			},
			{
				BBDEBUGDECL_LOCAL,
				"pParent",
				":TGadget",
				.var_address=&bbt_pParent
			},
			{
				BBDEBUGDECL_LOCAL,
				"pOrientation",
				"i",
				.var_address=&bbt_pOrientation
			},
			{
				BBDEBUGDECL_LOCAL,
				"pHandleSize",
				"i",
				.var_address=&bbt_pHandleSize
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 33, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return (struct maxgui_proxygadgets_splitter_TSplitter_obj*)maxgui_proxygadgets_splitter_TSplitter.m_Create_iiiiTTGadgetii((struct maxgui_proxygadgets_splitter_TSplitter_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbObjectNew((BBClass *)&maxgui_proxygadgets_splitter_TSplitter)),bbt_pX,bbt_pY,bbt_pW,bbt_pH,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_pParent,bbt_pOrientation,bbt_pHandleSize);
}
struct maxgui_maxgui_gadget_TGadget_obj* maxgui_proxygadgets_splitter_SplitterPanel(struct maxgui_proxygadgets_splitter_TSplitter_obj* bbt_splitter,BBINT bbt_panel){
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SplitterPanel",
		{
			{
				BBDEBUGDECL_LOCAL,
				"splitter",
				":TSplitter",
				.var_address=&bbt_splitter
			},
			{
				BBDEBUGDECL_LOCAL,
				"panel",
				"i",
				.var_address=&bbt_panel
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 48, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return (struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(bbt_splitter))->clas->m_GetPanel_i((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbt_splitter,bbt_panel);
}
void maxgui_proxygadgets_splitter_SetSplitterPosition(struct maxgui_proxygadgets_splitter_TSplitter_obj* bbt_splitter,BBINT bbt_position,BBINT bbt_save){
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetSplitterPosition",
		{
			{
				BBDEBUGDECL_LOCAL,
				"splitter",
				":TSplitter",
				.var_address=&bbt_splitter
			},
			{
				BBDEBUGDECL_LOCAL,
				"position",
				"i",
				.var_address=&bbt_position
			},
			{
				BBDEBUGDECL_LOCAL,
				"save",
				"i",
				.var_address=&bbt_save
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 61, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(bbt_splitter))->clas->m_SetPanelSpace_ii((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbt_splitter,bbt_position,bbt_save);
	bbOnDebugLeaveScope();
}
BBINT maxgui_proxygadgets_splitter_SplitterPosition(struct maxgui_proxygadgets_splitter_TSplitter_obj* bbt_splitter){
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SplitterPosition",
		{
			{
				BBDEBUGDECL_LOCAL,
				"splitter",
				":TSplitter",
				.var_address=&bbt_splitter
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 71, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return ((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(bbt_splitter))->clas->m_GetPanelSpace_i((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbt_splitter,1);
}
void maxgui_proxygadgets_splitter_SetSplitterOrientation(struct maxgui_proxygadgets_splitter_TSplitter_obj* bbt_splitter,BBINT bbt_orientation){
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetSplitterOrientation",
		{
			{
				BBDEBUGDECL_LOCAL,
				"splitter",
				":TSplitter",
				.var_address=&bbt_splitter
			},
			{
				BBDEBUGDECL_LOCAL,
				"orientation",
				"i",
				.var_address=&bbt_orientation
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 91, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(bbt_splitter))->clas->m_ChangeOrientation_i((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbt_splitter,bbt_orientation);
	bbOnDebugLeaveScope();
}
BBINT maxgui_proxygadgets_splitter_SplitterOrientation(struct maxgui_proxygadgets_splitter_TSplitter_obj* bbt_splitter){
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SplitterOrientation",
		{
			{
				BBDEBUGDECL_LOCAL,
				"splitter",
				":TSplitter",
				.var_address=&bbt_splitter
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 108, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return ((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(bbt_splitter))->clas->m_GetOrientation((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbt_splitter);
}
void maxgui_proxygadgets_splitter_SetSplitterBehavior(struct maxgui_proxygadgets_splitter_TSplitter_obj* bbt_splitter,BBINT bbt_flags){
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetSplitterBehavior",
		{
			{
				BBDEBUGDECL_LOCAL,
				"splitter",
				":TSplitter",
				.var_address=&bbt_splitter
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 132, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(bbt_splitter))->clas->m_SetBehavior_i((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbt_splitter,bbt_flags);
	bbOnDebugLeaveScope();
}
BBINT maxgui_proxygadgets_splitter_SplitterBehavior(struct maxgui_proxygadgets_splitter_TSplitter_obj* bbt_splitter){
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SplitterBehavior",
		{
			{
				BBDEBUGDECL_LOCAL,
				"splitter",
				":TSplitter",
				.var_address=&bbt_splitter
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/splitter.bmx", 141, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return ((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbNullObjectTest(bbt_splitter))->clas->m_GetBehavior((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbt_splitter);
}
static int _bb_maxgui_proxygadgets_splitter_inited = 0;
int _bb_maxgui_proxygadgets_splitter(){
	if (!_bb_maxgui_proxygadgets_splitter_inited) {
		_bb_maxgui_proxygadgets_splitter_inited = 1;
		GC_add_roots(&maxgui_proxygadgets_splitter_TSplitter_intSideToPanelMapping, &maxgui_proxygadgets_splitter_TSplitter_intOrientationLocks + 1);
		__bb_brl_blitz_blitz();
		__bb_maxgui_maxgui_maxgui();
		bbObjectRegisterType((BBCLASS)&maxgui_proxygadgets_splitter_TSplitter);
		bbObjectRegisterType((BBCLASS)&maxgui_proxygadgets_splitter_TColor);
		bbObjectRegisterType((BBCLASS)&maxgui_proxygadgets_splitter_TColorHSV);
		bbObjectRegisterType((BBCLASS)&maxgui_proxygadgets_splitter_TColorRGB);
		BBINT bbt_7[]={1,1,1,1};
		BBARRAY bbt_8 = bbArrayFromData("i",4,bbt_7);
		BBINT bbt_9[]={1,1,0,1};
		BBARRAY bbt_10 = bbArrayFromData("i",4,bbt_9);
		BBINT bbt_11[]={1,1,0,1};
		BBARRAY bbt_12 = bbArrayFromData("i",4,bbt_11);
		BBARRAY bbt_5[]={bbt_8,bbt_10,bbt_12};
		BBARRAY bbt_6 = bbArrayFromData("[]i",3,bbt_5);
		BBINT bbt_15[]={1,1,1,1};
		BBARRAY bbt_16 = bbArrayFromData("i",4,bbt_15);
		BBINT bbt_17[]={0,1,1,1};
		BBARRAY bbt_18 = bbArrayFromData("i",4,bbt_17);
		BBINT bbt_19[]={0,1,1,1};
		BBARRAY bbt_20 = bbArrayFromData("i",4,bbt_19);
		BBARRAY bbt_13[]={bbt_16,bbt_18,bbt_20};
		BBARRAY bbt_14 = bbArrayFromData("[]i",3,bbt_13);
		BBINT bbt_23[]={1,1,1,1};
		BBARRAY bbt_24 = bbArrayFromData("i",4,bbt_23);
		BBINT bbt_25[]={1,1,1,0};
		BBARRAY bbt_26 = bbArrayFromData("i",4,bbt_25);
		BBINT bbt_27[]={1,1,1,0};
		BBARRAY bbt_28 = bbArrayFromData("i",4,bbt_27);
		BBARRAY bbt_21[]={bbt_24,bbt_26,bbt_28};
		BBARRAY bbt_22 = bbArrayFromData("[]i",3,bbt_21);
		BBINT bbt_31[]={1,1,1,1};
		BBARRAY bbt_32 = bbArrayFromData("i",4,bbt_31);
		BBINT bbt_33[]={1,0,1,1};
		BBARRAY bbt_34 = bbArrayFromData("i",4,bbt_33);
		BBINT bbt_35[]={1,0,1,1};
		BBARRAY bbt_36 = bbArrayFromData("i",4,bbt_35);
		BBARRAY bbt_29[]={bbt_32,bbt_34,bbt_36};
		BBARRAY bbt_30 = bbArrayFromData("[]i",3,bbt_29);
		BBARRAY bbt_3[]={bbt_6,bbt_14,bbt_22,bbt_30};
		BBARRAY bbt_4 = bbArrayFromData("[][]i",4,bbt_3);
		maxgui_proxygadgets_splitter_TSplitter_intOrientationLocks=bbt_4;
		BBINT bbt_39[]={0,1};
		BBARRAY bbt_40 = bbArrayFromData("i",2,bbt_39);
		BBINT bbt_41[]={0,1};
		BBARRAY bbt_42 = bbArrayFromData("i",2,bbt_41);
		BBINT bbt_43[]={1,0};
		BBARRAY bbt_44 = bbArrayFromData("i",2,bbt_43);
		BBINT bbt_45[]={1,0};
		BBARRAY bbt_46 = bbArrayFromData("i",2,bbt_45);
		BBARRAY bbt_37[]={bbt_40,bbt_42,bbt_44,bbt_46};
		BBARRAY bbt_38 = bbArrayFromData("[]i",4,bbt_37);
		maxgui_proxygadgets_splitter_TSplitter_intSideToPanelMapping=bbt_38;
		struct BBDebugScope_12 __scope = {
			BBDEBUGSCOPE_FUNCTION,
			"splitter",
			{
				{
					BBDEBUGDECL_CONST,
					"SPLITPANEL_MAIN",
					"i",
					.const_value=&_s2
				},
				{
					BBDEBUGDECL_CONST,
					"SPLITPANEL_SIDEPANE",
					"i",
					.const_value=&_s3
				},
				{
					BBDEBUGDECL_CONST,
					"SPLITPANEL_HANDLE",
					"i",
					.const_value=&_s4
				},
				{
					BBDEBUGDECL_CONST,
					"SPLIT_HORIZONTAL",
					"i",
					.const_value=&_s2
				},
				{
					BBDEBUGDECL_CONST,
					"SPLIT_VERTICAL",
					"i",
					.const_value=&_s3
				},
				{
					BBDEBUGDECL_CONST,
					"SPLIT_FLIPPED",
					"i",
					.const_value=&_s4
				},
				{
					BBDEBUGDECL_CONST,
					"SPLIT_RESIZABLE",
					"i",
					.const_value=&_s3
				},
				{
					BBDEBUGDECL_CONST,
					"SPLIT_LIMITPANESIZE",
					"i",
					.const_value=&_s4
				},
				{
					BBDEBUGDECL_CONST,
					"SPLIT_CANFLIP",
					"i",
					.const_value=&_s5
				},
				{
					BBDEBUGDECL_CONST,
					"SPLIT_CANORIENTATE",
					"i",
					.const_value=&_s6
				},
				{
					BBDEBUGDECL_CONST,
					"SPLIT_CLICKTOTOGGLE",
					"i",
					.const_value=&_s7
				},
				{
					BBDEBUGDECL_CONST,
					"SPLIT_ALL",
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