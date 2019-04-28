#include "FilePicker.bmx.release.win32.x64.h"
static BBString _s0={
	&bbStringClass,
	3,
	{46,46,46}
};
struct BBDebugScope_24{int kind; const char *name; BBDebugDecl decls[25]; };
void _maxgui_proxygadgets_filepicker_tFilepicker_New(struct maxgui_proxygadgets_filepicker_tFilepicker_obj* o) {
	_maxgui_maxgui_gadget_TProxyGadget_New((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o);
	o->clas = &maxgui_proxygadgets_filepicker_tFilepicker;
	o->_maxgui_proxygadgets_filepicker_tfilepicker_panel = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_filepicker_tfilepicker_label = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_filepicker_tfilepicker_button = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_filepicker_tfilepicker_path = &bbEmptyString;
	o->_maxgui_proxygadgets_filepicker_tfilepicker_start_path = &bbEmptyString;
	o->_maxgui_proxygadgets_filepicker_tfilepicker_message = &bbEmptyString;
	o->_maxgui_proxygadgets_filepicker_tfilepicker_style = 0;
	o->_maxgui_proxygadgets_filepicker_tfilepicker_extensions = &bbEmptyString;
	o->_maxgui_proxygadgets_filepicker_tfilepicker_pixmap = (struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_filepicker_tfilepicker_grey_pixmap = (struct brl_pixmap_TPixmap_obj*)&bbNullObject;
}
BBINT _maxgui_proxygadgets_filepicker_tFilepicker_SetFont_TTGuiFont(struct maxgui_proxygadgets_filepicker_tFilepicker_obj* o,struct maxgui_maxgui_guifont_TGuiFont_obj* bbt_fnt){
	if(bbt_fnt==&bbNullObject){
		return 0;
	}
	if(((BBObject*)o->_maxgui_proxygadgets_filepicker_tfilepicker_label )!= &bbNullObject){
		maxgui_maxgui_SetGadgetFont((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_filepicker_tfilepicker_label ,(struct maxgui_maxgui_guifont_TGuiFont_obj*)bbt_fnt,0);
	}
	if(((BBObject*)o->_maxgui_proxygadgets_filepicker_tfilepicker_button )!= &bbNullObject){
		maxgui_maxgui_SetGadgetFont((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_filepicker_tfilepicker_button ,(struct maxgui_maxgui_guifont_TGuiFont_obj*)bbt_fnt,0);
	}
	return 0;
}
BBINT _maxgui_proxygadgets_filepicker_tFilepicker_SetPixmap_TTPixmapi(struct maxgui_proxygadgets_filepicker_tFilepicker_obj* o,struct brl_pixmap_TPixmap_obj* bbt_pix,BBINT bbt_flags){
	if(((BBObject*)bbt_pix)!= &bbNullObject){
		maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_filepicker_tfilepicker_button ,&bbEmptyString);
		maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_filepicker_tfilepicker_button ,(struct brl_pixmap_TPixmap_obj*)bbt_pix,8);
		o->_maxgui_proxygadgets_filepicker_tfilepicker_pixmap =(struct brl_pixmap_TPixmap_obj*)bbt_pix;
		o->_maxgui_proxygadgets_filepicker_tfilepicker_grey_pixmap =(struct brl_pixmap_TPixmap_obj*)((struct brl_pixmap_TPixmap_obj*)bbObjectDowncast((BBOBJECT)maxgui_proxygadgets_common_MakeGrey((BBOBJECT)bbt_pix),(BBClass*)&brl_pixmap_TPixmap));
	}
	return 0;
}
BBINT _maxgui_proxygadgets_filepicker_tFilepicker_SelectFilter_S(struct maxgui_proxygadgets_filepicker_tFilepicker_obj* o,BBSTRING bbt__filter){
	if(bbt__filter==&bbEmptyString){
		return -1;
	}
	o->_maxgui_proxygadgets_filepicker_tfilepicker_extensions =bbt__filter;
	return 0;
}
BBINT _maxgui_proxygadgets_filepicker_tFilepicker_Class(struct maxgui_proxygadgets_filepicker_tFilepicker_obj* o){
	return 23;
}
BBINT _maxgui_proxygadgets_filepicker_tFilepicker_CleanUp(struct maxgui_proxygadgets_filepicker_tFilepicker_obj* o){
	brl_hook_RemoveHook(brl_event_EmitEventHook,o->clas->f_eventHandler_TObject_iTObjectTObject,(BBOBJECT)o);
	if(((BBObject*)o->_maxgui_proxygadgets_filepicker_tfilepicker_label )!= &bbNullObject){
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_filepicker_tfilepicker_label );
		o->_maxgui_proxygadgets_filepicker_tfilepicker_label =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	}
	if(((BBObject*)o->_maxgui_proxygadgets_filepicker_tfilepicker_button )!= &bbNullObject){
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_filepicker_tfilepicker_button );
		o->_maxgui_proxygadgets_filepicker_tfilepicker_button =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	}
	if(((BBObject*)o->_maxgui_proxygadgets_filepicker_tfilepicker_panel )!= &bbNullObject){
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_filepicker_tfilepicker_panel );
		o->_maxgui_proxygadgets_filepicker_tfilepicker_panel =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	}
	o->_maxgui_proxygadgets_filepicker_tfilepicker_pixmap =(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_filepicker_tfilepicker_grey_pixmap =(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	(&maxgui_proxygadgets_filepicker_tFilepicker)->super->m_CleanUp((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o);
	return 0;
}
BBINT _maxgui_proxygadgets_filepicker_tFilepicker_SetShow_i(struct maxgui_proxygadgets_filepicker_tFilepicker_obj* o,BBINT bbt_bool){
	(o->_maxgui_proxygadgets_filepicker_tfilepicker_panel )->clas->m_SetShow_i((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_filepicker_tfilepicker_panel ,bbt_bool);
	return 0;
}
BBINT _maxgui_proxygadgets_filepicker_tFilepicker_SetEnabled_i(struct maxgui_proxygadgets_filepicker_tFilepicker_obj* o,BBINT bbt_status){
	if(bbt_status==1){
		maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_filepicker_tfilepicker_panel );
		maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_filepicker_tfilepicker_button ,(struct brl_pixmap_TPixmap_obj*)o->_maxgui_proxygadgets_filepicker_tfilepicker_pixmap ,8);
		maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_filepicker_tfilepicker_label );
		maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_filepicker_tfilepicker_button );
	}else{
		maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_filepicker_tfilepicker_button ,(struct brl_pixmap_TPixmap_obj*)o->_maxgui_proxygadgets_filepicker_tfilepicker_grey_pixmap ,8);
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_filepicker_tfilepicker_panel );
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_filepicker_tfilepicker_label );
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_filepicker_tfilepicker_button );
	}
	return 0;
}
struct maxgui_proxygadgets_filepicker_tFilepicker_obj* maxgui_proxygadgets_filepicker_tFilepicker_Create_TtFilepicker_SSiiiiTTGadgeti(BBSTRING bbt_msg,BBSTRING bbt_ini_path,BBINT bbt_x,BBINT bbt_y,BBINT bbt_w,BBINT bbt_h,struct maxgui_maxgui_gadget_TGadget_obj* bbt_group,BBINT bbt_style){
	struct maxgui_proxygadgets_filepicker_tFilepicker_obj* bbt_sp=(struct maxgui_proxygadgets_filepicker_tFilepicker_obj*)(struct maxgui_proxygadgets_filepicker_tFilepicker_obj*)bbObjectNew((BBClass *)&maxgui_proxygadgets_filepicker_tFilepicker);
	bbt_sp->_maxgui_proxygadgets_filepicker_tfilepicker_panel =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreatePanel(bbt_x,bbt_y,bbt_w,bbt_h,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group,0,&bbEmptyString);
	bbt_sp->_maxgui_proxygadgets_filepicker_tfilepicker_label =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateTextField(1,1,(bbt_w-25),(bbt_h-2),(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_filepicker_tfilepicker_panel ,0);
	bbt_sp->_maxgui_proxygadgets_filepicker_tfilepicker_button =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateButton(&_s0,(bbt_w-24),1,22,(bbt_h-2),(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_filepicker_tfilepicker_panel ,8);
	maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_filepicker_tfilepicker_label ,bbt_ini_path);
	if(bbt_msg!=&bbEmptyString){
		maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_filepicker_tfilepicker_label ,bbt_msg);
	}
	bbt_sp->_maxgui_proxygadgets_filepicker_tfilepicker_start_path =bbt_ini_path;
	bbt_sp->_maxgui_proxygadgets_filepicker_tfilepicker_message =bbt_msg;
	bbt_sp->_maxgui_proxygadgets_filepicker_tfilepicker_style =bbt_style;
	brl_hook_AddHook(brl_event_EmitEventHook,maxgui_proxygadgets_filepicker_tFilepicker_eventHandler_TObject_iTObjectTObject,(BBOBJECT)bbt_sp,0);
	(bbt_sp)->clas->m_SetProxy_TTGadget((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbt_sp,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_filepicker_tfilepicker_panel );
	maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_filepicker_tfilepicker_panel ,1,1,0,0);
	maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_filepicker_tfilepicker_label ,1,2,2,2);
	maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_filepicker_tfilepicker_button ,2,1,2,2);
	return (struct maxgui_proxygadgets_filepicker_tFilepicker_obj*)bbt_sp;
}
BBINT _maxgui_proxygadgets_filepicker_tFilepicker_SetColor_iii(struct maxgui_proxygadgets_filepicker_tFilepicker_obj* o,BBINT bbt_RED,BBINT bbt_green,BBINT bbt_blue){
	maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_filepicker_tfilepicker_label ,bbt_RED,bbt_green,bbt_blue,1);
	return 0;
}
BBSTRING _maxgui_proxygadgets_filepicker_tFilepicker_GetText(struct maxgui_proxygadgets_filepicker_tFilepicker_obj* o){
	return maxgui_maxgui_GadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_filepicker_tfilepicker_label );
}
BBINT _maxgui_proxygadgets_filepicker_tFilepicker_SetText_S(struct maxgui_proxygadgets_filepicker_tFilepicker_obj* o,BBSTRING bbt_tx){
	if(bbt_tx==&bbEmptyString){
		return -1;
	}
	maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_filepicker_tfilepicker_label ,bbt_tx);
	return 0;
}
BBINT _maxgui_proxygadgets_filepicker_tFilepicker_SetLayout_iiii(struct maxgui_proxygadgets_filepicker_tFilepicker_obj* o,BBINT bbt_a,BBINT bbt_b,BBINT bbt_c,BBINT bbt_d){
	return 0;
}
BBOBJECT maxgui_proxygadgets_filepicker_tFilepicker_eventHandler_TObject_iTObjectTObject(BBINT bbt_pID,BBOBJECT bbt_pData,BBOBJECT bbt_pContext){
	struct brl_event_TEvent_obj* bbt_pEvent=(struct brl_event_TEvent_obj*)((struct brl_event_TEvent_obj*)bbObjectDowncast((BBOBJECT)bbt_pData,(BBClass*)&brl_event_TEvent));
	struct maxgui_proxygadgets_filepicker_tFilepicker_obj* bbt_obj=(struct maxgui_proxygadgets_filepicker_tFilepicker_obj*)((struct maxgui_proxygadgets_filepicker_tFilepicker_obj*)bbObjectDowncast((BBOBJECT)bbt_pContext,(BBClass*)&maxgui_proxygadgets_filepicker_tFilepicker));
	BBSTRING bbt_path=&bbEmptyString;
	BBINT bbt__flag=0;
	if(((unsigned int)(bbt_obj->_maxgui_proxygadgets_filepicker_tfilepicker_style )&4)==4){
		bbt__flag=1;
	}
	if(((BBObject*)bbt_pEvent)!= &bbNullObject){
		BBINT bbt_=bbt_pEvent->_brl_event_tevent_id ;
		if(bbt_==8193){
			if(bbt_pEvent->_brl_event_tevent_source ==bbt_obj->_maxgui_proxygadgets_filepicker_tfilepicker_button ){
				if(((unsigned int)(bbt_obj->_maxgui_proxygadgets_filepicker_tfilepicker_style )&1)!=0){
					bbt_path=brl_system_RequestFile(bbt_obj->_maxgui_proxygadgets_filepicker_tfilepicker_message ,bbt_obj->_maxgui_proxygadgets_filepicker_tfilepicker_extensions ,bbt__flag,bbt_obj->_maxgui_proxygadgets_filepicker_tfilepicker_start_path );
				}else{
					if(((unsigned int)(bbt_obj->_maxgui_proxygadgets_filepicker_tfilepicker_style )&2)==2){
						bbt_path=brl_system_RequestDir(bbt_obj->_maxgui_proxygadgets_filepicker_tfilepicker_message ,bbt_obj->_maxgui_proxygadgets_filepicker_tfilepicker_start_path );
					}
				}
				bbt_pEvent->_brl_event_tevent_extra =(BBOBJECT)bbt_path;
				if(bbt_path!=&bbEmptyString){
					maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_filepicker_tfilepicker_label ,bbt_path);
				}
				maxgui_maxgui_SetGadgetExtra((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_obj,(BBClass*)&maxgui_maxgui_gadget_TGadget)),(BBOBJECT)bbt_path);
				brl_event_EmitEvent((struct brl_event_TEvent_obj*)brl_event_CreateEvent(8193,(BBOBJECT)bbt_obj,0,0,0,0,(BBOBJECT)bbt_path));
				return (BBOBJECT)bbt_pEvent;
			}
		}
	}
	return (BBOBJECT)bbt_pData;
}
struct BBDebugScope_24 maxgui_proxygadgets_filepicker_tFilepicker_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"tFilepicker",
	{
		{
			BBDEBUGDECL_FIELD,
			"panel",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_filepicker_tFilepicker_obj,_maxgui_proxygadgets_filepicker_tfilepicker_panel)
		},
		{
			BBDEBUGDECL_FIELD,
			"label",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_filepicker_tFilepicker_obj,_maxgui_proxygadgets_filepicker_tfilepicker_label)
		},
		{
			BBDEBUGDECL_FIELD,
			"button",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_filepicker_tFilepicker_obj,_maxgui_proxygadgets_filepicker_tfilepicker_button)
		},
		{
			BBDEBUGDECL_FIELD,
			"path",
			"$",
			.field_offset=offsetof(struct maxgui_proxygadgets_filepicker_tFilepicker_obj,_maxgui_proxygadgets_filepicker_tfilepicker_path)
		},
		{
			BBDEBUGDECL_FIELD,
			"start_path",
			"$",
			.field_offset=offsetof(struct maxgui_proxygadgets_filepicker_tFilepicker_obj,_maxgui_proxygadgets_filepicker_tfilepicker_start_path)
		},
		{
			BBDEBUGDECL_FIELD,
			"message",
			"$",
			.field_offset=offsetof(struct maxgui_proxygadgets_filepicker_tFilepicker_obj,_maxgui_proxygadgets_filepicker_tfilepicker_message)
		},
		{
			BBDEBUGDECL_FIELD,
			"style",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_filepicker_tFilepicker_obj,_maxgui_proxygadgets_filepicker_tfilepicker_style)
		},
		{
			BBDEBUGDECL_FIELD,
			"extensions",
			"$",
			.field_offset=offsetof(struct maxgui_proxygadgets_filepicker_tFilepicker_obj,_maxgui_proxygadgets_filepicker_tfilepicker_extensions)
		},
		{
			BBDEBUGDECL_FIELD,
			"pixmap",
			":TPixmap",
			.field_offset=offsetof(struct maxgui_proxygadgets_filepicker_tFilepicker_obj,_maxgui_proxygadgets_filepicker_tfilepicker_pixmap)
		},
		{
			BBDEBUGDECL_FIELD,
			"grey_pixmap",
			":TPixmap",
			.field_offset=offsetof(struct maxgui_proxygadgets_filepicker_tFilepicker_obj,_maxgui_proxygadgets_filepicker_tfilepicker_grey_pixmap)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_maxgui_proxygadgets_filepicker_tFilepicker_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetFont",
			"(:TGuiFont)i",
			.var_address=(void*)&_maxgui_proxygadgets_filepicker_tFilepicker_SetFont_TTGuiFont
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetPixmap",
			"(:TPixmap,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_filepicker_tFilepicker_SetPixmap_TTPixmapi
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SelectFilter",
			"($)i",
			.var_address=(void*)&_maxgui_proxygadgets_filepicker_tFilepicker_SelectFilter_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Class",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_filepicker_tFilepicker_Class
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"CleanUp",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_filepicker_tFilepicker_CleanUp
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetShow",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_filepicker_tFilepicker_SetShow_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetEnabled",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_filepicker_tFilepicker_SetEnabled_i
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Create",
			"($,$,i,i,i,i,:TGadget,i):tFilepicker",
			.var_address=(void*)&maxgui_proxygadgets_filepicker_tFilepicker_Create_TtFilepicker_SSiiiiTTGadgeti
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetColor",
			"(i,i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_filepicker_tFilepicker_SetColor_iii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetText",
			"()$",
			.var_address=(void*)&_maxgui_proxygadgets_filepicker_tFilepicker_GetText
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetText",
			"($)i",
			.var_address=(void*)&_maxgui_proxygadgets_filepicker_tFilepicker_SetText_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetLayout",
			"(i,i,i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_filepicker_tFilepicker_SetLayout_iiii
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"eventHandler",
			"(i,:Object,:Object):Object",
			.var_address=(void*)&maxgui_proxygadgets_filepicker_tFilepicker_eventHandler_TObject_iTObjectTObject
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_maxgui_proxygadgets_filepicker_tFilepicker maxgui_proxygadgets_filepicker_tFilepicker={
	&maxgui_maxgui_gadget_TProxyGadget,
	bbObjectFree,
	(BBDebugScope*)&maxgui_proxygadgets_filepicker_tFilepicker_scope,
	sizeof(struct maxgui_proxygadgets_filepicker_tFilepicker_obj),
	(void (*)(BBOBJECT))_maxgui_proxygadgets_filepicker_tFilepicker_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct maxgui_proxygadgets_filepicker_tFilepicker_obj,_maxgui_proxygadgets_filepicker_tfilepicker_grey_pixmap) - sizeof(void*) + sizeof(struct brl_pixmap_TPixmap_obj*)
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
	,_maxgui_proxygadgets_filepicker_tFilepicker_SetLayout_iiii
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
	,_maxgui_proxygadgets_filepicker_tFilepicker_CleanUp
	,_maxgui_maxgui_gadget_TProxyGadget_Free
	,_maxgui_maxgui_gadget_TProxyGadget_Rethink
	,_maxgui_maxgui_gadget_TProxyGadget_ClientWidth
	,_maxgui_maxgui_gadget_TProxyGadget_ClientHeight
	,_maxgui_maxgui_gadget_TProxyGadget_Activate_i
	,_maxgui_maxgui_gadget_TProxyGadget_State
	,_maxgui_proxygadgets_filepicker_tFilepicker_SetText_S
	,_maxgui_proxygadgets_filepicker_tFilepicker_GetText
	,_maxgui_proxygadgets_filepicker_tFilepicker_SetFont_TTGuiFont
	,_maxgui_proxygadgets_filepicker_tFilepicker_SetColor_iii
	,_maxgui_maxgui_gadget_TProxyGadget_RemoveColor
	,_maxgui_maxgui_gadget_TProxyGadget_SetAlpha_f
	,_maxgui_maxgui_gadget_TProxyGadget_SetTextColor_iii
	,_maxgui_maxgui_gadget_TProxyGadget_SetTooltip_S
	,_maxgui_maxgui_gadget_TProxyGadget_GetTooltip
	,_maxgui_proxygadgets_filepicker_tFilepicker_SetPixmap_TTPixmapi
	,_maxgui_maxgui_gadget_TProxyGadget_SetIconStrip_TTIconStrip
	,_maxgui_proxygadgets_filepicker_tFilepicker_SetShow_i
	,_maxgui_proxygadgets_filepicker_tFilepicker_SetEnabled_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetSelected_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetHotKey_ii
	,_maxgui_maxgui_gadget_TProxyGadget_SetSensitivity_i
	,_maxgui_maxgui_gadget_TProxyGadget_GetSensitivity
	,_maxgui_proxygadgets_filepicker_tFilepicker_Class
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
	,_maxgui_proxygadgets_filepicker_tFilepicker_SelectFilter_S
	,maxgui_proxygadgets_filepicker_tFilepicker_Create_TtFilepicker_SSiiiiTTGadgeti
	,maxgui_proxygadgets_filepicker_tFilepicker_eventHandler_TObject_iTObjectTObject
};

struct maxgui_proxygadgets_filepicker_tFilepicker_obj* maxgui_proxygadgets_filepicker_CreateFilePicker(BBSTRING bbt_msg,BBSTRING bbt_cpath,BBINT bbt_x,BBINT bbt_y,BBINT bbt_w,BBINT bbt_h,struct maxgui_maxgui_gadget_TGadget_obj* bbt_group,BBINT bbt_style){
	return (struct maxgui_proxygadgets_filepicker_tFilepicker_obj*)maxgui_proxygadgets_filepicker_tFilepicker_Create_TtFilepicker_SSiiiiTTGadgeti(bbt_msg,bbt_cpath,bbt_x,bbt_y,bbt_w,bbt_h,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group,bbt_style);
}
static int _bb_maxgui_proxygadgets_filepicker_inited = 0;
int _bb_maxgui_proxygadgets_filepicker(){
	if (!_bb_maxgui_proxygadgets_filepicker_inited) {
		_bb_maxgui_proxygadgets_filepicker_inited = 1;
		__bb_brl_blitz_blitz();
		__bb_maxgui_maxgui_maxgui();
		_bb_maxgui_proxygadgets_common();
		bbObjectRegisterType((BBCLASS)&maxgui_proxygadgets_filepicker_tFilepicker);
		return 0;
	}
	return 0;
}