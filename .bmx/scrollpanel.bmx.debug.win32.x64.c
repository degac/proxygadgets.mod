#include "scrollpanel.bmx.debug.win32.x64.h"
static BBString _s9={
	&bbStringClass,
	2,
	{45,49}
};
static BBString _s8={
	&bbStringClass,
	1,
	{48}
};
static BBString _s1={
	&bbStringClass,
	1,
	{49}
};
static BBString _s5={
	&bbStringClass,
	2,
	{49,54}
};
static BBString _s0={
	&bbStringClass,
	2,
	{49,56}
};
static BBString _s2={
	&bbStringClass,
	1,
	{50}
};
static BBString _s10={
	&bbStringClass,
	10,
	{50,49,52,55,52,56,51,54,52,55}
};
static BBString _s6={
	&bbStringClass,
	2,
	{51,50}
};
static BBString _s3={
	&bbStringClass,
	1,
	{52}
};
static BBString _s7={
	&bbStringClass,
	2,
	{54,52}
};
static BBString _s4={
	&bbStringClass,
	1,
	{56}
};
struct BBDebugScope_1{int kind; const char *name; BBDebugDecl decls[2]; };
struct BBDebugScope_14{int kind; const char *name; BBDebugDecl decls[15]; };
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
struct BBDebugScope_3{int kind; const char *name; BBDebugDecl decls[4]; };
struct BBDebugScope_30{int kind; const char *name; BBDebugDecl decls[31]; };
struct BBDebugScope_4{int kind; const char *name; BBDebugDecl decls[5]; };
struct BBDebugScope_5{int kind; const char *name; BBDebugDecl decls[6]; };
struct BBDebugScope_6{int kind; const char *name; BBDebugDecl decls[7]; };
struct BBDebugScope_8{int kind; const char *name; BBDebugDecl decls[9]; };
void _maxgui_proxygadgets_scrollpanel_TScrollPanel_New(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* o) {
	_maxgui_maxgui_gadget_TProxyGadget_New((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o);
	o->clas = &maxgui_proxygadgets_scrollpanel_TScrollPanel;
	((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_flags = 0;
	((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea = (struct maxgui_maxgui_gadget_TProxyGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrhorizontal = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrvertical = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_currenth = 0;
	((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_currentv = 0;
	((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_clientw = 0;
	((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_clienth = 0;
	struct BBDebugScope __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"New",
		{
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 215, 0};
	bbOnDebugEnterStm(&__stmt_0);
	brl_hook_AddHook(brl_event_EmitEventHook,maxgui_proxygadgets_scrollpanel_TScrollPanel_eventHandler_TObject_iTObjectTObject,(BBOBJECT)o,-1);
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 216, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o));
	((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o)->clas->m_RemoveVerticalScroll((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o);
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 216, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o));
	((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o)->clas->m_RemoveHorizontalScroll((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o);
	bbOnDebugLeaveScope();
}
struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* _maxgui_proxygadgets_scrollpanel_TScrollPanel_Create_iiiiTTGadgeti(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* o,BBINT bbt_pX,BBINT bbt_pY,BBINT bbt_pWidth,BBINT bbt_pHeight,struct maxgui_maxgui_gadget_TGadget_obj* bbt_pParent,BBINT bbt_pFlags){
	((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o));
	BBINT bbt_tmpPanelFlags=0;
	struct BBDebugScope_8 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Create",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TScrollPanel",
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
				"pWidth",
				"i",
				.var_address=&bbt_pWidth
			},
			{
				BBDEBUGDECL_LOCAL,
				"pHeight",
				"i",
				.var_address=&bbt_pHeight
			},
			{
				BBDEBUGDECL_LOCAL,
				"pParent",
				":TGadget",
				.var_address=&bbt_pParent
			},
			{
				BBDEBUGDECL_LOCAL,
				"pFlags",
				"i",
				.var_address=&bbt_pFlags
			},
			{
				BBDEBUGDECL_LOCAL,
				"tmpPanelFlags",
				"i",
				.var_address=&bbt_tmpPanelFlags
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 222, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_tmpPanelFlags=0;
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 224, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_flags =bbt_pFlags;
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 226, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(((unsigned int)(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_flags )&1)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 226, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_tmpPanelFlags|=1;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 228, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreatePanel(bbt_pX,bbt_pY,bbt_pWidth,bbt_pHeight,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_pParent,bbt_tmpPanelFlags,&bbEmptyString);
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 228, 0};
	bbOnDebugEnterStm(&__stmt_4);
	maxgui_maxgui_HideGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire );
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 228, 0};
	bbOnDebugEnterStm(&__stmt_5);
	((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(o));
	((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)->clas->m_SetProxy_TTGadget((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire );
	struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 229, 0};
	bbOnDebugEnterStm(&__stmt_6);
	((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreatePanel(0,0,((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire ))->clas->m_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire ),((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire ))->clas->m_ClientHeight((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire ),(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire ,0,&bbEmptyString);
	struct BBDebugStm __stmt_7 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 230, 0};
	bbOnDebugEnterStm(&__stmt_7);
	((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea =(struct maxgui_maxgui_gadget_TProxyGadget_obj*)((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbObjectDowncast((BBOBJECT)(struct maxgui_proxygadgets_scrollpanel_TScrollClient_obj*)bbObjectNew((BBClass *)&maxgui_proxygadgets_scrollpanel_TScrollClient),(BBClass*)&maxgui_maxgui_gadget_TProxyGadget));
	struct BBDebugStm __stmt_8 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 231, 0};
	bbOnDebugEnterStm(&__stmt_8);
	((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ))->clas->m_SetProxy_TTGadget((struct maxgui_maxgui_gadget_TProxyGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ,(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreatePanel(0,0,((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ))->clas->m_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ),((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ))->clas->m_ClientHeight((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ),(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ,0,&bbEmptyString));
	struct BBDebugStm __stmt_9 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 232, 0};
	bbOnDebugEnterStm(&__stmt_9);
	((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrhorizontal =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateSlider(0,(((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire ))->clas->m_ClientHeight((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire )-18),(((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire ))->clas->m_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire )-18),18,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire ,1);
	struct BBDebugStm __stmt_10 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 233, 0};
	bbOnDebugEnterStm(&__stmt_10);
	((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrvertical =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateSlider((((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire ))->clas->m_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire )-18),0,18,(((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire ))->clas->m_ClientHeight((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire )-18),(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire ,2);
	struct BBDebugStm __stmt_11 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 235, 0};
	bbOnDebugEnterStm(&__stmt_11);
	maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ,1,1,1,1);
	struct BBDebugStm __stmt_12 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 236, 0};
	bbOnDebugEnterStm(&__stmt_12);
	maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrhorizontal ,1,1,0,1);
	struct BBDebugStm __stmt_13 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 237, 0};
	bbOnDebugEnterStm(&__stmt_13);
	maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrvertical ,0,1,1,1);
	struct BBDebugStm __stmt_14 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 239, 0};
	bbOnDebugEnterStm(&__stmt_14);
	BBINT bbt_=((unsigned int)(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_flags )&24);
	struct BBDebugStm __stmt_15 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 240, 0};
	bbOnDebugEnterStm(&__stmt_15);
	if(bbt_==0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 241, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ))->clas->m_GetProxy((struct maxgui_maxgui_gadget_TProxyGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ),1,0,1,0);
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 242, 0};
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
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 243, 0};
			bbOnDebugEnterStm(&__stmt_0);
			maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ))->clas->m_GetProxy((struct maxgui_maxgui_gadget_TProxyGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ),1,1,1,0);
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
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 244, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if(bbt_==16){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 245, 0};
				bbOnDebugEnterStm(&__stmt_0);
				maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ))->clas->m_GetProxy((struct maxgui_maxgui_gadget_TProxyGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ),1,0,1,1);
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
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 246, 0};
				bbOnDebugEnterStm(&__stmt_0);
				if(bbt_==24){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 247, 0};
					bbOnDebugEnterStm(&__stmt_0);
					maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ))->clas->m_GetProxy((struct maxgui_maxgui_gadget_TProxyGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ),1,1,1,1);
					bbOnDebugLeaveScope();
				}
				bbOnDebugLeaveScope();
			}
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_16 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 250, 0};
	bbOnDebugEnterStm(&__stmt_16);
	maxgui_maxgui_HideGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrhorizontal );
	struct BBDebugStm __stmt_17 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 250, 0};
	bbOnDebugEnterStm(&__stmt_17);
	maxgui_maxgui_HideGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrvertical );
	struct BBDebugStm __stmt_18 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 252, 0};
	bbOnDebugEnterStm(&__stmt_18);
	maxgui_maxgui_ShowGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire );
	struct BBDebugStm __stmt_19 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 254, 0};
	bbOnDebugEnterStm(&__stmt_19);
	bbOnDebugLeaveScope();
	return (struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o;
}
BBINT _maxgui_proxygadgets_scrollpanel_TScrollPanel_SetShape_iiii(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* o,BBINT bbt_x,BBINT bbt_y,BBINT bbt_w,BBINT bbt_h){
	((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o));
	struct BBDebugScope_5 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetShape",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TScrollPanel",
				.var_address=&o
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
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 259, 0};
	bbOnDebugEnterStm(&__stmt_0);
	(&maxgui_proxygadgets_scrollpanel_TScrollPanel)->super->m_SetShape_iiii((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o,bbt_x,bbt_y,bbt_w,bbt_h);
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 260, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o));
	((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o)->clas->m_Update((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_scrollpanel_TScrollPanel_ClientWidth(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* o){
	((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"ClientWidth",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TScrollPanel",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 264, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return ((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ))->clas->m_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport );
}
BBINT _maxgui_proxygadgets_scrollpanel_TScrollPanel_ClientHeight(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* o){
	((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"ClientHeight",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TScrollPanel",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 268, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return ((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ))->clas->m_ClientHeight((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport );
}
BBINT _maxgui_proxygadgets_scrollpanel_TScrollPanel_GetXScroll(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* o){
	((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"GetXScroll",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TScrollPanel",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 272, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return ((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_currenth ;
}
BBINT _maxgui_proxygadgets_scrollpanel_TScrollPanel_GetYScroll(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* o){
	((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"GetYScroll",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TScrollPanel",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 276, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return ((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_currentv ;
}
BBINT _maxgui_proxygadgets_scrollpanel_TScrollPanel_ScrollTo_ii(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* o,BBINT bbt_pHSlider,BBINT bbt_pVSlider){
	((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o));
	BBINT bbt_tmpRight=0;
	BBINT bbt_tmpBottom=0;
	struct BBDebugScope_5 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"ScrollTo",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TScrollPanel",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"pHSlider",
				"i",
				.var_address=&bbt_pHSlider
			},
			{
				BBDEBUGDECL_LOCAL,
				"pVSlider",
				"i",
				.var_address=&bbt_pVSlider
			},
			{
				BBDEBUGDECL_LOCAL,
				"tmpRight",
				"i",
				.var_address=&bbt_tmpRight
			},
			{
				BBDEBUGDECL_LOCAL,
				"tmpBottom",
				"i",
				.var_address=&bbt_tmpBottom
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 281, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_tmpRight=brl_blitz_Max((((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ))->clas->m_ClientWidth((struct maxgui_maxgui_gadget_TProxyGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )-((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ))->clas->m_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport )),0);
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 282, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_tmpBottom=brl_blitz_Max((((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ))->clas->m_ClientHeight((struct maxgui_maxgui_gadget_TProxyGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )-((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ))->clas->m_ClientHeight((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport )),0);
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 284, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(bbt_pHSlider>bbt_tmpRight){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 284, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_pHSlider=bbt_tmpRight;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 285, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if(bbt_pVSlider>bbt_tmpBottom){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 285, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_pVSlider=bbt_tmpBottom;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 287, 0};
	bbOnDebugEnterStm(&__stmt_4);
	if(bbt_pHSlider>=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 287, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_currenth =bbt_pHSlider;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 288, 0};
	bbOnDebugEnterStm(&__stmt_5);
	if(bbt_pVSlider>=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 288, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_currentv =bbt_pVSlider;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 290, 0};
	bbOnDebugEnterStm(&__stmt_6);
	maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ))->clas->m_GetProxy((struct maxgui_maxgui_gadget_TProxyGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ),-((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_currenth ,-((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_currentv ,((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ))->clas->m_GetWidth((struct maxgui_maxgui_gadget_TProxyGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ),((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ))->clas->m_GetHeight((struct maxgui_maxgui_gadget_TProxyGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ));
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_scrollpanel_TScrollPanel_FitToChildren_ii(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* o,BBINT bbt_pRightMargin,BBINT bbt_pBottomMargin){
	((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o));
	BBINT bbt_tmpRight=0;
	BBINT bbt_tmpBottom=0;
	struct BBDebugScope_5 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"FitToChildren",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TScrollPanel",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"pRightMargin",
				"i",
				.var_address=&bbt_pRightMargin
			},
			{
				BBDEBUGDECL_LOCAL,
				"pBottomMargin",
				"i",
				.var_address=&bbt_pBottomMargin
			},
			{
				BBDEBUGDECL_LOCAL,
				"tmpRight",
				"i",
				.var_address=&bbt_tmpRight
			},
			{
				BBDEBUGDECL_LOCAL,
				"tmpBottom",
				"i",
				.var_address=&bbt_tmpBottom
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 296, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_tmpRight=0;
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 296, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_tmpBottom=0;
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 298, 0};
	bbOnDebugEnterStm(&__stmt_2);
	struct brl_linkedlist_TList_obj* bbt_2;
	struct brl_linkedlist_TListEnum_obj* bbt_=(struct brl_linkedlist_TListEnum_obj*)(((struct brl_linkedlist_TList_obj*)((struct brl_linkedlist_TList_obj*)bbNullObjectTest((bbt_2 = ((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ))->_maxgui_maxgui_gadget_tproxygadget_proxy ))->_maxgui_maxgui_gadget_tgadget_kids ))))->clas)->m_ObjectEnumerator((struct brl_linkedlist_TList_obj*)bbt_2);
	while(((struct brl_linkedlist_TListEnum_obj*)bbNullObjectTest(bbt_))->clas->m_HasNext((struct brl_linkedlist_TListEnum_obj*)bbt_)!=0){
		struct maxgui_maxgui_gadget_TGadget_obj* bbt_tmpChild=(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
		struct BBDebugScope_1 __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_LOCAL,
					"tmpChild",
					":TGadget",
					.var_address=&bbt_tmpChild
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		bbt_tmpChild=(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)((struct brl_linkedlist_TListEnum_obj*)bbNullObjectTest(bbt_))->clas->m_NextObject((struct brl_linkedlist_TListEnum_obj*)bbt_),(BBClass*)&maxgui_maxgui_gadget_TGadget));
		if(bbt_tmpChild==&bbNullObject){
			bbOnDebugLeaveScope();
			continue;
		}
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 299, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_tmpRight=brl_blitz_Max(bbt_tmpRight,(maxgui_maxgui_GadgetX((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_tmpChild)+maxgui_maxgui_GadgetWidth((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_tmpChild)));
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 300, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_tmpBottom=brl_blitz_Max(bbt_tmpBottom,(maxgui_maxgui_GadgetY((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_tmpChild)+maxgui_maxgui_GadgetHeight((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_tmpChild)));
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 303, 0};
	bbOnDebugEnterStm(&__stmt_3);
	maxgui_maxgui_HideGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport );
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 304, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ))->clas->m_SetShape_iiii((struct maxgui_maxgui_gadget_TProxyGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ,0,0,(bbt_tmpRight+bbt_pRightMargin),(bbt_tmpBottom+bbt_pBottomMargin));
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 305, 0};
	bbOnDebugEnterStm(&__stmt_5);
	((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o));
	((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o)->clas->m_ScrollTo_ii((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o,0,0);
	struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 306, 0};
	bbOnDebugEnterStm(&__stmt_6);
	maxgui_maxgui_ShowGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport );
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_scrollpanel_TScrollPanel_FitToViewport(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* o){
	((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"FitToViewport",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TScrollPanel",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 312, 0};
	bbOnDebugEnterStm(&__stmt_0);
	maxgui_maxgui_HideGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport );
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 313, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ))->clas->m_SetShape_iiii((struct maxgui_maxgui_gadget_TProxyGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ,0,0,((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ))->clas->m_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ),((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ))->clas->m_ClientHeight((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ));
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 314, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o));
	((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o)->clas->m_ScrollTo_ii((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o,0,0);
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 315, 0};
	bbOnDebugEnterStm(&__stmt_3);
	maxgui_maxgui_ShowGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport );
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_scrollpanel_TScrollPanel_Update(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* o){
	((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o));
	BBINT bbt_tmpDiff=0;
	BBINT bbt_tmpPos=0;
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Update",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TScrollPanel",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"tmpDiff",
				"i",
				.var_address=&bbt_tmpDiff
			},
			{
				BBDEBUGDECL_LOCAL,
				"tmpPos",
				"i",
				.var_address=&bbt_tmpPos
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 321, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_tmpDiff=0;
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 321, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_tmpPos=0;
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 323, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(!(((BBObject*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )!= &bbNullObject)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 323, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return 0;
	}
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 325, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if(((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ))->clas->m_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport )<((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ))->clas->m_GetWidth((struct maxgui_maxgui_gadget_TProxyGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 326, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o));
		((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o)->clas->m_AddHorizontalScroll_iii((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o,((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ))->clas->m_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ),((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ))->clas->m_GetXPos((struct maxgui_maxgui_gadget_TProxyGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ),((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ))->clas->m_GetWidth((struct maxgui_maxgui_gadget_TProxyGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ));
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 328, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o));
		((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o)->clas->m_RemoveHorizontalScroll((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 331, 0};
	bbOnDebugEnterStm(&__stmt_4);
	if(((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ))->clas->m_ClientHeight((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport )<((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ))->clas->m_GetHeight((struct maxgui_maxgui_gadget_TProxyGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 332, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o));
		((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o)->clas->m_AddVerticalScroll_iii((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o,((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ))->clas->m_ClientHeight((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ),((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ))->clas->m_GetYPos((struct maxgui_maxgui_gadget_TProxyGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ),((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ))->clas->m_GetHeight((struct maxgui_maxgui_gadget_TProxyGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ));
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 334, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o));
		((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o)->clas->m_RemoveVerticalScroll((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 337, 0};
	bbOnDebugEnterStm(&__stmt_5);
	if(((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ))->clas->m_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport )<((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ))->clas->m_GetWidth((struct maxgui_maxgui_gadget_TProxyGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 339, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_tmpDiff=brl_blitz_Max((((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ))->clas->m_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport )-(((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ))->clas->m_GetXPos((struct maxgui_maxgui_gadget_TProxyGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )+((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ))->clas->m_GetWidth((struct maxgui_maxgui_gadget_TProxyGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ))),0);
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 340, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_tmpPos=brl_blitz_Min((((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ))->clas->m_GetXPos((struct maxgui_maxgui_gadget_TProxyGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )+bbt_tmpDiff),0);
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 342, 0};
		bbOnDebugEnterStm(&__stmt_2);
		((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o));
		((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o)->clas->m_AddHorizontalScroll_iii((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o,((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ))->clas->m_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ),bbt_tmpPos,((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ))->clas->m_GetWidth((struct maxgui_maxgui_gadget_TProxyGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ));
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 343, 0};
		bbOnDebugEnterStm(&__stmt_3);
		((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o));
		((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o)->clas->m_ScrollTo_ii((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o,-bbt_tmpPos,((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_currentv );
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 347, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o));
		((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o)->clas->m_RemoveHorizontalScroll((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 351, 0};
	bbOnDebugEnterStm(&__stmt_6);
	if(((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ))->clas->m_ClientHeight((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport )<((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ))->clas->m_GetHeight((struct maxgui_maxgui_gadget_TProxyGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 353, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_tmpDiff=brl_blitz_Max((((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ))->clas->m_ClientHeight((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport )-(((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ))->clas->m_GetYPos((struct maxgui_maxgui_gadget_TProxyGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )+((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ))->clas->m_GetHeight((struct maxgui_maxgui_gadget_TProxyGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ))),0);
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 354, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_tmpPos=brl_blitz_Min((((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ))->clas->m_GetYPos((struct maxgui_maxgui_gadget_TProxyGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )+bbt_tmpDiff),0);
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 356, 0};
		bbOnDebugEnterStm(&__stmt_2);
		((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o));
		((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o)->clas->m_AddVerticalScroll_iii((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o,((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ))->clas->m_ClientHeight((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ),bbt_tmpPos,((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ))->clas->m_GetHeight((struct maxgui_maxgui_gadget_TProxyGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ));
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 357, 0};
		bbOnDebugEnterStm(&__stmt_3);
		((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o));
		((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o)->clas->m_ScrollTo_ii((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o,((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_currenth ,-bbt_tmpPos);
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 361, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o));
		((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o)->clas->m_RemoveVerticalScroll((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_scrollpanel_TScrollPanel_AddVerticalScroll_iii(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* o,BBINT bbt_pVisible,BBINT bbt_pY,BBINT bbt_pHeight){
	((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o));
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"AddVerticalScroll",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TScrollPanel",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"pVisible",
				"i",
				.var_address=&bbt_pVisible
			},
			{
				BBDEBUGDECL_LOCAL,
				"pY",
				"i",
				.var_address=&bbt_pY
			},
			{
				BBDEBUGDECL_LOCAL,
				"pHeight",
				"i",
				.var_address=&bbt_pHeight
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 369, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if((((BBObject*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrvertical )!= &bbNullObject) && !(((unsigned int)(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_flags )&64)!=0)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 371, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ,0,0,(((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire ))->clas->m_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire )-18),maxgui_maxgui_GadgetHeight((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ));
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 372, 0};
		bbOnDebugEnterStm(&__stmt_1);
		maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrvertical ,(((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire ))->clas->m_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire )-18),0,18,maxgui_maxgui_GadgetHeight((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ));
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 374, 0};
		bbOnDebugEnterStm(&__stmt_2);
		maxgui_maxgui_SetSliderRange((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrvertical ,bbt_pVisible,bbt_pHeight);
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 374, 0};
		bbOnDebugEnterStm(&__stmt_3);
		maxgui_maxgui_SetSliderValue((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrvertical ,-bbt_pY);
		struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 375, 0};
		bbOnDebugEnterStm(&__stmt_4);
		maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrvertical );
		struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 375, 0};
		bbOnDebugEnterStm(&__stmt_5);
		maxgui_maxgui_ShowGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrvertical );
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_scrollpanel_TScrollPanel_RemoveVerticalScroll(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* o){
	((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"RemoveVerticalScroll",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TScrollPanel",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 383, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if((((BBObject*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrvertical )!= &bbNullObject) && !(maxgui_maxgui_GadgetDisabled((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrvertical ,0)!=0)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 385, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(!(((unsigned int)(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_flags )&4)!=0)){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 386, 0};
			bbOnDebugEnterStm(&__stmt_0);
			maxgui_maxgui_HideGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrvertical );
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 387, 0};
			bbOnDebugEnterStm(&__stmt_1);
			maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ,0,0,((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire ))->clas->m_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire ),maxgui_maxgui_GadgetHeight((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ));
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 390, 0};
		bbOnDebugEnterStm(&__stmt_1);
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrvertical );
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 392, 0};
		bbOnDebugEnterStm(&__stmt_2);
		((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o));
		((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o)->clas->m_ScrollTo_ii((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o,((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_currenth ,0);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_scrollpanel_TScrollPanel_AddHorizontalScroll_iii(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* o,BBINT bbt_pVisible,BBINT bbt_pX,BBINT bbt_pWidth){
	((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o));
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"AddHorizontalScroll",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TScrollPanel",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"pVisible",
				"i",
				.var_address=&bbt_pVisible
			},
			{
				BBDEBUGDECL_LOCAL,
				"pX",
				"i",
				.var_address=&bbt_pX
			},
			{
				BBDEBUGDECL_LOCAL,
				"pWidth",
				"i",
				.var_address=&bbt_pWidth
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 400, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if((((BBObject*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrhorizontal )!= &bbNullObject) && !(((unsigned int)(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_flags )&32)!=0)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 402, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ,0,0,maxgui_maxgui_GadgetWidth((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ),(((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire ))->clas->m_ClientHeight((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire )-18));
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 403, 0};
		bbOnDebugEnterStm(&__stmt_1);
		maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrhorizontal ,0,(((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire ))->clas->m_ClientHeight((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire )-18),maxgui_maxgui_GadgetWidth((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ),18);
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 405, 0};
		bbOnDebugEnterStm(&__stmt_2);
		maxgui_maxgui_SetSliderRange((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrhorizontal ,bbt_pVisible,bbt_pWidth);
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 405, 0};
		bbOnDebugEnterStm(&__stmt_3);
		maxgui_maxgui_SetSliderValue((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrhorizontal ,-bbt_pX);
		struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 406, 0};
		bbOnDebugEnterStm(&__stmt_4);
		maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrhorizontal );
		struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 406, 0};
		bbOnDebugEnterStm(&__stmt_5);
		maxgui_maxgui_ShowGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrhorizontal );
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_scrollpanel_TScrollPanel_RemoveHorizontalScroll(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* o){
	((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"RemoveHorizontalScroll",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TScrollPanel",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 414, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if((((BBObject*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrhorizontal )!= &bbNullObject) && !(maxgui_maxgui_GadgetDisabled((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrhorizontal ,0)!=0)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 416, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(!(((unsigned int)(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_flags )&2)!=0)){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 417, 0};
			bbOnDebugEnterStm(&__stmt_0);
			maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ,0,0,maxgui_maxgui_GadgetWidth((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ),((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire ))->clas->m_ClientHeight((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire ));
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 418, 0};
			bbOnDebugEnterStm(&__stmt_1);
			maxgui_maxgui_HideGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrhorizontal );
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 421, 0};
		bbOnDebugEnterStm(&__stmt_1);
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrhorizontal );
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 423, 0};
		bbOnDebugEnterStm(&__stmt_2);
		((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o));
		((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o)->clas->m_ScrollTo_ii((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o,0,((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_currentv );
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBOBJECT _maxgui_proxygadgets_scrollpanel_TScrollPanel_eventHook_iTObjectTObject(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* o,BBINT bbt_pID,BBOBJECT bbt_pData,BBOBJECT bbt_pContext){
	((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o));
	struct brl_event_TEvent_obj* bbt_tmpEvent=(struct brl_event_TEvent_obj*)&bbNullObject;
	struct BBDebugScope_5 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"eventHook",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TScrollPanel",
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
				"pContext",
				":Object",
				.var_address=&bbt_pContext
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 431, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_tmpEvent=(struct brl_event_TEvent_obj*)((struct brl_event_TEvent_obj*)bbObjectDowncast((BBOBJECT)bbt_pData,(BBClass*)&brl_event_TEvent));
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 432, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(bbt_tmpEvent==&bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 432, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return (BBOBJECT)bbt_pData;
	}
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 434, 0};
	bbOnDebugEnterStm(&__stmt_2);
	BBINT bbt_=((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_tmpEvent))->_brl_event_tevent_id ;
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 436, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if(bbt_==16386){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 438, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(o->clas->f_CheckParent_i_TTGadgetTTGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire ,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_tmpEvent))->_brl_event_tevent_source ,(BBClass*)&maxgui_maxgui_gadget_TGadget)))!=0){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 438, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o));
			((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o)->clas->m_Update((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o);
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 440, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(bbt_==8193){
			BBINT bbt_tmpH=0;
			BBINT bbt_tmpV=0;
			struct BBDebugScope_2 __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					{
						BBDEBUGDECL_LOCAL,
						"tmpH",
						"i",
						.var_address=&bbt_tmpH
					},
					{
						BBDEBUGDECL_LOCAL,
						"tmpV",
						"i",
						.var_address=&bbt_tmpV
					},
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 442, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_tmpH=((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_currenth ;
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 442, 0};
			bbOnDebugEnterStm(&__stmt_1);
			bbt_tmpV=((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_currentv ;
			struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 444, 0};
			bbOnDebugEnterStm(&__stmt_2);
			BBOBJECT bbt_2=(BBOBJECT)((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_tmpEvent))->_brl_event_tevent_source ;
			struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 446, 0};
			bbOnDebugEnterStm(&__stmt_3);
			if(bbt_2==((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrhorizontal ){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 447, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbt_tmpH=maxgui_maxgui_SliderValue((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrhorizontal );
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
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 448, 0};
				bbOnDebugEnterStm(&__stmt_0);
				if(bbt_2==((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrvertical ){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 449, 0};
					bbOnDebugEnterStm(&__stmt_0);
					bbt_tmpV=maxgui_maxgui_SliderValue((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrvertical );
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
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 451, 0};
					bbOnDebugEnterStm(&__stmt_0);
					bbOnDebugLeaveScope();
					bbOnDebugLeaveScope();
					bbOnDebugLeaveScope();
					bbOnDebugLeaveScope();
					bbOnDebugLeaveScope();
					return (BBOBJECT)bbt_pData;
				}
				bbOnDebugLeaveScope();
			}
			struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 455, 0};
			bbOnDebugEnterStm(&__stmt_4);
			((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o));
			((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o)->clas->m_ScrollTo_ii((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o,bbt_tmpH,bbt_tmpV);
			struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 456, 0};
			bbOnDebugEnterStm(&__stmt_5);
			brl_event_EmitEvent((struct brl_event_TEvent_obj*)brl_event_CreateEvent(8193,(BBOBJECT)o,0,0,((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_currenth ,((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_currentv ,(BBOBJECT)&bbNullObject));
			struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 457, 0};
			bbOnDebugEnterStm(&__stmt_6);
			bbt_pData=(BBOBJECT)&bbNullObject;
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 461, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbOnDebugLeaveScope();
	return (BBOBJECT)bbt_pData;
}
BBINT _maxgui_proxygadgets_scrollpanel_TScrollPanel_CleanUp(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* o){
	((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"CleanUp",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TScrollPanel",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 467, 0};
	bbOnDebugEnterStm(&__stmt_0);
	brl_hook_RemoveHook(brl_event_EmitEventHook,o->clas->f_eventHandler_TObject_iTObjectTObject,(BBOBJECT)o);
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 468, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(o));
	((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)->clas->m_SetProxy_TTGadget((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o,(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject);
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 469, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(((BBObject*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 469, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ))->clas->m_SetProxy_TTGadget((struct maxgui_maxgui_gadget_TProxyGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ,(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject);
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 469, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea =(struct maxgui_maxgui_gadget_TProxyGadget_obj*)&bbNullObject;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 470, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if(((BBObject*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 470, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_HideGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire );
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 470, 0};
		bbOnDebugEnterStm(&__stmt_1);
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire );
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBOBJECT maxgui_proxygadgets_scrollpanel_TScrollPanel_eventHandler_TObject_iTObjectTObject(BBINT bbt_pID,BBOBJECT bbt_pData,BBOBJECT bbt_pContext){
	struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* bbt_tmpSuperPanel=(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)&bbNullObject;
	struct BBDebugScope_4 __scope = {
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
				"tmpSuperPanel",
				":TScrollPanel",
				.var_address=&bbt_tmpSuperPanel
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 476, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_tmpSuperPanel=(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbObjectDowncast((BBOBJECT)bbt_pContext,(BBClass*)&maxgui_proxygadgets_scrollpanel_TScrollPanel));
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 477, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(((BBObject*)bbt_tmpSuperPanel)!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 477, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_pData=(BBOBJECT)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(bbt_tmpSuperPanel))->clas->m_eventHook_iTObjectTObject((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbt_tmpSuperPanel,bbt_pID,(BBOBJECT)bbt_pData,(BBOBJECT)bbt_pContext);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 478, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbOnDebugLeaveScope();
	return (BBOBJECT)bbt_pData;
}
BBINT maxgui_proxygadgets_scrollpanel_TScrollPanel_CheckParent_i_TTGadgetTTGadget(struct maxgui_maxgui_gadget_TGadget_obj* bbt_pGadget,struct maxgui_maxgui_gadget_TGadget_obj* bbt_pParentToCheck){
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"CheckParent",
		{
			{
				BBDEBUGDECL_LOCAL,
				"pGadget",
				":TGadget",
				.var_address=&bbt_pGadget
			},
			{
				BBDEBUGDECL_LOCAL,
				"pParentToCheck",
				":TGadget",
				.var_address=&bbt_pParentToCheck
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 484, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(bbt_pGadget==bbt_pParentToCheck){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 484, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return 1;
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 485, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(((BBObject*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(bbt_pGadget))->_maxgui_maxgui_gadget_tgadget_parent )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 485, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return maxgui_proxygadgets_scrollpanel_TScrollPanel_CheckParent_i_TTGadgetTTGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(bbt_pGadget))->_maxgui_maxgui_gadget_tgadget_parent ,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_pParentToCheck);
	}
	bbOnDebugLeaveScope();
	return 0;
}
struct BBDebugScope_30 maxgui_proxygadgets_scrollpanel_TScrollPanel_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TScrollPanel",
	{
		{
			BBDEBUGDECL_CONST,
			"SCROLL_WIDTH",
			"i",
			.const_value=&_s0
		},
		{
			BBDEBUGDECL_FIELD,
			"flags",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj,_maxgui_proxygadgets_scrollpanel_tscrollpanel_flags)
		},
		{
			BBDEBUGDECL_FIELD,
			"pnlEntire",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj,_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire)
		},
		{
			BBDEBUGDECL_FIELD,
			"pnlViewport",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj,_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport)
		},
		{
			BBDEBUGDECL_FIELD,
			"pnlClientArea",
			":TProxyGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj,_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea)
		},
		{
			BBDEBUGDECL_FIELD,
			"scrHorizontal",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj,_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrhorizontal)
		},
		{
			BBDEBUGDECL_FIELD,
			"scrVertical",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj,_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrvertical)
		},
		{
			BBDEBUGDECL_FIELD,
			"currentH",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj,_maxgui_proxygadgets_scrollpanel_tscrollpanel_currenth)
		},
		{
			BBDEBUGDECL_FIELD,
			"currentV",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj,_maxgui_proxygadgets_scrollpanel_tscrollpanel_currentv)
		},
		{
			BBDEBUGDECL_FIELD,
			"clientW",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj,_maxgui_proxygadgets_scrollpanel_tscrollpanel_clientw)
		},
		{
			BBDEBUGDECL_FIELD,
			"clientH",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj,_maxgui_proxygadgets_scrollpanel_tscrollpanel_clienth)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_scrollpanel_TScrollPanel_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Create",
			"(i,i,i,i,:TGadget,i):TScrollPanel",
			.var_address=(void*)&_maxgui_proxygadgets_scrollpanel_TScrollPanel_Create_iiiiTTGadgeti
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetShape",
			"(i,i,i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_scrollpanel_TScrollPanel_SetShape_iiii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ClientWidth",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_scrollpanel_TScrollPanel_ClientWidth
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ClientHeight",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_scrollpanel_TScrollPanel_ClientHeight
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetXScroll",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_scrollpanel_TScrollPanel_GetXScroll
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetYScroll",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_scrollpanel_TScrollPanel_GetYScroll
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ScrollTo",
			"(i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_scrollpanel_TScrollPanel_ScrollTo_ii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"FitToChildren",
			"(i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_scrollpanel_TScrollPanel_FitToChildren_ii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"FitToViewport",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_scrollpanel_TScrollPanel_FitToViewport
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Update",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_scrollpanel_TScrollPanel_Update
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"AddVerticalScroll",
			"(i,i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_scrollpanel_TScrollPanel_AddVerticalScroll_iii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"RemoveVerticalScroll",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_scrollpanel_TScrollPanel_RemoveVerticalScroll
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"AddHorizontalScroll",
			"(i,i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_scrollpanel_TScrollPanel_AddHorizontalScroll_iii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"RemoveHorizontalScroll",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_scrollpanel_TScrollPanel_RemoveHorizontalScroll
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"eventHook",
			"(i,:Object,:Object):Object",
			.var_address=(void*)&_maxgui_proxygadgets_scrollpanel_TScrollPanel_eventHook_iTObjectTObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"CleanUp",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_scrollpanel_TScrollPanel_CleanUp
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"eventHandler",
			"(i,:Object,:Object):Object",
			.var_address=(void*)&maxgui_proxygadgets_scrollpanel_TScrollPanel_eventHandler_TObject_iTObjectTObject
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"CheckParent",
			"(:TGadget,:TGadget)i",
			.var_address=(void*)&maxgui_proxygadgets_scrollpanel_TScrollPanel_CheckParent_i_TTGadgetTTGadget
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_maxgui_proxygadgets_scrollpanel_TScrollPanel maxgui_proxygadgets_scrollpanel_TScrollPanel={
	&maxgui_maxgui_gadget_TProxyGadget,
	bbObjectFree,
	(BBDebugScope*)&maxgui_proxygadgets_scrollpanel_TScrollPanel_scope,
	sizeof(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj),
	(void (*)(BBOBJECT))_maxgui_proxygadgets_scrollpanel_TScrollPanel_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj,_maxgui_proxygadgets_scrollpanel_tscrollpanel_clienth) - sizeof(void*) + sizeof(BBINT)
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
	,_maxgui_proxygadgets_scrollpanel_TScrollPanel_SetShape_iiii
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
	,_maxgui_proxygadgets_scrollpanel_TScrollPanel_CleanUp
	,_maxgui_maxgui_gadget_TProxyGadget_Free
	,_maxgui_maxgui_gadget_TProxyGadget_Rethink
	,_maxgui_proxygadgets_scrollpanel_TScrollPanel_ClientWidth
	,_maxgui_proxygadgets_scrollpanel_TScrollPanel_ClientHeight
	,_maxgui_maxgui_gadget_TProxyGadget_Activate_i
	,_maxgui_maxgui_gadget_TProxyGadget_State
	,_maxgui_maxgui_gadget_TProxyGadget_SetText_S
	,_maxgui_maxgui_gadget_TProxyGadget_GetText
	,_maxgui_maxgui_gadget_TProxyGadget_SetFont_TTGuiFont
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
	,_maxgui_proxygadgets_scrollpanel_TScrollPanel_Create_iiiiTTGadgeti
	,_maxgui_proxygadgets_scrollpanel_TScrollPanel_GetXScroll
	,_maxgui_proxygadgets_scrollpanel_TScrollPanel_GetYScroll
	,_maxgui_proxygadgets_scrollpanel_TScrollPanel_ScrollTo_ii
	,_maxgui_proxygadgets_scrollpanel_TScrollPanel_FitToChildren_ii
	,_maxgui_proxygadgets_scrollpanel_TScrollPanel_FitToViewport
	,_maxgui_proxygadgets_scrollpanel_TScrollPanel_Update
	,_maxgui_proxygadgets_scrollpanel_TScrollPanel_AddVerticalScroll_iii
	,_maxgui_proxygadgets_scrollpanel_TScrollPanel_RemoveVerticalScroll
	,_maxgui_proxygadgets_scrollpanel_TScrollPanel_AddHorizontalScroll_iii
	,_maxgui_proxygadgets_scrollpanel_TScrollPanel_RemoveHorizontalScroll
	,_maxgui_proxygadgets_scrollpanel_TScrollPanel_eventHook_iTObjectTObject
	,maxgui_proxygadgets_scrollpanel_TScrollPanel_eventHandler_TObject_iTObjectTObject
	,maxgui_proxygadgets_scrollpanel_TScrollPanel_CheckParent_i_TTGadgetTTGadget
};

void _maxgui_proxygadgets_scrollpanel_TScrollClient_New(struct maxgui_proxygadgets_scrollpanel_TScrollClient_obj* o) {
	_maxgui_maxgui_gadget_TProxyGadget_New((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o);
	o->clas = &maxgui_proxygadgets_scrollpanel_TScrollClient;
}
BBINT _maxgui_proxygadgets_scrollpanel_TScrollClient_SetShape_iiii(struct maxgui_proxygadgets_scrollpanel_TScrollClient_obj* o,BBINT bbt_x,BBINT bbt_y,BBINT bbt_w,BBINT bbt_h){
	((struct maxgui_proxygadgets_scrollpanel_TScrollClient_obj*)bbNullObjectTest(o));
	BBINT bbt_i=0;
	BBARRAY volatile bbt_arrDimensions=&bbEmptyArray;
	BBARRAY volatile bbt_tmpDimensions=&bbEmptyArray;
	struct BBDebugScope_8 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetShape",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TScrollClient",
				.var_address=&o
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
				"i",
				"i",
				.var_address=&bbt_i
			},
			{
				BBDEBUGDECL_LOCAL,
				"arrDimensions",
				"[][]i",
				.var_address=&bbt_arrDimensions
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 497, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_i=0;
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 497, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_arrDimensions=&bbEmptyArray;
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 497, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_tmpDimensions=&bbEmptyArray;
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 499, 0};
	bbOnDebugEnterStm(&__stmt_3);
	struct brl_linkedlist_TList_obj* bbt_2;
	struct brl_linkedlist_TListEnum_obj* bbt_=(struct brl_linkedlist_TListEnum_obj*)(((struct brl_linkedlist_TList_obj*)((struct brl_linkedlist_TList_obj*)bbNullObjectTest((bbt_2 = ((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(o))->_maxgui_maxgui_gadget_tproxygadget_proxy ))->_maxgui_maxgui_gadget_tgadget_kids ))))->clas)->m_ObjectEnumerator((struct brl_linkedlist_TList_obj*)bbt_2);
	while(((struct brl_linkedlist_TListEnum_obj*)bbNullObjectTest(bbt_))->clas->m_HasNext((struct brl_linkedlist_TListEnum_obj*)bbt_)!=0){
		struct maxgui_maxgui_gadget_TGadget_obj* bbt_tmpChild=(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
		struct BBDebugScope_1 __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_LOCAL,
					"tmpChild",
					":TGadget",
					.var_address=&bbt_tmpChild
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		bbt_tmpChild=(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)((struct brl_linkedlist_TListEnum_obj*)bbNullObjectTest(bbt_))->clas->m_NextObject((struct brl_linkedlist_TListEnum_obj*)bbt_),(BBClass*)&maxgui_maxgui_gadget_TGadget));
		if(bbt_tmpChild==&bbNullObject){
			bbOnDebugLeaveScope();
			continue;
		}
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 500, 0};
		bbOnDebugEnterStm(&__stmt_0);
		BBINT bbt_3[]={maxgui_maxgui_GadgetX((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_tmpChild),maxgui_maxgui_GadgetY((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_tmpChild),maxgui_maxgui_GadgetWidth((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_tmpChild),maxgui_maxgui_GadgetHeight((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_tmpChild)};
		BBARRAY bbt_4 = bbArrayFromData("i",4,bbt_3);
		bbt_tmpDimensions=bbt_4;
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 501, 0};
		bbOnDebugEnterStm(&__stmt_1);
		BBARRAY bbt_5[]={bbt_tmpDimensions};
		BBARRAY bbt_6 = bbArrayFromData("[]i",1,bbt_5);
		bbt_arrDimensions=bbArrayConcat("[]i",bbt_arrDimensions,bbt_6);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 504, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(o));
	((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(o));
	(&maxgui_proxygadgets_scrollpanel_TScrollClient)->super->m_SetShape_iiii((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o,((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)->clas->m_GetXPos((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o),((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)->clas->m_GetYPos((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o),bbt_w,bbt_h);
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 505, 0};
	bbOnDebugEnterStm(&__stmt_5);
	struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* bbt_7;
	(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest((bbt_7 = ((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbObjectDowncast((BBOBJECT)((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(o))->_maxgui_maxgui_gadget_tproxygadget_proxy ))->_maxgui_maxgui_gadget_tgadget_parent ))->_maxgui_maxgui_gadget_tgadget_parent ))->_maxgui_maxgui_gadget_tgadget_source ,(BBClass*)&maxgui_proxygadgets_scrollpanel_TScrollPanel))))))->clas)->m_Update((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbt_7);
	struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 507, 0};
	bbOnDebugEnterStm(&__stmt_6);
	struct brl_linkedlist_TList_obj* bbt_9;
	struct brl_linkedlist_TListEnum_obj* bbt_8=(struct brl_linkedlist_TListEnum_obj*)(((struct brl_linkedlist_TList_obj*)((struct brl_linkedlist_TList_obj*)bbNullObjectTest((bbt_9 = ((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(o))->_maxgui_maxgui_gadget_tproxygadget_proxy ))->_maxgui_maxgui_gadget_tgadget_kids ))))->clas)->m_ObjectEnumerator((struct brl_linkedlist_TList_obj*)bbt_9);
	while(((struct brl_linkedlist_TListEnum_obj*)bbNullObjectTest(bbt_8))->clas->m_HasNext((struct brl_linkedlist_TListEnum_obj*)bbt_8)!=0){
		struct maxgui_maxgui_gadget_TGadget_obj* bbt_tmpChild2=(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
		struct BBDebugScope_1 __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_LOCAL,
					"tmpChild",
					":TGadget",
					.var_address=&bbt_tmpChild2
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		bbt_tmpChild2=(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)((struct brl_linkedlist_TListEnum_obj*)bbNullObjectTest(bbt_8))->clas->m_NextObject((struct brl_linkedlist_TListEnum_obj*)bbt_8),(BBClass*)&maxgui_maxgui_gadget_TGadget));
		if(bbt_tmpChild2==&bbNullObject){
			bbOnDebugLeaveScope();
			continue;
		}
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 508, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_tmpDimensions=((BBARRAY*)BBARRAYDATAINDEX((bbt_arrDimensions),(bbt_arrDimensions)->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)];
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 508, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_i+=1;
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 509, 0};
		bbOnDebugEnterStm(&__stmt_2);
		maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_tmpChild2,((BBINT*)BBARRAYDATAINDEX((bbt_tmpDimensions),(bbt_tmpDimensions)->dims,0U))[0U],((BBINT*)BBARRAYDATAINDEX((bbt_tmpDimensions),(bbt_tmpDimensions)->dims,1U))[1U],((BBINT*)BBARRAYDATAINDEX((bbt_tmpDimensions),(bbt_tmpDimensions)->dims,2U))[2U],((BBINT*)BBARRAYDATAINDEX((bbt_tmpDimensions),(bbt_tmpDimensions)->dims,3U))[3U]);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_scrollpanel_TScrollClient_SetLayout_iiii(struct maxgui_proxygadgets_scrollpanel_TScrollClient_obj* o,BBINT bbt_lft,BBINT bbt_rht,BBINT bbt_top,BBINT bbt_bot){
	((struct maxgui_proxygadgets_scrollpanel_TScrollClient_obj*)bbNullObjectTest(o));
	struct BBDebugScope_5 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetLayout",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TScrollClient",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"lft",
				"i",
				.var_address=&bbt_lft
			},
			{
				BBDEBUGDECL_LOCAL,
				"rht",
				"i",
				.var_address=&bbt_rht
			},
			{
				BBDEBUGDECL_LOCAL,
				"top",
				"i",
				.var_address=&bbt_top
			},
			{
				BBDEBUGDECL_LOCAL,
				"bot",
				"i",
				.var_address=&bbt_bot
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	bbOnDebugLeaveScope();
	return 0;
}
struct BBDebugScope_3 maxgui_proxygadgets_scrollpanel_TScrollClient_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TScrollClient",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_scrollpanel_TScrollClient_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetShape",
			"(i,i,i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_scrollpanel_TScrollClient_SetShape_iiii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetLayout",
			"(i,i,i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_scrollpanel_TScrollClient_SetLayout_iiii
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_maxgui_proxygadgets_scrollpanel_TScrollClient maxgui_proxygadgets_scrollpanel_TScrollClient={
	&maxgui_maxgui_gadget_TProxyGadget,
	bbObjectFree,
	(BBDebugScope*)&maxgui_proxygadgets_scrollpanel_TScrollClient_scope,
	sizeof(struct maxgui_proxygadgets_scrollpanel_TScrollClient_obj),
	(void (*)(BBOBJECT))_maxgui_proxygadgets_scrollpanel_TScrollClient_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
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
	,_maxgui_proxygadgets_scrollpanel_TScrollClient_SetShape_iiii
	,_maxgui_maxgui_gadget_TGadget_SetArea_iiii
	,_maxgui_maxgui_gadget_TGadget_SetRect_iiii
	,_maxgui_maxgui_gadget_TGadget_LockLayout
	,_maxgui_proxygadgets_scrollpanel_TScrollClient_SetLayout_iiii
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
	,_maxgui_maxgui_gadget_TProxyGadget_CleanUp
	,_maxgui_maxgui_gadget_TProxyGadget_Free
	,_maxgui_maxgui_gadget_TProxyGadget_Rethink
	,_maxgui_maxgui_gadget_TProxyGadget_ClientWidth
	,_maxgui_maxgui_gadget_TProxyGadget_ClientHeight
	,_maxgui_maxgui_gadget_TProxyGadget_Activate_i
	,_maxgui_maxgui_gadget_TProxyGadget_State
	,_maxgui_maxgui_gadget_TProxyGadget_SetText_S
	,_maxgui_maxgui_gadget_TProxyGadget_GetText
	,_maxgui_maxgui_gadget_TProxyGadget_SetFont_TTGuiFont
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
};

struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* maxgui_proxygadgets_scrollpanel_CreateScrollPanel(BBINT bbt_x,BBINT bbt_y,BBINT bbt_w,BBINT bbt_h,struct maxgui_maxgui_gadget_TGadget_obj* bbt_group,BBINT bbt_flags){
	struct BBDebugScope_6 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"CreateScrollPanel",
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
				"flags",
				"i",
				.var_address=&bbt_flags
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 82, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return (struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)maxgui_proxygadgets_scrollpanel_TScrollPanel.m_Create_iiiiTTGadgeti((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbObjectNew((BBClass *)&maxgui_proxygadgets_scrollpanel_TScrollPanel)),bbt_x,bbt_y,bbt_w,bbt_h,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group,bbt_flags);
}
struct maxgui_maxgui_gadget_TGadget_obj* maxgui_proxygadgets_scrollpanel_ScrollPanelClient(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* bbt_scrollpanel){
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"ScrollPanelClient",
		{
			{
				BBDEBUGDECL_LOCAL,
				"scrollpanel",
				":TScrollPanel",
				.var_address=&bbt_scrollpanel
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 96, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return (struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(bbt_scrollpanel))->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ,(BBClass*)&maxgui_maxgui_gadget_TGadget));
}
BBINT maxgui_proxygadgets_scrollpanel_FitScrollPanelClient(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* bbt_scrollpanel,BBINT bbt_fitType){
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"FitScrollPanelClient",
		{
			{
				BBDEBUGDECL_LOCAL,
				"scrollpanel",
				":TScrollPanel",
				.var_address=&bbt_scrollpanel
			},
			{
				BBDEBUGDECL_LOCAL,
				"fitType",
				"i",
				.var_address=&bbt_fitType
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 121, 0};
	bbOnDebugEnterStm(&__stmt_0);
	BBINT bbt_=bbt_fitType;
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 122, 0};
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 123, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(bbt_scrollpanel))->clas->m_FitToChildren_ii((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbt_scrollpanel,0,0);
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 124, 0};
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
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 125, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(bbt_scrollpanel))->clas->m_FitToViewport((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbt_scrollpanel);
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT maxgui_proxygadgets_scrollpanel_ScrollScrollPanel(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* bbt_scrollpanel,BBINT bbt_pX,BBINT bbt_pY){
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"ScrollScrollPanel",
		{
			{
				BBDEBUGDECL_LOCAL,
				"scrollpanel",
				":TScrollPanel",
				.var_address=&bbt_scrollpanel
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
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 173, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(bbt_scrollpanel))->clas->m_ScrollTo_ii((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbt_scrollpanel,bbt_pX,bbt_pY);
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 174, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(bbt_scrollpanel))->clas->m_Update((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbt_scrollpanel);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT maxgui_proxygadgets_scrollpanel_ScrollPanelX(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* bbt_scrollpanel){
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"ScrollPanelX",
		{
			{
				BBDEBUGDECL_LOCAL,
				"scrollpanel",
				":TScrollPanel",
				.var_address=&bbt_scrollpanel
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 185, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return ((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(bbt_scrollpanel))->clas->m_GetXScroll((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbt_scrollpanel);
}
BBINT maxgui_proxygadgets_scrollpanel_ScrollPanelY(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* bbt_scrollpanel){
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"ScrollPanelY",
		{
			{
				BBDEBUGDECL_LOCAL,
				"scrollpanel",
				":TScrollPanel",
				.var_address=&bbt_scrollpanel
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/scrollpanel.bmx", 196, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return ((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbNullObjectTest(bbt_scrollpanel))->clas->m_GetYScroll((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbt_scrollpanel);
}
static int _bb_maxgui_proxygadgets_scrollpanel_inited = 0;
int _bb_maxgui_proxygadgets_scrollpanel(){
	if (!_bb_maxgui_proxygadgets_scrollpanel_inited) {
		_bb_maxgui_proxygadgets_scrollpanel_inited = 1;
		__bb_brl_blitz_blitz();
		__bb_maxgui_maxgui_maxgui();
		bbObjectRegisterType((BBCLASS)&maxgui_proxygadgets_scrollpanel_TScrollPanel);
		bbObjectRegisterType((BBCLASS)&maxgui_proxygadgets_scrollpanel_TScrollClient);
		struct BBDebugScope_14 __scope = {
			BBDEBUGSCOPE_FUNCTION,
			"scrollpanel",
			{
				{
					BBDEBUGDECL_CONST,
					"SCROLLPANEL_SUNKEN",
					"i",
					.const_value=&_s1
				},
				{
					BBDEBUGDECL_CONST,
					"SCROLLPANEL_HALWAYS",
					"i",
					.const_value=&_s2
				},
				{
					BBDEBUGDECL_CONST,
					"SCROLLPANEL_VALWAYS",
					"i",
					.const_value=&_s3
				},
				{
					BBDEBUGDECL_CONST,
					"SCROLLPANEL_HSCALING",
					"i",
					.const_value=&_s4
				},
				{
					BBDEBUGDECL_CONST,
					"SCROLLPANEL_VSCALING",
					"i",
					.const_value=&_s5
				},
				{
					BBDEBUGDECL_CONST,
					"SCROLLPANEL_HNEVER",
					"i",
					.const_value=&_s6
				},
				{
					BBDEBUGDECL_CONST,
					"SCROLLPANEL_VNEVER",
					"i",
					.const_value=&_s7
				},
				{
					BBDEBUGDECL_CONST,
					"SCROLLPANEL_SIZETOKIDS",
					"i",
					.const_value=&_s8
				},
				{
					BBDEBUGDECL_CONST,
					"SCROLLPANEL_SIZETOVIEWPORT",
					"i",
					.const_value=&_s1
				},
				{
					BBDEBUGDECL_CONST,
					"SCROLLPANEL_HOLD",
					"i",
					.const_value=&_s9
				},
				{
					BBDEBUGDECL_CONST,
					"SCROLLPANEL_TOP",
					"i",
					.const_value=&_s8
				},
				{
					BBDEBUGDECL_CONST,
					"SCROLLPANEL_LEFT",
					"i",
					.const_value=&_s8
				},
				{
					BBDEBUGDECL_CONST,
					"SCROLLPANEL_BOTTOM",
					"i",
					.const_value=&_s10
				},
				{
					BBDEBUGDECL_CONST,
					"SCROLLPANEL_RIGHT",
					"i",
					.const_value=&_s10
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