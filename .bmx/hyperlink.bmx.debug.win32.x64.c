#include "hyperlink.bmx.debug.win32.x64.h"
struct BBDebugScope_1{int kind; const char *name; BBDebugDecl decls[2]; };
struct BBDebugScope_10{int kind; const char *name; BBDebugDecl decls[11]; };
struct BBDebugScope_15{int kind; const char *name; BBDebugDecl decls[16]; };
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
struct BBDebugScope_3{int kind; const char *name; BBDebugDecl decls[4]; };
struct BBDebugScope_4{int kind; const char *name; BBDebugDecl decls[5]; };
struct BBDebugScope_8{int kind; const char *name; BBDebugDecl decls[9]; };
void _maxgui_proxygadgets_hyperlink_THyperlinkGadget_New(struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj* o) {
	_maxgui_maxgui_gadget_TProxyGadget_New((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o);
	o->clas = &maxgui_proxygadgets_hyperlink_THyperlinkGadget;
	((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_fnt = (struct maxgui_maxgui_guifont_TGuiFont_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_fnthover = (struct maxgui_maxgui_guifont_TGuiFont_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_hyperlinkstyle = 0;
	BBINT bbt_3[]={0,0,255};
	BBARRAY bbt_4 = bbArrayFromData("i",3,bbt_3);
	BBINT bbt_5[]={255,0,0};
	BBARRAY bbt_6 = bbArrayFromData("i",3,bbt_5);
	BBARRAY bbt_[]={bbt_4,bbt_6};
	BBARRAY bbt_2 = bbArrayFromData("[]i",2,bbt_);
	((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_colors = bbt_2;
	BBINT bbt_7[]={-1,-1};
	BBARRAY bbt_8 = bbArrayFromData("i",2,bbt_7);
	((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_lastclick = bbt_8;
	BBBYTE bbt_r=0;
	BBBYTE bbt_g=0;
	BBBYTE bbt_b=0;
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"New",
		{
			{
				BBDEBUGDECL_LOCAL,
				"r",
				"b",
				.var_address=&bbt_r
			},
			{
				BBDEBUGDECL_LOCAL,
				"g",
				"b",
				.var_address=&bbt_g
			},
			{
				BBDEBUGDECL_LOCAL,
				"b",
				"b",
				.var_address=&bbt_b
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 37, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(!(((BBObject*)maxgui_proxygadgets_hyperlink_THyperlinkGadget_lstHyperlinkGadgets)!= &bbNullObject)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 37, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_proxygadgets_hyperlink_THyperlinkGadget_Initialize_i();
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 38, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_r=0;
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 38, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_g=0;
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 38, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_b=0;
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 39, 0};
	bbOnDebugEnterStm(&__stmt_4);
	maxgui_maxgui_LookupGuiColor(4,(&bbt_r),(&bbt_g),(&bbt_b));
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 40, 0};
	bbOnDebugEnterStm(&__stmt_5);
	BBINT bbt_9[]={((BBINT)bbt_r),((BBINT)bbt_g),((BBINT)bbt_b)};
	BBARRAY bbt_10 = bbArrayFromData("i",3,bbt_9);
	((BBARRAY*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_colors ),(((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_colors )->dims,0U))[0U]=bbt_10;
	bbOnDebugLeaveScope();
}
struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj* _maxgui_proxygadgets_hyperlink_THyperlinkGadget_Create_SiiiiTTGadgetiS(struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj* o,BBSTRING bbt_pUrl,BBINT bbt_x,BBINT bbt_y,BBINT bbt_w,BBINT bbt_h,struct maxgui_maxgui_gadget_TGadget_obj* bbt_group,BBINT bbt_style,BBSTRING bbt_customtext){
	((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o));
	struct maxgui_maxgui_gadget_TGadget_obj* bbt_tmpLabel=(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	struct BBDebugScope_10 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Create",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":THyperlinkGadget",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"pUrl",
				"$",
				.var_address=&bbt_pUrl
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
				"customtext",
				"$",
				.var_address=&bbt_customtext
			},
			{
				BBDEBUGDECL_LOCAL,
				"tmpLabel",
				":TGadget",
				.var_address=&bbt_tmpLabel
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 45, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(!(bbt_customtext!= &bbEmptyString)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 45, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_customtext=bbt_pUrl;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 46, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(((unsigned int)(bbt_style)&3)==3){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 46, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_style&=-4;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 48, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_tmpLabel=(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateLabel(bbt_customtext,bbt_x,bbt_y,bbt_w,bbt_h,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group,((unsigned int)(bbt_style)&31));
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 49, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if(!(((BBObject*)bbt_tmpLabel)!= &bbNullObject)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 49, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return (struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)&bbNullObject;
	}else{
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 49, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_SetGadgetSensitivity((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_tmpLabel,1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 51, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_fnt =(struct maxgui_maxgui_guifont_TGuiFont_obj*)maxgui_maxgui_LookupGuiFont(1,0.00000000000000000,0);
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 52, 0};
	bbOnDebugEnterStm(&__stmt_5);
	((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_fnthover =(struct maxgui_maxgui_guifont_TGuiFont_obj*)maxgui_maxgui_LookupGuiFont(1,0.00000000000000000,4);
	struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 54, 0};
	bbOnDebugEnterStm(&__stmt_6);
	maxgui_maxgui_SetGadgetFont((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_tmpLabel,(struct maxgui_maxgui_guifont_TGuiFont_obj*)((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_fnt ,0);
	struct BBDebugStm __stmt_7 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 56, 0};
	bbOnDebugEnterStm(&__stmt_7);
	if(bbStringCompare(bbt_customtext, bbt_pUrl)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 56, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_SetGadgetToolTip((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_tmpLabel,bbt_pUrl);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_8 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 58, 0};
	bbOnDebugEnterStm(&__stmt_8);
	((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(o));
	((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)->clas->m_SetProxy_TTGadget((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_tmpLabel);
	struct BBDebugStm __stmt_9 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 58, 0};
	bbOnDebugEnterStm(&__stmt_9);
	BBARRAY volatile bbt_=((BBARRAY*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_colors ),(((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_colors )->dims,0U))[0U];
	BBARRAY volatile bbt_2=((BBARRAY*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_colors ),(((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_colors )->dims,0U))[0U];
	BBARRAY volatile bbt_3=((BBARRAY*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_colors ),(((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_colors )->dims,0U))[0U];
	(&maxgui_proxygadgets_hyperlink_THyperlinkGadget)->super->m_SetTextColor_iii((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o,((BBINT*)BBARRAYDATAINDEX((bbt_),(bbt_)->dims,0U))[0U],((BBINT*)BBARRAYDATAINDEX((bbt_2),(bbt_2)->dims,1U))[1U],((BBINT*)BBARRAYDATAINDEX((bbt_3),(bbt_3)->dims,2U))[2U]);
	struct BBDebugStm __stmt_10 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 60, 0};
	bbOnDebugEnterStm(&__stmt_10);
	((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_hyperlinkstyle =bbt_style;
	struct BBDebugStm __stmt_11 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 60, 0};
	bbOnDebugEnterStm(&__stmt_11);
	((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(o))->_maxgui_maxgui_gadget_tgadget_extra =(BBOBJECT)bbt_pUrl;
	struct BBDebugStm __stmt_12 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 61, 0};
	bbOnDebugEnterStm(&__stmt_12);
	((struct brl_linkedlist_TList_obj*)bbNullObjectTest(maxgui_proxygadgets_hyperlink_THyperlinkGadget_lstHyperlinkGadgets))->clas->m_AddLast_TObject((struct brl_linkedlist_TList_obj*)maxgui_proxygadgets_hyperlink_THyperlinkGadget_lstHyperlinkGadgets,(BBOBJECT)o);
	struct BBDebugStm __stmt_13 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 63, 0};
	bbOnDebugEnterStm(&__stmt_13);
	bbOnDebugLeaveScope();
	return (struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)o;
}
struct brl_event_TEvent_obj* _maxgui_proxygadgets_hyperlink_THyperlinkGadget_EventHook_TTEvent(struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj* o,struct brl_event_TEvent_obj* bbt_pEvent){
	((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"EventHook",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":THyperlinkGadget",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"pEvent",
				":TEvent",
				.var_address=&bbt_pEvent
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 69, 0};
	bbOnDebugEnterStm(&__stmt_0);
	BBINT bbt_=((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_pEvent))->_brl_event_tevent_id ;
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 71, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(bbt_==1029){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 72, 0};
		bbOnDebugEnterStm(&__stmt_0);
		BBARRAY volatile bbt_2=((BBARRAY*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_colors ),(((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_colors )->dims,1U))[1U];
		BBARRAY volatile bbt_3=((BBARRAY*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_colors ),(((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_colors )->dims,1U))[1U];
		BBARRAY volatile bbt_4=((BBARRAY*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_colors ),(((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_colors )->dims,1U))[1U];
		(&maxgui_proxygadgets_hyperlink_THyperlinkGadget)->super->m_SetTextColor_iii((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o,((BBINT*)BBARRAYDATAINDEX((bbt_2),(bbt_2)->dims,0U))[0U],((BBINT*)BBARRAYDATAINDEX((bbt_3),(bbt_3)->dims,1U))[1U],((BBINT*)BBARRAYDATAINDEX((bbt_4),(bbt_4)->dims,2U))[2U]);
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 72, 0};
		bbOnDebugEnterStm(&__stmt_1);
		maxgui_maxgui_SetPointer(12);
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 73, 0};
		bbOnDebugEnterStm(&__stmt_2);
		(&maxgui_proxygadgets_hyperlink_THyperlinkGadget)->super->m_SetFont_TTGuiFont((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o,(struct maxgui_maxgui_guifont_TGuiFont_obj*)((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_fnthover );
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 74, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(bbt_==1030){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 75, 0};
			bbOnDebugEnterStm(&__stmt_0);
			BBARRAY volatile bbt_5=((BBARRAY*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_colors ),(((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_colors )->dims,0U))[0U];
			BBARRAY volatile bbt_6=((BBARRAY*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_colors ),(((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_colors )->dims,0U))[0U];
			BBARRAY volatile bbt_7=((BBARRAY*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_colors ),(((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_colors )->dims,0U))[0U];
			(&maxgui_proxygadgets_hyperlink_THyperlinkGadget)->super->m_SetTextColor_iii((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o,((BBINT*)BBARRAYDATAINDEX((bbt_5),(bbt_5)->dims,0U))[0U],((BBINT*)BBARRAYDATAINDEX((bbt_6),(bbt_6)->dims,1U))[1U],((BBINT*)BBARRAYDATAINDEX((bbt_7),(bbt_7)->dims,2U))[2U]);
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 75, 0};
			bbOnDebugEnterStm(&__stmt_1);
			maxgui_maxgui_SetPointer(0);
			struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 76, 0};
			bbOnDebugEnterStm(&__stmt_2);
			(&maxgui_proxygadgets_hyperlink_THyperlinkGadget)->super->m_SetFont_TTGuiFont((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o,(struct maxgui_maxgui_guifont_TGuiFont_obj*)((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_fnt );
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
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 77, 0};
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
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 77, 0};
				bbOnDebugEnterStm(&__stmt_0);
				if((((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_lastclick ),(((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_lastclick )->dims,0U))[0U]!=((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_pEvent))->_brl_event_tevent_x ) || (((BBINT*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_lastclick ),(((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_lastclick )->dims,1U))[1U]!=((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_pEvent))->_brl_event_tevent_y )){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 77, 0};
					bbOnDebugEnterStm(&__stmt_0);
					BBINT bbt_8[]={((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_pEvent))->_brl_event_tevent_x ,((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_pEvent))->_brl_event_tevent_y };
					BBARRAY bbt_9 = bbArrayFromData("i",2,bbt_8);
					((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_lastclick =bbt_9;
					struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 77, 0};
					bbOnDebugEnterStm(&__stmt_1);
					brl_system_OpenURL((BBString *)bbObjectDowncast((BBOBJECT)((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(o))->_maxgui_maxgui_gadget_tgadget_extra ,(BBClass*)&bbStringClass));
					bbOnDebugLeaveScope();
				}
				bbOnDebugLeaveScope();
			}
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 81, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbOnDebugLeaveScope();
	return (struct brl_event_TEvent_obj*)&bbNullObject;
}
BBINT _maxgui_proxygadgets_hyperlink_THyperlinkGadget_SetFont_TTGuiFont(struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj* o,struct maxgui_maxgui_guifont_TGuiFont_obj* bbt_font){
	((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetFont",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":THyperlinkGadget",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"font",
				":TGuiFont",
				.var_address=&bbt_font
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 86, 0};
	bbOnDebugEnterStm(&__stmt_0);
	(&maxgui_proxygadgets_hyperlink_THyperlinkGadget)->super->m_SetFont_TTGuiFont((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o,(struct maxgui_maxgui_guifont_TGuiFont_obj*)bbt_font);
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 87, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_fnt =(struct maxgui_maxgui_guifont_TGuiFont_obj*)bbt_font;
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 88, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_fnthover =(struct maxgui_maxgui_guifont_TGuiFont_obj*)bbt_font;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_hyperlink_THyperlinkGadget_SetColor_iii(struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj* o,BBINT bbt_r,BBINT bbt_g,BBINT bbt_b){
	((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o));
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetColor",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":THyperlinkGadget",
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 92, 0};
	bbOnDebugEnterStm(&__stmt_0);
	BBARRAY volatile bbt_=((BBARRAY*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_colors ),(((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_colors )->dims,1U))[1U];
	((BBINT*)BBARRAYDATAINDEX((bbt_),(bbt_)->dims,0U))[0U]=bbt_r;
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 92, 0};
	bbOnDebugEnterStm(&__stmt_1);
	BBARRAY volatile bbt_2=((BBARRAY*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_colors ),(((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_colors )->dims,1U))[1U];
	((BBINT*)BBARRAYDATAINDEX((bbt_2),(bbt_2)->dims,1U))[1U]=bbt_g;
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 92, 0};
	bbOnDebugEnterStm(&__stmt_2);
	BBARRAY volatile bbt_3=((BBARRAY*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_colors ),(((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_colors )->dims,1U))[1U];
	((BBINT*)BBARRAYDATAINDEX((bbt_3),(bbt_3)->dims,2U))[2U]=bbt_b;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_hyperlink_THyperlinkGadget_SetTextColor_iii(struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj* o,BBINT bbt_r,BBINT bbt_g,BBINT bbt_b){
	((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o));
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetTextColor",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":THyperlinkGadget",
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 96, 0};
	bbOnDebugEnterStm(&__stmt_0);
	BBARRAY volatile bbt_=((BBARRAY*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_colors ),(((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_colors )->dims,0U))[0U];
	((BBINT*)BBARRAYDATAINDEX((bbt_),(bbt_)->dims,0U))[0U]=bbt_r;
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 96, 0};
	bbOnDebugEnterStm(&__stmt_1);
	BBARRAY volatile bbt_2=((BBARRAY*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_colors ),(((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_colors )->dims,0U))[0U];
	((BBINT*)BBARRAYDATAINDEX((bbt_2),(bbt_2)->dims,1U))[1U]=bbt_g;
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 96, 0};
	bbOnDebugEnterStm(&__stmt_2);
	BBARRAY volatile bbt_3=((BBARRAY*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_colors ),(((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_colors )->dims,0U))[0U];
	((BBINT*)BBARRAYDATAINDEX((bbt_3),(bbt_3)->dims,2U))[2U]=bbt_b;
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 97, 0};
	bbOnDebugEnterStm(&__stmt_3);
	BBARRAY volatile bbt_4=((BBARRAY*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_colors ),(((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_colors )->dims,0U))[0U];
	BBARRAY volatile bbt_5=((BBARRAY*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_colors ),(((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_colors )->dims,0U))[0U];
	BBARRAY volatile bbt_6=((BBARRAY*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_colors ),(((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_hyperlink_thyperlinkgadget_colors )->dims,0U))[0U];
	(&maxgui_proxygadgets_hyperlink_THyperlinkGadget)->super->m_SetTextColor_iii((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o,((BBINT*)BBARRAYDATAINDEX((bbt_4),(bbt_4)->dims,0U))[0U],((BBINT*)BBARRAYDATAINDEX((bbt_5),(bbt_5)->dims,1U))[1U],((BBINT*)BBARRAYDATAINDEX((bbt_6),(bbt_6)->dims,2U))[2U]);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_hyperlink_THyperlinkGadget_CleanUp(struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj* o){
	((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"CleanUp",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":THyperlinkGadget",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 101, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct brl_linkedlist_TList_obj*)bbNullObjectTest(maxgui_proxygadgets_hyperlink_THyperlinkGadget_lstHyperlinkGadgets))->clas->m_Remove_TObject((struct brl_linkedlist_TList_obj*)maxgui_proxygadgets_hyperlink_THyperlinkGadget_lstHyperlinkGadgets,(BBOBJECT)o);
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 102, 0};
	bbOnDebugEnterStm(&__stmt_1);
	(&maxgui_proxygadgets_hyperlink_THyperlinkGadget)->super->m_CleanUp((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT maxgui_proxygadgets_hyperlink_THyperlinkGadget_Initialize_i(){
	struct BBDebugScope __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Initialize",
		{
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 106, 0};
	bbOnDebugEnterStm(&__stmt_0);
	maxgui_proxygadgets_hyperlink_THyperlinkGadget_lstHyperlinkGadgets=(struct brl_linkedlist_TList_obj*)(struct brl_linkedlist_TList_obj*)bbObjectNew((BBClass *)&brl_linkedlist_TList);
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 107, 0};
	bbOnDebugEnterStm(&__stmt_1);
	brl_hook_AddHook(brl_event_EmitEventHook,maxgui_proxygadgets_hyperlink_THyperlinkGadget_eventHandler_TObject_iTObjectTObject,(BBOBJECT)&bbNullObject,-1);
	bbOnDebugLeaveScope();
	return 0;
}
BBOBJECT maxgui_proxygadgets_hyperlink_THyperlinkGadget_eventHandler_TObject_iTObjectTObject(BBINT bbt_pID,BBOBJECT bbt_pData,BBOBJECT bbt_pContext){
	struct brl_event_TEvent_obj* bbt_pEvent=(struct brl_event_TEvent_obj*)&bbNullObject;
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
				"pEvent",
				":TEvent",
				.var_address=&bbt_pEvent
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 111, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_pEvent=(struct brl_event_TEvent_obj*)((struct brl_event_TEvent_obj*)bbObjectDowncast((BBOBJECT)bbt_pData,(BBClass*)&brl_event_TEvent));
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 113, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(((BBObject*)bbt_pEvent)!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 114, 0};
		bbOnDebugEnterStm(&__stmt_0);
		struct brl_linkedlist_TListEnum_obj* bbt_=(struct brl_linkedlist_TListEnum_obj*)((struct brl_linkedlist_TList_obj*)bbNullObjectTest(maxgui_proxygadgets_hyperlink_THyperlinkGadget_lstHyperlinkGadgets))->clas->m_ObjectEnumerator((struct brl_linkedlist_TList_obj*)maxgui_proxygadgets_hyperlink_THyperlinkGadget_lstHyperlinkGadgets);
		while(((struct brl_linkedlist_TListEnum_obj*)bbNullObjectTest(bbt_))->clas->m_HasNext((struct brl_linkedlist_TListEnum_obj*)bbt_)!=0){
			struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj* bbt_tmpHyperlinkGadget=(struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)&bbNullObject;
			struct BBDebugScope_1 __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					{
						BBDEBUGDECL_LOCAL,
						"tmpHyperlinkGadget",
						":THyperlinkGadget",
						.var_address=&bbt_tmpHyperlinkGadget
					},
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			bbt_tmpHyperlinkGadget=(struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbObjectDowncast((BBOBJECT)((struct brl_linkedlist_TListEnum_obj*)bbNullObjectTest(bbt_))->clas->m_NextObject((struct brl_linkedlist_TListEnum_obj*)bbt_),(BBClass*)&maxgui_proxygadgets_hyperlink_THyperlinkGadget));
			if(bbt_tmpHyperlinkGadget==&bbNullObject){
				bbOnDebugLeaveScope();
				continue;
			}
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 115, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if(bbt_tmpHyperlinkGadget==((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_pEvent))->_brl_event_tevent_source ){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 115, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				return (BBOBJECT)((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbNullObjectTest(bbt_tmpHyperlinkGadget))->clas->m_EventHook_TTEvent((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbt_tmpHyperlinkGadget,(struct brl_event_TEvent_obj*)bbt_pEvent);
			}
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 119, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbOnDebugLeaveScope();
	return (BBOBJECT)bbt_pData;
}
struct brl_linkedlist_TList_obj* maxgui_proxygadgets_hyperlink_THyperlinkGadget_lstHyperlinkGadgets;
struct BBDebugScope_15 maxgui_proxygadgets_hyperlink_THyperlinkGadget_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"THyperlinkGadget",
	{
		{
			BBDEBUGDECL_FIELD,
			"fnt",
			":TGuiFont",
			.field_offset=offsetof(struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj,_maxgui_proxygadgets_hyperlink_thyperlinkgadget_fnt)
		},
		{
			BBDEBUGDECL_FIELD,
			"fntHover",
			":TGuiFont",
			.field_offset=offsetof(struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj,_maxgui_proxygadgets_hyperlink_thyperlinkgadget_fnthover)
		},
		{
			BBDEBUGDECL_FIELD,
			"hyperlinkstyle",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj,_maxgui_proxygadgets_hyperlink_thyperlinkgadget_hyperlinkstyle)
		},
		{
			BBDEBUGDECL_FIELD,
			"colors",
			"[][]i",
			.field_offset=offsetof(struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj,_maxgui_proxygadgets_hyperlink_thyperlinkgadget_colors)
		},
		{
			BBDEBUGDECL_FIELD,
			"lastclick",
			"[]i",
			.field_offset=offsetof(struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj,_maxgui_proxygadgets_hyperlink_thyperlinkgadget_lastclick)
		},
		{
			BBDEBUGDECL_GLOBAL,
			"lstHyperlinkGadgets",
			":TList",
			.var_address=(void*)&maxgui_proxygadgets_hyperlink_THyperlinkGadget_lstHyperlinkGadgets
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_hyperlink_THyperlinkGadget_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Create",
			"($,i,i,i,i,:TGadget,i,$):THyperlinkGadget",
			.var_address=(void*)&_maxgui_proxygadgets_hyperlink_THyperlinkGadget_Create_SiiiiTTGadgetiS
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"EventHook",
			"(:TEvent):TEvent",
			.var_address=(void*)&_maxgui_proxygadgets_hyperlink_THyperlinkGadget_EventHook_TTEvent
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetFont",
			"(:TGuiFont)i",
			.var_address=(void*)&_maxgui_proxygadgets_hyperlink_THyperlinkGadget_SetFont_TTGuiFont
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetColor",
			"(i,i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_hyperlink_THyperlinkGadget_SetColor_iii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetTextColor",
			"(i,i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_hyperlink_THyperlinkGadget_SetTextColor_iii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"CleanUp",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_hyperlink_THyperlinkGadget_CleanUp
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Initialize",
			"()i",
			.var_address=(void*)&maxgui_proxygadgets_hyperlink_THyperlinkGadget_Initialize_i
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"eventHandler",
			"(i,:Object,:Object):Object",
			.var_address=(void*)&maxgui_proxygadgets_hyperlink_THyperlinkGadget_eventHandler_TObject_iTObjectTObject
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_maxgui_proxygadgets_hyperlink_THyperlinkGadget maxgui_proxygadgets_hyperlink_THyperlinkGadget={
	&maxgui_maxgui_gadget_TProxyGadget,
	bbObjectFree,
	(BBDebugScope*)&maxgui_proxygadgets_hyperlink_THyperlinkGadget_scope,
	sizeof(struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj),
	(void (*)(BBOBJECT))_maxgui_proxygadgets_hyperlink_THyperlinkGadget_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj,_maxgui_proxygadgets_hyperlink_thyperlinkgadget_lastclick) - sizeof(void*) + sizeof(BBARRAY)
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
	,_maxgui_proxygadgets_hyperlink_THyperlinkGadget_CleanUp
	,_maxgui_maxgui_gadget_TProxyGadget_Free
	,_maxgui_maxgui_gadget_TProxyGadget_Rethink
	,_maxgui_maxgui_gadget_TProxyGadget_ClientWidth
	,_maxgui_maxgui_gadget_TProxyGadget_ClientHeight
	,_maxgui_maxgui_gadget_TProxyGadget_Activate_i
	,_maxgui_maxgui_gadget_TProxyGadget_State
	,_maxgui_maxgui_gadget_TProxyGadget_SetText_S
	,_maxgui_maxgui_gadget_TProxyGadget_GetText
	,_maxgui_proxygadgets_hyperlink_THyperlinkGadget_SetFont_TTGuiFont
	,_maxgui_proxygadgets_hyperlink_THyperlinkGadget_SetColor_iii
	,_maxgui_maxgui_gadget_TProxyGadget_RemoveColor
	,_maxgui_maxgui_gadget_TProxyGadget_SetAlpha_f
	,_maxgui_proxygadgets_hyperlink_THyperlinkGadget_SetTextColor_iii
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
	,_maxgui_proxygadgets_hyperlink_THyperlinkGadget_Create_SiiiiTTGadgetiS
	,_maxgui_proxygadgets_hyperlink_THyperlinkGadget_EventHook_TTEvent
	,maxgui_proxygadgets_hyperlink_THyperlinkGadget_Initialize_i
	,maxgui_proxygadgets_hyperlink_THyperlinkGadget_eventHandler_TObject_iTObjectTObject
};

struct maxgui_maxgui_gadget_TGadget_obj* maxgui_proxygadgets_hyperlink_CreateHyperlink(BBSTRING bbt_url,BBINT bbt_x,BBINT bbt_y,BBINT bbt_w,BBINT bbt_h,struct maxgui_maxgui_gadget_TGadget_obj* bbt_group,BBINT bbt_style,BBSTRING bbt_customtext){
	struct BBDebugScope_8 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"CreateHyperlink",
		{
			{
				BBDEBUGDECL_LOCAL,
				"url",
				"$",
				.var_address=&bbt_url
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
				"customtext",
				"$",
				.var_address=&bbt_customtext
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/hyperlink.bmx", 21, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return (struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)maxgui_proxygadgets_hyperlink_THyperlinkGadget.m_Create_SiiiiTTGadgetiS((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)((struct maxgui_proxygadgets_hyperlink_THyperlinkGadget_obj*)bbObjectNew((BBClass *)&maxgui_proxygadgets_hyperlink_THyperlinkGadget)),bbt_url,bbt_x,bbt_y,bbt_w,bbt_h,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group,bbt_style,bbt_customtext),(BBClass*)&maxgui_maxgui_gadget_TGadget));
}
static int _bb_maxgui_proxygadgets_hyperlink_inited = 0;
int _bb_maxgui_proxygadgets_hyperlink(){
	if (!_bb_maxgui_proxygadgets_hyperlink_inited) {
		_bb_maxgui_proxygadgets_hyperlink_inited = 1;
		GC_add_roots(&maxgui_proxygadgets_hyperlink_THyperlinkGadget_lstHyperlinkGadgets, &maxgui_proxygadgets_hyperlink_THyperlinkGadget_lstHyperlinkGadgets + 1);
		__bb_brl_blitz_blitz();
		__bb_maxgui_maxgui_maxgui();
		bbObjectRegisterType((BBCLASS)&maxgui_proxygadgets_hyperlink_THyperlinkGadget);
		maxgui_proxygadgets_hyperlink_THyperlinkGadget_lstHyperlinkGadgets=(struct brl_linkedlist_TList_obj*)&bbNullObject;
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_FUNCTION,
			"hyperlink",
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