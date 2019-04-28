#include "IconGadget.bmx.release.win32.x64.h"
static BBString _s0={
	&bbStringClass,
	3,
	{73,68,32}
};
struct BBDebugScope_31{int kind; const char *name; BBDebugDecl decls[32]; };
void _maxgui_proxygadgets_icongadget_TIconGadget_New(struct maxgui_proxygadgets_icongadget_TIconGadget_obj* o) {
	_maxgui_maxgui_gadget_TProxyGadget_New((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o);
	o->clas = &maxgui_proxygadgets_icongadget_TIconGadget;
	o->_maxgui_proxygadgets_icongadget_ticongadget_style = 0;
	o->_maxgui_proxygadgets_icongadget_ticongadget_animated = 0;
	o->_maxgui_proxygadgets_icongadget_ticongadget_original_animated = 0;
	o->_maxgui_proxygadgets_icongadget_ticongadget_panel = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_icongadget_ticongadget_name = &bbEmptyString;
	o->_maxgui_proxygadgets_icongadget_ticongadget_iconstrip = (struct maxgui_maxgui_iconstrip_TIconStrip_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_icongadget_ticongadget_grey_iconstrip = (struct maxgui_maxgui_iconstrip_TIconStrip_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_icongadget_ticongadget_o_iconstrip = (struct maxgui_maxgui_iconstrip_TIconStrip_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_icongadget_ticongadget_pixmap = (struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_icongadget_ticongadget_grey_pixmap = (struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_icongadget_ticongadget_o_pixmap = (struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_icongadget_ticongadget_frame_max = 0;
	o->_maxgui_proxygadgets_icongadget_ticongadget_frame_current = 0;
	o->_maxgui_proxygadgets_icongadget_ticongadget_frame_timer = 0;
	o->_maxgui_proxygadgets_icongadget_ticongadget_frame_duration = 125;
	o->_maxgui_proxygadgets_icongadget_ticongadget_frame_start = 0;
	o->_maxgui_proxygadgets_icongadget_ticongadget_frame_direction = 0;
}
struct maxgui_proxygadgets_icongadget_TIconGadget_obj* maxgui_proxygadgets_icongadget_TIconGadget_Create_TTIconGadget_iiiiTTGadgetTObjecti(BBINT bbt_x,BBINT bbt_y,BBINT bbt_w,BBINT bbt_h,struct maxgui_maxgui_gadget_TGadget_obj* bbt_group,BBOBJECT bbt_image,BBINT bbt_style){
	struct maxgui_proxygadgets_icongadget_TIconGadget_obj* bbt_sp=(struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)(struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbObjectNew((BBClass *)&maxgui_proxygadgets_icongadget_TIconGadget);
	if(maxgui_proxygadgets_icongadget_TIconGadget_icon_timer==&bbNullObject){
		maxgui_proxygadgets_icongadget_TIconGadget_icon_timer=(struct brl_timer_TTimer_obj*)brl_timer_CreateTimer(60.0000000f,(struct brl_event_TEvent_obj*)&bbNullObject);
	}
	if(((BBObject*)((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbObjectDowncast((BBOBJECT)bbt_image,(BBClass*)&maxgui_maxgui_iconstrip_TIconStrip)))!= &bbNullObject){
		bbt_sp->_maxgui_proxygadgets_icongadget_ticongadget_iconstrip =(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbObjectDowncast((BBOBJECT)bbt_image,(BBClass*)&maxgui_maxgui_iconstrip_TIconStrip));
		bbt_sp->_maxgui_proxygadgets_icongadget_ticongadget_o_iconstrip =(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbObjectDowncast((BBOBJECT)bbt_image,(BBClass*)&maxgui_maxgui_iconstrip_TIconStrip));
		bbt_sp->_maxgui_proxygadgets_icongadget_ticongadget_grey_iconstrip =(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbObjectDowncast((BBOBJECT)maxgui_proxygadgets_common_MakeGrey((BBOBJECT)bbt_image),(BBClass*)&maxgui_maxgui_iconstrip_TIconStrip));
	}
	if(((BBObject*)((struct brl_pixmap_TPixmap_obj*)bbObjectDowncast((BBOBJECT)bbt_image,(BBClass*)&brl_pixmap_TPixmap)))!= &bbNullObject){
		bbt_sp->_maxgui_proxygadgets_icongadget_ticongadget_pixmap =(struct brl_pixmap_TPixmap_obj*)((struct brl_pixmap_TPixmap_obj*)bbObjectDowncast((BBOBJECT)bbt_image,(BBClass*)&brl_pixmap_TPixmap));
		bbt_sp->_maxgui_proxygadgets_icongadget_ticongadget_o_pixmap =(struct brl_pixmap_TPixmap_obj*)((struct brl_pixmap_TPixmap_obj*)bbObjectDowncast((BBOBJECT)bbt_image,(BBClass*)&brl_pixmap_TPixmap));
		bbt_sp->_maxgui_proxygadgets_icongadget_ticongadget_grey_pixmap =(struct brl_pixmap_TPixmap_obj*)((struct brl_pixmap_TPixmap_obj*)bbObjectDowncast((BBOBJECT)maxgui_proxygadgets_common_MakeGrey((BBOBJECT)bbt_image),(BBClass*)&brl_pixmap_TPixmap));
	}
	bbt_sp->_maxgui_proxygadgets_icongadget_ticongadget_style =bbt_style;
	bbt_sp->_maxgui_proxygadgets_icongadget_ticongadget_panel =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreatePanel(bbt_x,bbt_y,bbt_w,bbt_h,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group,4,&bbEmptyString);
	if(((BBObject*)bbt_sp->_maxgui_proxygadgets_icongadget_ticongadget_pixmap )!= &bbNullObject){
		maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_icongadget_ticongadget_panel ,(struct brl_pixmap_TPixmap_obj*)bbt_sp->_maxgui_proxygadgets_icongadget_ticongadget_pixmap ,2);
		bbt_sp->_maxgui_proxygadgets_icongadget_ticongadget_animated =0;
	}
	bbt_sp->_maxgui_proxygadgets_icongadget_ticongadget_name =bbStringConcat(&_s0,bbStringFromInt(bbMilliSecs()));
	if(((BBObject*)bbt_sp->_maxgui_proxygadgets_icongadget_ticongadget_iconstrip )!= &bbNullObject){
		bbt_sp->_maxgui_proxygadgets_icongadget_ticongadget_pixmap =(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbt_sp->_maxgui_proxygadgets_icongadget_ticongadget_iconstrip ,0);
		maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_icongadget_ticongadget_panel ,(struct brl_pixmap_TPixmap_obj*)bbt_sp->_maxgui_proxygadgets_icongadget_ticongadget_pixmap ,2);
		bbt_sp->_maxgui_proxygadgets_icongadget_ticongadget_frame_max =(bbt_sp->_maxgui_proxygadgets_icongadget_ticongadget_iconstrip ->_maxgui_maxgui_iconstrip_ticonstrip_count -1);
		bbt_sp->_maxgui_proxygadgets_icongadget_ticongadget_animated =1;
		bbt_sp->_maxgui_proxygadgets_icongadget_ticongadget_frame_start =0;
		bbt_sp->_maxgui_proxygadgets_icongadget_ticongadget_frame_current =0;
	}
	BBINT bbt_=bbt_sp->_maxgui_proxygadgets_icongadget_ticongadget_style ;
	if(bbt_==2){
		bbt_sp->_maxgui_proxygadgets_icongadget_ticongadget_animated =0;
	}
	bbt_sp->_maxgui_proxygadgets_icongadget_ticongadget_original_animated =bbt_sp->_maxgui_proxygadgets_icongadget_ticongadget_animated ;
	brl_hook_AddHook(brl_event_EmitEventHook,maxgui_proxygadgets_icongadget_TIconGadget_eventHandler_TObject_iTObjectTObject,(BBOBJECT)bbt_sp,0);
	(bbt_sp)->clas->m_SetProxy_TTGadget((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbt_sp,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_icongadget_ticongadget_panel );
	bbt_sp->_maxgui_proxygadgets_icongadget_ticongadget_frame_timer =bbMilliSecs();
	return (struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbt_sp;
}
BBINT _maxgui_proxygadgets_icongadget_TIconGadget_Class(struct maxgui_proxygadgets_icongadget_TIconGadget_obj* o){
	return 24;
}
BBSTRING _maxgui_proxygadgets_icongadget_TIconGadget_GetText(struct maxgui_proxygadgets_icongadget_TIconGadget_obj* o){
	return &bbEmptyString;
}
BBINT _maxgui_proxygadgets_icongadget_TIconGadget_SetIconStrip_TTIconStrip(struct maxgui_proxygadgets_icongadget_TIconGadget_obj* o,struct maxgui_maxgui_iconstrip_TIconStrip_obj* bbt_ics){
	o->_maxgui_proxygadgets_icongadget_ticongadget_iconstrip =(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbt_ics;
	o->_maxgui_proxygadgets_icongadget_ticongadget_o_iconstrip =(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbt_ics;
	o->_maxgui_proxygadgets_icongadget_ticongadget_grey_iconstrip =(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbObjectDowncast((BBOBJECT)maxgui_proxygadgets_common_MakeGrey((BBOBJECT)bbt_ics),(BBClass*)&maxgui_maxgui_iconstrip_TIconStrip));
	o->_maxgui_proxygadgets_icongadget_ticongadget_pixmap =(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)o->_maxgui_proxygadgets_icongadget_ticongadget_iconstrip ,0);
	maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_icongadget_ticongadget_panel ,(struct brl_pixmap_TPixmap_obj*)o->_maxgui_proxygadgets_icongadget_ticongadget_pixmap ,2);
	o->_maxgui_proxygadgets_icongadget_ticongadget_frame_max =o->_maxgui_proxygadgets_icongadget_ticongadget_iconstrip ->_maxgui_maxgui_iconstrip_ticonstrip_count ;
	o->_maxgui_proxygadgets_icongadget_ticongadget_frame_current =0;
	o->_maxgui_proxygadgets_icongadget_ticongadget_frame_start =0;
	return 0;
}
BBINT _maxgui_proxygadgets_icongadget_TIconGadget_SetPixmap_TTPixmapi(struct maxgui_proxygadgets_icongadget_TIconGadget_obj* o,struct brl_pixmap_TPixmap_obj* bbt_pix,BBINT bbt_flags){
	o->_maxgui_proxygadgets_icongadget_ticongadget_pixmap =(struct brl_pixmap_TPixmap_obj*)bbt_pix;
	o->_maxgui_proxygadgets_icongadget_ticongadget_o_pixmap =(struct brl_pixmap_TPixmap_obj*)bbt_pix;
	o->_maxgui_proxygadgets_icongadget_ticongadget_grey_pixmap =(struct brl_pixmap_TPixmap_obj*)((struct brl_pixmap_TPixmap_obj*)bbObjectDowncast((BBOBJECT)maxgui_proxygadgets_common_MakeGrey((BBOBJECT)bbt_pix),(BBClass*)&brl_pixmap_TPixmap));
	maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_icongadget_ticongadget_panel ,(struct brl_pixmap_TPixmap_obj*)o->_maxgui_proxygadgets_icongadget_ticongadget_pixmap ,2);
	o->_maxgui_proxygadgets_icongadget_ticongadget_animated =0;
	return 0;
}
BBINT _maxgui_proxygadgets_icongadget_TIconGadget_SelectItem_ii(struct maxgui_proxygadgets_icongadget_TIconGadget_obj* o,BBINT bbt_index,BBINT bbt_opt){
	if(o->_maxgui_proxygadgets_icongadget_ticongadget_iconstrip ==&bbNullObject){
		return -1;
	}
	if(bbt_index<0){
		bbt_index=0;
	}
	if(bbt_index>(o->_maxgui_proxygadgets_icongadget_ticongadget_iconstrip ->_maxgui_maxgui_iconstrip_ticonstrip_count -1)){
		bbt_index=(o->_maxgui_proxygadgets_icongadget_ticongadget_iconstrip ->_maxgui_maxgui_iconstrip_ticonstrip_count -1);
	}
	o->_maxgui_proxygadgets_icongadget_ticongadget_frame_current =bbt_index;
	struct brl_pixmap_TPixmap_obj* bbt_pp=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	bbt_pp=(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)o->_maxgui_proxygadgets_icongadget_ticongadget_iconstrip ,o->_maxgui_proxygadgets_icongadget_ticongadget_frame_current );
	maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_icongadget_ticongadget_panel ,(struct brl_pixmap_TPixmap_obj*)bbt_pp,2);
	return 0;
}
BBINT _maxgui_proxygadgets_icongadget_TIconGadget_SetItem_iSSiTObjecti(struct maxgui_proxygadgets_icongadget_TIconGadget_obj* o,BBINT bbt_index,BBSTRING bbt_Text,BBSTRING bbt_tip,BBINT bbt_icon,BBOBJECT bbt_extra,BBINT bbt_flags){
	if(bbt_tip!=&bbEmptyString){
		maxgui_maxgui_SetGadgetToolTip((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_icongadget_ticongadget_panel ,bbt_tip);
	}
	return 0;
}
BBINT _maxgui_proxygadgets_icongadget_TIconGadget_SetEnabled_i(struct maxgui_proxygadgets_icongadget_TIconGadget_obj* o,BBINT bbt_status){
	if(bbt_status==1){
		o->_maxgui_proxygadgets_icongadget_ticongadget_animated =o->_maxgui_proxygadgets_icongadget_ticongadget_original_animated ;
		o->_maxgui_proxygadgets_icongadget_ticongadget_pixmap =(struct brl_pixmap_TPixmap_obj*)o->_maxgui_proxygadgets_icongadget_ticongadget_o_pixmap ;
		o->_maxgui_proxygadgets_icongadget_ticongadget_iconstrip =(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)o->_maxgui_proxygadgets_icongadget_ticongadget_o_iconstrip ;
		maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_icongadget_ticongadget_panel );
	}else{
		o->_maxgui_proxygadgets_icongadget_ticongadget_original_animated =o->_maxgui_proxygadgets_icongadget_ticongadget_animated ;
		o->_maxgui_proxygadgets_icongadget_ticongadget_animated =0;
		o->_maxgui_proxygadgets_icongadget_ticongadget_pixmap =(struct brl_pixmap_TPixmap_obj*)o->_maxgui_proxygadgets_icongadget_ticongadget_grey_pixmap ;
		o->_maxgui_proxygadgets_icongadget_ticongadget_iconstrip =(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)o->_maxgui_proxygadgets_icongadget_ticongadget_grey_iconstrip ;
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_icongadget_ticongadget_panel );
	}
	struct brl_pixmap_TPixmap_obj* bbt_pp=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	if(((BBObject*)o->_maxgui_proxygadgets_icongadget_ticongadget_iconstrip )!= &bbNullObject){
		bbt_pp=(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)o->_maxgui_proxygadgets_icongadget_ticongadget_iconstrip ,o->_maxgui_proxygadgets_icongadget_ticongadget_frame_current );
	}else{
		bbt_pp=(struct brl_pixmap_TPixmap_obj*)o->_maxgui_proxygadgets_icongadget_ticongadget_pixmap ;
	}
	maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_icongadget_ticongadget_panel ,(struct brl_pixmap_TPixmap_obj*)bbt_pp,2);
	return 0;
}
BBINT _maxgui_proxygadgets_icongadget_TIconGadget_CleanUp(struct maxgui_proxygadgets_icongadget_TIconGadget_obj* o){
	maxgui_proxygadgets_icongadget_TIconGadget_icon_timer=(struct brl_timer_TTimer_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_icongadget_ticongadget_pixmap =(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_icongadget_ticongadget_iconstrip =(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_icongadget_ticongadget_grey_pixmap =(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_icongadget_ticongadget_grey_iconstrip =(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_icongadget_ticongadget_o_pixmap =(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_icongadget_ticongadget_o_iconstrip =(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)&bbNullObject;
	maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_icongadget_ticongadget_panel );
	brl_hook_RemoveHook(brl_event_EmitEventHook,o->clas->f_eventHandler_TObject_iTObjectTObject,(BBOBJECT)o);
	(&maxgui_proxygadgets_icongadget_TIconGadget)->super->m_CleanUp((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o);
	return 0;
}
BBOBJECT maxgui_proxygadgets_icongadget_TIconGadget_eventHandler_TObject_iTObjectTObject(BBINT bbt_pID,BBOBJECT bbt_pData,BBOBJECT bbt_pContext){
	struct brl_event_TEvent_obj* bbt_pEvent=(struct brl_event_TEvent_obj*)((struct brl_event_TEvent_obj*)bbObjectDowncast((BBOBJECT)bbt_pData,(BBClass*)&brl_event_TEvent));
	struct brl_pixmap_TPixmap_obj* bbt_pp=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	struct maxgui_proxygadgets_icongadget_TIconGadget_obj* bbt_sp=(struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_pContext,(BBClass*)&maxgui_proxygadgets_icongadget_TIconGadget));
	if(((BBObject*)bbt_pEvent)!= &bbNullObject){
		BBINT bbt_=bbt_pEvent->_brl_event_tevent_id ;
		if(bbt_==1025){
			if(bbt_pEvent->_brl_event_tevent_source ==bbt_sp){
				brl_event_EmitEvent((struct brl_event_TEvent_obj*)brl_event_CreateEvent(8193,(BBOBJECT)bbt_pEvent->_brl_event_tevent_source ,0,0,0,0,(BBOBJECT)&bbNullObject));
				return (BBOBJECT)&bbNullObject;
			}
		}else{
			if(bbt_==2049){
				if(bbt_pEvent->_brl_event_tevent_source ==maxgui_proxygadgets_icongadget_TIconGadget_icon_timer){
					if(bbt_sp->_maxgui_proxygadgets_icongadget_ticongadget_animated ==1){
						if(bbMilliSecs()>(bbt_sp->_maxgui_proxygadgets_icongadget_ticongadget_frame_timer +bbt_sp->_maxgui_proxygadgets_icongadget_ticongadget_frame_duration )){
							bbt_pp=(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbt_sp->_maxgui_proxygadgets_icongadget_ticongadget_iconstrip ,bbt_sp->_maxgui_proxygadgets_icongadget_ticongadget_frame_current );
							maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_icongadget_ticongadget_panel ,(struct brl_pixmap_TPixmap_obj*)bbt_pp,2);
							if(bbt_sp->_maxgui_proxygadgets_icongadget_ticongadget_frame_direction ==0){
								bbt_sp->_maxgui_proxygadgets_icongadget_ticongadget_frame_current +=1;
								if(bbt_sp->_maxgui_proxygadgets_icongadget_ticongadget_frame_current >bbt_sp->_maxgui_proxygadgets_icongadget_ticongadget_frame_max ){
									bbt_sp->_maxgui_proxygadgets_icongadget_ticongadget_frame_current =bbt_sp->_maxgui_proxygadgets_icongadget_ticongadget_frame_start ;
								}
							}else{
								bbt_sp->_maxgui_proxygadgets_icongadget_ticongadget_frame_current -=1;
								if(bbt_sp->_maxgui_proxygadgets_icongadget_ticongadget_frame_current <bbt_sp->_maxgui_proxygadgets_icongadget_ticongadget_frame_start ){
									bbt_sp->_maxgui_proxygadgets_icongadget_ticongadget_frame_current =bbt_sp->_maxgui_proxygadgets_icongadget_ticongadget_frame_max ;
								}
							}
							bbt_sp->_maxgui_proxygadgets_icongadget_ticongadget_frame_timer =bbMilliSecs();
						}
					}
				}
			}
		}
	}
	return (BBOBJECT)bbt_pData;
}
BBINT _maxgui_proxygadgets_icongadget_TIconGadget_State(struct maxgui_proxygadgets_icongadget_TIconGadget_obj* o){
	return 0;
}
BBINT _maxgui_proxygadgets_icongadget_TIconGadget_SetShow_i(struct maxgui_proxygadgets_icongadget_TIconGadget_obj* o,BBINT bbt_bool){
	(o->_maxgui_proxygadgets_icongadget_ticongadget_panel )->clas->m_SetShow_i((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_icongadget_ticongadget_panel ,bbt_bool);
	return 0;
}
struct brl_timer_TTimer_obj* maxgui_proxygadgets_icongadget_TIconGadget_icon_timer;
struct BBDebugScope_31 maxgui_proxygadgets_icongadget_TIconGadget_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TIconGadget",
	{
		{
			BBDEBUGDECL_FIELD,
			"style",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_icongadget_TIconGadget_obj,_maxgui_proxygadgets_icongadget_ticongadget_style)
		},
		{
			BBDEBUGDECL_FIELD,
			"animated",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_icongadget_TIconGadget_obj,_maxgui_proxygadgets_icongadget_ticongadget_animated)
		},
		{
			BBDEBUGDECL_FIELD,
			"original_animated",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_icongadget_TIconGadget_obj,_maxgui_proxygadgets_icongadget_ticongadget_original_animated)
		},
		{
			BBDEBUGDECL_FIELD,
			"panel",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_icongadget_TIconGadget_obj,_maxgui_proxygadgets_icongadget_ticongadget_panel)
		},
		{
			BBDEBUGDECL_FIELD,
			"name",
			"$",
			.field_offset=offsetof(struct maxgui_proxygadgets_icongadget_TIconGadget_obj,_maxgui_proxygadgets_icongadget_ticongadget_name)
		},
		{
			BBDEBUGDECL_FIELD,
			"iconstrip",
			":TIconStrip",
			.field_offset=offsetof(struct maxgui_proxygadgets_icongadget_TIconGadget_obj,_maxgui_proxygadgets_icongadget_ticongadget_iconstrip)
		},
		{
			BBDEBUGDECL_FIELD,
			"grey_iconstrip",
			":TIconStrip",
			.field_offset=offsetof(struct maxgui_proxygadgets_icongadget_TIconGadget_obj,_maxgui_proxygadgets_icongadget_ticongadget_grey_iconstrip)
		},
		{
			BBDEBUGDECL_FIELD,
			"o_iconstrip",
			":TIconStrip",
			.field_offset=offsetof(struct maxgui_proxygadgets_icongadget_TIconGadget_obj,_maxgui_proxygadgets_icongadget_ticongadget_o_iconstrip)
		},
		{
			BBDEBUGDECL_FIELD,
			"pixmap",
			":TPixmap",
			.field_offset=offsetof(struct maxgui_proxygadgets_icongadget_TIconGadget_obj,_maxgui_proxygadgets_icongadget_ticongadget_pixmap)
		},
		{
			BBDEBUGDECL_FIELD,
			"grey_pixmap",
			":TPixmap",
			.field_offset=offsetof(struct maxgui_proxygadgets_icongadget_TIconGadget_obj,_maxgui_proxygadgets_icongadget_ticongadget_grey_pixmap)
		},
		{
			BBDEBUGDECL_FIELD,
			"o_pixmap",
			":TPixmap",
			.field_offset=offsetof(struct maxgui_proxygadgets_icongadget_TIconGadget_obj,_maxgui_proxygadgets_icongadget_ticongadget_o_pixmap)
		},
		{
			BBDEBUGDECL_FIELD,
			"frame_max",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_icongadget_TIconGadget_obj,_maxgui_proxygadgets_icongadget_ticongadget_frame_max)
		},
		{
			BBDEBUGDECL_FIELD,
			"frame_current",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_icongadget_TIconGadget_obj,_maxgui_proxygadgets_icongadget_ticongadget_frame_current)
		},
		{
			BBDEBUGDECL_FIELD,
			"frame_timer",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_icongadget_TIconGadget_obj,_maxgui_proxygadgets_icongadget_ticongadget_frame_timer)
		},
		{
			BBDEBUGDECL_FIELD,
			"frame_duration",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_icongadget_TIconGadget_obj,_maxgui_proxygadgets_icongadget_ticongadget_frame_duration)
		},
		{
			BBDEBUGDECL_FIELD,
			"frame_start",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_icongadget_TIconGadget_obj,_maxgui_proxygadgets_icongadget_ticongadget_frame_start)
		},
		{
			BBDEBUGDECL_FIELD,
			"frame_direction",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_icongadget_TIconGadget_obj,_maxgui_proxygadgets_icongadget_ticongadget_frame_direction)
		},
		{
			BBDEBUGDECL_GLOBAL,
			"icon_timer",
			":TTimer",
			.var_address=(void*)&maxgui_proxygadgets_icongadget_TIconGadget_icon_timer
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_maxgui_proxygadgets_icongadget_TIconGadget_New
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Create",
			"(i,i,i,i,:TGadget,:Object,i):TIconGadget",
			.var_address=(void*)&maxgui_proxygadgets_icongadget_TIconGadget_Create_TTIconGadget_iiiiTTGadgetTObjecti
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Class",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_icongadget_TIconGadget_Class
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetText",
			"()$",
			.var_address=(void*)&_maxgui_proxygadgets_icongadget_TIconGadget_GetText
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetIconStrip",
			"(:TIconStrip)i",
			.var_address=(void*)&_maxgui_proxygadgets_icongadget_TIconGadget_SetIconStrip_TTIconStrip
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetPixmap",
			"(:TPixmap,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_icongadget_TIconGadget_SetPixmap_TTPixmapi
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SelectItem",
			"(i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_icongadget_TIconGadget_SelectItem_ii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetItem",
			"(i,$,$,i,:Object,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_icongadget_TIconGadget_SetItem_iSSiTObjecti
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetEnabled",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_icongadget_TIconGadget_SetEnabled_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"CleanUp",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_icongadget_TIconGadget_CleanUp
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"eventHandler",
			"(i,:Object,:Object):Object",
			.var_address=(void*)&maxgui_proxygadgets_icongadget_TIconGadget_eventHandler_TObject_iTObjectTObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"State",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_icongadget_TIconGadget_State
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetShow",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_icongadget_TIconGadget_SetShow_i
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_maxgui_proxygadgets_icongadget_TIconGadget maxgui_proxygadgets_icongadget_TIconGadget={
	&maxgui_maxgui_gadget_TProxyGadget,
	bbObjectFree,
	(BBDebugScope*)&maxgui_proxygadgets_icongadget_TIconGadget_scope,
	sizeof(struct maxgui_proxygadgets_icongadget_TIconGadget_obj),
	(void (*)(BBOBJECT))_maxgui_proxygadgets_icongadget_TIconGadget_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct maxgui_proxygadgets_icongadget_TIconGadget_obj,_maxgui_proxygadgets_icongadget_ticongadget_frame_direction) - sizeof(void*) + sizeof(BBINT)
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
	,_maxgui_proxygadgets_icongadget_TIconGadget_SetItem_iSSiTObjecti
	,_maxgui_maxgui_gadget_TProxyGadget_RemoveItem_i
	,_maxgui_maxgui_gadget_TProxyGadget_ItemCount
	,_maxgui_maxgui_gadget_TProxyGadget_ItemText_i
	,_maxgui_maxgui_gadget_TProxyGadget_ItemTip_i
	,_maxgui_maxgui_gadget_TProxyGadget_ItemFlags_i
	,_maxgui_maxgui_gadget_TProxyGadget_ItemIcon_i
	,_maxgui_maxgui_gadget_TProxyGadget_ItemExtra_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetItemState_ii
	,_maxgui_maxgui_gadget_TProxyGadget_ItemState_i
	,_maxgui_proxygadgets_icongadget_TIconGadget_SelectItem_ii
	,_maxgui_maxgui_gadget_TProxyGadget_SelectedItem
	,_maxgui_maxgui_gadget_TProxyGadget_SelectedItems
	,_maxgui_maxgui_gadget_TGadget_Insert_TTGadgeti
	,_maxgui_maxgui_gadget_TProxyGadget_Query_i
	,_maxgui_maxgui_gadget_TGadget_ScaleFactor
	,_maxgui_proxygadgets_icongadget_TIconGadget_CleanUp
	,_maxgui_maxgui_gadget_TProxyGadget_Free
	,_maxgui_maxgui_gadget_TProxyGadget_Rethink
	,_maxgui_maxgui_gadget_TProxyGadget_ClientWidth
	,_maxgui_maxgui_gadget_TProxyGadget_ClientHeight
	,_maxgui_maxgui_gadget_TProxyGadget_Activate_i
	,_maxgui_proxygadgets_icongadget_TIconGadget_State
	,_maxgui_maxgui_gadget_TProxyGadget_SetText_S
	,_maxgui_proxygadgets_icongadget_TIconGadget_GetText
	,_maxgui_maxgui_gadget_TProxyGadget_SetFont_TTGuiFont
	,_maxgui_maxgui_gadget_TProxyGadget_SetColor_iii
	,_maxgui_maxgui_gadget_TProxyGadget_RemoveColor
	,_maxgui_maxgui_gadget_TProxyGadget_SetAlpha_f
	,_maxgui_maxgui_gadget_TProxyGadget_SetTextColor_iii
	,_maxgui_maxgui_gadget_TProxyGadget_SetTooltip_S
	,_maxgui_maxgui_gadget_TProxyGadget_GetTooltip
	,_maxgui_proxygadgets_icongadget_TIconGadget_SetPixmap_TTPixmapi
	,_maxgui_proxygadgets_icongadget_TIconGadget_SetIconStrip_TTIconStrip
	,_maxgui_proxygadgets_icongadget_TIconGadget_SetShow_i
	,_maxgui_proxygadgets_icongadget_TIconGadget_SetEnabled_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetSelected_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetHotKey_ii
	,_maxgui_maxgui_gadget_TProxyGadget_SetSensitivity_i
	,_maxgui_maxgui_gadget_TProxyGadget_GetSensitivity
	,_maxgui_proxygadgets_icongadget_TIconGadget_Class
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
	,maxgui_proxygadgets_icongadget_TIconGadget_Create_TTIconGadget_iiiiTTGadgetTObjecti
	,maxgui_proxygadgets_icongadget_TIconGadget_eventHandler_TObject_iTObjectTObject
};

struct maxgui_proxygadgets_icongadget_TIconGadget_obj* maxgui_proxygadgets_icongadget_CreateIconGadget(BBINT bbt_x,BBINT bbt_y,BBINT bbt_w,BBINT bbt_h,struct maxgui_maxgui_gadget_TGadget_obj* bbt_window,BBOBJECT bbt_image,BBINT bbt_style){
	return (struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)maxgui_proxygadgets_icongadget_TIconGadget_Create_TTIconGadget_iiiiTTGadgetTObjecti(bbt_x,bbt_y,bbt_w,bbt_h,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_window,(BBOBJECT)bbt_image,bbt_style);
}
BBINT maxgui_proxygadgets_icongadget_SetGadgetAnim(struct maxgui_maxgui_gadget_TGadget_obj* bbt_gadget,BBINT bbt__play,BBINT bbt_fst,BBINT bbt_fe,BBINT bbt_fs,BBINT bbt_fd){
	struct maxgui_proxygadgets_icongadget_TIconGadget_obj* bbt_g=(struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_gadget,(BBClass*)&maxgui_proxygadgets_icongadget_TIconGadget));
	if(((BBObject*)bbt_g)!= &bbNullObject){
		if(bbt__play==1){
			bbt_g->_maxgui_proxygadgets_icongadget_ticongadget_animated =1;
		}
		if(bbt__play==0){
			bbt_g->_maxgui_proxygadgets_icongadget_ticongadget_animated =0;
		}
		if(bbt_fd==0){
			bbt_g->_maxgui_proxygadgets_icongadget_ticongadget_frame_direction =0;
		}
		if(bbt_fd==1){
			bbt_g->_maxgui_proxygadgets_icongadget_ticongadget_frame_direction =1;
		}
		if(bbt_fst!=-1){
			bbt_g->_maxgui_proxygadgets_icongadget_ticongadget_frame_start =bbt_fst;
		}
		if(bbt_fe!=-1){
			bbt_g->_maxgui_proxygadgets_icongadget_ticongadget_frame_max =bbt_fe;
		}
		if(bbt_fs!=-1){
			bbt_g->_maxgui_proxygadgets_icongadget_ticongadget_frame_duration =bbt_fs;
		}
		if(((BBObject*)bbt_g->_maxgui_proxygadgets_icongadget_ticongadget_iconstrip )!= &bbNullObject){
			if(bbt_g->_maxgui_proxygadgets_icongadget_ticongadget_frame_max >bbt_g->_maxgui_proxygadgets_icongadget_ticongadget_iconstrip ->_maxgui_maxgui_iconstrip_ticonstrip_count ){
				bbt_g->_maxgui_proxygadgets_icongadget_ticongadget_frame_max =(bbt_g->_maxgui_proxygadgets_icongadget_ticongadget_iconstrip ->_maxgui_maxgui_iconstrip_ticonstrip_count -1);
			}
			if(bbt_g->_maxgui_proxygadgets_icongadget_ticongadget_frame_start <0){
				bbt_g->_maxgui_proxygadgets_icongadget_ticongadget_frame_start =0;
			}
			if(bbt_g->_maxgui_proxygadgets_icongadget_ticongadget_frame_current <bbt_g->_maxgui_proxygadgets_icongadget_ticongadget_frame_start ){
				bbt_g->_maxgui_proxygadgets_icongadget_ticongadget_frame_current =bbt_g->_maxgui_proxygadgets_icongadget_ticongadget_frame_start ;
			}
		}
	}
	return 0;
}
BBINT maxgui_proxygadgets_icongadget_GetGadgetAnim(struct maxgui_maxgui_gadget_TGadget_obj* bbt_gad,BBINT* bbt_a,BBINT* bbt_b,BBINT* bbt_c,BBINT* bbt_d,BBINT* bbt_e){
	struct maxgui_proxygadgets_icongadget_TIconGadget_obj* bbt_g=(struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)((struct maxgui_proxygadgets_icongadget_TIconGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_gad,(BBClass*)&maxgui_proxygadgets_icongadget_TIconGadget));
	if(((BBObject*)bbt_g)!= &bbNullObject){
		*bbt_a=bbt_g->_maxgui_proxygadgets_icongadget_ticongadget_animated ;
		*bbt_b=bbt_g->_maxgui_proxygadgets_icongadget_ticongadget_frame_start ;
		*bbt_c=bbt_g->_maxgui_proxygadgets_icongadget_ticongadget_frame_max ;
		*bbt_d=bbt_g->_maxgui_proxygadgets_icongadget_ticongadget_frame_duration ;
		*bbt_e=bbt_g->_maxgui_proxygadgets_icongadget_ticongadget_frame_direction ;
		return 0;
	}
	return 0;
}
static int _bb_maxgui_proxygadgets_icongadget_inited = 0;
int _bb_maxgui_proxygadgets_icongadget(){
	if (!_bb_maxgui_proxygadgets_icongadget_inited) {
		_bb_maxgui_proxygadgets_icongadget_inited = 1;
		GC_add_roots(&maxgui_proxygadgets_icongadget_TIconGadget_icon_timer, &maxgui_proxygadgets_icongadget_TIconGadget_icon_timer + 1);
		__bb_brl_blitz_blitz();
		__bb_maxgui_maxgui_maxgui();
		__bb_brl_timer_timer();
		__bb_brl_max2d_max2d();
		_bb_maxgui_proxygadgets_common();
		bbObjectRegisterType((BBCLASS)&maxgui_proxygadgets_icongadget_TIconGadget);
		maxgui_proxygadgets_icongadget_TIconGadget_icon_timer=(struct brl_timer_TTimer_obj*)&bbNullObject;
		return 0;
	}
	return 0;
}