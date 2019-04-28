#include "DatePicker.bmx.release.win32.x64.h"
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
struct BBDebugScope_27{int kind; const char *name; BBDebugDecl decls[28]; };
void _maxgui_proxygadgets_datepicker_tdatepicker_New(struct maxgui_proxygadgets_datepicker_tdatepicker_obj* o) {
	_maxgui_maxgui_gadget_TProxyGadget_New((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o);
	o->clas = &maxgui_proxygadgets_datepicker_tdatepicker;
	o->_maxgui_proxygadgets_datepicker_tdatepicker_panel = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_datepicker_tdatepicker_panel2 = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_datepicker_tdatepicker_label = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_datepicker_tdatepicker_button = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_datepicker_tdatepicker_window = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_datepicker_tdatepicker_superparent = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_datepicker_tdatepicker_style = 0;
	o->_maxgui_proxygadgets_datepicker_tdatepicker_calendar = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_datepicker_tdatepicker_active = 0;
	o->_maxgui_proxygadgets_datepicker_tdatepicker_x = 0;
	o->_maxgui_proxygadgets_datepicker_tdatepicker_y = 0;
	o->_maxgui_proxygadgets_datepicker_tdatepicker_h = 0;
	o->_maxgui_proxygadgets_datepicker_tdatepicker_pixmap = (struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_datepicker_tdatepicker_grey_pixmap = (struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_datepicker_tdatepicker_format = &_s0;
}
BBINT _maxgui_proxygadgets_datepicker_tdatepicker_SetFont_TTGuiFont(struct maxgui_proxygadgets_datepicker_tdatepicker_obj* o,struct maxgui_maxgui_guifont_TGuiFont_obj* bbt_fnt){
	if(bbt_fnt==&bbNullObject){
		return 0;
	}
	if(((BBObject*)o->_maxgui_proxygadgets_datepicker_tdatepicker_label )!= &bbNullObject){
		maxgui_maxgui_SetGadgetFont((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_datepicker_tdatepicker_label ,(struct maxgui_maxgui_guifont_TGuiFont_obj*)bbt_fnt,0);
	}
	if(((BBObject*)o->_maxgui_proxygadgets_datepicker_tdatepicker_button )!= &bbNullObject){
		maxgui_maxgui_SetGadgetFont((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_datepicker_tdatepicker_button ,(struct maxgui_maxgui_guifont_TGuiFont_obj*)bbt_fnt,0);
	}
	return 0;
}
BBINT _maxgui_proxygadgets_datepicker_tdatepicker_CleanUp(struct maxgui_proxygadgets_datepicker_tdatepicker_obj* o){
	o->_maxgui_proxygadgets_datepicker_tdatepicker_pixmap =(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_datepicker_tdatepicker_grey_pixmap =(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	if(((BBObject*)o->_maxgui_proxygadgets_datepicker_tdatepicker_panel )!= &bbNullObject){
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_datepicker_tdatepicker_panel );
		o->_maxgui_proxygadgets_datepicker_tdatepicker_panel =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	}
	if(((BBObject*)o->_maxgui_proxygadgets_datepicker_tdatepicker_panel2 )!= &bbNullObject){
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_datepicker_tdatepicker_panel2 );
		o->_maxgui_proxygadgets_datepicker_tdatepicker_panel2 =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	}
	if(((BBObject*)o->_maxgui_proxygadgets_datepicker_tdatepicker_label )!= &bbNullObject){
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_datepicker_tdatepicker_label );
		o->_maxgui_proxygadgets_datepicker_tdatepicker_label =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	}
	if(((BBObject*)o->_maxgui_proxygadgets_datepicker_tdatepicker_button )!= &bbNullObject){
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_datepicker_tdatepicker_button );
		o->_maxgui_proxygadgets_datepicker_tdatepicker_button =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	}
	if(((BBObject*)o->_maxgui_proxygadgets_datepicker_tdatepicker_window )!= &bbNullObject){
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_datepicker_tdatepicker_window );
		o->_maxgui_proxygadgets_datepicker_tdatepicker_window =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	}
	if(((BBObject*)o->_maxgui_proxygadgets_datepicker_tdatepicker_calendar )!= &bbNullObject){
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_datepicker_tdatepicker_calendar );
		o->_maxgui_proxygadgets_datepicker_tdatepicker_calendar =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	}
	brl_hook_RemoveHook(brl_event_EmitEventHook,o->clas->f_eventHandler_TObject_iTObjectTObject,(BBOBJECT)o);
	(&maxgui_proxygadgets_datepicker_tdatepicker)->super->m_CleanUp((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o);
	return 0;
}
BBINT _maxgui_proxygadgets_datepicker_tdatepicker_SetShow_i(struct maxgui_proxygadgets_datepicker_tdatepicker_obj* o,BBINT bbt_bool){
	(o->_maxgui_proxygadgets_datepicker_tdatepicker_panel )->clas->m_SetShow_i((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_datepicker_tdatepicker_panel ,bbt_bool);
	return 0;
}
BBINT _maxgui_proxygadgets_datepicker_tdatepicker_SetText_S(struct maxgui_proxygadgets_datepicker_tdatepicker_obj* o,BBSTRING bbt_txt){
	if(bbStringStartsWith((BBSTRING)bbt_txt,&_s1)!=0){
		if(((BBObject*)o->_maxgui_proxygadgets_datepicker_tdatepicker_calendar )!= &bbNullObject){
			maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_datepicker_tdatepicker_calendar ,bbStringSlice(bbt_txt,1,(bbt_txt)->length));
		}
	}else{
		if(((BBObject*)o->_maxgui_proxygadgets_datepicker_tdatepicker_label )!= &bbNullObject){
			maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_datepicker_tdatepicker_label ,bbt_txt);
		}
	}
	return 0;
}
BBINT _maxgui_proxygadgets_datepicker_tdatepicker_SetEnabled_i(struct maxgui_proxygadgets_datepicker_tdatepicker_obj* o,BBINT bbt_status){
	if(bbt_status==1){
		maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_datepicker_tdatepicker_panel );
		maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_datepicker_tdatepicker_button ,(struct brl_pixmap_TPixmap_obj*)o->_maxgui_proxygadgets_datepicker_tdatepicker_pixmap ,8);
	}else{
		maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_datepicker_tdatepicker_button ,(struct brl_pixmap_TPixmap_obj*)o->_maxgui_proxygadgets_datepicker_tdatepicker_grey_pixmap ,8);
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_datepicker_tdatepicker_panel );
	}
	return 0;
}
BBSTRING _maxgui_proxygadgets_datepicker_tdatepicker_GetText(struct maxgui_proxygadgets_datepicker_tdatepicker_obj* o){
	return maxgui_maxgui_GadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_datepicker_tdatepicker_label );
}
BBINT _maxgui_proxygadgets_datepicker_tdatepicker_Class(struct maxgui_proxygadgets_datepicker_tdatepicker_obj* o){
	return 22;
}
BBINT _maxgui_proxygadgets_datepicker_tdatepicker_SetPixmap_TTPixmapi(struct maxgui_proxygadgets_datepicker_tdatepicker_obj* o,struct brl_pixmap_TPixmap_obj* bbt_pix,BBINT bbt_flags){
	maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_datepicker_tdatepicker_button ,(struct brl_pixmap_TPixmap_obj*)bbt_pix,8);
	o->_maxgui_proxygadgets_datepicker_tdatepicker_pixmap =(struct brl_pixmap_TPixmap_obj*)bbt_pix;
	o->_maxgui_proxygadgets_datepicker_tdatepicker_grey_pixmap =(struct brl_pixmap_TPixmap_obj*)((struct brl_pixmap_TPixmap_obj*)bbObjectDowncast((BBOBJECT)maxgui_proxygadgets_common_MakeGrey((BBOBJECT)bbt_pix),(BBClass*)&brl_pixmap_TPixmap));
	return 0;
}
BBINT _maxgui_proxygadgets_datepicker_tdatepicker_SetColor_iii(struct maxgui_proxygadgets_datepicker_tdatepicker_obj* o,BBINT bbt_rr,BBINT bbt_gg,BBINT bbt_bb){
	maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_datepicker_tdatepicker_label ,bbt_rr,bbt_gg,bbt_bb,1);
	return 0;
}
struct maxgui_proxygadgets_datepicker_tdatepicker_obj* maxgui_proxygadgets_datepicker_tdatepicker_Create_Ttdatepicker_iiiiTTGadget(BBINT bbt_x,BBINT bbt_y,BBINT bbt_w,BBINT bbt_h,struct maxgui_maxgui_gadget_TGadget_obj* bbt_group){
	struct maxgui_proxygadgets_datepicker_tdatepicker_obj* bbt_sp=(struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)(struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbObjectNew((BBClass *)&maxgui_proxygadgets_datepicker_tdatepicker);
	bbt_sp->_maxgui_proxygadgets_datepicker_tdatepicker_panel =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreatePanel(bbt_x,bbt_y,bbt_w,bbt_h,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group,0,&bbEmptyString);
	bbt_sp->_maxgui_proxygadgets_datepicker_tdatepicker_label =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateLabel(&bbEmptyString,1,1,(bbt_w-25),(bbt_h-2),(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_datepicker_tdatepicker_panel ,1);
	bbt_sp->_maxgui_proxygadgets_datepicker_tdatepicker_button =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateButton(&bbEmptyString,(bbt_w-24),1,22,(bbt_h-2),(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_datepicker_tdatepicker_panel ,8);
	bbt_sp->_maxgui_proxygadgets_datepicker_tdatepicker_window =(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group;
	bbt_sp->_maxgui_proxygadgets_datepicker_tdatepicker_superparent =(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_datepicker_tdatepicker_window ;
	struct maxgui_maxgui_gadget_TGadget_obj* bbt_;
	if((((struct maxgui_maxgui_gadget_TGadget_obj*)(bbt_ = bbt_sp->_maxgui_proxygadgets_datepicker_tdatepicker_window ))->clas)->m_Class((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_)!=1){
		while(maxgui_maxgui_GadgetClass((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_datepicker_tdatepicker_window )!=1){
			bbt_sp->_maxgui_proxygadgets_datepicker_tdatepicker_window =(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_datepicker_tdatepicker_window ->_maxgui_maxgui_gadget_tgadget_parent ;
		}
	}
	bbt_sp->_maxgui_proxygadgets_datepicker_tdatepicker_style =13;
	bbt_sp->_maxgui_proxygadgets_datepicker_tdatepicker_x =bbt_x;
	bbt_sp->_maxgui_proxygadgets_datepicker_tdatepicker_y =bbt_y;
	bbt_sp->_maxgui_proxygadgets_datepicker_tdatepicker_h =bbt_h;
	bbt_sp->_maxgui_proxygadgets_datepicker_tdatepicker_panel2 =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateWindow(&bbEmptyString,(bbt_group->_maxgui_maxgui_gadget_tgadget_xpos +bbt_x),(bbt_group->_maxgui_maxgui_gadget_tgadget_ypos +bbt_h),180,230,(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject,64);
	maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_datepicker_tdatepicker_panel2 ,(bbt_sp->_maxgui_proxygadgets_datepicker_tdatepicker_window ->_maxgui_maxgui_gadget_tgadget_xpos +bbt_x),((bbt_sp->_maxgui_proxygadgets_datepicker_tdatepicker_window ->_maxgui_maxgui_gadget_tgadget_ypos +bbt_y)+bbt_h),160,230);
	bbt_sp->_maxgui_proxygadgets_datepicker_tdatepicker_calendar =(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)maxgui_proxygadgets_calendar_CreateCalendar(0,0,maxgui_maxgui_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_datepicker_tdatepicker_panel2 ),maxgui_maxgui_ClientHeight((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_datepicker_tdatepicker_panel2 ),(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_datepicker_tdatepicker_panel2 ,bbt_sp->_maxgui_proxygadgets_datepicker_tdatepicker_style ),(BBClass*)&maxgui_maxgui_gadget_TGadget));
	maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_datepicker_tdatepicker_label ,200,200,200,1);
	brl_hook_AddHook(brl_event_EmitEventHook,maxgui_proxygadgets_datepicker_tdatepicker_eventHandler_TObject_iTObjectTObject,(BBOBJECT)bbt_sp,0);
	(bbt_sp)->clas->m_SetProxy_TTGadget((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbt_sp,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_datepicker_tdatepicker_panel );
	return (struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbt_sp;
}
BBOBJECT maxgui_proxygadgets_datepicker_tdatepicker_eventHandler_TObject_iTObjectTObject(BBINT bbt_pID,BBOBJECT bbt_pData,BBOBJECT bbt_pContext){
	struct brl_event_TEvent_obj* bbt_pEvent=(struct brl_event_TEvent_obj*)((struct brl_event_TEvent_obj*)bbObjectDowncast((BBOBJECT)bbt_pData,(BBClass*)&brl_event_TEvent));
	struct maxgui_proxygadgets_datepicker_tdatepicker_obj* bbt_obj=(struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbObjectDowncast((BBOBJECT)bbt_pContext,(BBClass*)&maxgui_proxygadgets_datepicker_tdatepicker));
	BBINT bbt_spx=0;
	BBINT bbt_spy=0;
	struct maxgui_maxgui_gadget_TGadget_obj* bbt_sparent=(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_datepicker_tdatepicker_panel ->_maxgui_maxgui_gadget_tgadget_parent ;
	if(((BBObject*)bbt_sparent)!= &bbNullObject){
		if(maxgui_maxgui_GadgetClass((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sparent)==3){
			bbt_spx+=bbt_sparent->_maxgui_maxgui_gadget_tgadget_xpos ;
			bbt_spy+=bbt_sparent->_maxgui_maxgui_gadget_tgadget_ypos ;
		}
	}
	if(((BBObject*)bbt_pEvent)!= &bbNullObject){
		if((bbt_pEvent->_brl_event_tevent_id ==16385) || (bbt_pEvent->_brl_event_tevent_id ==16386)){
			if(bbt_pEvent->_brl_event_tevent_source ==bbt_obj->_maxgui_proxygadgets_datepicker_tdatepicker_window ){
				BBINT bbt_ox=0;
				BBINT bbt_oy=0;
				bbt_ox=((bbt_obj->_maxgui_proxygadgets_datepicker_tdatepicker_window ->_maxgui_maxgui_gadget_tgadget_xpos +bbt_obj->_maxgui_proxygadgets_datepicker_tdatepicker_panel ->_maxgui_maxgui_gadget_tgadget_xpos )+bbt_spx);
				bbt_oy=(((bbt_obj->_maxgui_proxygadgets_datepicker_tdatepicker_window ->_maxgui_maxgui_gadget_tgadget_ypos +bbt_obj->_maxgui_proxygadgets_datepicker_tdatepicker_panel ->_maxgui_maxgui_gadget_tgadget_ypos )+bbt_obj->_maxgui_proxygadgets_datepicker_tdatepicker_panel ->_maxgui_maxgui_gadget_tgadget_height )+bbt_spy);
				if((bbt_ox+160)>brl_system_DesktopWidth()){
					bbt_ox-=((bbt_ox+160)-brl_system_DesktopWidth());
				}
				if((bbt_oy+230)>brl_system_DesktopHeight()){
					bbt_oy-=((bbt_oy+230)-brl_system_DesktopHeight());
				}
				maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_datepicker_tdatepicker_panel2 ,bbt_ox,bbt_oy,160,230);
				maxgui_maxgui_RedrawGadget((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_datepicker_tdatepicker_panel2 );
				if(bbt_obj->_maxgui_proxygadgets_datepicker_tdatepicker_active ==1){
					maxgui_maxgui_ActivateWindow((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_datepicker_tdatepicker_panel2 );
					maxgui_maxgui_RestoreWindow((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_datepicker_tdatepicker_panel2 );
				}
				return (BBOBJECT)bbt_pEvent;
			}
		}
		if(bbt_pEvent->_brl_event_tevent_id ==16387){
			if(bbt_pEvent->_brl_event_tevent_source ==bbt_obj->_maxgui_proxygadgets_datepicker_tdatepicker_window ){
				maxgui_maxgui_HideGadget((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_datepicker_tdatepicker_panel2 );
				return (BBOBJECT)bbt_pEvent;
			}
		}
		if(bbt_pEvent->_brl_event_tevent_id ==8198){
			if(bbt_pEvent->_brl_event_tevent_source ==bbt_obj->_maxgui_proxygadgets_datepicker_tdatepicker_calendar ){
				maxgui_maxgui_HideGadget((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_datepicker_tdatepicker_panel2 );
				maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_datepicker_tdatepicker_label ,((BBString *)bbObjectDowncast((BBOBJECT)bbt_pEvent->_brl_event_tevent_extra ,(BBClass*)&bbStringClass)));
				maxgui_maxgui_SetGadgetExtra((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_obj,(BBClass*)&maxgui_maxgui_gadget_TGadget)),(BBOBJECT)((BBString *)bbObjectDowncast((BBOBJECT)bbt_pEvent->_brl_event_tevent_extra ,(BBClass*)&bbStringClass)));
				bbt_obj->_maxgui_proxygadgets_datepicker_tdatepicker_active =0;
				brl_event_EmitEvent((struct brl_event_TEvent_obj*)brl_event_CreateEvent(8193,(BBOBJECT)bbt_obj,0,0,0,0,(BBOBJECT)bbt_pEvent->_brl_event_tevent_extra ));
				return (BBOBJECT)bbt_pEvent;
			}
		}
		BBOBJECT bbt_=(BBOBJECT)bbt_pEvent->_brl_event_tevent_source ;
		if(bbt_==bbt_obj->_maxgui_proxygadgets_datepicker_tdatepicker_button ){
			BBINT bbt_ox2=0;
			BBINT bbt_oy2=0;
			bbt_ox2=((bbt_obj->_maxgui_proxygadgets_datepicker_tdatepicker_window ->_maxgui_maxgui_gadget_tgadget_xpos +bbt_obj->_maxgui_proxygadgets_datepicker_tdatepicker_panel ->_maxgui_maxgui_gadget_tgadget_xpos )+bbt_spx);
			bbt_oy2=(((bbt_obj->_maxgui_proxygadgets_datepicker_tdatepicker_window ->_maxgui_maxgui_gadget_tgadget_ypos +bbt_obj->_maxgui_proxygadgets_datepicker_tdatepicker_panel ->_maxgui_maxgui_gadget_tgadget_ypos )+bbt_obj->_maxgui_proxygadgets_datepicker_tdatepicker_panel ->_maxgui_maxgui_gadget_tgadget_height )+bbt_spy);
			if((bbt_ox2+160)>brl_system_DesktopWidth()){
				bbt_ox2-=((bbt_ox2+160)-brl_system_DesktopWidth());
			}
			if((bbt_oy2+230)>brl_system_DesktopHeight()){
				bbt_oy2-=((bbt_oy2+230)-brl_system_DesktopHeight());
			}
			maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_datepicker_tdatepicker_panel2 ,bbt_ox2,bbt_oy2,160,230);
			maxgui_maxgui_RedrawGadget((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_datepicker_tdatepicker_panel2 );
			maxgui_maxgui_RedrawGadget((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_datepicker_tdatepicker_calendar );
			maxgui_maxgui_ShowGadget((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_datepicker_tdatepicker_panel2 );
			bbt_obj->_maxgui_proxygadgets_datepicker_tdatepicker_active =1;
			return (BBOBJECT)bbt_pEvent;
		}
	}
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
		return 0;
	}
	return 0;
}