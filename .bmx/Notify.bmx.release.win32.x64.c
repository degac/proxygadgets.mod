#include "Notify.bmx.release.win32.x64.h"
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
struct BBDebugScope_17{int kind; const char *name; BBDebugDecl decls[18]; };
BBINT maxgui_proxygadgets_notify_EVENT_NOTIFY_COMPLETED=0;
void _maxgui_proxygadgets_notify_Tnotifygadget_New(struct maxgui_proxygadgets_notify_Tnotifygadget_obj* o) {
	_maxgui_maxgui_gadget_TProxyGadget_New((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o);
	o->clas = &maxgui_proxygadgets_notify_Tnotifygadget;
	o->_maxgui_proxygadgets_notify_tnotifygadget_text = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_notify_tnotifygadget_button_ok = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_notify_tnotifygadget_button_cancel = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_notify_tnotifygadget_button_abort = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_notify_tnotifygadget_window = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_notify_tnotifygadget_old_window = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_notify_tnotifygadget_line = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_notify_tnotifygadget_style = 0;
	o->_maxgui_proxygadgets_notify_tnotifygadget__destroy = 0;
	o->_maxgui_proxygadgets_notify_tnotifygadget_icongadget = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
}
BBINT _maxgui_proxygadgets_notify_Tnotifygadget_CleanUp(struct maxgui_proxygadgets_notify_Tnotifygadget_obj* o){
	if(((BBObject*)o->_maxgui_proxygadgets_notify_tnotifygadget_icongadget )!= &bbNullObject){
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_notify_tnotifygadget_icongadget );
		o->_maxgui_proxygadgets_notify_tnotifygadget_icongadget =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	}
	if(((BBObject*)o->_maxgui_proxygadgets_notify_tnotifygadget_button_ok )!= &bbNullObject){
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_notify_tnotifygadget_button_ok );
		o->_maxgui_proxygadgets_notify_tnotifygadget_button_ok =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	}
	if(((BBObject*)o->_maxgui_proxygadgets_notify_tnotifygadget_button_cancel )!= &bbNullObject){
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_notify_tnotifygadget_button_cancel );
		o->_maxgui_proxygadgets_notify_tnotifygadget_button_cancel =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	}
	if(((BBObject*)o->_maxgui_proxygadgets_notify_tnotifygadget_button_abort )!= &bbNullObject){
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_notify_tnotifygadget_button_abort );
		o->_maxgui_proxygadgets_notify_tnotifygadget_button_abort =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	}
	brl_hook_RemoveHook(brl_event_EmitEventHook,o->clas->f_eventHandler_TObject_iTObjectTObject,(BBOBJECT)o);
	if(((BBObject*)o->_maxgui_proxygadgets_notify_tnotifygadget_text )!= &bbNullObject){
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_notify_tnotifygadget_text );
		o->_maxgui_proxygadgets_notify_tnotifygadget_text =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	}
	if(((BBObject*)o->_maxgui_proxygadgets_notify_tnotifygadget_window )!= &bbNullObject){
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_notify_tnotifygadget_window );
		o->_maxgui_proxygadgets_notify_tnotifygadget_window =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	}
	(&maxgui_proxygadgets_notify_Tnotifygadget)->super->m_CleanUp((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o);
	return 0;
}
BBINT _maxgui_proxygadgets_notify_Tnotifygadget_Class(struct maxgui_proxygadgets_notify_Tnotifygadget_obj* o){
	return 26;
}
BBSTRING _maxgui_proxygadgets_notify_Tnotifygadget_GetText(struct maxgui_proxygadgets_notify_Tnotifygadget_obj* o){
	return &bbEmptyString;
}
BBINT _maxgui_proxygadgets_notify_Tnotifygadget_SetFont_TTGuiFont(struct maxgui_proxygadgets_notify_Tnotifygadget_obj* o,struct maxgui_maxgui_guifont_TGuiFont_obj* bbt_fnt){
	if(bbt_fnt==&bbNullObject){
		return 0;
	}
	if(((BBObject*)o->_maxgui_proxygadgets_notify_tnotifygadget_button_ok )!= &bbNullObject){
		maxgui_maxgui_SetGadgetFont((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_notify_tnotifygadget_button_ok ,(struct maxgui_maxgui_guifont_TGuiFont_obj*)bbt_fnt,0);
	}
	if(((BBObject*)o->_maxgui_proxygadgets_notify_tnotifygadget_button_cancel )!= &bbNullObject){
		maxgui_maxgui_SetGadgetFont((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_notify_tnotifygadget_button_cancel ,(struct maxgui_maxgui_guifont_TGuiFont_obj*)bbt_fnt,0);
	}
	if(((BBObject*)o->_maxgui_proxygadgets_notify_tnotifygadget_button_abort )!= &bbNullObject){
		maxgui_maxgui_SetGadgetFont((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_notify_tnotifygadget_button_abort ,(struct maxgui_maxgui_guifont_TGuiFont_obj*)bbt_fnt,0);
	}
	if(((BBObject*)o->_maxgui_proxygadgets_notify_tnotifygadget_text )!= &bbNullObject){
		maxgui_maxgui_SetGadgetFont((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_notify_tnotifygadget_text ,(struct maxgui_maxgui_guifont_TGuiFont_obj*)bbt_fnt,0);
	}
	return 0;
}
BBINT maxgui_proxygadgets_notify_Tnotifygadget_Create_i_SiTTGadgetTObjectTTGuiFont(BBSTRING bbt_msg,BBINT bbt_style,struct maxgui_maxgui_gadget_TGadget_obj* bbt_group,BBOBJECT bbt_img,struct maxgui_maxgui_guifont_TGuiFont_obj* bbt_fnt){
	struct maxgui_proxygadgets_notify_Tnotifygadget_obj* bbt_sp=(struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)(struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbObjectNew((BBClass *)&maxgui_proxygadgets_notify_Tnotifygadget);
	BBINT bbt_size=200;
	BBINT bbt_xtext=10;
	bbt_sp->_maxgui_proxygadgets_notify_tnotifygadget_style =bbt_style;
	if(bbt_img!=&bbNullObject){
		bbt_size=400;
		bbt_xtext=150;
	}
	BBINT bbt_cx=0;
	BBINT bbt_cy=0;
	bbt_cx=bbt_group->_maxgui_maxgui_gadget_tgadget_xpos ;
	bbt_cy=(bbt_group->_maxgui_maxgui_gadget_tgadget_ypos +20);
	bbt_sp->_maxgui_proxygadgets_notify_tnotifygadget_window =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateWindow(bbAppTitle,bbt_cx,bbt_cy,bbt_size,200,(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject,1);
	maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group);
	bbt_sp->_maxgui_proxygadgets_notify_tnotifygadget_old_window =(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group;
	bbt_sp->_maxgui_proxygadgets_notify_tnotifygadget_text =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateLabel(bbt_msg,bbt_xtext,10,((maxgui_maxgui_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_notify_tnotifygadget_window )-bbt_xtext)-10),(maxgui_maxgui_ClientHeight((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_notify_tnotifygadget_window )-40),(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_notify_tnotifygadget_window ,0);
	bbt_sp->_maxgui_proxygadgets_notify_tnotifygadget_line =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateLabel(&bbEmptyString,0,(maxgui_maxgui_ClientHeight((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_notify_tnotifygadget_window )-30),maxgui_maxgui_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_notify_tnotifygadget_window ),30,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_notify_tnotifygadget_window ,3);
	BBINT bbt_x=((maxgui_maxgui_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_notify_tnotifygadget_window )/2)-40);
	bbt_sp->_maxgui_proxygadgets_notify_tnotifygadget_button_ok =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateButton(&_s1,bbt_x,(maxgui_maxgui_ClientHeight((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_notify_tnotifygadget_window )-25),80,24,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_notify_tnotifygadget_window ,4);
	bbt_sp->_maxgui_proxygadgets_notify_tnotifygadget_icongadget =(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)maxgui_proxygadgets_icongadget_CreateIconGadget(10,10,128,128,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_notify_tnotifygadget_window ,(BBOBJECT)bbt_img,0),(BBClass*)&maxgui_maxgui_gadget_TGadget));
	maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group);
	maxgui_maxgui_ActivateWindow((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_notify_tnotifygadget_window );
	(bbt_sp)->clas->m_SetProxy_TTGadget((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbt_sp,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_notify_tnotifygadget_window );
	if(((BBObject*)bbt_fnt)!= &bbNullObject){
		maxgui_maxgui_SetGadgetFont((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_sp,(BBClass*)&maxgui_maxgui_gadget_TGadget)),(struct maxgui_maxgui_guifont_TGuiFont_obj*)bbt_fnt,0);
	}
	brl_hook_AddHook(brl_event_EmitEventHook,maxgui_proxygadgets_notify_Tnotifygadget_eventHandler_TObject_iTObjectTObject,(BBOBJECT)bbt_sp,0);
	return 0;
}
BBOBJECT maxgui_proxygadgets_notify_Tnotifygadget_eventHandler_TObject_iTObjectTObject(BBINT bbt_pID,BBOBJECT bbt_pData,BBOBJECT bbt_pContext){
	struct brl_event_TEvent_obj* bbt_pEvent=(struct brl_event_TEvent_obj*)((struct brl_event_TEvent_obj*)bbObjectDowncast((BBOBJECT)bbt_pData,(BBClass*)&brl_event_TEvent));
	struct maxgui_proxygadgets_notify_Tnotifygadget_obj* bbt_obj=(struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)((struct maxgui_proxygadgets_notify_Tnotifygadget_obj*)bbObjectDowncast((BBOBJECT)bbt_pContext,(BBClass*)&maxgui_proxygadgets_notify_Tnotifygadget));
	if(((BBObject*)bbt_pEvent)!= &bbNullObject){
		BBINT bbt_=bbt_pEvent->_brl_event_tevent_id ;
		if(bbt_==8193){
			if(bbt_obj->_maxgui_proxygadgets_notify_tnotifygadget_style ==0){
				if(bbt_pEvent->_brl_event_tevent_source ==bbt_obj->_maxgui_proxygadgets_notify_tnotifygadget_button_ok ){
					maxgui_maxgui_ActivateWindow((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_notify_tnotifygadget_old_window );
					maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_notify_tnotifygadget_old_window );
					maxgui_maxgui_ActivateGadget((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_notify_tnotifygadget_old_window );
					maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_obj,(BBClass*)&maxgui_maxgui_gadget_TGadget)));
					brl_event_EmitEvent((struct brl_event_TEvent_obj*)brl_event_CreateEvent(maxgui_proxygadgets_notify_EVENT_NOTIFY_COMPLETED,(BBOBJECT)&bbNullObject,0,0,0,0,(BBOBJECT)&bbNullObject));
				}
			}
		}else{
			if(bbt_==16387){
				if(bbt_pEvent->_brl_event_tevent_source ==bbt_obj){
					maxgui_maxgui_ActivateWindow((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_notify_tnotifygadget_old_window );
					maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_obj,(BBClass*)&maxgui_maxgui_gadget_TGadget)));
					maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_notify_tnotifygadget_old_window );
					maxgui_maxgui_ActivateGadget((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_notify_tnotifygadget_old_window );
					brl_event_EmitEvent((struct brl_event_TEvent_obj*)brl_event_CreateEvent(maxgui_proxygadgets_notify_EVENT_NOTIFY_COMPLETED,(BBOBJECT)&bbNullObject,0,0,0,0,(BBOBJECT)&bbNullObject));
				}
			}
		}
	}
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
	maxgui_proxygadgets_notify_Tnotifygadget_Create_i_SiTTGadgetTObjectTTGuiFont(bbt_msg,0,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group,(BBOBJECT)bbt_pix,(struct maxgui_maxgui_guifont_TGuiFont_obj*)bbt_fnt);
	do{
		brl_eventqueue_WaitEvent();
	}while(!(brl_eventqueue_EventID()==maxgui_proxygadgets_notify_EVENT_NOTIFY_COMPLETED));
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
		maxgui_proxygadgets_notify_EVENT_NOTIFY_COMPLETED=brl_event_AllocUserEventId(&_s0);
		return 0;
	}
	return 0;
}