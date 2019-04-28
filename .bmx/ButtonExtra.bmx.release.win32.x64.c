#include "ButtonExtra.bmx.release.win32.x64.h"
static BBString _s1={
	&bbStringClass,
	1,
	{44}
};
static BBString _s4={
	&bbStringClass,
	8,
	{60,35,83,73,90,69,35,62}
};
static BBString _s3={
	&bbStringClass,
	9,
	{60,35,84,73,84,76,69,35,62}
};
static BBString _s0={
	&bbStringClass,
	9,
	{60,35,118,97,108,117,101,35,62}
};
static BBString _s2={
	&bbStringClass,
	10,
	{70,105,108,101,80,105,99,107,101,114}
};
struct BBDebugScope_33{int kind; const char *name; BBDebugDecl decls[34]; };
void _maxgui_proxygadgets_buttonextra_tButtonExtra_New(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* o) {
	_maxgui_maxgui_gadget_TProxyGadget_New((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o);
	o->clas = &maxgui_proxygadgets_buttonextra_tButtonExtra;
	o->_maxgui_proxygadgets_buttonextra_tbuttonextra_panel = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_buttonextra_tbuttonextra_label = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_buttonextra_tbuttonextra_button = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_buttonextra_tbuttonextra_style = 0;
	o->_maxgui_proxygadgets_buttonextra_tbuttonextra_text = &bbEmptyString;
}
BBINT _maxgui_proxygadgets_buttonextra_tButtonExtra_SetFont_TTGuiFont(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* o,struct maxgui_maxgui_guifont_TGuiFont_obj* bbt_fnt){
	return 0;
}
BBINT _maxgui_proxygadgets_buttonextra_tButtonExtra_CleanUp(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* o){
	brl_hook_RemoveHook(brl_event_EmitEventHook,o->clas->f_eventHandler_TObject_iTObjectTObject,(BBOBJECT)o);
	if(((BBObject*)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_label )!= &bbNullObject){
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_label );
		o->_maxgui_proxygadgets_buttonextra_tbuttonextra_label =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	}
	if(((BBObject*)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_button )!= &bbNullObject){
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_button );
		o->_maxgui_proxygadgets_buttonextra_tbuttonextra_button =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	}
	if(((BBObject*)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_panel )!= &bbNullObject){
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_panel );
		o->_maxgui_proxygadgets_buttonextra_tbuttonextra_panel =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	}
	(&maxgui_proxygadgets_buttonextra_tButtonExtra)->super->m_CleanUp((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o);
	return 0;
}
BBOBJECT _maxgui_proxygadgets_buttonextra_tButtonExtra_ItemExtra_i(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* o,BBINT bbt_index){
	if(o->_maxgui_proxygadgets_buttonextra_tbuttonextra_style ==6){
		return (BBOBJECT)maxgui_maxgui_GadgetItemExtra((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,bbt_index);
	}
	return (BBOBJECT)&bbNullObject;
}
BBINT _maxgui_proxygadgets_buttonextra_tButtonExtra_Clear(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* o){
	BBINT bbt_=o->_maxgui_proxygadgets_buttonextra_tbuttonextra_style ;
	if(bbt_==6){
		maxgui_maxgui_ClearGadgetItems((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_button );
	}
	return 0;
}
BBINT _maxgui_proxygadgets_buttonextra_tButtonExtra_SetPixmap_TTPixmapi(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* o,struct brl_pixmap_TPixmap_obj* bbt_pix,BBINT bbt_flags){
	BBINT bbt_=o->_maxgui_proxygadgets_buttonextra_tbuttonextra_style ;
	if((((bbt_==23) || (bbt_==40)) || (bbt_==22)) || (bbt_==2)){
		maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,(struct brl_pixmap_TPixmap_obj*)bbt_pix,bbt_flags);
	}
	return 0;
}
BBINT _maxgui_proxygadgets_buttonextra_tButtonExtra_SetItem_iSSiTObjecti(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* o,BBINT bbt_index,BBSTRING bbt_Text,BBSTRING bbt_tip,BBINT bbt_icon,BBOBJECT bbt_extra,BBINT bbt_flags){
	if(o->_maxgui_proxygadgets_buttonextra_tbuttonextra_style ==6){
		maxgui_maxgui_ModifyGadgetItem((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,bbt_index,bbt_Text,bbt_flags,bbt_icon,bbt_tip,(BBOBJECT)bbt_extra);
	}
	return 0;
}
BBINT _maxgui_proxygadgets_buttonextra_tButtonExtra_RemoveItem_i(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* o,BBINT bbt_index){
	if(o->_maxgui_proxygadgets_buttonextra_tbuttonextra_style ==6){
		maxgui_maxgui_RemoveGadgetItem((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,bbt_index);
	}
	return 0;
}
BBINT _maxgui_proxygadgets_buttonextra_tButtonExtra_ItemCount(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* o){
	if(o->_maxgui_proxygadgets_buttonextra_tbuttonextra_style ==6){
		return maxgui_maxgui_CountGadgetItems((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_button );
	}
	return 0;
}
BBINT _maxgui_proxygadgets_buttonextra_tButtonExtra_SelectedItem(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* o){
	if(o->_maxgui_proxygadgets_buttonextra_tbuttonextra_style ==6){
		return maxgui_maxgui_SelectedGadgetItem((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_button );
	}
	return -1;
}
BBINT _maxgui_proxygadgets_buttonextra_tButtonExtra_SelectItem_ii(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* o,BBINT bbt_it,BBINT bbt_st){
	if(o->_maxgui_proxygadgets_buttonextra_tbuttonextra_style ==6){
		maxgui_maxgui_SelectGadgetItem((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,bbt_it);
	}
	return 0;
}
BBINT _maxgui_proxygadgets_buttonextra_tButtonExtra_InsertItem_iSSiTObjecti(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* o,BBINT bbt_index,BBSTRING bbt_Text,BBSTRING bbt_tip,BBINT bbt_icon,BBOBJECT bbt_extra,BBINT bbt_flags){
	if(o->_maxgui_proxygadgets_buttonextra_tbuttonextra_style ==6){
		maxgui_maxgui_AddGadgetItem((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,bbt_Text,bbt_flags,bbt_icon,bbt_tip,(BBOBJECT)bbt_extra);
	}
	return 0;
}
BBINT _maxgui_proxygadgets_buttonextra_tButtonExtra_SetRange_ii(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* o,BBINT bbt_a,BBINT bbt_b){
	if(o->_maxgui_proxygadgets_buttonextra_tbuttonextra_style ==13){
		maxgui_maxgui_SetSliderRange((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,bbt_a,bbt_b);
	}
	if(o->_maxgui_proxygadgets_buttonextra_tbuttonextra_style ==19){
		maxgui_proxygadgets_spinner_SetSpinnerRange((struct maxgui_proxygadgets_spinner_TSpinner_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbObjectDowncast((BBOBJECT)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,(BBClass*)&maxgui_proxygadgets_spinner_TSpinner)),((BBDOUBLE)bbt_a),((BBDOUBLE)bbt_b),1);
	}
	return 0;
}
BBINT _maxgui_proxygadgets_buttonextra_tButtonExtra_SetValue_f(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* o,BBFLOAT bbt_val){
	if(o->_maxgui_proxygadgets_buttonextra_tbuttonextra_style ==14){
		maxgui_maxgui_UpdateProgBar((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,bbt_val);
		BBSTRING bbt_txt=bbStringReplace((BBSTRING)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_text ,&_s0,bbStringFromInt((BBINT)(bbt_val*100.000000f)));
		maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_label ,bbt_txt);
	}
	return 0;
}
struct maxgui_maxgui_gadget_TGadget_obj* _maxgui_proxygadgets_buttonextra_tButtonExtra_GetProxy(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* o){
	BBINT bbt_=o->_maxgui_proxygadgets_buttonextra_tbuttonextra_style ;
	if(bbt_==23){
		return (struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)((struct maxgui_proxygadgets_filepicker_tFilepicker_obj*)bbObjectDowncast((BBOBJECT)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,(BBClass*)&maxgui_proxygadgets_filepicker_tFilepicker)),(BBClass*)&maxgui_maxgui_gadget_TGadget));
	}else{
		if(bbt_==19){
			return (struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbObjectDowncast((BBOBJECT)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,(BBClass*)&maxgui_proxygadgets_spinner_TSpinner)),(BBClass*)&maxgui_maxgui_gadget_TGadget));
		}else{
			if(bbt_==22){
				return (struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)((struct maxgui_proxygadgets_datepicker_tdatepicker_obj*)bbObjectDowncast((BBOBJECT)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,(BBClass*)&maxgui_proxygadgets_datepicker_tdatepicker)),(BBClass*)&maxgui_maxgui_gadget_TGadget));
			}else{
				if(((bbt_==2) || (bbt_==4)) || (bbt_==6)){
					return (struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ;
				}else{
					if(bbt_==33){
						return (struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbObjectDowncast((BBOBJECT)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,(BBClass*)&maxgui_proxygadgets_colorpicker_tColorpicker)),(BBClass*)&maxgui_maxgui_gadget_TGadget));
					}
				}
			}
		}
	}
	return (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
}
BBINT _maxgui_proxygadgets_buttonextra_tButtonExtra_SetProp_i(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* o,BBINT bbt_val){
	if((o->_maxgui_proxygadgets_buttonextra_tbuttonextra_style ==13) || (o->_maxgui_proxygadgets_buttonextra_tbuttonextra_style ==19)){
		maxgui_maxgui_SetSliderValue((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,bbt_val);
		BBSTRING bbt_txt=bbStringReplace((BBSTRING)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_text ,&_s0,bbStringFromInt(maxgui_maxgui_SliderValue((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_button )));
		maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_label ,bbt_txt);
		return 0;
	}
	BBINT bbt_tw=maxgui_maxgui_GadgetWidth((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_panel );
	BBINT bbt_ns=((BBINT)((((BBFLOAT)bbt_tw)*((BBFLOAT)bbt_val))/100.000000f));
	maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_label ,0,0,bbt_ns,maxgui_maxgui_GadgetHeight((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_label ));
	maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,bbt_ns,0,(bbt_tw-bbt_ns),maxgui_maxgui_GadgetHeight((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_label ));
	return 0;
}
struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* maxgui_proxygadgets_buttonextra_tButtonExtra_Create_TtButtonExtra_SSiiiiTTGadgeti(BBSTRING bbt_msg,BBSTRING bbt_def,BBINT bbt_x,BBINT bbt_y,BBINT bbt_w,BBINT bbt_h,struct maxgui_maxgui_gadget_TGadget_obj* bbt_group,BBINT bbt_style){
	struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* bbt_sp=(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbObjectNew((BBClass *)&maxgui_proxygadgets_buttonextra_tButtonExtra);
	BBSTRING bbt_txt=&bbEmptyString;
	bbt_sp->_maxgui_proxygadgets_buttonextra_tbuttonextra_panel =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreatePanel(bbt_x,bbt_y,bbt_w,bbt_h,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group,0,&bbEmptyString);
	bbt_sp->_maxgui_proxygadgets_buttonextra_tbuttonextra_label =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateLabel(bbt_msg,0,6,(bbt_w/2),(bbt_h-2),(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_buttonextra_tbuttonextra_panel ,0);
	bbt_sp->_maxgui_proxygadgets_buttonextra_tbuttonextra_text =bbt_msg;
	BBINT bbt__substyle=0;
	BBARRAY volatile bbt__subvalue=bbStringSplit((BBSTRING)bbt_def,&_s1);
	bbt__substyle=bbStringToInt(((BBSTRING*)BBARRAYDATA(bbt__subvalue,1))[0U]);
	maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_buttonextra_tbuttonextra_label ,bbt_msg);
	if(bbt_style==4){
		bbt_sp->_maxgui_proxygadgets_buttonextra_tbuttonextra_button =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateTextField((bbt_w/2),0,(bbt_w/2),bbt_h,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_buttonextra_tbuttonextra_panel ,0);
		maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,bbt_def);
	}else{
		if(bbt_style==2){
			bbt_sp->_maxgui_proxygadgets_buttonextra_tbuttonextra_button =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateButton(bbt_def,(bbt_w/2),0,(bbt_w/2),bbt_h,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_buttonextra_tbuttonextra_panel ,8);
		}else{
			if(bbt_style==33){
				bbt_sp->_maxgui_proxygadgets_buttonextra_tbuttonextra_button =(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)maxgui_proxygadgets_colorpicker_CreateColorPicker((bbt_w/2),0,(bbt_w/2),bbt_h,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_buttonextra_tbuttonextra_panel ,bbt__substyle),(BBClass*)&maxgui_maxgui_gadget_TGadget));
			}else{
				if(bbt_style==32){
					bbt_sp->_maxgui_proxygadgets_buttonextra_tbuttonextra_button =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateButton(bbt_def,(bbt_w/2),0,(bbt_w/2),bbt_h,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_buttonextra_tbuttonextra_panel ,2);
					maxgui_maxgui_SetButtonState((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,bbt__substyle);
				}else{
					if(bbt_style==6){
						bbt_sp->_maxgui_proxygadgets_buttonextra_tbuttonextra_button =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateComboBox((bbt_w/2),0,(bbt_w/2),bbt_h,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_buttonextra_tbuttonextra_panel ,0);
					}else{
						if(bbt_style==13){
							bbt_sp->_maxgui_proxygadgets_buttonextra_tbuttonextra_button =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateSlider((bbt_w/2),0,(bbt_w/2),bbt_h,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_buttonextra_tbuttonextra_panel ,5);
							if((bbt__subvalue)->scales[0]==3){
								maxgui_maxgui_SetSliderRange((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,bbStringToInt(((BBSTRING*)BBARRAYDATA(bbt__subvalue,1))[1U]),bbStringToInt(((BBSTRING*)BBARRAYDATA(bbt__subvalue,1))[2U]));
								maxgui_maxgui_SetSliderValue((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,bbt__substyle);
							}
							bbt_txt=bbStringReplace((BBSTRING)bbt_sp->_maxgui_proxygadgets_buttonextra_tbuttonextra_text ,&_s0,bbStringFromInt(maxgui_maxgui_SliderValue((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_buttonextra_tbuttonextra_button )));
							maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_buttonextra_tbuttonextra_label ,bbt_txt);
						}else{
							if(bbt_style==14){
								bbt_sp->_maxgui_proxygadgets_buttonextra_tbuttonextra_button =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateProgBar((bbt_w/2),0,(bbt_w/2),(bbt_h-5),(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_buttonextra_tbuttonextra_panel ,0);
								bbt_txt=bbStringReplace((BBSTRING)bbt_sp->_maxgui_proxygadgets_buttonextra_tbuttonextra_text ,&_s0,&bbEmptyString);
								maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_buttonextra_tbuttonextra_label ,bbt_txt);
								if(bbt_def!=&bbEmptyString){
									maxgui_maxgui_UpdateProgBar((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,(((BBFLOAT)bbt__substyle)/100.000000f));
									bbt_txt=bbStringReplace((BBSTRING)bbt_sp->_maxgui_proxygadgets_buttonextra_tbuttonextra_text ,&_s0,bbt_def);
									maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_buttonextra_tbuttonextra_label ,bbt_txt);
								}
							}else{
								if(((unsigned int)(bbt_style)&23)==23){
									bbt_sp->_maxgui_proxygadgets_buttonextra_tbuttonextra_button =(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)maxgui_proxygadgets_filepicker_CreateFilePicker(&bbEmptyString,bbt_def,(bbt_w/2),0,(bbt_w/2),(bbt_h-5),(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_buttonextra_tbuttonextra_panel ,1),(BBClass*)&maxgui_maxgui_gadget_TGadget));
									bbt_sp->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ->_maxgui_maxgui_gadget_tgadget_name =&_s2;
								}else{
									if(((unsigned int)(bbt_style)&40)==40){
										bbt_sp->_maxgui_proxygadgets_buttonextra_tbuttonextra_button =(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)maxgui_proxygadgets_filepicker_CreateFilePicker(&bbEmptyString,bbt_def,(bbt_w/2),0,(bbt_w/2),(bbt_h-5),(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_buttonextra_tbuttonextra_panel ,2),(BBClass*)&maxgui_maxgui_gadget_TGadget));
									}else{
										if(bbt_style==19){
											bbt_sp->_maxgui_proxygadgets_buttonextra_tbuttonextra_button =(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)maxgui_proxygadgets_spinner_CreateSpinner((bbt_w/2),0,(bbt_w/2),(bbt_h-5),(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_buttonextra_tbuttonextra_panel ,0),(BBClass*)&maxgui_maxgui_gadget_TGadget));
											if(bbt_def!=&bbEmptyString){
												if((bbt__subvalue)->scales[0]==3){
													maxgui_proxygadgets_spinner_SetSpinnerRange((struct maxgui_proxygadgets_spinner_TSpinner_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbObjectDowncast((BBOBJECT)bbt_sp->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,(BBClass*)&maxgui_proxygadgets_spinner_TSpinner)),((BBDOUBLE)bbStringToInt(((BBSTRING*)BBARRAYDATA(bbt__subvalue,1))[1U])),((BBDOUBLE)bbStringToInt(((BBSTRING*)BBARRAYDATA(bbt__subvalue,1))[2U])),1);
													maxgui_proxygadgets_spinner_SetSpinnerValue((struct maxgui_proxygadgets_spinner_TSpinner_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbObjectDowncast((BBOBJECT)bbt_sp->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,(BBClass*)&maxgui_proxygadgets_spinner_TSpinner)),((BBDOUBLE)bbt__substyle));
												}
											}
										}else{
											if(bbt_style==22){
												bbt_sp->_maxgui_proxygadgets_buttonextra_tbuttonextra_button =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_proxygadgets_datepicker_CreateDatePicker((bbt_w/2),0,(bbt_w/2),(bbt_h-5),(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_buttonextra_tbuttonextra_panel );
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	bbt_sp->_maxgui_proxygadgets_buttonextra_tbuttonextra_style =bbt_style;
	brl_hook_AddHook(brl_event_EmitEventHook,maxgui_proxygadgets_buttonextra_tButtonExtra_eventHandler_TObject_iTObjectTObject,(BBOBJECT)bbt_sp,0);
	(bbt_sp)->clas->m_SetProxy_TTGadget((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbt_sp,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_sp,(BBClass*)&maxgui_maxgui_gadget_TGadget)));
	maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_buttonextra_tbuttonextra_panel ,1,1,1,0);
	maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,0,1,1,0);
	maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_buttonextra_tbuttonextra_label ,1,0,1,0);
	BBINT bbt_=bbt_style;
	if(((bbt_==4) || (bbt_==14)) || (bbt_==13)){
		maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,1,1,1,0);
	}
	return (struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbt_sp;
}
BBINT _maxgui_proxygadgets_buttonextra_tButtonExtra_SetLayout_iiii(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* o,BBINT bbt_a,BBINT bbt_b,BBINT bbt_c,BBINT bbt_d){
	maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_panel ,bbt_a,bbt_b,bbt_c,bbt_d);
	return 0;
}
BBINT _maxgui_proxygadgets_buttonextra_tButtonExtra_SetValue__d(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* o,BBDOUBLE bbt_value){
	if(o->_maxgui_proxygadgets_buttonextra_tbuttonextra_style ==19){
		maxgui_proxygadgets_spinner_SetSpinnerValue((struct maxgui_proxygadgets_spinner_TSpinner_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbObjectDowncast((BBOBJECT)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,(BBClass*)&maxgui_proxygadgets_spinner_TSpinner)),bbt_value);
	}
	return 0;
}
BBINT _maxgui_proxygadgets_buttonextra_tButtonExtra_SetRange__ddi(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* o,BBDOUBLE bbt_minimum,BBDOUBLE bbt_maximum,BBINT bbt_accuracy){
	if(o->_maxgui_proxygadgets_buttonextra_tbuttonextra_style ==19){
		maxgui_proxygadgets_spinner_SetSpinnerRange((struct maxgui_proxygadgets_spinner_TSpinner_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbObjectDowncast((BBOBJECT)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,(BBClass*)&maxgui_proxygadgets_spinner_TSpinner)),bbt_minimum,bbt_maximum,bbt_accuracy);
	}
	return 0;
}
BBINT _maxgui_proxygadgets_buttonextra_tButtonExtra_SetEnabled_i(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* o,BBINT bbt_sta){
	if(bbt_sta!=0){
		maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_panel );
		maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_button );
		maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_label );
	}else{
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_label );
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_button );
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_panel );
	}
	return 0;
}
BBINT _maxgui_proxygadgets_buttonextra_tButtonExtra_State(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* o){
	if(o->_maxgui_proxygadgets_buttonextra_tbuttonextra_style ==32){
		return (o->_maxgui_proxygadgets_buttonextra_tbuttonextra_button )->clas->m_State((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_button );
	}
	return 0;
}
BBINT _maxgui_proxygadgets_buttonextra_tButtonExtra_SetSelected_i(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* o,BBINT bbt_st){
	if(o->_maxgui_proxygadgets_buttonextra_tbuttonextra_style ==32){
		maxgui_maxgui_SetButtonState((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,bbt_st);
	}
	return 0;
}
BBINT _maxgui_proxygadgets_buttonextra_tButtonExtra_SetColor_iii(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* o,BBINT bbt_RED,BBINT bbt_green,BBINT bbt_blue){
	maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_label ,bbt_RED,bbt_green,bbt_blue,1);
	maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_panel ,bbt_RED,bbt_green,bbt_blue,1);
	maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,bbt_RED,bbt_green,bbt_blue,1);
	return 0;
}
BBSTRING _maxgui_proxygadgets_buttonextra_tButtonExtra_GetText(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* o){
	BBSTRING bbt__extradata=&bbEmptyString;
	BBINT bbt_=o->_maxgui_proxygadgets_buttonextra_tbuttonextra_style ;
	if((bbt_==4) || (bbt_==22)){
		return maxgui_maxgui_GadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_button );
	}
	return &bbEmptyString;
}
BBINT _maxgui_proxygadgets_buttonextra_tButtonExtra_SetTooltip_S(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* o,BBSTRING bbt__tip){
	if(o->_maxgui_proxygadgets_buttonextra_tbuttonextra_style ==4){
		((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)o)->clas->m_SetTooltip_S((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)o,bbt__tip);
	}
	return 0;
}
BBINT _maxgui_proxygadgets_buttonextra_tButtonExtra_SetText_S(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* o,BBSTRING bbt_tx){
	if(bbt_tx==&bbEmptyString){
		return 0;
	}
	if(bbStringContains((BBSTRING)bbStringToUpper((BBSTRING)bbt_tx),&_s3)!=0){
		bbt_tx=bbStringReplace((BBSTRING)bbt_tx,&_s3,&bbEmptyString);
		maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_label ,bbt_tx);
		return 1;
	}
	if(bbStringContains((BBSTRING)bbStringToUpper((BBSTRING)bbt_tx),&_s4)!=0){
		bbt_tx=bbStringReplace((BBSTRING)bbt_tx,&_s4,&bbEmptyString);
		BBINT bbt_tw=maxgui_maxgui_GadgetWidth((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_panel );
		BBINT bbt_ns=((BBINT)((((BBFLOAT)bbt_tw)*((BBFLOAT)bbStringToInt(bbt_tx)))/100.000000f));
		maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_label ,0,0,bbt_ns,maxgui_maxgui_GadgetHeight((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_label ));
		maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,bbt_ns,0,(bbt_tw-bbt_ns),maxgui_maxgui_GadgetHeight((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_label ));
		return 1;
	}
	maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,bbt_tx);
	return 0;
}
BBOBJECT maxgui_proxygadgets_buttonextra_tButtonExtra_eventHandler_TObject_iTObjectTObject(BBINT bbt_pID,BBOBJECT bbt_pData,BBOBJECT bbt_pContext){
	struct brl_event_TEvent_obj* bbt_pEvent=(struct brl_event_TEvent_obj*)((struct brl_event_TEvent_obj*)bbObjectDowncast((BBOBJECT)bbt_pData,(BBClass*)&brl_event_TEvent));
	struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* bbt_obj=(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)((struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)bbObjectDowncast((BBOBJECT)bbt_pContext,(BBClass*)&maxgui_proxygadgets_buttonextra_tButtonExtra));
	BBINT bbt__data=0;
	BBSTRING bbt__extraData=&bbEmptyString;
	if(((BBObject*)bbt_pEvent)!= &bbNullObject){
		BBINT bbt_=bbt_pEvent->_brl_event_tevent_id ;
		if(bbt_==8193){
			if(bbt_pEvent->_brl_event_tevent_source ==bbt_obj->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ){
				BBINT bbt_2=bbt_obj->_maxgui_proxygadgets_buttonextra_tbuttonextra_style ;
				if(((bbt_2==4) || (bbt_2==40)) || (bbt_2==23)){
					bbt__extraData=maxgui_maxgui_GadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_buttonextra_tbuttonextra_button );
					maxgui_maxgui_SetGadgetExtra((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_obj,(BBClass*)&maxgui_maxgui_gadget_TGadget)),(BBOBJECT)bbt__extraData);
				}else{
					if(bbt_2==22){
						bbt__extraData=((BBString *)bbObjectDowncast((BBOBJECT)maxgui_maxgui_GadgetExtra((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ),(BBClass*)&bbStringClass));
						maxgui_maxgui_SetGadgetExtra((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_obj,(BBClass*)&maxgui_maxgui_gadget_TGadget)),(BBOBJECT)bbt__extraData);
					}else{
						if(bbt_2==6){
							bbt__data=maxgui_maxgui_SelectedGadgetItem((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_buttonextra_tbuttonextra_button );
							maxgui_maxgui_SetGadgetExtra((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_obj,(BBClass*)&maxgui_maxgui_gadget_TGadget)),(BBOBJECT)bbStringFromInt(bbt__data));
						}else{
							if(bbt_2==13){
								BBSTRING bbt_txt=&bbEmptyString;
								bbt_txt=bbStringReplace((BBSTRING)bbt_obj->_maxgui_proxygadgets_buttonextra_tbuttonextra_text ,&_s0,bbStringFromInt(maxgui_maxgui_SliderValue((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_buttonextra_tbuttonextra_button )));
								maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_buttonextra_tbuttonextra_label ,bbt_txt);
								bbt__data=maxgui_maxgui_SliderValue((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_buttonextra_tbuttonextra_button );
								maxgui_maxgui_SetGadgetExtra((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_obj,(BBClass*)&maxgui_maxgui_gadget_TGadget)),(BBOBJECT)bbStringFromInt(bbt__data));
							}else{
								if(bbt_2==19){
									bbt__data=((BBINT)maxgui_proxygadgets_spinner_SpinnerValue((struct maxgui_proxygadgets_spinner_TSpinner_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbObjectDowncast((BBOBJECT)bbt_obj->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ,(BBClass*)&maxgui_proxygadgets_spinner_TSpinner))));
									bbt__extraData=bbStringFromFloat((BBFLOAT)bbt__data);
									maxgui_maxgui_SetGadgetExtra((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_obj,(BBClass*)&maxgui_maxgui_gadget_TGadget)),(BBOBJECT)bbStringFromInt(bbt__data));
								}else{
									if(bbt_2==32){
										bbt__data=maxgui_maxgui_ButtonState((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_buttonextra_tbuttonextra_button );
										bbt__extraData=bbStringFromInt(maxgui_maxgui_ButtonState((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_buttonextra_tbuttonextra_button ));
										maxgui_maxgui_SetGadgetExtra((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_obj,(BBClass*)&maxgui_maxgui_gadget_TGadget)),(BBOBJECT)bbStringFromInt(bbt__data));
									}
								}
							}
						}
					}
				}
				brl_event_EmitEvent((struct brl_event_TEvent_obj*)brl_event_CreateEvent(8193,(BBOBJECT)bbt_obj,bbt__data,0,0,0,(BBOBJECT)bbt__extraData));
				return (BBOBJECT)bbt_pEvent;
			}
		}
	}
	return (BBOBJECT)bbt_pData;
}
struct BBDebugScope_33 maxgui_proxygadgets_buttonextra_tButtonExtra_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"tButtonExtra",
	{
		{
			BBDEBUGDECL_FIELD,
			"panel",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj,_maxgui_proxygadgets_buttonextra_tbuttonextra_panel)
		},
		{
			BBDEBUGDECL_FIELD,
			"label",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj,_maxgui_proxygadgets_buttonextra_tbuttonextra_label)
		},
		{
			BBDEBUGDECL_FIELD,
			"button",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj,_maxgui_proxygadgets_buttonextra_tbuttonextra_button)
		},
		{
			BBDEBUGDECL_FIELD,
			"style",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj,_maxgui_proxygadgets_buttonextra_tbuttonextra_style)
		},
		{
			BBDEBUGDECL_FIELD,
			"Text",
			"$",
			.field_offset=offsetof(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj,_maxgui_proxygadgets_buttonextra_tbuttonextra_text)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_maxgui_proxygadgets_buttonextra_tButtonExtra_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetFont",
			"(:TGuiFont)i",
			.var_address=(void*)&_maxgui_proxygadgets_buttonextra_tButtonExtra_SetFont_TTGuiFont
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"CleanUp",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_buttonextra_tButtonExtra_CleanUp
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ItemExtra",
			"(i):Object",
			.var_address=(void*)&_maxgui_proxygadgets_buttonextra_tButtonExtra_ItemExtra_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Clear",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_buttonextra_tButtonExtra_Clear
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetPixmap",
			"(:TPixmap,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_buttonextra_tButtonExtra_SetPixmap_TTPixmapi
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetItem",
			"(i,$,$,i,:Object,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_buttonextra_tButtonExtra_SetItem_iSSiTObjecti
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"RemoveItem",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_buttonextra_tButtonExtra_RemoveItem_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ItemCount",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_buttonextra_tButtonExtra_ItemCount
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SelectedItem",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_buttonextra_tButtonExtra_SelectedItem
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SelectItem",
			"(i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_buttonextra_tButtonExtra_SelectItem_ii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"InsertItem",
			"(i,$,$,i,:Object,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_buttonextra_tButtonExtra_InsertItem_iSSiTObjecti
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetRange",
			"(i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_buttonextra_tButtonExtra_SetRange_ii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetValue",
			"(f)i",
			.var_address=(void*)&_maxgui_proxygadgets_buttonextra_tButtonExtra_SetValue_f
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetProxy",
			"():TGadget",
			.var_address=(void*)&_maxgui_proxygadgets_buttonextra_tButtonExtra_GetProxy
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetProp",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_buttonextra_tButtonExtra_SetProp_i
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Create",
			"($,$,i,i,i,i,:TGadget,i):tButtonExtra",
			.var_address=(void*)&maxgui_proxygadgets_buttonextra_tButtonExtra_Create_TtButtonExtra_SSiiiiTTGadgeti
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetLayout",
			"(i,i,i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_buttonextra_tButtonExtra_SetLayout_iiii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetValue_",
			"(d)i",
			.var_address=(void*)&_maxgui_proxygadgets_buttonextra_tButtonExtra_SetValue__d
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetRange_",
			"(d,d,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_buttonextra_tButtonExtra_SetRange__ddi
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetEnabled",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_buttonextra_tButtonExtra_SetEnabled_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"State",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_buttonextra_tButtonExtra_State
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetSelected",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_buttonextra_tButtonExtra_SetSelected_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetColor",
			"(i,i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_buttonextra_tButtonExtra_SetColor_iii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetText",
			"()$",
			.var_address=(void*)&_maxgui_proxygadgets_buttonextra_tButtonExtra_GetText
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetTooltip",
			"($)i",
			.var_address=(void*)&_maxgui_proxygadgets_buttonextra_tButtonExtra_SetTooltip_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetText",
			"($)i",
			.var_address=(void*)&_maxgui_proxygadgets_buttonextra_tButtonExtra_SetText_S
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"eventHandler",
			"(i,:Object,:Object):Object",
			.var_address=(void*)&maxgui_proxygadgets_buttonextra_tButtonExtra_eventHandler_TObject_iTObjectTObject
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_maxgui_proxygadgets_buttonextra_tButtonExtra maxgui_proxygadgets_buttonextra_tButtonExtra={
	&maxgui_maxgui_gadget_TProxyGadget,
	bbObjectFree,
	(BBDebugScope*)&maxgui_proxygadgets_buttonextra_tButtonExtra_scope,
	sizeof(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj),
	(void (*)(BBOBJECT))_maxgui_proxygadgets_buttonextra_tButtonExtra_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj,_maxgui_proxygadgets_buttonextra_tbuttonextra_text) - sizeof(void*) + sizeof(BBSTRING)
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
	,_maxgui_proxygadgets_buttonextra_tButtonExtra_SetLayout_iiii
	,_maxgui_maxgui_gadget_TGadget_LayoutKids
	,_maxgui_maxgui_gadget_TGadget_DoLayout
	,_maxgui_maxgui_gadget_TGadget_SetDataSource_TObject
	,maxgui_maxgui_gadget_TGadget_KeysFromList_aS_TTList
	,maxgui_maxgui_gadget_TGadget_KeysFromObjectArray_aS_aTObject
	,_maxgui_maxgui_gadget_TGadget_SyncDataSource
	,_maxgui_maxgui_gadget_TGadget_SyncData_aS
	,_maxgui_maxgui_gadget_TGadget_InsertItemFromKey_iS
	,_maxgui_proxygadgets_buttonextra_tButtonExtra_Clear
	,_maxgui_proxygadgets_buttonextra_tButtonExtra_InsertItem_iSSiTObjecti
	,_maxgui_proxygadgets_buttonextra_tButtonExtra_SetItem_iSSiTObjecti
	,_maxgui_proxygadgets_buttonextra_tButtonExtra_RemoveItem_i
	,_maxgui_proxygadgets_buttonextra_tButtonExtra_ItemCount
	,_maxgui_maxgui_gadget_TProxyGadget_ItemText_i
	,_maxgui_maxgui_gadget_TProxyGadget_ItemTip_i
	,_maxgui_maxgui_gadget_TProxyGadget_ItemFlags_i
	,_maxgui_maxgui_gadget_TProxyGadget_ItemIcon_i
	,_maxgui_proxygadgets_buttonextra_tButtonExtra_ItemExtra_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetItemState_ii
	,_maxgui_maxgui_gadget_TProxyGadget_ItemState_i
	,_maxgui_proxygadgets_buttonextra_tButtonExtra_SelectItem_ii
	,_maxgui_proxygadgets_buttonextra_tButtonExtra_SelectedItem
	,_maxgui_maxgui_gadget_TProxyGadget_SelectedItems
	,_maxgui_maxgui_gadget_TGadget_Insert_TTGadgeti
	,_maxgui_maxgui_gadget_TProxyGadget_Query_i
	,_maxgui_maxgui_gadget_TGadget_ScaleFactor
	,_maxgui_proxygadgets_buttonextra_tButtonExtra_CleanUp
	,_maxgui_maxgui_gadget_TProxyGadget_Free
	,_maxgui_maxgui_gadget_TProxyGadget_Rethink
	,_maxgui_maxgui_gadget_TProxyGadget_ClientWidth
	,_maxgui_maxgui_gadget_TProxyGadget_ClientHeight
	,_maxgui_maxgui_gadget_TProxyGadget_Activate_i
	,_maxgui_proxygadgets_buttonextra_tButtonExtra_State
	,_maxgui_proxygadgets_buttonextra_tButtonExtra_SetText_S
	,_maxgui_proxygadgets_buttonextra_tButtonExtra_GetText
	,_maxgui_proxygadgets_buttonextra_tButtonExtra_SetFont_TTGuiFont
	,_maxgui_proxygadgets_buttonextra_tButtonExtra_SetColor_iii
	,_maxgui_maxgui_gadget_TProxyGadget_RemoveColor
	,_maxgui_maxgui_gadget_TProxyGadget_SetAlpha_f
	,_maxgui_maxgui_gadget_TProxyGadget_SetTextColor_iii
	,_maxgui_proxygadgets_buttonextra_tButtonExtra_SetTooltip_S
	,_maxgui_maxgui_gadget_TProxyGadget_GetTooltip
	,_maxgui_proxygadgets_buttonextra_tButtonExtra_SetPixmap_TTPixmapi
	,_maxgui_maxgui_gadget_TProxyGadget_SetIconStrip_TTIconStrip
	,_maxgui_maxgui_gadget_TProxyGadget_SetShow_i
	,_maxgui_proxygadgets_buttonextra_tButtonExtra_SetEnabled_i
	,_maxgui_proxygadgets_buttonextra_tButtonExtra_SetSelected_i
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
	,_maxgui_proxygadgets_buttonextra_tButtonExtra_SetValue_f
	,_maxgui_proxygadgets_buttonextra_tButtonExtra_SetRange_ii
	,_maxgui_proxygadgets_buttonextra_tButtonExtra_SetProp_i
	,_maxgui_maxgui_gadget_TProxyGadget_GetProp
	,_maxgui_maxgui_gadget_TProxyGadget_AttachGraphics_i
	,_maxgui_maxgui_gadget_TProxyGadget_CanvasGraphics
	,_maxgui_maxgui_gadget_TProxyGadget_Run_S
	,_maxgui_maxgui_gadget_TProxyGadget_SetProxy_TTGadget
	,_maxgui_proxygadgets_buttonextra_tButtonExtra_GetProxy
	,_maxgui_maxgui_gadget_TProxyGadget_SetStatus_S
	,maxgui_proxygadgets_buttonextra_tButtonExtra_Create_TtButtonExtra_SSiiiiTTGadgeti
	,_maxgui_proxygadgets_buttonextra_tButtonExtra_SetValue__d
	,_maxgui_proxygadgets_buttonextra_tButtonExtra_SetRange__ddi
	,maxgui_proxygadgets_buttonextra_tButtonExtra_eventHandler_TObject_iTObjectTObject
};

struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj* maxgui_proxygadgets_buttonextra_CreateButtonExtra(BBSTRING bbt_msg,BBSTRING bbt_def,BBINT bbt_x,BBINT bbt_y,BBINT bbt_w,BBINT bbt_h,struct maxgui_maxgui_gadget_TGadget_obj* bbt_group,BBINT bbt_style){
	return (struct maxgui_proxygadgets_buttonextra_tButtonExtra_obj*)maxgui_proxygadgets_buttonextra_tButtonExtra_Create_TtButtonExtra_SSiiiiTTGadgeti(bbt_msg,bbt_def,bbt_x,bbt_y,bbt_w,bbt_h,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group,bbt_style);
}
static int _bb_maxgui_proxygadgets_buttonextra_inited = 0;
int _bb_maxgui_proxygadgets_buttonextra(){
	if (!_bb_maxgui_proxygadgets_buttonextra_inited) {
		_bb_maxgui_proxygadgets_buttonextra_inited = 1;
		__bb_brl_blitz_blitz();
		_bb_maxgui_proxygadgets_spinner();
		_bb_maxgui_proxygadgets_filepicker();
		_bb_maxgui_proxygadgets_datepicker();
		_bb_maxgui_proxygadgets_colorpicker();
		bbObjectRegisterType((BBCLASS)&maxgui_proxygadgets_buttonextra_tButtonExtra);
		return 0;
	}
	return 0;
}