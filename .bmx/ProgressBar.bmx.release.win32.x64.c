#include "ProgressBar.bmx.release.win32.x64.h"
static BBString _s0={
	&bbStringClass,
	2,
	{32,37}
};
static BBString _s3={
	&bbStringClass,
	27,
	{114,101,115,111,117,114,99,101,115,47,105,110,100,105,99,97,116
	,111,114,95,82,69,68,46,112,110,103}
};
static BBString _s4={
	&bbStringClass,
	30,
	{114,101,115,111,117,114,99,101,115,47,105,110,100,105,99,97,116
	,111,114,95,89,69,76,76,79,87,46,112,110,103}
};
static BBString _s2={
	&bbStringClass,
	29,
	{114,101,115,111,117,114,99,101,115,47,105,110,100,105,99,97,116
	,111,114,95,103,114,101,101,110,46,112,110,103}
};
static BBString _s1={
	&bbStringClass,
	28,
	{114,101,115,111,117,114,99,101,115,47,105,110,100,105,99,97,116
	,111,114,95,118,111,105,100,46,112,110,103}
};
static BBString _s5={
	&bbStringClass,
	18,
	{114,101,115,111,117,114,99,101,115,47,115,116,97,114,46,112,110
	,103}
};
struct BBDebugScope_36{int kind; const char *name; BBDebugDecl decls[37]; };
void _maxgui_proxygadgets_progressbar_TPbar_New(struct maxgui_proxygadgets_progressbar_TPbar_obj* o) {
	_maxgui_maxgui_gadget_TProxyGadget_New((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o);
	o->clas = &maxgui_proxygadgets_progressbar_TPbar;
	o->_maxgui_proxygadgets_progressbar_tpbar__void_pixmap = (struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_progressbar_tpbar__green_pixmap = (struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_progressbar_tpbar__red_pixmap = (struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_progressbar_tpbar__yellow_pixmap = (struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_progressbar_tpbar_pixmap = (struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_progressbar_tpbar__star_pixmap = (struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_progressbar_tpbar_pixmap_flags = 2;
	o->_maxgui_proxygadgets_progressbar_tpbar_panel = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_progressbar_tpbar_panel_value = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_progressbar_tpbar_panels = bbArrayNew1D(":TGadget", 10);
	o->_maxgui_proxygadgets_progressbar_tpbar_labels = bbArrayNew1D(":TGadget", 11);
	BBINT bbt_[]={0,0,0};
	BBARRAY bbt_2 = bbArrayFromData("i",3,bbt_);
	o->_maxgui_proxygadgets_progressbar_tpbar_tcolor = bbt_2;
	o->_maxgui_proxygadgets_progressbar_tpbar_w = 0;
	o->_maxgui_proxygadgets_progressbar_tpbar_h = 0;
	o->_maxgui_proxygadgets_progressbar_tpbar__label_p = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_progressbar_tpbar__label_v = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_progressbar_tpbar__value = .00000000f;
	o->_maxgui_proxygadgets_progressbar_tpbar__value_warning = 6;
	o->_maxgui_proxygadgets_progressbar_tpbar__value_critical = 8;
	o->_maxgui_proxygadgets_progressbar_tpbar_style = 0;
	o->_maxgui_proxygadgets_progressbar_tpbar_flags = 0;
}
BBINT _maxgui_proxygadgets_progressbar_TPbar_SetFont_TTGuiFont(struct maxgui_proxygadgets_progressbar_TPbar_obj* o,struct maxgui_maxgui_guifont_TGuiFont_obj* bbt_fnt){
	if(bbt_fnt==&bbNullObject){
		return 0;
	}
	maxgui_maxgui_SetGadgetFont((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_progressbar_tpbar__label_p ,(struct maxgui_maxgui_guifont_TGuiFont_obj*)bbt_fnt,0);
	maxgui_maxgui_SetGadgetFont((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_progressbar_tpbar__label_v ,(struct maxgui_maxgui_guifont_TGuiFont_obj*)bbt_fnt,0);
	return 0;
}
BBSTRING _maxgui_proxygadgets_progressbar_TPbar_GetText(struct maxgui_proxygadgets_progressbar_TPbar_obj* o){
	return bbStringFromFloat(o->_maxgui_proxygadgets_progressbar_tpbar__value );
}
BBINT _maxgui_proxygadgets_progressbar_TPbar_CleanUp(struct maxgui_proxygadgets_progressbar_TPbar_obj* o){
	brl_hook_RemoveHook(brl_event_EmitEventHook,o->clas->f_EventHook_TObject_iTObjectTObject,(BBOBJECT)o);
	((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)->clas->m_SetProxy_TTGadget((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o,(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject);
	if(o->_maxgui_proxygadgets_progressbar_tpbar_labels != &bbEmptyArray){
		{
			BBINT bbt_ss=0;
			BBINT bbt_=(o->_maxgui_proxygadgets_progressbar_tpbar_labels ->scales[0]);
			for(;(bbt_ss<bbt_);bbt_ss=(bbt_ss+1)){
				if(((BBObject*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_progressbar_tpbar_labels ,1))[((BBUINT)bbt_ss)])!= &bbNullObject){
					maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_progressbar_tpbar_labels ,1))[((BBUINT)bbt_ss)]);
				}
				((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_progressbar_tpbar_labels ,1))[((BBUINT)bbt_ss)]=(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
			}
		}
	}
	if(o->_maxgui_proxygadgets_progressbar_tpbar_panels != &bbEmptyArray){
		{
			BBINT bbt_ss2=0;
			BBINT bbt_2=(o->_maxgui_proxygadgets_progressbar_tpbar_panels ->scales[0]);
			for(;(bbt_ss2<bbt_2);bbt_ss2=(bbt_ss2+1)){
				if(((BBObject*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_progressbar_tpbar_panels ,1))[((BBUINT)bbt_ss2)])!= &bbNullObject){
					maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_progressbar_tpbar_panels ,1))[((BBUINT)bbt_ss2)]);
				}
				((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_progressbar_tpbar_panels ,1))[((BBUINT)bbt_ss2)]=(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
			}
		}
	}
	if(o->_maxgui_proxygadgets_progressbar_tpbar_tcolor != &bbEmptyArray){
		o->_maxgui_proxygadgets_progressbar_tpbar_tcolor =&bbEmptyArray;
	}
	if(((BBObject*)o->_maxgui_proxygadgets_progressbar_tpbar_panel )!= &bbNullObject){
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_progressbar_tpbar_panel );
		o->_maxgui_proxygadgets_progressbar_tpbar_panel =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	}
	if(((BBObject*)o->_maxgui_proxygadgets_progressbar_tpbar_panel_value )!= &bbNullObject){
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_progressbar_tpbar_panel_value );
		o->_maxgui_proxygadgets_progressbar_tpbar_panel_value =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	}
	if(((BBObject*)o->_maxgui_proxygadgets_progressbar_tpbar__label_p )!= &bbNullObject){
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_progressbar_tpbar__label_p );
		o->_maxgui_proxygadgets_progressbar_tpbar__label_p =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	}
	if(((BBObject*)o->_maxgui_proxygadgets_progressbar_tpbar__label_v )!= &bbNullObject){
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_progressbar_tpbar__label_v );
		o->_maxgui_proxygadgets_progressbar_tpbar__label_v =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	}
	o->_maxgui_proxygadgets_progressbar_tpbar_labels =&bbEmptyArray;
	o->_maxgui_proxygadgets_progressbar_tpbar_panels =&bbEmptyArray;
	o->_maxgui_proxygadgets_progressbar_tpbar__void_pixmap =(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_progressbar_tpbar__green_pixmap =(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_progressbar_tpbar__red_pixmap =(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_progressbar_tpbar__yellow_pixmap =(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_progressbar_tpbar__star_pixmap =(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_progressbar_tpbar_pixmap =(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	return 0;
}
BBINT _maxgui_proxygadgets_progressbar_TPbar_SetProp_i(struct maxgui_proxygadgets_progressbar_TPbar_obj* o,BBINT bbt__val){
	o->_maxgui_proxygadgets_progressbar_tpbar__value =((BBFLOAT)bbt__val);
	if(((unsigned int)(o->_maxgui_proxygadgets_progressbar_tpbar_flags )&32)!=0){
		((struct maxgui_proxygadgets_progressbar_TPbar_obj*)o)->clas->m_SetValue_f((struct maxgui_proxygadgets_progressbar_TPbar_obj*)o,((BBFLOAT)bbt__val));
	}
	return 0;
}
BBINT _maxgui_proxygadgets_progressbar_TPbar_SetRange_ii(struct maxgui_proxygadgets_progressbar_TPbar_obj* o,BBINT bbt__min,BBINT bbt__max){
	if(bbt__min<0){
		bbt__min=0;
	}
	if(bbt__max>10){
		bbt__max=10;
	}
	o->_maxgui_proxygadgets_progressbar_tpbar__value_warning =bbt__min;
	o->_maxgui_proxygadgets_progressbar_tpbar__value_critical =bbt__max;
	return 0;
}
BBINT _maxgui_proxygadgets_progressbar_TPbar_SetEnabled_i(struct maxgui_proxygadgets_progressbar_TPbar_obj* o,BBINT bbt_sta){
	if(bbt_sta==0){
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_progressbar_tpbar_panel );
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_progressbar_tpbar_panel_value );
		if(((BBObject*)o->_maxgui_proxygadgets_progressbar_tpbar__label_p )!= &bbNullObject){
			maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_progressbar_tpbar__label_p );
		}
		if(((BBObject*)o->_maxgui_proxygadgets_progressbar_tpbar__label_v )!= &bbNullObject){
			maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_progressbar_tpbar__label_v );
		}
		if(o->_maxgui_proxygadgets_progressbar_tpbar_panels != &bbEmptyArray){
			{
				BBINT bbt_ss=0;
				BBINT bbt_=(o->_maxgui_proxygadgets_progressbar_tpbar_panels ->scales[0]);
				for(;(bbt_ss<bbt_);bbt_ss=(bbt_ss+1)){
					maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_progressbar_tpbar_panels ,1))[((BBUINT)bbt_ss)]);
				}
			}
		}
	}else{
		maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_progressbar_tpbar_panel );
		maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_progressbar_tpbar_panel_value );
		if(((BBObject*)o->_maxgui_proxygadgets_progressbar_tpbar__label_p )!= &bbNullObject){
			maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_progressbar_tpbar__label_p );
		}
		if(((BBObject*)o->_maxgui_proxygadgets_progressbar_tpbar__label_v )!= &bbNullObject){
			maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_progressbar_tpbar__label_v );
		}
		if(o->_maxgui_proxygadgets_progressbar_tpbar_panels != &bbEmptyArray){
			{
				BBINT bbt_ss2=0;
				BBINT bbt_2=(o->_maxgui_proxygadgets_progressbar_tpbar_panels ->scales[0]);
				for(;(bbt_ss2<bbt_2);bbt_ss2=(bbt_ss2+1)){
					maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_progressbar_tpbar_panels ,1))[((BBUINT)bbt_ss2)]);
				}
			}
		}
	}
	return 0;
}
BBINT _maxgui_proxygadgets_progressbar_TPbar_SetShow_i(struct maxgui_proxygadgets_progressbar_TPbar_obj* o,BBINT bbt_bool){
	if(((BBObject*)o->_maxgui_proxygadgets_progressbar_tpbar_panel )!= &bbNullObject){
		(o->_maxgui_proxygadgets_progressbar_tpbar_panel )->clas->m_SetShow_i((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_progressbar_tpbar_panel ,bbt_bool);
	}
	if(((BBObject*)o->_maxgui_proxygadgets_progressbar_tpbar_panel_value )!= &bbNullObject){
		(o->_maxgui_proxygadgets_progressbar_tpbar_panel_value )->clas->m_SetShow_i((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_progressbar_tpbar_panel_value ,bbt_bool);
	}
	if(((BBObject*)o->_maxgui_proxygadgets_progressbar_tpbar__label_p )!= &bbNullObject){
		(o->_maxgui_proxygadgets_progressbar_tpbar__label_p )->clas->m_SetShow_i((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_progressbar_tpbar__label_p ,bbt_bool);
	}
	if(((BBObject*)o->_maxgui_proxygadgets_progressbar_tpbar__label_v )!= &bbNullObject){
		(o->_maxgui_proxygadgets_progressbar_tpbar__label_v )->clas->m_SetShow_i((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_progressbar_tpbar__label_v ,bbt_bool);
	}
	if(o->_maxgui_proxygadgets_progressbar_tpbar_panels != &bbEmptyArray){
		{
			BBINT bbt_ss=0;
			BBINT bbt_=(o->_maxgui_proxygadgets_progressbar_tpbar_panels ->scales[0]);
			for(;(bbt_ss<bbt_);bbt_ss=(bbt_ss+1)){
				if(((BBObject*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_progressbar_tpbar_panels ,1))[((BBUINT)bbt_ss)])!= &bbNullObject){
					struct maxgui_maxgui_gadget_TGadget_obj* bbt_2;
					((bbt_2 = ((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_progressbar_tpbar_panels ,1))[((BBUINT)bbt_ss)])->clas)->m_SetShow_i((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_2,bbt_bool);
				}
			}
		}
	}
	if(o->_maxgui_proxygadgets_progressbar_tpbar_labels != &bbEmptyArray){
		{
			BBINT bbt_ss2=0;
			BBINT bbt_3=(o->_maxgui_proxygadgets_progressbar_tpbar_labels ->scales[0]);
			for(;(bbt_ss2<bbt_3);bbt_ss2=(bbt_ss2+1)){
				if(((BBObject*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_progressbar_tpbar_labels ,1))[((BBUINT)bbt_ss2)])!= &bbNullObject){
					struct maxgui_maxgui_gadget_TGadget_obj* bbt_4;
					((bbt_4 = ((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_progressbar_tpbar_labels ,1))[((BBUINT)bbt_ss2)])->clas)->m_SetShow_i((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_4,bbt_bool);
				}
			}
		}
	}
	return 0;
}
BBINT _maxgui_proxygadgets_progressbar_TPbar_Class(struct maxgui_proxygadgets_progressbar_TPbar_obj* o){
	return 14;
}
BBINT _maxgui_proxygadgets_progressbar_TPbar_SetValue_f(struct maxgui_proxygadgets_progressbar_TPbar_obj* o,BBFLOAT bbt__val){
	o->_maxgui_proxygadgets_progressbar_tpbar__value =bbt__val;
	BBINT bbt_new_width=((BBINT)((bbt__val*((BBFLOAT)maxgui_maxgui_GadgetWidth((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_progressbar_tpbar_panel )))-2.00000000f));
	BBFLOAT bbt_showval=(((((BBFLOAT)bbt_new_width)/((BBFLOAT)maxgui_maxgui_GadgetWidth((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_progressbar_tpbar_panel )))*100.000000f)+1.00000000f);
	struct brl_pixmap_TPixmap_obj* bbt_current_pix=(struct brl_pixmap_TPixmap_obj*)o->_maxgui_proxygadgets_progressbar_tpbar__green_pixmap ;
	if(o->_maxgui_proxygadgets_progressbar_tpbar_style ==0){
		maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_progressbar_tpbar_panel_value ,0,0,bbt_new_width,(maxgui_maxgui_GadgetHeight((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_progressbar_tpbar_panel )-2));
		if(((unsigned int)(o->_maxgui_proxygadgets_progressbar_tpbar_flags )&16)!=0){
			if(o->_maxgui_proxygadgets_progressbar_tpbar_pixmap !=&bbNullObject){
				if((((BBINT)bbt_showval)/10)>=o->_maxgui_proxygadgets_progressbar_tpbar__value_warning ){
					maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_progressbar_tpbar_panel_value ,(struct brl_pixmap_TPixmap_obj*)o->_maxgui_proxygadgets_progressbar_tpbar__yellow_pixmap ,2);
				}
				if((((BBINT)bbt_showval)/10)>=o->_maxgui_proxygadgets_progressbar_tpbar__value_critical ){
					maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_progressbar_tpbar_panel_value ,(struct brl_pixmap_TPixmap_obj*)o->_maxgui_proxygadgets_progressbar_tpbar__red_pixmap ,2);
				}
			}else{
				if((((BBINT)bbt_showval)/10)>=o->_maxgui_proxygadgets_progressbar_tpbar__value_warning ){
					maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_progressbar_tpbar_panel_value ,239,212,107,1);
				}
				if((((BBINT)bbt_showval)/10)>=o->_maxgui_proxygadgets_progressbar_tpbar__value_critical ){
					maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_progressbar_tpbar_panel_value ,228,75,67,1);
				}
			}
		}
		if(bbt__val<.5f){
			if(((BBObject*)o->_maxgui_proxygadgets_progressbar_tpbar__label_p )!= &bbNullObject){
				maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_progressbar_tpbar__label_p ,bbStringConcat(bbStringFromInt((BBINT)bbt_showval),&_s0));
				maxgui_maxgui_HideGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_progressbar_tpbar__label_v );
				maxgui_maxgui_ShowGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_progressbar_tpbar__label_p );
				maxgui_maxgui_SetGadgetTextColor((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_progressbar_tpbar__label_p ,0,0,0);
			}
		}else{
			if(((BBObject*)o->_maxgui_proxygadgets_progressbar_tpbar__label_v )!= &bbNullObject){
				BBINT bbt_hhp=((o->_maxgui_proxygadgets_progressbar_tpbar_h /2)-10);
				if(bbt_hhp<0){
					bbt_hhp=0;
				}
				maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_progressbar_tpbar__label_v ,2,bbt_hhp,maxgui_maxgui_GadgetWidth((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_progressbar_tpbar_panel ),(maxgui_maxgui_GadgetHeight((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_progressbar_tpbar_panel )-6));
				maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_progressbar_tpbar__label_v ,bbStringConcat(bbStringFromInt((BBINT)bbt_showval),&_s0));
				maxgui_maxgui_HideGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_progressbar_tpbar__label_p );
				maxgui_maxgui_ShowGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_progressbar_tpbar__label_v );
				maxgui_maxgui_SetGadgetTextColor((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_progressbar_tpbar__label_v ,255,255,255);
			}
		}
	}
	if(o->_maxgui_proxygadgets_progressbar_tpbar_style ==1){
		BBINT bbt_WIDTH=maxgui_maxgui_GadgetHeight((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_progressbar_tpbar_panel );
		BBINT bbt_ww=(((bbt_WIDTH-4)/10)-2);
		BBINT bbt_X1=1;
		if(((unsigned int)(o->_maxgui_proxygadgets_progressbar_tpbar_flags )&16)!=0){
			if((((BBINT)bbt_showval)/10)>=o->_maxgui_proxygadgets_progressbar_tpbar__value_warning ){
				bbt_current_pix=(struct brl_pixmap_TPixmap_obj*)o->_maxgui_proxygadgets_progressbar_tpbar__yellow_pixmap ;
			}
			if((((BBINT)bbt_showval)/10)>=o->_maxgui_proxygadgets_progressbar_tpbar__value_critical ){
				bbt_current_pix=(struct brl_pixmap_TPixmap_obj*)o->_maxgui_proxygadgets_progressbar_tpbar__red_pixmap ;
			}
		}
		{
			BBINT bbt_s=0;
			for(;(bbt_s<10);bbt_s=(bbt_s+1)){
				if(((BBObject*)o->_maxgui_proxygadgets_progressbar_tpbar__void_pixmap )!= &bbNullObject){
					maxgui_maxgui_SetPanelPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_progressbar_tpbar_panels ,1))[((BBUINT)bbt_s)],(struct brl_pixmap_TPixmap_obj*)o->_maxgui_proxygadgets_progressbar_tpbar__void_pixmap ,2);
				}else{
					maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_progressbar_tpbar_panels ,1))[((BBUINT)bbt_s)],192,192,192,1);
				}
				if(bbt_s<=(((BBINT)bbt_showval)/10)){
					if(((BBObject*)bbt_current_pix)!= &bbNullObject){
						maxgui_maxgui_SetPanelPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_progressbar_tpbar_panels ,1))[((BBUINT)bbt_s)],(struct brl_pixmap_TPixmap_obj*)bbt_current_pix,2);
					}else{
						maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_progressbar_tpbar_panels ,1))[((BBUINT)bbt_s)],149,208,98,1);
					}
				}
			}
		}
	}
	if(o->_maxgui_proxygadgets_progressbar_tpbar_style ==2){
		{
			BBINT bbt_s2=1;
			for(;(bbt_s2<=5);bbt_s2=(bbt_s2+1)){
				if(((BBFLOAT)bbt_s2)<=o->_maxgui_proxygadgets_progressbar_tpbar__value ){
					if(((BBObject*)o->_maxgui_proxygadgets_progressbar_tpbar__star_pixmap )!= &bbNullObject){
						maxgui_maxgui_SetPanelPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_progressbar_tpbar_panels ,1))[((BBUINT)(bbt_s2-1))],(struct brl_pixmap_TPixmap_obj*)o->_maxgui_proxygadgets_progressbar_tpbar__star_pixmap ,0);
					}
				}else{
					maxgui_maxgui_SetPanelPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_progressbar_tpbar_panels ,1))[((BBUINT)(bbt_s2-1))],(struct brl_pixmap_TPixmap_obj*)&bbNullObject,0);
				}
			}
		}
	}
	return 0;
}
BBINT _maxgui_proxygadgets_progressbar_TPbar_SetColor_iii(struct maxgui_proxygadgets_progressbar_TPbar_obj* o,BBINT bbt_R,BBINT bbt_G,BBINT bbt_B){
	maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_progressbar_tpbar_panel ,bbt_R,bbt_G,bbt_B,1);
	return 0;
}
BBINT _maxgui_proxygadgets_progressbar_TPbar_SetTextColor_iii(struct maxgui_proxygadgets_progressbar_TPbar_obj* o,BBINT bbt_R,BBINT bbt_G,BBINT bbt_B){
	if(((BBObject*)o->_maxgui_proxygadgets_progressbar_tpbar_panel_value )!= &bbNullObject){
		maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_progressbar_tpbar_panel_value ,bbt_R,bbt_G,bbt_B,1);
	}
	BBINT bbt_[]={bbt_R,bbt_G,bbt_B};
	BBARRAY bbt_2 = bbArrayFromData("i",3,bbt_);
	o->_maxgui_proxygadgets_progressbar_tpbar_tcolor =bbt_2;
	return 0;
}
BBINT _maxgui_proxygadgets_progressbar_TPbar_SetPixmap_TTPixmapi(struct maxgui_proxygadgets_progressbar_TPbar_obj* o,struct brl_pixmap_TPixmap_obj* bbt_pix,BBINT bbt_flags){
	o->_maxgui_proxygadgets_progressbar_tpbar_pixmap =(struct brl_pixmap_TPixmap_obj*)bbt_pix;
	o->_maxgui_proxygadgets_progressbar_tpbar_pixmap_flags =bbt_flags;
	if(((BBObject*)o->_maxgui_proxygadgets_progressbar_tpbar_pixmap )!= &bbNullObject){
		maxgui_maxgui_SetPanelPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_progressbar_tpbar_panel_value ,(struct brl_pixmap_TPixmap_obj*)o->_maxgui_proxygadgets_progressbar_tpbar_pixmap ,3);
	}
	return 0;
}
struct maxgui_proxygadgets_progressbar_TPbar_obj* maxgui_proxygadgets_progressbar_TPbar_Create_TTPbar_iiiiTTGadgeti(BBINT bbt_x,BBINT bbt_y,BBINT bbt_WIDTH,BBINT bbt_HEIGHT,struct maxgui_maxgui_gadget_TGadget_obj* bbt_group,BBINT bbt_flags){
	struct maxgui_proxygadgets_progressbar_TPbar_obj* bbt_PB=(struct maxgui_proxygadgets_progressbar_TPbar_obj*)(struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbObjectNew((BBClass *)&maxgui_proxygadgets_progressbar_TPbar);
	bbt_PB->_maxgui_proxygadgets_progressbar_tpbar__void_pixmap =(struct brl_pixmap_TPixmap_obj*)brl_pixmap_LoadPixmap((BBOBJECT)&_s1);
	bbt_PB->_maxgui_proxygadgets_progressbar_tpbar__green_pixmap =(struct brl_pixmap_TPixmap_obj*)brl_pixmap_LoadPixmap((BBOBJECT)&_s2);
	bbt_PB->_maxgui_proxygadgets_progressbar_tpbar__red_pixmap =(struct brl_pixmap_TPixmap_obj*)brl_pixmap_LoadPixmap((BBOBJECT)&_s3);
	bbt_PB->_maxgui_proxygadgets_progressbar_tpbar__yellow_pixmap =(struct brl_pixmap_TPixmap_obj*)brl_pixmap_LoadPixmap((BBOBJECT)&_s4);
	bbt_PB->_maxgui_proxygadgets_progressbar_tpbar__star_pixmap =(struct brl_pixmap_TPixmap_obj*)brl_pixmap_LoadPixmap((BBOBJECT)&_s5);
	bbt_PB->_maxgui_proxygadgets_progressbar_tpbar_w =bbt_WIDTH;
	bbt_PB->_maxgui_proxygadgets_progressbar_tpbar_h =bbt_HEIGHT;
	if(((unsigned int)(bbt_flags)&8)!=0){
		BBINT bbt_hh=5;
		BBINT bbt_cou=0;
		BBINT bbt_x2=bbt_x;
		BBINT bbt_sw=(bbt_WIDTH/10);
		while(bbt_x2<((bbt_x+bbt_WIDTH)+2)){
			if(((bbt_cou==0) || (bbt_cou==5)) || (bbt_cou==10)){
				bbt_hh=8;
			}else{
				bbt_hh=4;
			}
			((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATA(bbt_PB->_maxgui_proxygadgets_progressbar_tpbar_labels ,1))[((BBUINT)bbt_cou)]=(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateLabel(&bbEmptyString,bbt_x2,((bbt_y+bbt_HEIGHT)+1),2,bbt_hh,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group,3);
			bbt_x2+=bbt_sw;
			bbt_cou+=1;
		}
	}
	if(((unsigned int)(bbt_flags)&1)!=0){
		if(((unsigned int)(bbt_flags)&128)!=0){
			bbt_PB->_maxgui_proxygadgets_progressbar_tpbar_panel =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreatePanel(bbt_x,bbt_y,bbt_WIDTH,bbt_HEIGHT,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group,0,&bbEmptyString);
		}else{
			bbt_PB->_maxgui_proxygadgets_progressbar_tpbar_panel =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreatePanel(bbt_x,bbt_y,bbt_WIDTH,bbt_HEIGHT,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group,1,&bbEmptyString);
		}
		bbt_PB->_maxgui_proxygadgets_progressbar_tpbar_panel_value =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreatePanel(1,1,((BBINT)bbt_PB->_maxgui_proxygadgets_progressbar_tpbar__value ),(bbt_HEIGHT-2),(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_PB->_maxgui_proxygadgets_progressbar_tpbar_panel ,0,&bbEmptyString);
		maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_PB->_maxgui_proxygadgets_progressbar_tpbar_panel_value ,10,36,106,1);
		if(((unsigned int)(bbt_flags)&2)!=0){
			BBINT bbt_hhp=((bbt_HEIGHT/2)-10);
			if(bbt_hhp<0){
				bbt_hhp=0;
			}
			bbt_PB->_maxgui_proxygadgets_progressbar_tpbar__label_p =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateLabel(&bbEmptyString,0,bbt_hhp,(bbt_WIDTH-5),bbt_HEIGHT,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_PB->_maxgui_proxygadgets_progressbar_tpbar_panel ,8);
			if(((BBObject*)bbt_PB->_maxgui_proxygadgets_progressbar_tpbar_panel_value )!= &bbNullObject){
				bbt_PB->_maxgui_proxygadgets_progressbar_tpbar__label_v =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateLabel(&bbEmptyString,0,bbt_hhp,bbt_WIDTH,bbt_HEIGHT,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_PB->_maxgui_proxygadgets_progressbar_tpbar_panel_value ,0);
			}
		}
		bbt_PB->_maxgui_proxygadgets_progressbar_tpbar_style =0;
	}
	if(((unsigned int)(bbt_flags)&4)!=0){
		bbt_PB->_maxgui_proxygadgets_progressbar_tpbar_panel =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreatePanel(bbt_x,bbt_y,bbt_WIDTH,bbt_HEIGHT,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group,0,&bbEmptyString);
		BBINT bbt_ww=(((bbt_WIDTH-8)/10)-1);
		BBINT bbt_X1=1;
		{
			BBINT bbt_s=0;
			for(;(bbt_s<10);bbt_s=(bbt_s+1)){
				((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATA(bbt_PB->_maxgui_proxygadgets_progressbar_tpbar_panels ,1))[((BBUINT)bbt_s)]=(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreatePanel(bbt_X1,2,bbt_ww,(bbt_HEIGHT-8),(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_PB->_maxgui_proxygadgets_progressbar_tpbar_panel ,0,&bbEmptyString);
				bbt_X1+=(bbt_ww+2);
				if(((BBObject*)bbt_PB->_maxgui_proxygadgets_progressbar_tpbar__void_pixmap )!= &bbNullObject){
					maxgui_maxgui_SetPanelPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATA(bbt_PB->_maxgui_proxygadgets_progressbar_tpbar_panels ,1))[((BBUINT)bbt_s)],(struct brl_pixmap_TPixmap_obj*)bbt_PB->_maxgui_proxygadgets_progressbar_tpbar__void_pixmap ,2);
				}else{
					maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATA(bbt_PB->_maxgui_proxygadgets_progressbar_tpbar_panels ,1))[((BBUINT)bbt_s)],192,192,192,1);
				}
			}
		}
		bbt_PB->_maxgui_proxygadgets_progressbar_tpbar_style =1;
	}
	if(((unsigned int)(bbt_flags)&32)!=0){
		bbt_PB->_maxgui_proxygadgets_progressbar_tpbar_style =2;
		bbt_PB->_maxgui_proxygadgets_progressbar_tpbar_panel =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreatePanel(bbt_x,bbt_y,bbt_WIDTH,bbt_HEIGHT,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group,0,&bbEmptyString);
		BBINT bbt_ww2=32;
		BBINT bbt_X12=1;
		if(((BBObject*)bbt_PB->_maxgui_proxygadgets_progressbar_tpbar__star_pixmap )!= &bbNullObject){
			bbt_ww2=brl_pixmap_PixmapWidth((struct brl_pixmap_TPixmap_obj*)bbt_PB->_maxgui_proxygadgets_progressbar_tpbar__star_pixmap );
		}
		{
			BBINT bbt_s2=0;
			for(;(bbt_s2<5);bbt_s2=(bbt_s2+1)){
				((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATA(bbt_PB->_maxgui_proxygadgets_progressbar_tpbar_panels ,1))[((BBUINT)bbt_s2)]=(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreatePanel(bbt_X12,2,bbt_ww2,(bbt_HEIGHT-8),(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_PB->_maxgui_proxygadgets_progressbar_tpbar_panel ,4,&bbEmptyString);
				bbt_X12+=bbt_ww2;
				if(((BBObject*)bbt_PB->_maxgui_proxygadgets_progressbar_tpbar__star_pixmap )!= &bbNullObject){
					maxgui_maxgui_SetPanelPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATA(bbt_PB->_maxgui_proxygadgets_progressbar_tpbar_panels ,1))[((BBUINT)bbt_s2)],(struct brl_pixmap_TPixmap_obj*)bbt_PB->_maxgui_proxygadgets_progressbar_tpbar__star_pixmap ,2);
				}
			}
		}
		(bbt_PB)->clas->m_SetValue_f((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbt_PB,5.00000000f);
	}
	bbt_PB->_maxgui_proxygadgets_progressbar_tpbar_flags =bbt_flags;
	(bbt_PB)->clas->m_SetProxy_TTGadget((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbt_PB,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_PB,(BBClass*)&maxgui_maxgui_gadget_TGadget)));
	brl_hook_AddHook(brl_event_EmitEventHook,maxgui_proxygadgets_progressbar_TPbar_EventHook_TObject_iTObjectTObject,(BBOBJECT)bbt_PB,0);
	return (struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbt_PB;
}
BBOBJECT maxgui_proxygadgets_progressbar_TPbar_EventHook_TObject_iTObjectTObject(BBINT bbt_id,BBOBJECT bbt_data,BBOBJECT bbt_context){
	struct brl_event_TEvent_obj* bbt_event=(struct brl_event_TEvent_obj*)&bbNullObject;
	struct maxgui_proxygadgets_progressbar_TPbar_obj* bbt_pbar=(struct maxgui_proxygadgets_progressbar_TPbar_obj*)&bbNullObject;
	BBINT bbt_i=0;
	bbt_event=(struct brl_event_TEvent_obj*)((struct brl_event_TEvent_obj*)bbObjectDowncast((BBOBJECT)bbt_data,(BBClass*)&brl_event_TEvent));
	if(((BBObject*)bbt_event)!= &bbNullObject){
		bbt_pbar=(struct maxgui_proxygadgets_progressbar_TPbar_obj*)((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbObjectDowncast((BBOBJECT)bbt_context,(BBClass*)&maxgui_proxygadgets_progressbar_TPbar));
		if(((BBObject*)bbt_pbar)!= &bbNullObject){
			if(bbt_pbar->_maxgui_proxygadgets_progressbar_tpbar_style ==2){
				if(bbt_event->_brl_event_tevent_id ==1029){
					maxgui_maxgui_SetPointer(12);
				}
				if(bbt_event->_brl_event_tevent_id ==1030){
					maxgui_maxgui_SetPointer(0);
				}
				if(bbt_event->_brl_event_tevent_id ==1025){
					if(((unsigned int)(bbt_pbar->_maxgui_proxygadgets_progressbar_tpbar_flags )&64)!=0){
						{
							BBINT bbt_s=0;
							for(;(bbt_s<5);bbt_s=(bbt_s+1)){
								if(bbt_event->_brl_event_tevent_source ==((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATA(bbt_pbar->_maxgui_proxygadgets_progressbar_tpbar_panels ,1))[((BBUINT)bbt_s)]){
									(bbt_pbar)->clas->m_SetProp_i((struct maxgui_proxygadgets_progressbar_TPbar_obj*)bbt_pbar,(bbt_s+1));
									brl_event_EmitEvent((struct brl_event_TEvent_obj*)brl_event_CreateEvent(8193,(BBOBJECT)bbt_pbar,((BBINT)bbt_pbar->_maxgui_proxygadgets_progressbar_tpbar__value ),0,0,0,(BBOBJECT)&bbNullObject));
									return (BBOBJECT)&bbNullObject;
								}
							}
						}
					}
				}
			}
		}
	}
	return (BBOBJECT)bbt_data;
}
struct BBDebugScope_36 maxgui_proxygadgets_progressbar_TPbar_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TPbar",
	{
		{
			BBDEBUGDECL_FIELD,
			"_void_pixmap",
			":TPixmap",
			.field_offset=offsetof(struct maxgui_proxygadgets_progressbar_TPbar_obj,_maxgui_proxygadgets_progressbar_tpbar__void_pixmap)
		},
		{
			BBDEBUGDECL_FIELD,
			"_green_pixmap",
			":TPixmap",
			.field_offset=offsetof(struct maxgui_proxygadgets_progressbar_TPbar_obj,_maxgui_proxygadgets_progressbar_tpbar__green_pixmap)
		},
		{
			BBDEBUGDECL_FIELD,
			"_RED_pixmap",
			":TPixmap",
			.field_offset=offsetof(struct maxgui_proxygadgets_progressbar_TPbar_obj,_maxgui_proxygadgets_progressbar_tpbar__red_pixmap)
		},
		{
			BBDEBUGDECL_FIELD,
			"_YELLOW_pixmap",
			":TPixmap",
			.field_offset=offsetof(struct maxgui_proxygadgets_progressbar_TPbar_obj,_maxgui_proxygadgets_progressbar_tpbar__yellow_pixmap)
		},
		{
			BBDEBUGDECL_FIELD,
			"pixmap",
			":TPixmap",
			.field_offset=offsetof(struct maxgui_proxygadgets_progressbar_TPbar_obj,_maxgui_proxygadgets_progressbar_tpbar_pixmap)
		},
		{
			BBDEBUGDECL_FIELD,
			"_star_pixmap",
			":TPixmap",
			.field_offset=offsetof(struct maxgui_proxygadgets_progressbar_TPbar_obj,_maxgui_proxygadgets_progressbar_tpbar__star_pixmap)
		},
		{
			BBDEBUGDECL_FIELD,
			"pixmap_flags",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_progressbar_TPbar_obj,_maxgui_proxygadgets_progressbar_tpbar_pixmap_flags)
		},
		{
			BBDEBUGDECL_FIELD,
			"panel",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_progressbar_TPbar_obj,_maxgui_proxygadgets_progressbar_tpbar_panel)
		},
		{
			BBDEBUGDECL_FIELD,
			"panel_value",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_progressbar_TPbar_obj,_maxgui_proxygadgets_progressbar_tpbar_panel_value)
		},
		{
			BBDEBUGDECL_FIELD,
			"panels",
			"[]:TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_progressbar_TPbar_obj,_maxgui_proxygadgets_progressbar_tpbar_panels)
		},
		{
			BBDEBUGDECL_FIELD,
			"labels",
			"[]:TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_progressbar_TPbar_obj,_maxgui_proxygadgets_progressbar_tpbar_labels)
		},
		{
			BBDEBUGDECL_FIELD,
			"tcolor",
			"[]i",
			.field_offset=offsetof(struct maxgui_proxygadgets_progressbar_TPbar_obj,_maxgui_proxygadgets_progressbar_tpbar_tcolor)
		},
		{
			BBDEBUGDECL_FIELD,
			"w",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_progressbar_TPbar_obj,_maxgui_proxygadgets_progressbar_tpbar_w)
		},
		{
			BBDEBUGDECL_FIELD,
			"h",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_progressbar_TPbar_obj,_maxgui_proxygadgets_progressbar_tpbar_h)
		},
		{
			BBDEBUGDECL_FIELD,
			"_label_P",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_progressbar_TPbar_obj,_maxgui_proxygadgets_progressbar_tpbar__label_p)
		},
		{
			BBDEBUGDECL_FIELD,
			"_label_V",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_progressbar_TPbar_obj,_maxgui_proxygadgets_progressbar_tpbar__label_v)
		},
		{
			BBDEBUGDECL_FIELD,
			"_value",
			"f",
			.field_offset=offsetof(struct maxgui_proxygadgets_progressbar_TPbar_obj,_maxgui_proxygadgets_progressbar_tpbar__value)
		},
		{
			BBDEBUGDECL_FIELD,
			"_value_warning",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_progressbar_TPbar_obj,_maxgui_proxygadgets_progressbar_tpbar__value_warning)
		},
		{
			BBDEBUGDECL_FIELD,
			"_value_critical",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_progressbar_TPbar_obj,_maxgui_proxygadgets_progressbar_tpbar__value_critical)
		},
		{
			BBDEBUGDECL_FIELD,
			"STYLE",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_progressbar_TPbar_obj,_maxgui_proxygadgets_progressbar_tpbar_style)
		},
		{
			BBDEBUGDECL_FIELD,
			"flags",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_progressbar_TPbar_obj,_maxgui_proxygadgets_progressbar_tpbar_flags)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_maxgui_proxygadgets_progressbar_TPbar_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetFont",
			"(:TGuiFont)i",
			.var_address=(void*)&_maxgui_proxygadgets_progressbar_TPbar_SetFont_TTGuiFont
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetText",
			"()$",
			.var_address=(void*)&_maxgui_proxygadgets_progressbar_TPbar_GetText
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"CleanUp",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_progressbar_TPbar_CleanUp
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetProp",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_progressbar_TPbar_SetProp_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetRange",
			"(i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_progressbar_TPbar_SetRange_ii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetEnabled",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_progressbar_TPbar_SetEnabled_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetShow",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_progressbar_TPbar_SetShow_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Class",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_progressbar_TPbar_Class
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetValue",
			"(f)i",
			.var_address=(void*)&_maxgui_proxygadgets_progressbar_TPbar_SetValue_f
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetColor",
			"(i,i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_progressbar_TPbar_SetColor_iii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetTextColor",
			"(i,i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_progressbar_TPbar_SetTextColor_iii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetPixmap",
			"(:TPixmap,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_progressbar_TPbar_SetPixmap_TTPixmapi
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Create",
			"(i,i,i,i,:TGadget,i):TPbar",
			.var_address=(void*)&maxgui_proxygadgets_progressbar_TPbar_Create_TTPbar_iiiiTTGadgeti
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"EventHook",
			"(i,:Object,:Object):Object",
			.var_address=(void*)&maxgui_proxygadgets_progressbar_TPbar_EventHook_TObject_iTObjectTObject
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_maxgui_proxygadgets_progressbar_TPbar maxgui_proxygadgets_progressbar_TPbar={
	&maxgui_maxgui_gadget_TProxyGadget,
	bbObjectFree,
	(BBDebugScope*)&maxgui_proxygadgets_progressbar_TPbar_scope,
	sizeof(struct maxgui_proxygadgets_progressbar_TPbar_obj),
	(void (*)(BBOBJECT))_maxgui_proxygadgets_progressbar_TPbar_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct maxgui_proxygadgets_progressbar_TPbar_obj,_maxgui_proxygadgets_progressbar_tpbar_flags) - sizeof(void*) + sizeof(BBINT)
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
	,_maxgui_proxygadgets_progressbar_TPbar_CleanUp
	,_maxgui_maxgui_gadget_TProxyGadget_Free
	,_maxgui_maxgui_gadget_TProxyGadget_Rethink
	,_maxgui_maxgui_gadget_TProxyGadget_ClientWidth
	,_maxgui_maxgui_gadget_TProxyGadget_ClientHeight
	,_maxgui_maxgui_gadget_TProxyGadget_Activate_i
	,_maxgui_maxgui_gadget_TProxyGadget_State
	,_maxgui_maxgui_gadget_TProxyGadget_SetText_S
	,_maxgui_proxygadgets_progressbar_TPbar_GetText
	,_maxgui_proxygadgets_progressbar_TPbar_SetFont_TTGuiFont
	,_maxgui_proxygadgets_progressbar_TPbar_SetColor_iii
	,_maxgui_maxgui_gadget_TProxyGadget_RemoveColor
	,_maxgui_maxgui_gadget_TProxyGadget_SetAlpha_f
	,_maxgui_proxygadgets_progressbar_TPbar_SetTextColor_iii
	,_maxgui_maxgui_gadget_TProxyGadget_SetTooltip_S
	,_maxgui_maxgui_gadget_TProxyGadget_GetTooltip
	,_maxgui_proxygadgets_progressbar_TPbar_SetPixmap_TTPixmapi
	,_maxgui_maxgui_gadget_TProxyGadget_SetIconStrip_TTIconStrip
	,_maxgui_proxygadgets_progressbar_TPbar_SetShow_i
	,_maxgui_proxygadgets_progressbar_TPbar_SetEnabled_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetSelected_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetHotKey_ii
	,_maxgui_maxgui_gadget_TProxyGadget_SetSensitivity_i
	,_maxgui_maxgui_gadget_TProxyGadget_GetSensitivity
	,_maxgui_proxygadgets_progressbar_TPbar_Class
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
	,_maxgui_proxygadgets_progressbar_TPbar_SetValue_f
	,_maxgui_proxygadgets_progressbar_TPbar_SetRange_ii
	,_maxgui_proxygadgets_progressbar_TPbar_SetProp_i
	,_maxgui_maxgui_gadget_TProxyGadget_GetProp
	,_maxgui_maxgui_gadget_TProxyGadget_AttachGraphics_i
	,_maxgui_maxgui_gadget_TProxyGadget_CanvasGraphics
	,_maxgui_maxgui_gadget_TProxyGadget_Run_S
	,_maxgui_maxgui_gadget_TProxyGadget_SetProxy_TTGadget
	,_maxgui_maxgui_gadget_TProxyGadget_GetProxy
	,_maxgui_maxgui_gadget_TProxyGadget_SetStatus_S
	,maxgui_proxygadgets_progressbar_TPbar_Create_TTPbar_iiiiTTGadgeti
	,maxgui_proxygadgets_progressbar_TPbar_EventHook_TObject_iTObjectTObject
};

struct maxgui_maxgui_gadget_TGadget_obj* maxgui_proxygadgets_progressbar_CreatePbar(BBINT bbt_x,BBINT bbt_y,BBINT bbt_WIDTH,BBINT bbt_HEIGHT,struct maxgui_maxgui_gadget_TGadget_obj* bbt_group,BBINT bbt_flags){
	return (struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)maxgui_proxygadgets_progressbar_TPbar_Create_TTPbar_iiiiTTGadgeti(bbt_x,bbt_y,bbt_WIDTH,bbt_HEIGHT,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group,bbt_flags),(BBClass*)&maxgui_maxgui_gadget_TGadget));
}
static int _bb_maxgui_proxygadgets_progressbar_inited = 0;
int _bb_maxgui_proxygadgets_progressbar(){
	if (!_bb_maxgui_proxygadgets_progressbar_inited) {
		_bb_maxgui_proxygadgets_progressbar_inited = 1;
		__bb_brl_blitz_blitz();
		__bb_maxgui_drivers_drivers();
		bbObjectRegisterType((BBCLASS)&maxgui_proxygadgets_progressbar_TPbar);
		return 0;
	}
	return 0;
}