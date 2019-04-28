#include "CheckListBox.bmx.debug.win32.x64.h"
static BBString _s0={
	&bbStringClass,
	1,
	{44}
};
static BBString _s2={
	&bbStringClass,
	16,
	{69,120,116,114,97,32,105,115,32,78,85,76,76,46,46,46}
};
static BBString _s1={
	&bbStringClass,
	18,
	{73,110,100,101,120,32,111,117,116,32,111,102,32,114,97,110,103
	,101}
};
struct BBDebugScope_1{int kind; const char *name; BBDebugDecl decls[2]; };
struct BBDebugScope_13{int kind; const char *name; BBDebugDecl decls[14]; };
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
struct BBDebugScope_3{int kind; const char *name; BBDebugDecl decls[4]; };
struct BBDebugScope_4{int kind; const char *name; BBDebugDecl decls[5]; };
struct BBDebugScope_41{int kind; const char *name; BBDebugDecl decls[42]; };
struct BBDebugScope_5{int kind; const char *name; BBDebugDecl decls[6]; };
struct BBDebugScope_6{int kind; const char *name; BBDebugDecl decls[7]; };
struct BBDebugScope_7{int kind; const char *name; BBDebugDecl decls[8]; };
struct BBDebugScope_8{int kind; const char *name; BBDebugDecl decls[9]; };
void _maxgui_proxygadgets_checklistbox_SingleItem_New(struct maxgui_proxygadgets_checklistbox_SingleItem_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &maxgui_proxygadgets_checklistbox_SingleItem;
	((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_singleitem_panel = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_singleitem_check = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_singleitem_label = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_singleitem_icon = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_singleitem_iconnumber = 0;
	((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_singleitem_parent = (struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_singleitem_item_h = 20;
}
struct maxgui_proxygadgets_checklistbox_SingleItem_obj* maxgui_proxygadgets_checklistbox_SingleItem_Create_TSingleItem_TTchecklistboxSSii(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* bbt_parent,BBSTRING bbt_txt,BBSTRING bbt_tip,BBINT bbt_icon,BBINT bbt_state){
	struct maxgui_proxygadgets_checklistbox_SingleItem_obj* bbt_ss=(struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)&bbNullObject;
	BBINT bbt_yy=0;
	struct BBDebugScope_7 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Create",
		{
			{
				BBDEBUGDECL_LOCAL,
				"parent",
				":Tchecklistbox",
				.var_address=&bbt_parent
			},
			{
				BBDEBUGDECL_LOCAL,
				"txt",
				"$",
				.var_address=&bbt_txt
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
				"state",
				"i",
				.var_address=&bbt_state
			},
			{
				BBDEBUGDECL_LOCAL,
				"ss",
				":SingleItem",
				.var_address=&bbt_ss
			},
			{
				BBDEBUGDECL_LOCAL,
				"yy",
				"i",
				.var_address=&bbt_yy
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 65, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_ss=(struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)(struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbObjectNew((BBClass *)&maxgui_proxygadgets_checklistbox_SingleItem);
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 66, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_yy=(((((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(bbt_parent))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ->scales[0])*((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_ss))->_maxgui_proxygadgets_checklistbox_singleitem_item_h )-((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_ss))->_maxgui_proxygadgets_checklistbox_singleitem_item_h );
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 68, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_ss))->_maxgui_proxygadgets_checklistbox_singleitem_panel =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreatePanel(0,bbt_yy,maxgui_maxgui_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(bbt_parent))->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel ),((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_ss))->_maxgui_proxygadgets_checklistbox_singleitem_item_h ,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(bbt_parent))->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel ,4,&bbEmptyString);
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 69, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_ss))->_maxgui_proxygadgets_checklistbox_singleitem_check =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateButton(&bbEmptyString,5,0,16,(((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_ss))->_maxgui_proxygadgets_checklistbox_singleitem_item_h -1),(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_ss))->_maxgui_proxygadgets_checklistbox_singleitem_panel ,2);
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 70, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_ss))->_maxgui_proxygadgets_checklistbox_singleitem_label =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateLabel(bbt_txt,40,2,maxgui_maxgui_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_ss))->_maxgui_proxygadgets_checklistbox_singleitem_panel ),((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_ss))->_maxgui_proxygadgets_checklistbox_singleitem_item_h ,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_ss))->_maxgui_proxygadgets_checklistbox_singleitem_panel ,0);
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 71, 0};
	bbOnDebugEnterStm(&__stmt_5);
	((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_ss))->_maxgui_proxygadgets_checklistbox_singleitem_icon =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreatePanel(20,1,18,(((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_ss))->_maxgui_proxygadgets_checklistbox_singleitem_item_h -2),(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_ss))->_maxgui_proxygadgets_checklistbox_singleitem_panel ,0,&bbEmptyString);
	struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 73, 0};
	bbOnDebugEnterStm(&__stmt_6);
	maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_ss))->_maxgui_proxygadgets_checklistbox_singleitem_panel ,1,1,1,2);
	struct BBDebugStm __stmt_7 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 74, 0};
	bbOnDebugEnterStm(&__stmt_7);
	maxgui_maxgui_SetGadgetSensitivity((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_ss))->_maxgui_proxygadgets_checklistbox_singleitem_label ,1);
	struct BBDebugStm __stmt_8 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 79, 0};
	bbOnDebugEnterStm(&__stmt_8);
	if((maxgui_maxgui_GadgetY((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_ss))->_maxgui_proxygadgets_checklistbox_singleitem_panel )<0) || (maxgui_maxgui_GadgetY((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_ss))->_maxgui_proxygadgets_checklistbox_singleitem_panel )>(maxgui_maxgui_GadgetY((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(bbt_parent))->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel )+maxgui_maxgui_GadgetHeight((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(bbt_parent))->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel )))){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 79, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_HideGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_ss))->_maxgui_proxygadgets_checklistbox_singleitem_panel );
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_9 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 82, 0};
	bbOnDebugEnterStm(&__stmt_9);
	((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_ss))->_maxgui_proxygadgets_checklistbox_singleitem_parent =(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbt_parent;
	struct BBDebugStm __stmt_10 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 84, 0};
	bbOnDebugEnterStm(&__stmt_10);
	maxgui_maxgui_SetGadgetToolTip((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_ss))->_maxgui_proxygadgets_checklistbox_singleitem_label ,bbt_tip);
	struct BBDebugStm __stmt_11 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 85, 0};
	bbOnDebugEnterStm(&__stmt_11);
	maxgui_maxgui_SetButtonState((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_ss))->_maxgui_proxygadgets_checklistbox_singleitem_check ,bbt_state);
	struct BBDebugStm __stmt_12 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 86, 0};
	bbOnDebugEnterStm(&__stmt_12);
	bbOnDebugLeaveScope();
	return (struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbt_ss;
}
BBINT _maxgui_proxygadgets_checklistbox_SingleItem_Change_SSii(struct maxgui_proxygadgets_checklistbox_SingleItem_obj* o,BBSTRING bbt_txt,BBSTRING bbt_tip,BBINT bbt__iconNumber,BBINT bbt_state){
	((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(o));
	struct BBDebugScope_5 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Change",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":SingleItem",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"txt",
				"$",
				.var_address=&bbt_txt
			},
			{
				BBDEBUGDECL_LOCAL,
				"tip",
				"$",
				.var_address=&bbt_tip
			},
			{
				BBDEBUGDECL_LOCAL,
				"_iconNumber",
				"i",
				.var_address=&bbt__iconNumber
			},
			{
				BBDEBUGDECL_LOCAL,
				"state",
				"i",
				.var_address=&bbt_state
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 91, 0};
	bbOnDebugEnterStm(&__stmt_0);
	maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_singleitem_label ,bbt_txt);
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 92, 0};
	bbOnDebugEnterStm(&__stmt_1);
	maxgui_maxgui_SetGadgetToolTip((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_singleitem_label ,bbt_tip);
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 93, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(bbt__iconNumber>-1){
		struct brl_pixmap_TPixmap_obj* bbt_px=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
		struct BBDebugScope_1 __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_LOCAL,
					"px",
					":TPixmap",
					.var_address=&bbt_px
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 94, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_px=(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_singleitem_parent ))->_maxgui_proxygadgets_checklistbox_tchecklistbox_myiconstrip ,bbt__iconNumber);
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 95, 0};
		bbOnDebugEnterStm(&__stmt_1);
		maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_singleitem_icon ,(struct brl_pixmap_TPixmap_obj*)bbt_px,1);
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 96, 0};
		bbOnDebugEnterStm(&__stmt_2);
		((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_singleitem_iconnumber =bbt__iconNumber;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 101, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if(bbt_state!=-1){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 101, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_SetButtonState((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_singleitem_check ,bbt_state);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_checklistbox_SingleItem_Clear(struct maxgui_proxygadgets_checklistbox_SingleItem_obj* o){
	((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Clear",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":SingleItem",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 106, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(((BBObject*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_singleitem_label )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 106, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_singleitem_label );
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 107, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(((BBObject*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_singleitem_check )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 107, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_singleitem_check );
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 108, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(((BBObject*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_singleitem_panel )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 108, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_singleitem_panel );
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 109, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if(((BBObject*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_singleitem_icon )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 109, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_singleitem_icon );
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 111, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_singleitem_icon =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 112, 0};
	bbOnDebugEnterStm(&__stmt_5);
	((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_singleitem_label =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 113, 0};
	bbOnDebugEnterStm(&__stmt_6);
	((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_singleitem_check =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	struct BBDebugStm __stmt_7 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 114, 0};
	bbOnDebugEnterStm(&__stmt_7);
	((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_singleitem_panel =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_checklistbox_SingleItem_SetFont_TTGuiFont(struct maxgui_proxygadgets_checklistbox_SingleItem_obj* o,struct maxgui_maxgui_guifont_TGuiFont_obj* bbt_fnt){
	((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetFont",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":SingleItem",
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 118, 0};
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 118, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return -1;
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 119, 0};
	bbOnDebugEnterStm(&__stmt_1);
	maxgui_maxgui_SetGadgetFont((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_singleitem_label ,(struct maxgui_maxgui_guifont_TGuiFont_obj*)bbt_fnt,0);
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 120, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_singleitem_item_h =((BBINT)((maxgui_maxgui_FontSize((struct maxgui_maxgui_guifont_TGuiFont_obj*)bbt_fnt)*2.0000000000000000)+4.0000000000000000));
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 121, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if(((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_singleitem_item_h <20){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 121, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_singleitem_item_h =20;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 122, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_checklistbox_SingleItem_SetEnabled_i(struct maxgui_proxygadgets_checklistbox_SingleItem_obj* o,BBINT bbt_status){
	((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetEnabled",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":SingleItem",
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 127, 0};
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 128, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_singleitem_label );
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 129, 0};
		bbOnDebugEnterStm(&__stmt_1);
		maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_singleitem_check );
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 130, 0};
		bbOnDebugEnterStm(&__stmt_2);
		maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_singleitem_panel );
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 131, 0};
		bbOnDebugEnterStm(&__stmt_3);
		maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_singleitem_icon );
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 133, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_singleitem_label );
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 134, 0};
		bbOnDebugEnterStm(&__stmt_1);
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_singleitem_check );
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 135, 0};
		bbOnDebugEnterStm(&__stmt_2);
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_singleitem_panel );
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 136, 0};
		bbOnDebugEnterStm(&__stmt_3);
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_singleitem_icon );
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
struct BBDebugScope_13 maxgui_proxygadgets_checklistbox_SingleItem_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"SingleItem",
	{
		{
			BBDEBUGDECL_FIELD,
			"panel",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_checklistbox_SingleItem_obj,_maxgui_proxygadgets_checklistbox_singleitem_panel)
		},
		{
			BBDEBUGDECL_FIELD,
			"check",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_checklistbox_SingleItem_obj,_maxgui_proxygadgets_checklistbox_singleitem_check)
		},
		{
			BBDEBUGDECL_FIELD,
			"label",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_checklistbox_SingleItem_obj,_maxgui_proxygadgets_checklistbox_singleitem_label)
		},
		{
			BBDEBUGDECL_FIELD,
			"icon",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_checklistbox_SingleItem_obj,_maxgui_proxygadgets_checklistbox_singleitem_icon)
		},
		{
			BBDEBUGDECL_FIELD,
			"iconNumber",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_checklistbox_SingleItem_obj,_maxgui_proxygadgets_checklistbox_singleitem_iconnumber)
		},
		{
			BBDEBUGDECL_FIELD,
			"parent",
			":Tchecklistbox",
			.field_offset=offsetof(struct maxgui_proxygadgets_checklistbox_SingleItem_obj,_maxgui_proxygadgets_checklistbox_singleitem_parent)
		},
		{
			BBDEBUGDECL_FIELD,
			"item_h",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_checklistbox_SingleItem_obj,_maxgui_proxygadgets_checklistbox_singleitem_item_h)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_maxgui_proxygadgets_checklistbox_SingleItem_New
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Create",
			"(:Tchecklistbox,$,$,i,i):SingleItem",
			.var_address=(void*)&maxgui_proxygadgets_checklistbox_SingleItem_Create_TSingleItem_TTchecklistboxSSii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Change",
			"($,$,i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_checklistbox_SingleItem_Change_SSii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Clear",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_checklistbox_SingleItem_Clear
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetFont",
			"(:TGuiFont)i",
			.var_address=(void*)&_maxgui_proxygadgets_checklistbox_SingleItem_SetFont_TTGuiFont
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetEnabled",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_checklistbox_SingleItem_SetEnabled_i
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_maxgui_proxygadgets_checklistbox_SingleItem maxgui_proxygadgets_checklistbox_SingleItem={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&maxgui_proxygadgets_checklistbox_SingleItem_scope,
	sizeof(struct maxgui_proxygadgets_checklistbox_SingleItem_obj),
	(void (*)(BBOBJECT))_maxgui_proxygadgets_checklistbox_SingleItem_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct maxgui_proxygadgets_checklistbox_SingleItem_obj,_maxgui_proxygadgets_checklistbox_singleitem_item_h) - sizeof(void*) + sizeof(BBINT)
	,maxgui_proxygadgets_checklistbox_SingleItem_Create_TSingleItem_TTchecklistboxSSii
	,_maxgui_proxygadgets_checklistbox_SingleItem_Change_SSii
	,_maxgui_proxygadgets_checklistbox_SingleItem_Clear
	,_maxgui_proxygadgets_checklistbox_SingleItem_SetFont_TTGuiFont
	,_maxgui_proxygadgets_checklistbox_SingleItem_SetEnabled_i
};

void _maxgui_proxygadgets_checklistbox_Tchecklistbox_New(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* o) {
	_maxgui_maxgui_gadget_TProxyGadget_New((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o);
	o->clas = &maxgui_proxygadgets_checklistbox_Tchecklistbox;
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_myiconstrip = (struct maxgui_maxgui_iconstrip_TIconStrip_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_slider = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_style = 0;
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_current_position = 0;
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_visible = 0;
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel_width = 0;
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it = &bbEmptyArray;
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_mx = &bbEmptyArray;
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_mx_counter = 0;
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox__r = 255;
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox__g = 255;
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox__b = 255;
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_item_h = 20;
}
BBINT _maxgui_proxygadgets_checklistbox_Tchecklistbox_AddExclusion_S(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* o,BBSTRING bbt_linea){
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o));
	BBINT bbt_subsize=0;
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"AddExclusion",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":Tchecklistbox",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"linea",
				"$",
				.var_address=&bbt_linea
			},
			{
				BBDEBUGDECL_LOCAL,
				"subsize",
				"i",
				.var_address=&bbt_subsize
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 172, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(bbt_linea==&bbEmptyString){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 172, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return -1;
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 174, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_mx =bbArraySlice("[]i",((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_mx ,0,(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_mx_counter +1));
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 175, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_subsize=0;
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 177, 0};
	bbOnDebugEnterStm(&__stmt_3);
	BBARRAY bbt_=bbStringSplit((BBSTRING)bbt_linea,&_s0);
	BBUINT bbt_2=0U;
	while(bbt_2<((BBUINT)(bbt_->scales[0]))){
		BBSTRING bbt_si=&bbEmptyString;
		struct BBDebugScope_1 __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_LOCAL,
					"si",
					"$",
					.var_address=&bbt_si
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		bbt_si=((BBSTRING*)BBARRAYDATAINDEX((bbt_),(bbt_)->dims,bbt_2))[bbt_2];
		bbt_2=(bbt_2+1U);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 178, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_subsize=(((BBARRAY*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_mx ),(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_mx )->dims,((BBUINT)((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_mx_counter )))[((BBUINT)((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_mx_counter )]->scales[0]);
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 179, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((BBARRAY*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_mx ),(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_mx )->dims,((BBUINT)((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_mx_counter )))[((BBUINT)((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_mx_counter )]=bbArraySlice("i",((BBARRAY*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_mx ),(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_mx )->dims,((BBUINT)((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_mx_counter )))[((BBUINT)((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_mx_counter )],0,(bbt_subsize+1));
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 180, 0};
		bbOnDebugEnterStm(&__stmt_2);
		BBARRAY volatile bbt_3=((BBARRAY*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_mx ),(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_mx )->dims,((BBUINT)((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_mx_counter )))[((BBUINT)((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_mx_counter )];
		((BBINT*)BBARRAYDATAINDEX((bbt_3),(bbt_3)->dims,((BBUINT)bbt_subsize)))[((BBUINT)bbt_subsize)]=bbStringToInt(bbt_si);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 182, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_mx_counter +=1;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_checklistbox_Tchecklistbox_CleanExclusion(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* o){
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"CleanExclusion",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":Tchecklistbox",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 186, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_mx_counter =0;
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 187, 0};
	bbOnDebugEnterStm(&__stmt_1);
	{
		BBINT bbt_o=0;
		BBINT bbt_=(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_mx ->scales[0]);
		for(;(bbt_o<bbt_);bbt_o=(bbt_o+1)){
			struct BBDebugScope_1 __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					{
						BBDEBUGDECL_LOCAL,
						"o",
						"i",
						.var_address=&bbt_o
					},
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 188, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((BBARRAY*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_mx ),(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_mx )->dims,((BBUINT)bbt_o)))[((BBUINT)bbt_o)]=bbArraySlice("i",((BBARRAY*)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_mx ),(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_mx )->dims,((BBUINT)bbt_o)))[((BBUINT)bbt_o)],0,0);
			bbOnDebugLeaveScope();
		}
	}
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 190, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_mx =bbArraySlice("[]i",((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_mx ,0,0);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_checklistbox_Tchecklistbox_InsertItem_iSSiTObjecti(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* o,BBINT bbt_index,BBSTRING bbt_Text,BBSTRING bbt_tip,BBINT bbt_icon,BBOBJECT bbt_extra,BBINT bbt_flags){
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o));
	BBINT bbt_num=0;
	struct BBDebugScope_8 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"InsertItem",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":Tchecklistbox",
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
			{
				BBDEBUGDECL_LOCAL,
				"num",
				"i",
				.var_address=&bbt_num
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 197, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if((bbt_index<0) || (bbt_index>(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ->scales[0]))){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 197, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbExThrow((BBObject *)&_s1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 199, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it =bbArraySlice(":SingleItem",((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ,0,((((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ->scales[0])+1));
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 200, 0};
	bbOnDebugEnterStm(&__stmt_2);
	{
		BBINT bbt_i=((((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ->scales[0])-2);
		BBINT bbt_=bbt_index;
		for(;(bbt_i>=bbt_);bbt_i=(bbt_i+-1)){
			struct BBDebugScope_1 __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
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
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 201, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ),(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it )->dims,((BBUINT)(bbt_i+1))))[((BBUINT)(bbt_i+1))]=(struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ),(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)];
			bbOnDebugLeaveScope();
		}
	}
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 203, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if(((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ),(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)]!=&bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 204, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ),(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)]))->_maxgui_proxygadgets_checklistbox_singleitem_label ,bbt_Text);
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 205, 0};
		bbOnDebugEnterStm(&__stmt_1);
		maxgui_maxgui_SetGadgetExtra((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ),(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)]))->_maxgui_proxygadgets_checklistbox_singleitem_label ,(BBOBJECT)bbt_extra);
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 207, 0};
		bbOnDebugEnterStm(&__stmt_2);
		if(bbt_extra==&bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 207, 0};
			bbOnDebugEnterStm(&__stmt_0);
			brl_standardio_Print(&_s2);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 209, 0};
		bbOnDebugEnterStm(&__stmt_3);
		if(bbt_icon>-1){
			struct brl_pixmap_TPixmap_obj* bbt_px=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
			struct BBDebugScope_1 __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					{
						BBDEBUGDECL_LOCAL,
						"px",
						":TPixmap",
						.var_address=&bbt_px
					},
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 210, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_px=(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_myiconstrip ,bbt_icon);
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 211, 0};
			bbOnDebugEnterStm(&__stmt_1);
			maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ),(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)]))->_maxgui_proxygadgets_checklistbox_singleitem_icon ,(struct brl_pixmap_TPixmap_obj*)bbt_px,1);
			struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 212, 0};
			bbOnDebugEnterStm(&__stmt_2);
			((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ),(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)]))->_maxgui_proxygadgets_checklistbox_singleitem_iconnumber =bbt_icon;
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 215, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ),(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)]=(struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)maxgui_proxygadgets_checklistbox_SingleItem_Create_TSingleItem_TTchecklistboxSSii((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)o,bbt_Text,bbt_tip,bbt_icon,bbt_flags);
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 216, 0};
		bbOnDebugEnterStm(&__stmt_1);
		((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ),(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)]))->_maxgui_proxygadgets_checklistbox_singleitem_label ))->_maxgui_maxgui_gadget_tgadget_extra =(BBOBJECT)bbt_extra;
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 219, 0};
		bbOnDebugEnterStm(&__stmt_2);
		if(bbt_icon>-1){
			struct brl_pixmap_TPixmap_obj* bbt_px2=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
			struct BBDebugScope_1 __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					{
						BBDEBUGDECL_LOCAL,
						"px",
						":TPixmap",
						.var_address=&bbt_px2
					},
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 220, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_px2=(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_myiconstrip ,bbt_icon);
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 221, 0};
			bbOnDebugEnterStm(&__stmt_1);
			maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ),(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)]))->_maxgui_proxygadgets_checklistbox_singleitem_icon ,(struct brl_pixmap_TPixmap_obj*)bbt_px2,1);
			struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 222, 0};
			bbOnDebugEnterStm(&__stmt_2);
			((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ),(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)]))->_maxgui_proxygadgets_checklistbox_singleitem_iconnumber =bbt_icon;
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 226, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbt_num=(((((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ->scales[0])-((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_visible )+1);
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 227, 0};
	bbOnDebugEnterStm(&__stmt_5);
	if(((BBObject*)((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_slider )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 227, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_SetSliderRange((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_slider ,0,bbt_num);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_checklistbox_Tchecklistbox_SetIconStrip_TTIconStrip(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* o,struct maxgui_maxgui_iconstrip_TIconStrip_obj* bbt__iconstrip){
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetIconStrip",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":Tchecklistbox",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"_iconstrip",
				":TIconStrip",
				.var_address=&bbt__iconstrip
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 233, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_myiconstrip =(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbt__iconstrip;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_checklistbox_Tchecklistbox_SetFont_TTGuiFont(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* o,struct maxgui_maxgui_guifont_TGuiFont_obj* bbt_fnt){
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetFont",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":Tchecklistbox",
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 237, 0};
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 237, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return -1;
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 238, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_item_h =((BBINT)((maxgui_maxgui_FontSize((struct maxgui_maxgui_guifont_TGuiFont_obj*)bbt_fnt)*2.0000000000000000)+4.0000000000000000));
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 240, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_item_h <20){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 240, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_item_h =20;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 241, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it !=&bbEmptyArray){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 242, 0};
		bbOnDebugEnterStm(&__stmt_0);
		BBARRAY bbt_=((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ;
		BBUINT bbt_2=0U;
		while(bbt_2<((BBUINT)(bbt_->scales[0]))){
			struct maxgui_proxygadgets_checklistbox_SingleItem_obj* bbt_iu=(struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)&bbNullObject;
			struct BBDebugScope_1 __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					{
						BBDEBUGDECL_LOCAL,
						"iu",
						":SingleItem",
						.var_address=&bbt_iu
					},
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 242, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_iu=(struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATAINDEX((bbt_),(bbt_)->dims,bbt_2))[bbt_2];
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 242, 0};
			bbOnDebugEnterStm(&__stmt_1);
			bbt_2=(bbt_2+1U);
			struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 242, 0};
			bbOnDebugEnterStm(&__stmt_2);
			if(bbt_iu==&bbNullObject){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 242, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				continue;
			}
			struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 243, 0};
			bbOnDebugEnterStm(&__stmt_3);
			((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_iu))->clas->m_SetFont_TTGuiFont((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbt_iu,(struct maxgui_maxgui_guifont_TGuiFont_obj*)bbt_fnt);
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 246, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o));
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)o)->clas->m__refresh((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)o);
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 247, 0};
	bbOnDebugEnterStm(&__stmt_5);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_checklistbox_Tchecklistbox_SelectItem_ii(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* o,BBINT bbt_index,BBINT bbt_op){
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o));
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SelectItem",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":Tchecklistbox",
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
				"op",
				"i",
				.var_address=&bbt_op
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 259, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(bbt_index==-1){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 260, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if((bbt_op==0) || (bbt_op==1)){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 261, 0};
			bbOnDebugEnterStm(&__stmt_0);
			BBARRAY bbt_=((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ;
			BBUINT bbt_2=0U;
			while(bbt_2<((BBUINT)(bbt_->scales[0]))){
				struct maxgui_proxygadgets_checklistbox_SingleItem_obj* bbt_ss=(struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)&bbNullObject;
				struct BBDebugScope_1 __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						{
							BBDEBUGDECL_LOCAL,
							"ss",
							":SingleItem",
							.var_address=&bbt_ss
						},
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 261, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbt_ss=(struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATAINDEX((bbt_),(bbt_)->dims,bbt_2))[bbt_2];
				struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 261, 0};
				bbOnDebugEnterStm(&__stmt_1);
				bbt_2=(bbt_2+1U);
				struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 261, 0};
				bbOnDebugEnterStm(&__stmt_2);
				if(bbt_ss==&bbNullObject){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 261, 0};
					bbOnDebugEnterStm(&__stmt_0);
					bbOnDebugLeaveScope();
					bbOnDebugLeaveScope();
					continue;
				}
				struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 262, 0};
				bbOnDebugEnterStm(&__stmt_3);
				if(((BBObject*)bbt_ss)!= &bbNullObject){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 262, 0};
					bbOnDebugEnterStm(&__stmt_0);
					maxgui_maxgui_SetButtonState((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_ss))->_maxgui_proxygadgets_checklistbox_singleitem_check ,bbt_op);
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
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 265, 0};
			bbOnDebugEnterStm(&__stmt_0);
			BBARRAY bbt_3=((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ;
			BBUINT bbt_4=0U;
			while(bbt_4<((BBUINT)(bbt_3->scales[0]))){
				struct maxgui_proxygadgets_checklistbox_SingleItem_obj* bbt_ss2=(struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)&bbNullObject;
				struct BBDebugScope_1 __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						{
							BBDEBUGDECL_LOCAL,
							"ss",
							":SingleItem",
							.var_address=&bbt_ss2
						},
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 265, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbt_ss2=(struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATAINDEX((bbt_3),(bbt_3)->dims,bbt_4))[bbt_4];
				struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 265, 0};
				bbOnDebugEnterStm(&__stmt_1);
				bbt_4=(bbt_4+1U);
				struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 265, 0};
				bbOnDebugEnterStm(&__stmt_2);
				if(bbt_ss2==&bbNullObject){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 265, 0};
					bbOnDebugEnterStm(&__stmt_0);
					bbOnDebugLeaveScope();
					bbOnDebugLeaveScope();
					continue;
				}
				struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 266, 0};
				bbOnDebugEnterStm(&__stmt_3);
				if(((BBObject*)bbt_ss2)!= &bbNullObject){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 266, 0};
					bbOnDebugEnterStm(&__stmt_0);
					maxgui_maxgui_SetButtonState((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_ss2))->_maxgui_proxygadgets_checklistbox_singleitem_check ,(1-maxgui_maxgui_ButtonState((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_ss2))->_maxgui_proxygadgets_checklistbox_singleitem_check )));
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 272, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(bbt_index<(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ->scales[0])){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 273, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if((bbt_op==0) || (bbt_op==1)){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 274, 0};
				bbOnDebugEnterStm(&__stmt_0);
				maxgui_maxgui_SetButtonState((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ),(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)]))->_maxgui_proxygadgets_checklistbox_singleitem_check ,bbt_op);
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
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 276, 0};
				bbOnDebugEnterStm(&__stmt_0);
				maxgui_maxgui_SetButtonState((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ),(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)]))->_maxgui_proxygadgets_checklistbox_singleitem_check ,(1-maxgui_maxgui_ButtonState((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ),(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)]))->_maxgui_proxygadgets_checklistbox_singleitem_check )));
				bbOnDebugLeaveScope();
			}
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_checklistbox_Tchecklistbox_SetEnabled_i(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* o,BBINT bbt_status){
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetEnabled",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":Tchecklistbox",
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 290, 0};
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 291, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_slider );
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 292, 0};
		bbOnDebugEnterStm(&__stmt_1);
		maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel );
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 294, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_slider );
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 295, 0};
		bbOnDebugEnterStm(&__stmt_1);
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel );
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 298, 0};
	bbOnDebugEnterStm(&__stmt_1);
	BBARRAY bbt_=((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ;
	BBUINT bbt_2=0U;
	while(bbt_2<((BBUINT)(bbt_->scales[0]))){
		struct maxgui_proxygadgets_checklistbox_SingleItem_obj* bbt_ss=(struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)&bbNullObject;
		struct BBDebugScope_1 __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_LOCAL,
					"ss",
					":SingleItem",
					.var_address=&bbt_ss
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 298, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_ss=(struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATAINDEX((bbt_),(bbt_)->dims,bbt_2))[bbt_2];
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 298, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_2=(bbt_2+1U);
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 298, 0};
		bbOnDebugEnterStm(&__stmt_2);
		if(bbt_ss==&bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 298, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			continue;
		}
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 299, 0};
		bbOnDebugEnterStm(&__stmt_3);
		((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_ss))->clas->m_SetEnabled_i((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbt_ss,bbt_status);
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_checklistbox_Tchecklistbox_ItemCount(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* o){
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"ItemCount",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":Tchecklistbox",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 304, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return (((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ->scales[0]);
}
BBINT _maxgui_proxygadgets_checklistbox_Tchecklistbox_Class(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* o){
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Class",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":Tchecklistbox",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 308, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return 21;
}
BBINT _maxgui_proxygadgets_checklistbox_Tchecklistbox_RemoveItem_i(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* o,BBINT bbt_index){
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"RemoveItem",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":Tchecklistbox",
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 313, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if((bbt_index<0) || (bbt_index>=(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ->scales[0]))){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 313, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbExThrow((BBObject *)&_s1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 316, 0};
	bbOnDebugEnterStm(&__stmt_1);
	struct maxgui_proxygadgets_checklistbox_SingleItem_obj* bbt_;
	(((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest((bbt_ = ((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ),(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)])))->clas)->m_Clear((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbt_);
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 317, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ),(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)]=(struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)&bbNullObject;
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 319, 0};
	bbOnDebugEnterStm(&__stmt_3);
	{
		BBINT bbt_t=(bbt_index+1);
		BBINT bbt_2=(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ->scales[0]);
		for(;(bbt_t<bbt_2);bbt_t=(bbt_t+1)){
			struct BBDebugScope_1 __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					{
						BBDEBUGDECL_LOCAL,
						"t",
						"i",
						.var_address=&bbt_t
					},
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 320, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ),(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it )->dims,((BBUINT)(bbt_t-1))))[((BBUINT)(bbt_t-1))]=(struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ),(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it )->dims,((BBUINT)bbt_t)))[((BBUINT)bbt_t)];
			bbOnDebugLeaveScope();
		}
	}
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 322, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it =bbArraySlice(":SingleItem",((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ,0,((((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ->scales[0])-1));
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 326, 0};
	bbOnDebugEnterStm(&__stmt_5);
	{
		BBINT bbt_t2=bbt_index;
		BBINT bbt_3=(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ->scales[0]);
		for(;(bbt_t2<bbt_3);bbt_t2=(bbt_t2+1)){
			struct BBDebugScope_1 __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					{
						BBDEBUGDECL_LOCAL,
						"t",
						"i",
						.var_address=&bbt_t2
					},
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 327, 0};
			bbOnDebugEnterStm(&__stmt_0);
			maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ),(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it )->dims,((BBUINT)bbt_t2)))[((BBUINT)bbt_t2)]))->_maxgui_proxygadgets_checklistbox_singleitem_panel ,0,(bbt_t2*((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_item_h ),((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel_width ,((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_item_h );
			bbOnDebugLeaveScope();
		}
	}
	struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 329, 0};
	bbOnDebugEnterStm(&__stmt_6);
	if(((BBObject*)((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_slider )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 329, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_SetSliderRange((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_slider ,(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ->scales[0]),((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_visible );
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_checklistbox_Tchecklistbox__refresh(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* o){
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"_refresh",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":Tchecklistbox",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 336, 0};
	bbOnDebugEnterStm(&__stmt_0);
	{
		BBINT bbt_t=0;
		BBINT bbt_=(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ->scales[0]);
		for(;(bbt_t<bbt_);bbt_t=(bbt_t+1)){
			struct BBDebugScope_1 __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					{
						BBDEBUGDECL_LOCAL,
						"t",
						"i",
						.var_address=&bbt_t
					},
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 337, 0};
			bbOnDebugEnterStm(&__stmt_0);
			maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ),(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it )->dims,((BBUINT)bbt_t)))[((BBUINT)bbt_t)]))->_maxgui_proxygadgets_checklistbox_singleitem_panel ,0,(bbt_t*((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_item_h ),((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel_width ,((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_item_h );
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 338, 0};
			bbOnDebugEnterStm(&__stmt_1);
			maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ),(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it )->dims,((BBUINT)bbt_t)))[((BBUINT)bbt_t)]))->_maxgui_proxygadgets_checklistbox_singleitem_label ,40,2,((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel_width ,((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_item_h );
			bbOnDebugLeaveScope();
		}
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 342, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_checklistbox_Tchecklistbox_SetItem_iSSiTObjecti(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* o,BBINT bbt_index,BBSTRING bbt_Text,BBSTRING bbt_tip,BBINT bbt_icon,BBOBJECT bbt_extra,BBINT bbt_flags){
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o));
	struct BBDebugScope_7 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetItem",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":Tchecklistbox",
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 348, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if((bbt_index<0) || (bbt_index>(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ->scales[0]))){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 348, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbExThrow((BBObject *)&_s1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 350, 0};
	bbOnDebugEnterStm(&__stmt_1);
	struct maxgui_proxygadgets_checklistbox_SingleItem_obj* bbt_;
	(((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest((bbt_ = ((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ),(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)])))->clas)->m_Change_SSii((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbt_,bbt_Text,bbt_tip,bbt_icon,bbt_flags);
	bbOnDebugLeaveScope();
	return 0;
}
BBSTRING _maxgui_proxygadgets_checklistbox_Tchecklistbox_ItemText_i(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* o,BBINT bbt_index){
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"ItemText",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":Tchecklistbox",
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 355, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if((bbt_index<0) || (bbt_index>(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ->scales[0]))){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 355, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbExThrow((BBObject *)&_s1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 357, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbOnDebugLeaveScope();
	return maxgui_maxgui_GadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ),(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)]))->_maxgui_proxygadgets_checklistbox_singleitem_label );
}
BBSTRING _maxgui_proxygadgets_checklistbox_Tchecklistbox_ItemTip_i(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* o,BBINT bbt_index){
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"ItemTip",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":Tchecklistbox",
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 362, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if((bbt_index<0) || (bbt_index>(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ->scales[0]))){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 362, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbExThrow((BBObject *)&_s1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 364, 0};
	bbOnDebugEnterStm(&__stmt_1);
	struct maxgui_maxgui_gadget_TGadget_obj* bbt_;
	bbOnDebugLeaveScope();
	return (((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbNullObjectTest((bbt_ = ((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ),(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)]))->_maxgui_proxygadgets_checklistbox_singleitem_label ))))->clas)->m_GetTooltip((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_);
}
BBOBJECT _maxgui_proxygadgets_checklistbox_Tchecklistbox_ItemExtra_i(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* o,BBINT bbt_index){
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"ItemExtra",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":Tchecklistbox",
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 369, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if((bbt_index<0) || (bbt_index>(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ->scales[0]))){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 369, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbExThrow((BBObject *)&_s1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 371, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbOnDebugLeaveScope();
	return (BBOBJECT)maxgui_maxgui_GadgetExtra((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ),(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)]))->_maxgui_proxygadgets_checklistbox_singleitem_label );
}
BBINT _maxgui_proxygadgets_checklistbox_Tchecklistbox_ItemIcon_i(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* o,BBINT bbt_index){
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"ItemIcon",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":Tchecklistbox",
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 377, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if((bbt_index<0) || (bbt_index>=(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ->scales[0]))){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 377, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbExThrow((BBObject *)&_s1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 379, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbOnDebugLeaveScope();
	return ((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ),(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)]))->_maxgui_proxygadgets_checklistbox_singleitem_iconnumber ;
}
BBINT _maxgui_proxygadgets_checklistbox_Tchecklistbox_ItemState_i(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* o,BBINT bbt_index){
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o));
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"ItemState",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":Tchecklistbox",
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 384, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if((bbt_index<0) || (bbt_index>(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ->scales[0]))){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 384, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbExThrow((BBObject *)&_s1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 386, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbOnDebugLeaveScope();
	return maxgui_maxgui_ButtonState((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ),(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it )->dims,((BBUINT)bbt_index)))[((BBUINT)bbt_index)]))->_maxgui_proxygadgets_checklistbox_singleitem_check );
}
BBINT _maxgui_proxygadgets_checklistbox_Tchecklistbox_Clear(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* o){
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Clear",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":Tchecklistbox",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 390, 0};
	bbOnDebugEnterStm(&__stmt_0);
	BBARRAY bbt_=((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ;
	BBUINT bbt_2=0U;
	while(bbt_2<((BBUINT)(bbt_->scales[0]))){
		struct maxgui_proxygadgets_checklistbox_SingleItem_obj* bbt_ss=(struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)&bbNullObject;
		struct BBDebugScope_1 __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_LOCAL,
					"ss",
					":SingleItem",
					.var_address=&bbt_ss
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 390, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_ss=(struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATAINDEX((bbt_),(bbt_)->dims,bbt_2))[bbt_2];
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 390, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_2=(bbt_2+1U);
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 390, 0};
		bbOnDebugEnterStm(&__stmt_2);
		if(bbt_ss==&bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 390, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			continue;
		}
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 391, 0};
		bbOnDebugEnterStm(&__stmt_3);
		((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_ss))->clas->m_Clear((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbt_ss);
		struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 392, 0};
		bbOnDebugEnterStm(&__stmt_4);
		bbt_ss=(struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)&bbNullObject;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 394, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it =&bbEmptyArray;
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_checklistbox_Tchecklistbox_SetColor_iii(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* o,BBINT bbt_r,BBINT bbt_g,BBINT bbt_b){
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o));
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SetColor",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":Tchecklistbox",
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 399, 0};
	bbOnDebugEnterStm(&__stmt_0);
	maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel ,bbt_r,bbt_g,bbt_b,1);
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 400, 0};
	bbOnDebugEnterStm(&__stmt_1);
	BBARRAY bbt_=((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ;
	BBUINT bbt_2=0U;
	while(bbt_2<((BBUINT)(bbt_->scales[0]))){
		struct maxgui_proxygadgets_checklistbox_SingleItem_obj* bbt_si=(struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)&bbNullObject;
		struct BBDebugScope_1 __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_LOCAL,
					"si",
					":SingleItem",
					.var_address=&bbt_si
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 400, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_si=(struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATAINDEX((bbt_),(bbt_)->dims,bbt_2))[bbt_2];
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 400, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_2=(bbt_2+1U);
		struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 400, 0};
		bbOnDebugEnterStm(&__stmt_2);
		if(bbt_si==&bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 400, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbOnDebugLeaveScope();
			bbOnDebugLeaveScope();
			continue;
		}
		struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 401, 0};
		bbOnDebugEnterStm(&__stmt_3);
		maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_si))->_maxgui_proxygadgets_checklistbox_singleitem_panel ,bbt_r,bbt_g,bbt_b,1);
		struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 402, 0};
		bbOnDebugEnterStm(&__stmt_4);
		maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_si))->_maxgui_proxygadgets_checklistbox_singleitem_label ,bbt_r,bbt_g,bbt_b,1);
		struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 403, 0};
		bbOnDebugEnterStm(&__stmt_5);
		maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_si))->_maxgui_proxygadgets_checklistbox_singleitem_check ,bbt_r,bbt_g,bbt_b,1);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 405, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox__r =bbt_r;
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 406, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox__g =bbt_g;
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 407, 0};
	bbOnDebugEnterStm(&__stmt_4);
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox__b =bbt_b;
	bbOnDebugLeaveScope();
	return 0;
}
BBARRAY _maxgui_proxygadgets_checklistbox_Tchecklistbox_SelectedItems(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* o){
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o));
	BBINT bbt_count=0;
	BBINT bbt_i=0;
	BBARRAY volatile bbt_array=&bbEmptyArray;
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"SelectedItems",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":Tchecklistbox",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"count",
				"i",
				.var_address=&bbt_count
			},
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"i",
				.var_address=&bbt_i
			},
			{
				BBDEBUGDECL_LOCAL,
				"array",
				"[]i",
				.var_address=&bbt_array
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 412, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_count=0;
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 412, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_i=0;
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 412, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_array=bbArrayNew1D("i", (((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ->scales[0]));
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 413, 0};
	bbOnDebugEnterStm(&__stmt_3);
	BBINT bbt_=(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ->scales[0]);
	for(bbt_i=0;(bbt_i<bbt_);bbt_i=(bbt_i+1)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 414, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(((BBObject*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ),(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)])!= &bbNullObject){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 415, 0};
			bbOnDebugEnterStm(&__stmt_0);
			if(maxgui_maxgui_ButtonState((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATAINDEX((((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ),(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it )->dims,((BBUINT)bbt_i)))[((BBUINT)bbt_i)]))->_maxgui_proxygadgets_checklistbox_singleitem_check )==1){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 416, 0};
				bbOnDebugEnterStm(&__stmt_0);
				((BBINT*)BBARRAYDATAINDEX((bbt_array),(bbt_array)->dims,((BBUINT)bbt_count)))[((BBUINT)bbt_count)]=bbt_i;
				struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 417, 0};
				bbOnDebugEnterStm(&__stmt_1);
				bbt_count+=1;
				bbOnDebugLeaveScope();
			}
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 421, 0};
	bbOnDebugEnterStm(&__stmt_4);
	if(bbt_count>0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 421, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return bbArraySlice("i",bbt_array,0,bbt_count);
	}
	bbOnDebugLeaveScope();
	return &bbEmptyArray;
}
BBINT _maxgui_proxygadgets_checklistbox_Tchecklistbox_CleanUp(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* o){
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"CleanUp",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":Tchecklistbox",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 426, 0};
	bbOnDebugEnterStm(&__stmt_0);
	brl_hook_RemoveHook(brl_event_EmitEventHook,o->clas->f_eventHandler_TObject_iTObjectTObject,(BBOBJECT)o);
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 427, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbNullObjectTest(o));
	((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)->clas->m_SetProxy_TTGadget((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o,(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject);
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 428, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o));
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)o)->clas->m_Clear((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)o);
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 429, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if(((BBObject*)((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_slider )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 429, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_slider );
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 430, 0};
	bbOnDebugEnterStm(&__stmt_4);
	if(((BBObject*)((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel )!= &bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 430, 0};
		bbOnDebugEnterStm(&__stmt_0);
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel );
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 431, 0};
	bbOnDebugEnterStm(&__stmt_5);
	(&maxgui_proxygadgets_checklistbox_Tchecklistbox)->super->m_CleanUp((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT _maxgui_proxygadgets_checklistbox_Tchecklistbox_Free(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* o){
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Free",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":Tchecklistbox",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	bbOnDebugLeaveScope();
	return 0;
}
struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* maxgui_proxygadgets_checklistbox_Tchecklistbox_Create_TTchecklistbox_iiiiTTGadgeti(BBINT bbt_x,BBINT bbt_y,BBINT bbt_w,BBINT bbt_h,struct maxgui_maxgui_gadget_TGadget_obj* bbt_group,BBINT bbt_style){
	struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* bbt_mb=(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)&bbNullObject;
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
				"mb",
				":Tchecklistbox",
				.var_address=&bbt_mb
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 441, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_mb=(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbObjectNew((BBClass *)&maxgui_proxygadgets_checklistbox_Tchecklistbox);
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 442, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(bbt_mb))->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreatePanel(bbt_x,bbt_y,(bbt_w-20),bbt_h,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group,4,&bbEmptyString);
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 444, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(bbt_mb))->_maxgui_proxygadgets_checklistbox_tchecklistbox_style =bbt_style;
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 445, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(bbt_mb))->_maxgui_proxygadgets_checklistbox_tchecklistbox_slider =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateSlider(((bbt_x+bbt_w)-20),bbt_y,20,bbt_h,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group,2);
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 447, 0};
	bbOnDebugEnterStm(&__stmt_4);
	maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(bbt_mb))->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel ,1,1,1,1);
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 448, 0};
	bbOnDebugEnterStm(&__stmt_5);
	maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(bbt_mb))->_maxgui_proxygadgets_checklistbox_tchecklistbox_slider ,1,1,1,1);
	struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 449, 0};
	bbOnDebugEnterStm(&__stmt_6);
	maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(bbt_mb))->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel ,255,255,255,1);
	struct BBDebugStm __stmt_7 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 450, 0};
	bbOnDebugEnterStm(&__stmt_7);
	maxgui_maxgui_ActivateGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(bbt_mb))->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel );
	struct BBDebugStm __stmt_8 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 451, 0};
	bbOnDebugEnterStm(&__stmt_8);
	brl_hook_AddHook(brl_event_EmitEventHook,maxgui_proxygadgets_checklistbox_Tchecklistbox_eventHandler_TObject_iTObjectTObject,(BBOBJECT)bbt_mb,-1);
	struct BBDebugStm __stmt_9 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 452, 0};
	bbOnDebugEnterStm(&__stmt_9);
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(bbt_mb))->clas->m_SetProxy_TTGadget((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbt_mb,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(bbt_mb))->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel );
	struct BBDebugStm __stmt_10 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 454, 0};
	bbOnDebugEnterStm(&__stmt_10);
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(bbt_mb))->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel_width =maxgui_maxgui_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(bbt_mb))->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel );
	struct BBDebugStm __stmt_11 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 455, 0};
	bbOnDebugEnterStm(&__stmt_11);
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(bbt_mb))->_maxgui_proxygadgets_checklistbox_tchecklistbox_visible =(bbt_h/((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(bbt_mb))->_maxgui_proxygadgets_checklistbox_tchecklistbox_item_h );
	struct BBDebugStm __stmt_12 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 457, 0};
	bbOnDebugEnterStm(&__stmt_12);
	bbOnDebugLeaveScope();
	return (struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbt_mb;
}
BBOBJECT maxgui_proxygadgets_checklistbox_Tchecklistbox_eventHandler_TObject_iTObjectTObject(BBINT bbt_pID,BBOBJECT bbt_pData,BBOBJECT bbt_pContext){
	struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* bbt_tmpSuperPanel=(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)&bbNullObject;
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
				":Tchecklistbox",
				.var_address=&bbt_tmpSuperPanel
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 462, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_tmpSuperPanel=(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbObjectDowncast((BBOBJECT)bbt_pContext,(BBClass*)&maxgui_proxygadgets_checklistbox_Tchecklistbox));
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 463, 0};
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 463, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_pData=(BBOBJECT)((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(bbt_tmpSuperPanel))->clas->m_EventHook_iTObjectTObject((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbt_tmpSuperPanel,bbt_pID,(BBOBJECT)bbt_pData,(BBOBJECT)bbt_pContext);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 464, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbOnDebugLeaveScope();
	return (BBOBJECT)bbt_pData;
}
BBOBJECT _maxgui_proxygadgets_checklistbox_Tchecklistbox_EventHook_iTObjectTObject(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* o,BBINT bbt_id,BBOBJECT bbt_data,BBOBJECT bbt_context){
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o));
	struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* bbt_mb=(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)&bbNullObject;
	struct brl_event_TEvent_obj* bbt_event=(struct brl_event_TEvent_obj*)&bbNullObject;
	BBINT bbt_con=0;
	struct BBDebugScope_7 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"EventHook",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":Tchecklistbox",
				.var_address=&o
			},
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
				"mb",
				":Tchecklistbox",
				.var_address=&bbt_mb
			},
			{
				BBDEBUGDECL_LOCAL,
				"event",
				":TEvent",
				.var_address=&bbt_event
			},
			{
				BBDEBUGDECL_LOCAL,
				"con",
				"i",
				.var_address=&bbt_con
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 472, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_mb=(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)&bbNullObject;
	struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 473, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_event=(struct brl_event_TEvent_obj*)&bbNullObject;
	struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 474, 0};
	bbOnDebugEnterStm(&__stmt_2);
	bbt_con=0;
	struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 475, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_event=(struct brl_event_TEvent_obj*)((struct brl_event_TEvent_obj*)bbObjectDowncast((BBOBJECT)bbt_data,(BBClass*)&brl_event_TEvent));
	struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 476, 0};
	bbOnDebugEnterStm(&__stmt_4);
	if(bbt_event==&bbNullObject){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 476, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return (BBOBJECT)bbt_data;
	}
	struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 480, 0};
	bbOnDebugEnterStm(&__stmt_5);
	BBINT bbt_=((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_event))->_brl_event_tevent_id ;
	struct BBDebugStm __stmt_6 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 482, 0};
	bbOnDebugEnterStm(&__stmt_6);
	if(bbt_==1025){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 483, 0};
		bbOnDebugEnterStm(&__stmt_0);
		BBARRAY bbt_2=((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ;
		BBUINT bbt_3=0U;
		while(bbt_3<((BBUINT)(bbt_2->scales[0]))){
			struct maxgui_proxygadgets_checklistbox_SingleItem_obj* bbt_what=(struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)&bbNullObject;
			struct BBDebugScope_1 __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					{
						BBDEBUGDECL_LOCAL,
						"what",
						":SingleItem",
						.var_address=&bbt_what
					},
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 483, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_what=(struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATAINDEX((bbt_2),(bbt_2)->dims,bbt_3))[bbt_3];
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 483, 0};
			bbOnDebugEnterStm(&__stmt_1);
			bbt_3=(bbt_3+1U);
			struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 483, 0};
			bbOnDebugEnterStm(&__stmt_2);
			if(bbt_what==&bbNullObject){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 483, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				continue;
			}
			struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 484, 0};
			bbOnDebugEnterStm(&__stmt_3);
			maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_what))->_maxgui_proxygadgets_checklistbox_singleitem_panel ,((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_what))->_maxgui_proxygadgets_checklistbox_singleitem_parent ))->_maxgui_proxygadgets_checklistbox_tchecklistbox__r ,((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_what))->_maxgui_proxygadgets_checklistbox_singleitem_parent ))->_maxgui_proxygadgets_checklistbox_tchecklistbox__g ,((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_what))->_maxgui_proxygadgets_checklistbox_singleitem_parent ))->_maxgui_proxygadgets_checklistbox_tchecklistbox__b ,1);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 488, 0};
		bbOnDebugEnterStm(&__stmt_1);
		BBARRAY bbt_4=((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ;
		BBUINT bbt_5=0U;
		while(bbt_5<((BBUINT)(bbt_4->scales[0]))){
			struct maxgui_proxygadgets_checklistbox_SingleItem_obj* bbt_what2=(struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)&bbNullObject;
			struct BBDebugScope_1 __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					{
						BBDEBUGDECL_LOCAL,
						"what",
						":SingleItem",
						.var_address=&bbt_what2
					},
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 488, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_what2=(struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATAINDEX((bbt_4),(bbt_4)->dims,bbt_5))[bbt_5];
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 488, 0};
			bbOnDebugEnterStm(&__stmt_1);
			bbt_5=(bbt_5+1U);
			struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 488, 0};
			bbOnDebugEnterStm(&__stmt_2);
			if(bbt_what2==&bbNullObject){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 488, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				continue;
			}
			struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 489, 0};
			bbOnDebugEnterStm(&__stmt_3);
			maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_what2))->_maxgui_proxygadgets_checklistbox_singleitem_panel ,((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_what2))->_maxgui_proxygadgets_checklistbox_singleitem_parent ))->_maxgui_proxygadgets_checklistbox_tchecklistbox__r ,((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_what2))->_maxgui_proxygadgets_checklistbox_singleitem_parent ))->_maxgui_proxygadgets_checklistbox_tchecklistbox__g ,((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_what2))->_maxgui_proxygadgets_checklistbox_singleitem_parent ))->_maxgui_proxygadgets_checklistbox_tchecklistbox__b ,1);
			struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 490, 0};
			bbOnDebugEnterStm(&__stmt_4);
			if(((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_what2))->_maxgui_proxygadgets_checklistbox_singleitem_label ==((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_event))->_brl_event_tevent_source ){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 491, 0};
				bbOnDebugEnterStm(&__stmt_0);
				brl_event_EmitEvent((struct brl_event_TEvent_obj*)brl_event_CreateEvent(8195,(BBOBJECT)o,bbt_con,0,maxgui_maxgui_ButtonState((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_what2))->_maxgui_proxygadgets_checklistbox_singleitem_check ),0,(BBOBJECT)maxgui_maxgui_GadgetExtra((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_what2))->_maxgui_proxygadgets_checklistbox_singleitem_label )));
				struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 492, 0};
				bbOnDebugEnterStm(&__stmt_1);
				maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_what2))->_maxgui_proxygadgets_checklistbox_singleitem_panel ,(255-(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_what2))->_maxgui_proxygadgets_checklistbox_singleitem_parent ))->_maxgui_proxygadgets_checklistbox_tchecklistbox__r /2)),(255-(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_what2))->_maxgui_proxygadgets_checklistbox_singleitem_parent ))->_maxgui_proxygadgets_checklistbox_tchecklistbox__g /2)),(255-(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_what2))->_maxgui_proxygadgets_checklistbox_singleitem_parent ))->_maxgui_proxygadgets_checklistbox_tchecklistbox__b /2)),1);
				struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 493, 0};
				bbOnDebugEnterStm(&__stmt_2);
				bbt_data=(BBOBJECT)&bbNullObject;
				struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 494, 0};
				bbOnDebugEnterStm(&__stmt_3);
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				bbOnDebugLeaveScope();
				return (BBOBJECT)bbt_data;
			}
			struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 496, 0};
			bbOnDebugEnterStm(&__stmt_5);
			bbt_con+=1;
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
		struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 498, 0};
		bbOnDebugEnterStm(&__stmt_0);
		if(bbt_==1028){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 500, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_current_position -=((struct brl_event_TEvent_obj*)bbNullObjectTest(brl_eventqueue_CurrentEvent))->_brl_event_tevent_data ;
			struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 502, 0};
			bbOnDebugEnterStm(&__stmt_1);
			if(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_current_position <0){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 502, 0};
				bbOnDebugEnterStm(&__stmt_0);
				((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_current_position =0;
				bbOnDebugLeaveScope();
			}
			struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 503, 0};
			bbOnDebugEnterStm(&__stmt_2);
			if(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_current_position >((((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ->scales[0])-((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_visible )){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 503, 0};
				bbOnDebugEnterStm(&__stmt_0);
				((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_current_position =((((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ->scales[0])-((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_visible );
				bbOnDebugLeaveScope();
			}
			struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 504, 0};
			bbOnDebugEnterStm(&__stmt_3);
			bbt_con=0;
			struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 505, 0};
			bbOnDebugEnterStm(&__stmt_4);
			BBARRAY bbt_6=((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ;
			BBUINT bbt_7=0U;
			while(bbt_7<((BBUINT)(bbt_6->scales[0]))){
				struct maxgui_proxygadgets_checklistbox_SingleItem_obj* bbt_what3=(struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)&bbNullObject;
				struct BBDebugScope_1 __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						{
							BBDEBUGDECL_LOCAL,
							"what",
							":SingleItem",
							.var_address=&bbt_what3
						},
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 505, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbt_what3=(struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATAINDEX((bbt_6),(bbt_6)->dims,bbt_7))[bbt_7];
				struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 505, 0};
				bbOnDebugEnterStm(&__stmt_1);
				bbt_7=(bbt_7+1U);
				struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 505, 0};
				bbOnDebugEnterStm(&__stmt_2);
				if(bbt_what3==&bbNullObject){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 505, 0};
					bbOnDebugEnterStm(&__stmt_0);
					bbOnDebugLeaveScope();
					bbOnDebugLeaveScope();
					continue;
				}
				struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 506, 0};
				bbOnDebugEnterStm(&__stmt_3);
				maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_what3))->_maxgui_proxygadgets_checklistbox_singleitem_panel ,0,((bbt_con*((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_what3))->_maxgui_proxygadgets_checklistbox_singleitem_item_h )-(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_current_position *((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_what3))->_maxgui_proxygadgets_checklistbox_singleitem_item_h )),((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel_width ,((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_what3))->_maxgui_proxygadgets_checklistbox_singleitem_item_h );
				struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 507, 0};
				bbOnDebugEnterStm(&__stmt_4);
				if((maxgui_maxgui_GadgetY((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_what3))->_maxgui_proxygadgets_checklistbox_singleitem_panel )<0) || (maxgui_maxgui_GadgetY((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_what3))->_maxgui_proxygadgets_checklistbox_singleitem_panel )>((maxgui_maxgui_GadgetY((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel )+maxgui_maxgui_GadgetHeight((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel ))+((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_what3))->_maxgui_proxygadgets_checklistbox_singleitem_item_h ))){
					struct BBDebugScope __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 508, 0};
					bbOnDebugEnterStm(&__stmt_0);
					maxgui_maxgui_HideGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_what3))->_maxgui_proxygadgets_checklistbox_singleitem_panel );
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
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 510, 0};
					bbOnDebugEnterStm(&__stmt_0);
					maxgui_maxgui_ShowGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_what3))->_maxgui_proxygadgets_checklistbox_singleitem_panel );
					bbOnDebugLeaveScope();
				}
				struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 513, 0};
				bbOnDebugEnterStm(&__stmt_5);
				bbt_con+=1;
				bbOnDebugLeaveScope();
			}
			struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 515, 0};
			bbOnDebugEnterStm(&__stmt_5);
			maxgui_maxgui_SetSliderValue((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_slider ,((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_current_position );
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
			struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 521, 0};
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
				struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 523, 0};
				bbOnDebugEnterStm(&__stmt_0);
				BBARRAY bbt_8=((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ;
				BBUINT bbt_9=0U;
				while(bbt_9<((BBUINT)(bbt_8->scales[0]))){
					struct maxgui_proxygadgets_checklistbox_SingleItem_obj* bbt_what4=(struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)&bbNullObject;
					struct BBDebugScope_1 __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							{
								BBDEBUGDECL_LOCAL,
								"what",
								":SingleItem",
								.var_address=&bbt_what4
							},
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 523, 0};
					bbOnDebugEnterStm(&__stmt_0);
					bbt_what4=(struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATAINDEX((bbt_8),(bbt_8)->dims,bbt_9))[bbt_9];
					struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 523, 0};
					bbOnDebugEnterStm(&__stmt_1);
					bbt_9=(bbt_9+1U);
					struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 523, 0};
					bbOnDebugEnterStm(&__stmt_2);
					if(bbt_what4==&bbNullObject){
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 523, 0};
						bbOnDebugEnterStm(&__stmt_0);
						bbOnDebugLeaveScope();
						bbOnDebugLeaveScope();
						continue;
					}
					struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 524, 0};
					bbOnDebugEnterStm(&__stmt_3);
					if(((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_what4))->_maxgui_proxygadgets_checklistbox_singleitem_check ==((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_event))->_brl_event_tevent_source ){
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 526, 0};
						bbOnDebugEnterStm(&__stmt_0);
						brl_event_EmitEvent((struct brl_event_TEvent_obj*)brl_event_CreateEvent(8193,(BBOBJECT)o,bbt_con,0,maxgui_maxgui_ButtonState((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_what4))->_maxgui_proxygadgets_checklistbox_singleitem_check ),0,(BBOBJECT)&bbNullObject));
						struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 527, 0};
						bbOnDebugEnterStm(&__stmt_1);
						bbt_data=(BBOBJECT)&bbNullObject;
						struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 528, 0};
						bbOnDebugEnterStm(&__stmt_2);
						bbOnDebugLeaveScope();
						bbOnDebugLeaveScope();
						bbOnDebugLeaveScope();
						bbOnDebugLeaveScope();
						bbOnDebugLeaveScope();
						bbOnDebugLeaveScope();
						return (BBOBJECT)bbt_data;
					}
					struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 530, 0};
					bbOnDebugEnterStm(&__stmt_4);
					bbt_con+=1;
					bbOnDebugLeaveScope();
				}
				struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 533, 0};
				bbOnDebugEnterStm(&__stmt_1);
				BBOBJECT bbt_10=(BBOBJECT)((struct brl_event_TEvent_obj*)bbNullObjectTest(bbt_event))->_brl_event_tevent_source ;
				struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 534, 0};
				bbOnDebugEnterStm(&__stmt_2);
				if(bbt_10==((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_slider ){
					BBINT bbt_con2=0;
					struct BBDebugScope_1 __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							{
								BBDEBUGDECL_LOCAL,
								"con",
								"i",
								.var_address=&bbt_con2
							},
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 535, 0};
					bbOnDebugEnterStm(&__stmt_0);
					((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_current_position =maxgui_maxgui_SliderValue((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_slider );
					struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 537, 0};
					bbOnDebugEnterStm(&__stmt_1);
					if(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_current_position <0){
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 537, 0};
						bbOnDebugEnterStm(&__stmt_0);
						((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_current_position =0;
						bbOnDebugLeaveScope();
					}
					struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 538, 0};
					bbOnDebugEnterStm(&__stmt_2);
					if(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_current_position >(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ->scales[0])){
						struct BBDebugScope __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 538, 0};
						bbOnDebugEnterStm(&__stmt_0);
						((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_current_position =(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ->scales[0]);
						bbOnDebugLeaveScope();
					}
					struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 539, 0};
					bbOnDebugEnterStm(&__stmt_3);
					bbt_con2=0;
					struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 540, 0};
					bbOnDebugEnterStm(&__stmt_4);
					BBARRAY bbt_11=((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ;
					BBUINT bbt_12=0U;
					while(bbt_12<((BBUINT)(bbt_11->scales[0]))){
						struct maxgui_proxygadgets_checklistbox_SingleItem_obj* bbt_what5=(struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)&bbNullObject;
						struct BBDebugScope_1 __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								{
									BBDEBUGDECL_LOCAL,
									"what",
									":SingleItem",
									.var_address=&bbt_what5
								},
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 540, 0};
						bbOnDebugEnterStm(&__stmt_0);
						bbt_what5=(struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATAINDEX((bbt_11),(bbt_11)->dims,bbt_12))[bbt_12];
						struct BBDebugStm __stmt_1 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 540, 0};
						bbOnDebugEnterStm(&__stmt_1);
						bbt_12=(bbt_12+1U);
						struct BBDebugStm __stmt_2 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 540, 0};
						bbOnDebugEnterStm(&__stmt_2);
						if(bbt_what5==&bbNullObject){
							struct BBDebugScope __scope = {
								BBDEBUGSCOPE_LOCALBLOCK,
								0,
								{
									BBDEBUGDECL_END 
								}
							};
							bbOnDebugEnterScope(&__scope);
							struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 540, 0};
							bbOnDebugEnterStm(&__stmt_0);
							bbOnDebugLeaveScope();
							bbOnDebugLeaveScope();
							continue;
						}
						struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 541, 0};
						bbOnDebugEnterStm(&__stmt_3);
						maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_what5))->_maxgui_proxygadgets_checklistbox_singleitem_panel ,0,((bbt_con2*((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_what5))->_maxgui_proxygadgets_checklistbox_singleitem_item_h )-(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_current_position *((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_what5))->_maxgui_proxygadgets_checklistbox_singleitem_item_h )),((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel_width ,((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_what5))->_maxgui_proxygadgets_checklistbox_singleitem_item_h );
						struct BBDebugStm __stmt_4 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 542, 0};
						bbOnDebugEnterStm(&__stmt_4);
						if((maxgui_maxgui_GadgetY((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_what5))->_maxgui_proxygadgets_checklistbox_singleitem_panel )<0) || (maxgui_maxgui_GadgetY((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_what5))->_maxgui_proxygadgets_checklistbox_singleitem_panel )>((maxgui_maxgui_GadgetY((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel )+maxgui_maxgui_GadgetHeight((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest(o))->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel ))+((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_what5))->_maxgui_proxygadgets_checklistbox_singleitem_item_h ))){
							struct BBDebugScope __scope = {
								BBDEBUGSCOPE_LOCALBLOCK,
								0,
								{
									BBDEBUGDECL_END 
								}
							};
							bbOnDebugEnterScope(&__scope);
							struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 543, 0};
							bbOnDebugEnterStm(&__stmt_0);
							maxgui_maxgui_HideGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_what5))->_maxgui_proxygadgets_checklistbox_singleitem_panel );
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
							struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 545, 0};
							bbOnDebugEnterStm(&__stmt_0);
							maxgui_maxgui_ShowGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbNullObjectTest(bbt_what5))->_maxgui_proxygadgets_checklistbox_singleitem_panel );
							bbOnDebugLeaveScope();
						}
						struct BBDebugStm __stmt_5 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 548, 0};
						bbOnDebugEnterStm(&__stmt_5);
						bbt_con2+=1;
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
					struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 553, 0};
					bbOnDebugEnterStm(&__stmt_0);
					bbOnDebugLeaveScope();
					bbOnDebugLeaveScope();
					bbOnDebugLeaveScope();
					bbOnDebugLeaveScope();
					bbOnDebugLeaveScope();
					return (BBOBJECT)bbt_data;
				}
				struct BBDebugStm __stmt_3 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 557, 0};
				bbOnDebugEnterStm(&__stmt_3);
				bbt_data=(BBOBJECT)&bbNullObject;
				bbOnDebugLeaveScope();
			}
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_7 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 561, 0};
	bbOnDebugEnterStm(&__stmt_7);
	bbOnDebugLeaveScope();
	return (BBOBJECT)bbt_data;
}
struct brl_linkedlist_TList_obj* maxgui_proxygadgets_checklistbox_Tchecklistbox_list_checklistbox;
struct BBDebugScope_41 maxgui_proxygadgets_checklistbox_Tchecklistbox_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"Tchecklistbox",
	{
		{
			BBDEBUGDECL_FIELD,
			"myiconstrip",
			":TIconStrip",
			.field_offset=offsetof(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj,_maxgui_proxygadgets_checklistbox_tchecklistbox_myiconstrip)
		},
		{
			BBDEBUGDECL_FIELD,
			"panel",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj,_maxgui_proxygadgets_checklistbox_tchecklistbox_panel)
		},
		{
			BBDEBUGDECL_FIELD,
			"slider",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj,_maxgui_proxygadgets_checklistbox_tchecklistbox_slider)
		},
		{
			BBDEBUGDECL_FIELD,
			"style",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj,_maxgui_proxygadgets_checklistbox_tchecklistbox_style)
		},
		{
			BBDEBUGDECL_FIELD,
			"current_position",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj,_maxgui_proxygadgets_checklistbox_tchecklistbox_current_position)
		},
		{
			BBDEBUGDECL_FIELD,
			"visible",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj,_maxgui_proxygadgets_checklistbox_tchecklistbox_visible)
		},
		{
			BBDEBUGDECL_FIELD,
			"panel_width",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj,_maxgui_proxygadgets_checklistbox_tchecklistbox_panel_width)
		},
		{
			BBDEBUGDECL_FIELD,
			"it",
			"[]:SingleItem",
			.field_offset=offsetof(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj,_maxgui_proxygadgets_checklistbox_tchecklistbox_it)
		},
		{
			BBDEBUGDECL_FIELD,
			"mx",
			"[][]i",
			.field_offset=offsetof(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj,_maxgui_proxygadgets_checklistbox_tchecklistbox_mx)
		},
		{
			BBDEBUGDECL_FIELD,
			"mx_counter",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj,_maxgui_proxygadgets_checklistbox_tchecklistbox_mx_counter)
		},
		{
			BBDEBUGDECL_FIELD,
			"_r",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj,_maxgui_proxygadgets_checklistbox_tchecklistbox__r)
		},
		{
			BBDEBUGDECL_FIELD,
			"_g",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj,_maxgui_proxygadgets_checklistbox_tchecklistbox__g)
		},
		{
			BBDEBUGDECL_FIELD,
			"_b",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj,_maxgui_proxygadgets_checklistbox_tchecklistbox__b)
		},
		{
			BBDEBUGDECL_FIELD,
			"item_h",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj,_maxgui_proxygadgets_checklistbox_tchecklistbox_item_h)
		},
		{
			BBDEBUGDECL_GLOBAL,
			"list_checklistbox",
			":TList",
			.var_address=(void*)&maxgui_proxygadgets_checklistbox_Tchecklistbox_list_checklistbox
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_maxgui_proxygadgets_checklistbox_Tchecklistbox_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"AddExclusion",
			"($)i",
			.var_address=(void*)&_maxgui_proxygadgets_checklistbox_Tchecklistbox_AddExclusion_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"CleanExclusion",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_checklistbox_Tchecklistbox_CleanExclusion
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"InsertItem",
			"(i,$,$,i,:Object,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_checklistbox_Tchecklistbox_InsertItem_iSSiTObjecti
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetIconStrip",
			"(:TIconStrip)i",
			.var_address=(void*)&_maxgui_proxygadgets_checklistbox_Tchecklistbox_SetIconStrip_TTIconStrip
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetFont",
			"(:TGuiFont)i",
			.var_address=(void*)&_maxgui_proxygadgets_checklistbox_Tchecklistbox_SetFont_TTGuiFont
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SelectItem",
			"(i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_checklistbox_Tchecklistbox_SelectItem_ii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetEnabled",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_checklistbox_Tchecklistbox_SetEnabled_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ItemCount",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_checklistbox_Tchecklistbox_ItemCount
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Class",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_checklistbox_Tchecklistbox_Class
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"RemoveItem",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_checklistbox_Tchecklistbox_RemoveItem_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"_refresh",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_checklistbox_Tchecklistbox__refresh
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetItem",
			"(i,$,$,i,:Object,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_checklistbox_Tchecklistbox_SetItem_iSSiTObjecti
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ItemText",
			"(i)$",
			.var_address=(void*)&_maxgui_proxygadgets_checklistbox_Tchecklistbox_ItemText_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ItemTip",
			"(i)$",
			.var_address=(void*)&_maxgui_proxygadgets_checklistbox_Tchecklistbox_ItemTip_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ItemExtra",
			"(i):Object",
			.var_address=(void*)&_maxgui_proxygadgets_checklistbox_Tchecklistbox_ItemExtra_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ItemIcon",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_checklistbox_Tchecklistbox_ItemIcon_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ItemState",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_checklistbox_Tchecklistbox_ItemState_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Clear",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_checklistbox_Tchecklistbox_Clear
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetColor",
			"(i,i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_checklistbox_Tchecklistbox_SetColor_iii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SelectedItems",
			"()[]i",
			.var_address=(void*)&_maxgui_proxygadgets_checklistbox_Tchecklistbox_SelectedItems
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"CleanUp",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_checklistbox_Tchecklistbox_CleanUp
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Free",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_checklistbox_Tchecklistbox_Free
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Create",
			"(i,i,i,i,:TGadget,i):Tchecklistbox",
			.var_address=(void*)&maxgui_proxygadgets_checklistbox_Tchecklistbox_Create_TTchecklistbox_iiiiTTGadgeti
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"eventHandler",
			"(i,:Object,:Object):Object",
			.var_address=(void*)&maxgui_proxygadgets_checklistbox_Tchecklistbox_eventHandler_TObject_iTObjectTObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"EventHook",
			"(i,:Object,:Object):Object",
			.var_address=(void*)&_maxgui_proxygadgets_checklistbox_Tchecklistbox_EventHook_iTObjectTObject
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_maxgui_proxygadgets_checklistbox_Tchecklistbox maxgui_proxygadgets_checklistbox_Tchecklistbox={
	&maxgui_maxgui_gadget_TProxyGadget,
	bbObjectFree,
	(BBDebugScope*)&maxgui_proxygadgets_checklistbox_Tchecklistbox_scope,
	sizeof(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj),
	(void (*)(BBOBJECT))_maxgui_proxygadgets_checklistbox_Tchecklistbox_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj,_maxgui_proxygadgets_checklistbox_tchecklistbox_item_h) - sizeof(void*) + sizeof(BBINT)
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
	,_maxgui_proxygadgets_checklistbox_Tchecklistbox_Clear
	,_maxgui_proxygadgets_checklistbox_Tchecklistbox_InsertItem_iSSiTObjecti
	,_maxgui_proxygadgets_checklistbox_Tchecklistbox_SetItem_iSSiTObjecti
	,_maxgui_proxygadgets_checklistbox_Tchecklistbox_RemoveItem_i
	,_maxgui_proxygadgets_checklistbox_Tchecklistbox_ItemCount
	,_maxgui_proxygadgets_checklistbox_Tchecklistbox_ItemText_i
	,_maxgui_proxygadgets_checklistbox_Tchecklistbox_ItemTip_i
	,_maxgui_maxgui_gadget_TProxyGadget_ItemFlags_i
	,_maxgui_proxygadgets_checklistbox_Tchecklistbox_ItemIcon_i
	,_maxgui_proxygadgets_checklistbox_Tchecklistbox_ItemExtra_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetItemState_ii
	,_maxgui_proxygadgets_checklistbox_Tchecklistbox_ItemState_i
	,_maxgui_proxygadgets_checklistbox_Tchecklistbox_SelectItem_ii
	,_maxgui_maxgui_gadget_TProxyGadget_SelectedItem
	,_maxgui_proxygadgets_checklistbox_Tchecklistbox_SelectedItems
	,_maxgui_maxgui_gadget_TGadget_Insert_TTGadgeti
	,_maxgui_maxgui_gadget_TProxyGadget_Query_i
	,_maxgui_maxgui_gadget_TGadget_ScaleFactor
	,_maxgui_proxygadgets_checklistbox_Tchecklistbox_CleanUp
	,_maxgui_proxygadgets_checklistbox_Tchecklistbox_Free
	,_maxgui_maxgui_gadget_TProxyGadget_Rethink
	,_maxgui_maxgui_gadget_TProxyGadget_ClientWidth
	,_maxgui_maxgui_gadget_TProxyGadget_ClientHeight
	,_maxgui_maxgui_gadget_TProxyGadget_Activate_i
	,_maxgui_maxgui_gadget_TProxyGadget_State
	,_maxgui_maxgui_gadget_TProxyGadget_SetText_S
	,_maxgui_maxgui_gadget_TProxyGadget_GetText
	,_maxgui_proxygadgets_checklistbox_Tchecklistbox_SetFont_TTGuiFont
	,_maxgui_proxygadgets_checklistbox_Tchecklistbox_SetColor_iii
	,_maxgui_maxgui_gadget_TProxyGadget_RemoveColor
	,_maxgui_maxgui_gadget_TProxyGadget_SetAlpha_f
	,_maxgui_maxgui_gadget_TProxyGadget_SetTextColor_iii
	,_maxgui_maxgui_gadget_TProxyGadget_SetTooltip_S
	,_maxgui_maxgui_gadget_TProxyGadget_GetTooltip
	,_maxgui_maxgui_gadget_TProxyGadget_SetPixmap_TTPixmapi
	,_maxgui_proxygadgets_checklistbox_Tchecklistbox_SetIconStrip_TTIconStrip
	,_maxgui_maxgui_gadget_TProxyGadget_SetShow_i
	,_maxgui_proxygadgets_checklistbox_Tchecklistbox_SetEnabled_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetSelected_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetHotKey_ii
	,_maxgui_maxgui_gadget_TProxyGadget_SetSensitivity_i
	,_maxgui_maxgui_gadget_TProxyGadget_GetSensitivity
	,_maxgui_proxygadgets_checklistbox_Tchecklistbox_Class
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
	,_maxgui_proxygadgets_checklistbox_Tchecklistbox_AddExclusion_S
	,_maxgui_proxygadgets_checklistbox_Tchecklistbox_CleanExclusion
	,_maxgui_proxygadgets_checklistbox_Tchecklistbox__refresh
	,maxgui_proxygadgets_checklistbox_Tchecklistbox_Create_TTchecklistbox_iiiiTTGadgeti
	,maxgui_proxygadgets_checklistbox_Tchecklistbox_eventHandler_TObject_iTObjectTObject
	,_maxgui_proxygadgets_checklistbox_Tchecklistbox_EventHook_iTObjectTObject
};

struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* maxgui_proxygadgets_checklistbox_CreateCheckListBox(BBINT bbt_x,BBINT bbt_y,BBINT bbt_w,BBINT bbt_h,struct maxgui_maxgui_gadget_TGadget_obj* bbt_win,BBINT bbt_style){
	struct BBDebugScope_6 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"CreateCheckListBox",
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
				"win",
				":TGadget",
				.var_address=&bbt_win
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
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 49, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return (struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)maxgui_proxygadgets_checklistbox_Tchecklistbox_Create_TTchecklistbox_iiiiTTGadgeti(bbt_x,bbt_y,bbt_w,bbt_h,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_win,bbt_style);
}
BBINT maxgui_proxygadgets_checklistbox_ListAddExclusion(struct maxgui_maxgui_gadget_TGadget_obj* bbt_gad,BBSTRING bbt_lista){
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"ListAddExclusion",
		{
			{
				BBDEBUGDECL_LOCAL,
				"gad",
				":TGadget",
				.var_address=&bbt_gad
			},
			{
				BBDEBUGDECL_LOCAL,
				"lista",
				"$",
				.var_address=&bbt_lista
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 145, 0};
	bbOnDebugEnterStm(&__stmt_0);
	struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* bbt_;
	(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest((bbt_ = ((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbObjectDowncast((BBOBJECT)bbt_gad,(BBClass*)&maxgui_proxygadgets_checklistbox_Tchecklistbox))))))->clas)->m_AddExclusion_S((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbt_,bbt_lista);
	bbOnDebugLeaveScope();
	return 0;
}
BBINT maxgui_proxygadgets_checklistbox_ListCleanExclusion(struct maxgui_maxgui_gadget_TGadget_obj* bbt_gad){
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"ListCleanExclusion",
		{
			{
				BBDEBUGDECL_LOCAL,
				"gad",
				":TGadget",
				.var_address=&bbt_gad
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {"C:/BlitzMaxNG/mod/maxgui.mod/proxygadgets.mod/CheckListBox.bmx", 149, 0};
	bbOnDebugEnterStm(&__stmt_0);
	struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* bbt_;
	(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbNullObjectTest((bbt_ = ((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbObjectDowncast((BBOBJECT)bbt_gad,(BBClass*)&maxgui_proxygadgets_checklistbox_Tchecklistbox))))))->clas)->m_CleanExclusion((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbt_);
	bbOnDebugLeaveScope();
	return 0;
}
static int _bb_maxgui_proxygadgets_checklistbox_inited = 0;
int _bb_maxgui_proxygadgets_checklistbox(){
	if (!_bb_maxgui_proxygadgets_checklistbox_inited) {
		_bb_maxgui_proxygadgets_checklistbox_inited = 1;
		GC_add_roots(&maxgui_proxygadgets_checklistbox_Tchecklistbox_list_checklistbox, &maxgui_proxygadgets_checklistbox_Tchecklistbox_list_checklistbox + 1);
		__bb_brl_blitz_blitz();
		__bb_maxgui_maxgui_maxgui();
		__bb_brl_eventqueue_eventqueue();
		bbObjectRegisterType((BBCLASS)&maxgui_proxygadgets_checklistbox_SingleItem);
		bbObjectRegisterType((BBCLASS)&maxgui_proxygadgets_checklistbox_Tchecklistbox);
		maxgui_proxygadgets_checklistbox_Tchecklistbox_list_checklistbox=(struct brl_linkedlist_TList_obj*)&bbNullObject;
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_FUNCTION,
			"CheckListBox",
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