#include "UserInput.bmx.release.win32.x64.h"
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
struct BBDebugScope_17{int kind; const char *name; BBDebugDecl decls[18]; };
void _maxgui_proxygadgets_userinput_tUserInput_New(struct maxgui_proxygadgets_userinput_tUserInput_obj* o) {
	_maxgui_maxgui_gadget_TProxyGadget_New((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o);
	o->clas = &maxgui_proxygadgets_userinput_tUserInput;
	o->_maxgui_proxygadgets_userinput_tuserinput_panel = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_userinput_tuserinput_label = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_userinput_tuserinput_txt = &bbEmptyArray;
	o->_maxgui_proxygadgets_userinput_tuserinput_lbl = &bbEmptyArray;
	o->_maxgui_proxygadgets_userinput_tuserinput_btn_ok = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_userinput_tuserinput_btn_cancel = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_userinput_tuserinput__window = 0;
	o->_maxgui_proxygadgets_userinput_tuserinput_window = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
}
BBINT _maxgui_proxygadgets_userinput_tUserInput_Class(struct maxgui_proxygadgets_userinput_tUserInput_obj* o){
	return 28;
}
BBINT _maxgui_proxygadgets_userinput_tUserInput_SetFont_TTGuiFont(struct maxgui_proxygadgets_userinput_tUserInput_obj* o,struct maxgui_maxgui_guifont_TGuiFont_obj* bbt_fnt){
	if(bbt_fnt==&bbNullObject){
		return 0;
	}
	if(((BBObject*)o->_maxgui_proxygadgets_userinput_tuserinput_window )!= &bbNullObject){
		maxgui_maxgui_SetGadgetFont((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_userinput_tuserinput_window ,(struct maxgui_maxgui_guifont_TGuiFont_obj*)bbt_fnt,0);
	}
	return 0;
}
BBINT _maxgui_proxygadgets_userinput_tUserInput_CleanUp(struct maxgui_proxygadgets_userinput_tUserInput_obj* o){
	if(((BBObject*)o->_maxgui_proxygadgets_userinput_tuserinput_btn_ok )!= &bbNullObject){
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_userinput_tuserinput_btn_ok );
	}
	if(((BBObject*)o->_maxgui_proxygadgets_userinput_tuserinput_btn_cancel )!= &bbNullObject){
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_userinput_tuserinput_btn_cancel );
	}
	if(o->_maxgui_proxygadgets_userinput_tuserinput_txt != &bbEmptyArray){
		BBARRAY bbt_=o->_maxgui_proxygadgets_userinput_tuserinput_txt ;
		BBUINT bbt_2=0U;
		while(bbt_2<((BBUINT)(bbt_->scales[0]))){
			struct maxgui_maxgui_gadget_TGadget_obj* bbt_s=(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATA(bbt_,1))[bbt_2];
			bbt_2=(bbt_2+1U);
			if(bbt_s==&bbNullObject){
				continue;
			}
			maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_s);
		}
		o->_maxgui_proxygadgets_userinput_tuserinput_txt =&bbEmptyArray;
	}
	if(o->_maxgui_proxygadgets_userinput_tuserinput_lbl != &bbEmptyArray){
		BBARRAY bbt_3=o->_maxgui_proxygadgets_userinput_tuserinput_lbl ;
		BBUINT bbt_4=0U;
		while(bbt_4<((BBUINT)(bbt_3->scales[0]))){
			struct maxgui_maxgui_gadget_TGadget_obj* bbt_s2=(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATA(bbt_3,1))[bbt_4];
			bbt_4=(bbt_4+1U);
			if(bbt_s2==&bbNullObject){
				continue;
			}
			maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_s2);
		}
		o->_maxgui_proxygadgets_userinput_tuserinput_lbl =&bbEmptyArray;
	}
	if(((BBObject*)o->_maxgui_proxygadgets_userinput_tuserinput_window )!= &bbNullObject){
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_userinput_tuserinput_window );
		o->_maxgui_proxygadgets_userinput_tuserinput_window =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	}
	if(((BBObject*)o->_maxgui_proxygadgets_userinput_tuserinput_panel )!= &bbNullObject){
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_userinput_tuserinput_panel );
		o->_maxgui_proxygadgets_userinput_tuserinput_panel =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	}
	if(((BBObject*)o->_maxgui_proxygadgets_userinput_tuserinput_label )!= &bbNullObject){
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_userinput_tuserinput_label );
		o->_maxgui_proxygadgets_userinput_tuserinput_label =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	}
	bbGCCollect();
	brl_hook_RemoveHook(brl_event_EmitEventHook,o->clas->f_eventHandler_TObject_iTObjectTObject,(BBOBJECT)o);
	(&maxgui_proxygadgets_userinput_tUserInput)->super->m_CleanUp((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o);
	return 0;
}
BBINT _maxgui_proxygadgets_userinput_tUserInput_SetText_S(struct maxgui_proxygadgets_userinput_tUserInput_obj* o,BBSTRING bbt_tx){
	if(bbt_tx==&bbEmptyString){
		return -1;
	}
	BBARRAY volatile bbt_r=bbStringSplit((BBSTRING)bbt_tx,&_s0);
	bbt_r=bbArraySlice("$",bbt_r,0,(o->_maxgui_proxygadgets_userinput_tuserinput_txt )->scales[0]);
	BBINT bbt_c=0;
	BBARRAY bbt_=o->_maxgui_proxygadgets_userinput_tuserinput_txt ;
	BBUINT bbt_2=0U;
	while(bbt_2<((BBUINT)(bbt_->scales[0]))){
		struct maxgui_maxgui_gadget_TGadget_obj* bbt_g=(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATA(bbt_,1))[bbt_2];
		bbt_2=(bbt_2+1U);
		if(bbt_g==&bbNullObject){
			continue;
		}
		maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_g,((BBSTRING*)BBARRAYDATA(bbt_r,1))[((BBUINT)bbt_c)]);
		bbt_c+=1;
	}
	return 0;
}
struct maxgui_proxygadgets_userinput_tUserInput_obj* maxgui_proxygadgets_userinput_tUserInput_Create_TtUserInput_SSiiTTGadgetaS(BBSTRING bbt_msg,BBSTRING bbt_fields,BBINT bbt_x,BBINT bbt_y,struct maxgui_maxgui_gadget_TGadget_obj* bbt_group,BBARRAY bbt_def){
	struct maxgui_proxygadgets_userinput_tUserInput_obj* bbt_sp=(struct maxgui_proxygadgets_userinput_tUserInput_obj*)(struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbObjectNew((BBClass *)&maxgui_proxygadgets_userinput_tUserInput);
	BBINT bbt_w=0;
	BBINT bbt_h=0;
	if(((BBObject*)bbt_group)!= &bbNullObject){
		bbt_w=maxgui_maxgui_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group);
	}
	bbt_h=24;
	BBARRAY volatile bbt_it=bbStringSplit((BBSTRING)bbt_fields,&_s0);
	bbt_h=((((bbt_it)->scales[0]*48)+24)+48);
	bbt_sp->_maxgui_proxygadgets_userinput_tuserinput_lbl =bbArrayNew1D(":TGadget", (bbt_it)->scales[0]);
	bbt_sp->_maxgui_proxygadgets_userinput_tuserinput_txt =bbArrayNew1D(":TGadget", (bbt_it)->scales[0]);
	bbt_def=bbArraySlice("$",bbt_def,0,(bbt_it)->scales[0]);
	if(bbt_group==&bbNullObject){
		bbt_group=(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateWindow(bbt_msg,10,10,300,(bbt_h+40),(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject,513);
		bbt_sp->_maxgui_proxygadgets_userinput_tuserinput__window =1;
		bbt_w=295;
		bbt_sp->_maxgui_proxygadgets_userinput_tuserinput_window =(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group;
	}
	if(bbt_sp->_maxgui_proxygadgets_userinput_tuserinput__window ==1){
		bbt_x=0;
		bbt_y=0;
		bbt_sp->_maxgui_proxygadgets_userinput_tuserinput_btn_ok =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateButton(&_s1,(maxgui_maxgui_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group)-80),(bbt_h-15),70,24,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group,4);
		bbt_sp->_maxgui_proxygadgets_userinput_tuserinput_btn_cancel =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateButton(&_s2,10,(bbt_h-15),70,24,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group,8);
	}
	bbt_sp->_maxgui_proxygadgets_userinput_tuserinput_panel =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreatePanel(bbt_x,bbt_y,(bbt_w-(bbt_x*2)),(bbt_h-22),(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group,3,&bbEmptyString);
	if((bbt_msg!=&bbEmptyString) && (bbt_sp->_maxgui_proxygadgets_userinput_tuserinput__window ==0)){
		bbt_sp->_maxgui_proxygadgets_userinput_tuserinput_label =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateLabel(bbt_msg,0,0,bbt_w,24,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_userinput_tuserinput_panel ,0);
	}
	BBINT bbt_c=0;
	BBINT bbt__style=0;
	BBSTRING bbt__txt=&bbEmptyString;
	BBARRAY bbt_=bbt_it;
	BBUINT bbt_2=0U;
	while(bbt_2<((BBUINT)(bbt_->scales[0]))){
		BBSTRING bbt_i=((BBSTRING*)BBARRAYDATA(bbt_,1))[bbt_2];
		bbt_2=(bbt_2+1U);
		if(bbStringContains((BBSTRING)bbt_i,&_s3)!=0){
			bbt__style=1;
			bbt__txt=bbStringReplace((BBSTRING)bbt_i,&_s3,&bbEmptyString);
		}else{
			bbt__style=0;
			bbt__txt=bbt_i;
		}
		((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATA(bbt_sp->_maxgui_proxygadgets_userinput_tuserinput_lbl ,1))[((BBUINT)bbt_c)]=(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateLabel(bbt__txt,1,(((bbt_c*48)+8)+(24*(bbt_sp->_maxgui_proxygadgets_userinput_tuserinput__window ==0))),bbt_w,18,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_userinput_tuserinput_panel ,0);
		((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATA(bbt_sp->_maxgui_proxygadgets_userinput_tuserinput_txt ,1))[((BBUINT)bbt_c)]=(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateTextField(0,(((bbt_c*48)+26)+(24*(bbt_sp->_maxgui_proxygadgets_userinput_tuserinput__window ==0))),((bbt_w-(bbt_x*2))-10),22,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_userinput_tuserinput_panel ,bbt__style);
		maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATA(bbt_sp->_maxgui_proxygadgets_userinput_tuserinput_txt ,1))[((BBUINT)bbt_c)],((BBSTRING*)BBARRAYDATA(bbt_def,1))[((BBUINT)bbt_c)]);
		bbt_c+=1;
	}
	brl_hook_AddHook(brl_event_EmitEventHook,maxgui_proxygadgets_userinput_tUserInput_eventHandler_TObject_iTObjectTObject,(BBOBJECT)bbt_sp,0);
	(bbt_sp)->clas->m_SetProxy_TTGadget((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbt_sp,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_userinput_tuserinput_panel );
	return (struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbt_sp;
}
BBINT _maxgui_proxygadgets_userinput_tUserInput_SetColor_iii(struct maxgui_proxygadgets_userinput_tUserInput_obj* o,BBINT bbt_RED,BBINT bbt_green,BBINT bbt_blue){
	BBARRAY bbt_=o->_maxgui_proxygadgets_userinput_tuserinput_txt ;
	BBUINT bbt_2=0U;
	while(bbt_2<((BBUINT)(bbt_->scales[0]))){
		struct maxgui_maxgui_gadget_TGadget_obj* bbt_g=(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATA(bbt_,1))[bbt_2];
		bbt_2=(bbt_2+1U);
		if(bbt_g==&bbNullObject){
			continue;
		}
		maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_g,bbt_RED,bbt_green,bbt_blue,1);
	}
	return 0;
}
BBINT _maxgui_proxygadgets_userinput_tUserInput_SetEnabled_i(struct maxgui_proxygadgets_userinput_tUserInput_obj* o,BBINT bbt_sta){
	if(bbt_sta!=0){
		struct maxgui_maxgui_gadget_TGadget_obj* bbt_tg=(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
		BBARRAY bbt_=o->_maxgui_proxygadgets_userinput_tuserinput_lbl ;
		BBUINT bbt_2=0U;
		while(bbt_2<((BBUINT)(bbt_->scales[0]))){
			bbt_tg=(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATA(bbt_,1))[bbt_2];
			bbt_2=(bbt_2+1U);
			if(bbt_tg==&bbNullObject){
				continue;
			}
			maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_tg);
		}
		BBARRAY bbt_3=o->_maxgui_proxygadgets_userinput_tuserinput_txt ;
		BBUINT bbt_4=0U;
		while(bbt_4<((BBUINT)(bbt_3->scales[0]))){
			bbt_tg=(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATA(bbt_3,1))[bbt_4];
			bbt_4=(bbt_4+1U);
			if(bbt_tg==&bbNullObject){
				continue;
			}
			maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_tg);
		}
		maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_userinput_tuserinput_label );
	}else{
		struct maxgui_maxgui_gadget_TGadget_obj* bbt_tg2=(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
		BBARRAY bbt_5=o->_maxgui_proxygadgets_userinput_tuserinput_lbl ;
		BBUINT bbt_6=0U;
		while(bbt_6<((BBUINT)(bbt_5->scales[0]))){
			bbt_tg2=(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATA(bbt_5,1))[bbt_6];
			bbt_6=(bbt_6+1U);
			if(bbt_tg2==&bbNullObject){
				continue;
			}
			maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_tg2);
		}
		BBARRAY bbt_7=o->_maxgui_proxygadgets_userinput_tuserinput_txt ;
		BBUINT bbt_8=0U;
		while(bbt_8<((BBUINT)(bbt_7->scales[0]))){
			bbt_tg2=(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATA(bbt_7,1))[bbt_8];
			bbt_8=(bbt_8+1U);
			if(bbt_tg2==&bbNullObject){
				continue;
			}
			maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_tg2);
		}
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_userinput_tuserinput_label );
	}
	return 0;
}
BBOBJECT maxgui_proxygadgets_userinput_tUserInput_eventHandler_TObject_iTObjectTObject(BBINT bbt_pID,BBOBJECT bbt_pData,BBOBJECT bbt_pContext){
	struct brl_event_TEvent_obj* bbt_pEvent=(struct brl_event_TEvent_obj*)((struct brl_event_TEvent_obj*)bbObjectDowncast((BBOBJECT)bbt_pData,(BBClass*)&brl_event_TEvent));
	struct maxgui_proxygadgets_userinput_tUserInput_obj* bbt_obj=(struct maxgui_proxygadgets_userinput_tUserInput_obj*)((struct maxgui_proxygadgets_userinput_tUserInput_obj*)bbObjectDowncast((BBOBJECT)bbt_pContext,(BBClass*)&maxgui_proxygadgets_userinput_tUserInput));
	BBARRAY volatile bbt_res=&bbEmptyArray;
	struct maxgui_maxgui_gadget_TGadget_obj* bbt_gad=(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	BBINT bbt_count=0;
	if(((BBObject*)bbt_pEvent)!= &bbNullObject){
		BBINT bbt_=bbt_pEvent->_brl_event_tevent_id ;
		if(bbt_==16387){
			if(bbt_obj->_maxgui_proxygadgets_userinput_tuserinput__window ==1){
				if(bbt_pEvent->_brl_event_tevent_source ==bbt_obj->_maxgui_proxygadgets_userinput_tuserinput_window ){
					maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_obj,(BBClass*)&maxgui_maxgui_gadget_TGadget)));
					return (BBOBJECT)&bbNullObject;
				}
			}
		}else{
			if(bbt_==8193){
				if(bbt_obj->_maxgui_proxygadgets_userinput_tuserinput__window ==1){
					if(bbt_pEvent->_brl_event_tevent_source ==bbt_obj->_maxgui_proxygadgets_userinput_tuserinput_btn_ok ){
						bbt_count=0;
						bbt_res=bbArrayNew1D("$", (bbt_obj->_maxgui_proxygadgets_userinput_tuserinput_txt )->scales[0]);
						BBARRAY bbt_2=bbt_obj->_maxgui_proxygadgets_userinput_tuserinput_txt ;
						BBUINT bbt_3=0U;
						while(bbt_3<((BBUINT)(bbt_2->scales[0]))){
							bbt_gad=(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATA(bbt_2,1))[bbt_3];
							bbt_3=(bbt_3+1U);
							if(bbt_gad==&bbNullObject){
								continue;
							}
							((BBSTRING*)BBARRAYDATA(bbt_res,1))[((BBUINT)bbt_count)]=maxgui_maxgui_GadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_gad);
							bbt_count+=1;
						}
						bbt_pEvent->_brl_event_tevent_extra =(BBOBJECT)bbt_res;
						brl_event_EmitEvent((struct brl_event_TEvent_obj*)brl_event_CreateEvent(8198,(BBOBJECT)bbt_obj,0,0,0,0,(BBOBJECT)bbt_res));
						maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_obj,(BBClass*)&maxgui_maxgui_gadget_TGadget)));
					}
					if(bbt_pEvent->_brl_event_tevent_source ==bbt_obj->_maxgui_proxygadgets_userinput_tuserinput_btn_cancel ){
						maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_obj,(BBClass*)&maxgui_maxgui_gadget_TGadget)));
						bbDelay(10);
						brl_event_EmitEvent((struct brl_event_TEvent_obj*)brl_event_CreateEvent(8198,(BBOBJECT)&bbNullObject,0,0,0,0,(BBOBJECT)&bbNullObject));
					}
				}else{
					bbt_count=0;
					bbt_res=bbArrayNew1D("$", (bbt_obj->_maxgui_proxygadgets_userinput_tuserinput_txt )->scales[0]);
					BBARRAY bbt_4=bbt_obj->_maxgui_proxygadgets_userinput_tuserinput_txt ;
					BBUINT bbt_5=0U;
					while(bbt_5<((BBUINT)(bbt_4->scales[0]))){
						bbt_gad=(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATA(bbt_4,1))[bbt_5];
						bbt_5=(bbt_5+1U);
						if(bbt_gad==&bbNullObject){
							continue;
						}
						((BBSTRING*)BBARRAYDATA(bbt_res,1))[((BBUINT)bbt_count)]=maxgui_maxgui_GadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_gad);
						bbt_count+=1;
					}
					bbt_pEvent->_brl_event_tevent_extra =(BBOBJECT)bbt_res;
					maxgui_maxgui_SetGadgetExtra((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_obj,(BBClass*)&maxgui_maxgui_gadget_TGadget)),(BBOBJECT)bbt_res);
					return (BBOBJECT)bbt_pEvent;
				}
			}
		}
	}
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
		return 0;
	}
	return 0;
}