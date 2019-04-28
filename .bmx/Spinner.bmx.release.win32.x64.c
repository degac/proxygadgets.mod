#include "Spinner.bmx.release.win32.x64.h"
static BBString _s5={
	&bbStringClass,
	6,
	{10,77,97,120,58,32}
};
static BBString _s3={
	&bbStringClass,
	1,
	{45}
};
static BBString _s1={
	&bbStringClass,
	1,
	{46}
};
static BBString _s2={
	&bbStringClass,
	2,
	{46,48}
};
static BBString _s0={
	&bbStringClass,
	1,
	{48}
};
static BBString _s6={
	&bbStringClass,
	2,
	{49,56}
};
static BBString _s7={
	&bbStringClass,
	2,
	{56,48}
};
static BBString _s4={
	&bbStringClass,
	5,
	{77,105,110,58,32}
};
struct BBDebugScope_25{int kind; const char *name; BBDebugDecl decls[26]; };
void _maxgui_proxygadgets_spinner_TSpinner_New(struct maxgui_proxygadgets_spinner_TSpinner_obj* o) {
	_maxgui_maxgui_gadget_TProxyGadget_New((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o);
	o->clas = &maxgui_proxygadgets_spinner_TSpinner;
	o->_maxgui_proxygadgets_spinner_tspinner_panel = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_spinner_tspinner_textfield = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_spinner_tspinner_slider = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_spinner_tspinner_trackbar = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_spinner_tspinner_value = .0000000000000000;
	o->_maxgui_proxygadgets_spinner_tspinner_range = bbArrayNew1D("d", 2);
	o->_maxgui_proxygadgets_spinner_tspinner_accuracy = 1;
	o->_maxgui_proxygadgets_spinner_tspinner_floatitemmultiplier = 10.000000000000000;
}
BBINT _maxgui_proxygadgets_spinner_TSpinner_SetProp_i(struct maxgui_proxygadgets_spinner_TSpinner_obj* o,BBINT bbt_val){
	((struct maxgui_proxygadgets_spinner_TSpinner_obj*)o)->clas->m_SetValue__d((struct maxgui_proxygadgets_spinner_TSpinner_obj*)o,((BBDOUBLE)bbt_val));
	return 0;
}
BBINT _maxgui_proxygadgets_spinner_TSpinner_Class(struct maxgui_proxygadgets_spinner_TSpinner_obj* o){
	return 19;
}
BBINT _maxgui_proxygadgets_spinner_TSpinner_SetFont_TTGuiFont(struct maxgui_proxygadgets_spinner_TSpinner_obj* o,struct maxgui_maxgui_guifont_TGuiFont_obj* bbt_fnt){
	if(bbt_fnt==&bbNullObject){
		return 0;
	}
	if(((BBObject*)o->_maxgui_proxygadgets_spinner_tspinner_textfield )!= &bbNullObject){
		maxgui_maxgui_SetGadgetFont((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_spinner_tspinner_textfield ,(struct maxgui_maxgui_guifont_TGuiFont_obj*)bbt_fnt,0);
	}
	return 0;
}
BBINT _maxgui_proxygadgets_spinner_TSpinner_SetShow_i(struct maxgui_proxygadgets_spinner_TSpinner_obj* o,BBINT bbt_bool){
	(o->_maxgui_proxygadgets_spinner_tspinner_panel )->clas->m_SetShow_i((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_spinner_tspinner_panel ,bbt_bool);
	return 0;
}
BBINT _maxgui_proxygadgets_spinner_TSpinner_SetRange__ddi(struct maxgui_proxygadgets_spinner_TSpinner_obj* o,BBDOUBLE bbt_minimum,BBDOUBLE bbt_maximum,BBINT bbt_accuracy){
	o->_maxgui_proxygadgets_spinner_tspinner_accuracy =bbt_accuracy;
	o->_maxgui_proxygadgets_spinner_tspinner_floatitemmultiplier =bbFloatPow(10.0, ((BBDOUBLE)bbt_accuracy));
	((BBDOUBLE*)BBARRAYDATA(o->_maxgui_proxygadgets_spinner_tspinner_range ,1))[0U]=(bbt_minimum*o->_maxgui_proxygadgets_spinner_tspinner_floatitemmultiplier );
	((BBDOUBLE*)BBARRAYDATA(o->_maxgui_proxygadgets_spinner_tspinner_range ,1))[1U]=(((bbt_maximum*o->_maxgui_proxygadgets_spinner_tspinner_floatitemmultiplier )-((BBDOUBLE*)BBARRAYDATA(o->_maxgui_proxygadgets_spinner_tspinner_range ,1))[0U])+1.0000000000000000);
	maxgui_maxgui_SetSliderRange((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_spinner_tspinner_slider ,1,((BBINT)((BBDOUBLE*)BBARRAYDATA(o->_maxgui_proxygadgets_spinner_tspinner_range ,1))[1U]));
	if(((BBObject*)o->_maxgui_proxygadgets_spinner_tspinner_trackbar )!= &bbNullObject){
		maxgui_maxgui_SetSliderRange((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_spinner_tspinner_trackbar ,1,((BBINT)((BBDOUBLE*)BBARRAYDATA(o->_maxgui_proxygadgets_spinner_tspinner_range ,1))[1U]));
	}
	((struct maxgui_proxygadgets_spinner_TSpinner_obj*)o)->clas->m_SetValue__d((struct maxgui_proxygadgets_spinner_TSpinner_obj*)o,o->_maxgui_proxygadgets_spinner_tspinner_value );
	return 0;
}
BBINT _maxgui_proxygadgets_spinner_TSpinner_SetColor_iii(struct maxgui_proxygadgets_spinner_TSpinner_obj* o,BBINT bbt_r,BBINT bbt_g,BBINT bbt_b){
	maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_spinner_tspinner_textfield ,bbt_r,bbt_g,bbt_b,1);
	return 0;
}
BBINT _maxgui_proxygadgets_spinner_TSpinner_SetEnabled_i(struct maxgui_proxygadgets_spinner_TSpinner_obj* o,BBINT bbt_sta){
	if(bbt_sta==0){
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_spinner_tspinner_panel );
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_spinner_tspinner_textfield );
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_spinner_tspinner_slider );
		if(((BBObject*)o->_maxgui_proxygadgets_spinner_tspinner_trackbar )!= &bbNullObject){
			maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_spinner_tspinner_trackbar );
		}
	}else{
		maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_spinner_tspinner_panel );
		maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_spinner_tspinner_textfield );
		maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_spinner_tspinner_slider );
		if(((BBObject*)o->_maxgui_proxygadgets_spinner_tspinner_trackbar )!= &bbNullObject){
			maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_spinner_tspinner_trackbar );
		}
	}
	return 0;
}
BBINT _maxgui_proxygadgets_spinner_TSpinner_CleanUp(struct maxgui_proxygadgets_spinner_TSpinner_obj* o){
	brl_hook_RemoveHook(brl_event_EmitEventHook,o->clas->f_EventHook_TObject_iTObjectTObject,(BBOBJECT)o);
	(&maxgui_proxygadgets_spinner_TSpinner)->super->m_CleanUp((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o);
	return 0;
}
struct maxgui_proxygadgets_spinner_TSpinner_obj* maxgui_proxygadgets_spinner_TSpinner_Create_TTSpinner_iiiiTTGadgeti(BBINT bbt_x,BBINT bbt_y,BBINT bbt_WIDTH,BBINT bbt_HEIGHT,struct maxgui_maxgui_gadget_TGadget_obj* bbt_group,BBINT bbt_flags){
	struct maxgui_proxygadgets_spinner_TSpinner_obj* bbt_spinner=(struct maxgui_proxygadgets_spinner_TSpinner_obj*)&bbNullObject;
	BBINT bbt_w=0;
	bbt_spinner=(struct maxgui_proxygadgets_spinner_TSpinner_obj*)(struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbObjectNew((BBClass *)&maxgui_proxygadgets_spinner_TSpinner);
	bbt_spinner->_maxgui_proxygadgets_spinner_tspinner_panel =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreatePanel(bbt_x,bbt_y,bbt_WIDTH,bbt_HEIGHT,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group,0,&bbEmptyString);
	(bbt_spinner)->clas->m_SetProxy_TTGadget((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbt_spinner,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_spinner->_maxgui_proxygadgets_spinner_tspinner_panel );
	struct maxgui_maxgui_gadget_TGadget_obj* bbt_;
	bbt_w=(((struct maxgui_maxgui_gadget_TGadget_obj*)(bbt_ = bbt_spinner->_maxgui_proxygadgets_spinner_tspinner_panel ))->clas)->m_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_);
	if(((unsigned int)(1)&bbt_flags)!=0){
		bbt_w=80;
		struct maxgui_maxgui_gadget_TGadget_obj* bbt_2;
		if(bbt_w>(((struct maxgui_maxgui_gadget_TGadget_obj*)(bbt_2 = bbt_spinner->_maxgui_proxygadgets_spinner_tspinner_panel ))->clas)->m_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_2)){
			struct maxgui_maxgui_gadget_TGadget_obj* bbt_3;
			bbt_w=(((struct maxgui_maxgui_gadget_TGadget_obj*)(bbt_3 = bbt_spinner->_maxgui_proxygadgets_spinner_tspinner_panel ))->clas)->m_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_3);
		}
	}
	struct maxgui_maxgui_gadget_TGadget_obj* bbt_4;
	bbt_spinner->_maxgui_proxygadgets_spinner_tspinner_textfield =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateTextField(0,0,(bbt_w-18),(((struct maxgui_maxgui_gadget_TGadget_obj*)(bbt_4 = bbt_spinner->_maxgui_proxygadgets_spinner_tspinner_panel ))->clas)->m_ClientHeight((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_4),(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_spinner->_maxgui_proxygadgets_spinner_tspinner_panel ,0);
	if(((unsigned int)(1)&bbt_flags)!=0){
		maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_spinner->_maxgui_proxygadgets_spinner_tspinner_textfield ,1,0,1,1);
	}else{
		maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_spinner->_maxgui_proxygadgets_spinner_tspinner_textfield ,1,1,1,1);
	}
	maxgui_maxgui_SetGadgetSensitivity((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_spinner->_maxgui_proxygadgets_spinner_tspinner_textfield ,2);
	struct maxgui_maxgui_gadget_TGadget_obj* bbt_5;
	bbt_spinner->_maxgui_proxygadgets_spinner_tspinner_slider =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateSlider((bbt_w-18),0,18,(((struct maxgui_maxgui_gadget_TGadget_obj*)(bbt_5 = bbt_spinner->_maxgui_proxygadgets_spinner_tspinner_panel ))->clas)->m_ClientHeight((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_5),(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_spinner->_maxgui_proxygadgets_spinner_tspinner_panel ,2);
	if(((unsigned int)(1)&bbt_flags)!=0){
		maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_spinner->_maxgui_proxygadgets_spinner_tspinner_slider ,1,0,1,1);
	}else{
		maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_spinner->_maxgui_proxygadgets_spinner_tspinner_slider ,0,1,1,1);
	}
	brl_hook_AddHook(brl_event_EmitEventHook,maxgui_proxygadgets_spinner_TSpinner_EventHook_TObject_iTObjectTObject,(BBOBJECT)bbt_spinner,0);
	if(((unsigned int)(1)&bbt_flags)!=0){
		struct maxgui_maxgui_gadget_TGadget_obj* bbt_6;
		struct maxgui_maxgui_gadget_TGadget_obj* bbt_7;
		bbt_spinner->_maxgui_proxygadgets_spinner_tspinner_trackbar =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateSlider(bbt_w,0,((((struct maxgui_maxgui_gadget_TGadget_obj*)(bbt_6 = bbt_spinner->_maxgui_proxygadgets_spinner_tspinner_panel ))->clas)->m_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_6)-bbt_w),(((struct maxgui_maxgui_gadget_TGadget_obj*)(bbt_7 = bbt_spinner->_maxgui_proxygadgets_spinner_tspinner_panel ))->clas)->m_ClientHeight((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_7),(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_spinner->_maxgui_proxygadgets_spinner_tspinner_panel ,5);
		maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_spinner->_maxgui_proxygadgets_spinner_tspinner_trackbar ,1,1,1,1);
	}
	(bbt_spinner)->clas->m_SetRange__ddi((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbt_spinner,0.00000000000000000,1.0000000000000000,1);
	return (struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbt_spinner;
}
BBINT _maxgui_proxygadgets_spinner_TSpinner_SetValue__d(struct maxgui_proxygadgets_spinner_TSpinner_obj* o,BBDOUBLE bbt_i){
	bbt_i=brl_blitz_Max4(bbt_i,((BBDOUBLE*)BBARRAYDATA(o->_maxgui_proxygadgets_spinner_tspinner_range ,1))[0U]);
	bbt_i=brl_blitz_Min4(bbt_i,((BBDOUBLE*)BBARRAYDATA(o->_maxgui_proxygadgets_spinner_tspinner_range ,1))[1U]);
	bbt_i=(((BBDOUBLE)o->clas->f_Round_i_d(bbt_i*o->_maxgui_proxygadgets_spinner_tspinner_floatitemmultiplier ))/o->_maxgui_proxygadgets_spinner_tspinner_floatitemmultiplier );
	bbt_i*=o->_maxgui_proxygadgets_spinner_tspinner_floatitemmultiplier ;
	if(bbt_i<((BBDOUBLE*)BBARRAYDATA(o->_maxgui_proxygadgets_spinner_tspinner_range ,1))[0U]){
		bbt_i=((BBDOUBLE*)BBARRAYDATA(o->_maxgui_proxygadgets_spinner_tspinner_range ,1))[0U];
	}
	if(bbt_i>((((BBDOUBLE*)BBARRAYDATA(o->_maxgui_proxygadgets_spinner_tspinner_range ,1))[0U]+((BBDOUBLE*)BBARRAYDATA(o->_maxgui_proxygadgets_spinner_tspinner_range ,1))[1U])-1.0000000000000000)){
		bbt_i=((((BBDOUBLE*)BBARRAYDATA(o->_maxgui_proxygadgets_spinner_tspinner_range ,1))[0U]+((BBDOUBLE*)BBARRAYDATA(o->_maxgui_proxygadgets_spinner_tspinner_range ,1))[1U])-1.0000000000000000);
	}
	maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_spinner_tspinner_textfield ,o->clas->f_FloatToString_S_fi(((BBFLOAT)(bbt_i/o->_maxgui_proxygadgets_spinner_tspinner_floatitemmultiplier )),o->_maxgui_proxygadgets_spinner_tspinner_accuracy ));
	maxgui_maxgui_SetSliderValue((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_spinner_tspinner_slider ,((BBINT)(((BBDOUBLE*)BBARRAYDATA(o->_maxgui_proxygadgets_spinner_tspinner_range ,1))[1U]-((bbt_i-((BBDOUBLE*)BBARRAYDATA(o->_maxgui_proxygadgets_spinner_tspinner_range ,1))[0U])+1.0000000000000000))));
	if(((BBObject*)o->_maxgui_proxygadgets_spinner_tspinner_trackbar )!= &bbNullObject){
		maxgui_maxgui_SetSliderValue((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_spinner_tspinner_trackbar ,((BBINT)((bbt_i-((BBDOUBLE*)BBARRAYDATA(o->_maxgui_proxygadgets_spinner_tspinner_range ,1))[0U])+1.0000000000000000)));
	}
	o->_maxgui_proxygadgets_spinner_tspinner_value =bbt_i;
	return 0;
}
BBSTRING _maxgui_proxygadgets_spinner_TSpinner_GetText(struct maxgui_proxygadgets_spinner_TSpinner_obj* o){
	return maxgui_maxgui_GadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_spinner_tspinner_textfield );
}
BBOBJECT maxgui_proxygadgets_spinner_TSpinner_EventHook_TObject_iTObjectTObject(BBINT bbt_id,BBOBJECT bbt_data,BBOBJECT bbt_context){
	struct brl_event_TEvent_obj* bbt_event=(struct brl_event_TEvent_obj*)&bbNullObject;
	struct maxgui_proxygadgets_spinner_TSpinner_obj* bbt_spinner=(struct maxgui_proxygadgets_spinner_TSpinner_obj*)&bbNullObject;
	BBINT bbt_i=0;
	BBDOUBLE bbt_value=.0000000000000000;
	bbt_event=(struct brl_event_TEvent_obj*)((struct brl_event_TEvent_obj*)bbObjectDowncast((BBOBJECT)bbt_data,(BBClass*)&brl_event_TEvent));
	if(((BBObject*)bbt_event)!= &bbNullObject){
		bbt_spinner=(struct maxgui_proxygadgets_spinner_TSpinner_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbObjectDowncast((BBOBJECT)bbt_context,(BBClass*)&maxgui_proxygadgets_spinner_TSpinner));
		if(((BBObject*)bbt_spinner)!= &bbNullObject){
			BBINT bbt_=bbt_event->_brl_event_tevent_id ;
			if(bbt_==513){
				if(bbt_event->_brl_event_tevent_source ==bbt_spinner->_maxgui_proxygadgets_spinner_tspinner_textfield ){
					if(brl_eventqueue_EventData()==33){
						bbt_value=bbt_spinner->_maxgui_proxygadgets_spinner_tspinner_value ;
						bbt_value=(bbt_value-((brl_blitz_Abs3(((BBDOUBLE*)BBARRAYDATA(bbt_spinner->_maxgui_proxygadgets_spinner_tspinner_range ,1))[0U])-brl_blitz_Abs3(((BBDOUBLE*)BBARRAYDATA(bbt_spinner->_maxgui_proxygadgets_spinner_tspinner_range ,1))[1U]))/10.000000000000000));
						if(bbt_spinner->_maxgui_proxygadgets_spinner_tspinner_accuracy ==1){
							bbt_value=(bbt_value/10.000000000000000);
						}
						(bbt_spinner)->clas->m_SetValue__d((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbt_spinner,bbt_value);
						brl_event_EmitEvent((struct brl_event_TEvent_obj*)brl_event_CreateEvent(8193,(BBOBJECT)bbt_spinner,0,0,0,0,(BBOBJECT)&bbNullObject));
						return (BBOBJECT)&bbNullObject;
					}
					if(brl_eventqueue_EventData()==34){
						bbt_value=bbt_spinner->_maxgui_proxygadgets_spinner_tspinner_value ;
						bbt_value=(bbt_value+((brl_blitz_Abs3(((BBDOUBLE*)BBARRAYDATA(bbt_spinner->_maxgui_proxygadgets_spinner_tspinner_range ,1))[0U])-brl_blitz_Abs3(((BBDOUBLE*)BBARRAYDATA(bbt_spinner->_maxgui_proxygadgets_spinner_tspinner_range ,1))[1U]))/10.000000000000000));
						if(bbt_spinner->_maxgui_proxygadgets_spinner_tspinner_accuracy ==1){
							bbt_value=(bbt_value/10.000000000000000);
						}
						(bbt_spinner)->clas->m_SetValue__d((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbt_spinner,bbt_value);
						brl_event_EmitEvent((struct brl_event_TEvent_obj*)brl_event_CreateEvent(8193,(BBOBJECT)bbt_spinner,0,0,0,0,(BBOBJECT)&bbNullObject));
						return (BBOBJECT)&bbNullObject;
					}
				}
			}else{
				if(bbt_==8200){
					if(bbt_event->_brl_event_tevent_source ==bbt_spinner->_maxgui_proxygadgets_spinner_tspinner_textfield ){
						(bbt_spinner)->clas->m_SetValue__d((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbt_spinner,bbStringToDouble(maxgui_maxgui_GadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_spinner->_maxgui_proxygadgets_spinner_tspinner_textfield )));
						brl_event_EmitEvent((struct brl_event_TEvent_obj*)brl_event_CreateEvent(8193,(BBOBJECT)bbt_spinner,0,0,0,0,(BBOBJECT)&bbNullObject));
						return (BBOBJECT)&bbNullObject;
					}
				}else{
					if(bbt_==8193){
						BBOBJECT bbt_2=(BBOBJECT)bbt_event->_brl_event_tevent_source ;
						if(bbt_2==bbt_spinner->_maxgui_proxygadgets_spinner_tspinner_trackbar ){
							if(((BBObject*)bbt_spinner->_maxgui_proxygadgets_spinner_tspinner_trackbar )!= &bbNullObject){
								bbt_i=((BBINT)((((BBDOUBLE)maxgui_maxgui_SliderValue((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_spinner->_maxgui_proxygadgets_spinner_tspinner_trackbar ))+((BBDOUBLE*)BBARRAYDATA(bbt_spinner->_maxgui_proxygadgets_spinner_tspinner_range ,1))[0U])-1.0000000000000000));
								(bbt_spinner)->clas->m_SetValue__d((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbt_spinner,(((BBDOUBLE)bbt_i)/bbt_spinner->_maxgui_proxygadgets_spinner_tspinner_floatitemmultiplier ));
							}
						}else{
							if(bbt_2==bbt_spinner->_maxgui_proxygadgets_spinner_tspinner_textfield ){
								return (BBOBJECT)&bbNullObject;
							}else{
								if(bbt_2==bbt_spinner->_maxgui_proxygadgets_spinner_tspinner_slider ){
									bbt_i=((BBINT)(((BBDOUBLE*)BBARRAYDATA(bbt_spinner->_maxgui_proxygadgets_spinner_tspinner_range ,1))[1U]-((((BBDOUBLE)maxgui_maxgui_SliderValue((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_spinner->_maxgui_proxygadgets_spinner_tspinner_slider ))-((BBDOUBLE*)BBARRAYDATA(bbt_spinner->_maxgui_proxygadgets_spinner_tspinner_range ,1))[0U])+1.0000000000000000)));
									(bbt_spinner)->clas->m_SetValue__d((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbt_spinner,(((BBDOUBLE)bbt_i)/bbt_spinner->_maxgui_proxygadgets_spinner_tspinner_floatitemmultiplier ));
									brl_event_EmitEvent((struct brl_event_TEvent_obj*)brl_event_CreateEvent(8193,(BBOBJECT)bbt_spinner,0,0,0,0,(BBOBJECT)&bbNullObject));
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
BBINT maxgui_proxygadgets_spinner_TSpinner_Round_i_d(BBDOUBLE bbt_val){
	BBFLOAT bbt_dec=.00000000f;
	bbt_dec=((BBFLOAT)(bbt_val-bbFloor(bbt_val)));
	if(bbt_dec<0.5f){
		return ((BBINT)bbFloor(bbt_val));
	}else{
		return ((BBINT)bbCeil(bbt_val));
	}
}
BBSTRING maxgui_proxygadgets_spinner_TSpinner_FloatToString_S_fi(BBFLOAT bbt_value,BBINT bbt_places){
	BBINT bbt_sign=((BBINT)brl_blitz_Sgn2(bbt_value));
	bbt_value=brl_blitz_Abs2(bbt_value);
	BBINT bbt_i=maxgui_proxygadgets_spinner_TSpinner_Round_i_d(((BBDOUBLE)bbt_value)*bbFloatPow(10.000000000000000, ((BBDOUBLE)bbt_places)));
	BBINT bbt_ipart=((BBINT)(((BBDOUBLE)bbt_i)/bbFloatPow(10.000000000000000, ((BBDOUBLE)bbt_places))));
	BBINT bbt_dpart=((BBINT)(((BBDOUBLE)bbt_i)-(((BBDOUBLE)bbt_ipart)*bbFloatPow(10.000000000000000, ((BBDOUBLE)bbt_places)))));
	BBSTRING bbt_si=bbStringFromInt(bbt_ipart);
	BBSTRING bbt_di=&bbEmptyString;
	if(bbt_dpart>0){
		bbt_di=bbStringFromInt(bbt_dpart);
		while((bbt_di->length)<bbt_places){
			bbt_di=bbStringConcat(&_s0,bbt_di);
		}
		bbt_di=bbStringConcat(&_s1,bbt_di);
	}
	while(bbStringCompare(bbStringSlice(bbt_di,((bbt_di)->length-1),(bbt_di)->length), &_s0)==0){
		bbt_di=bbStringSlice(bbt_di,0,((bbt_di->length)-1));
	}
	if(bbt_places!=0){
		if(bbt_di==&bbEmptyString){
			bbt_di=&_s2;
		}
	}
	if(bbt_sign==-1){
		bbt_si=bbStringConcat(&_s3,bbt_si);
	}
	return bbStringConcat(bbt_si,bbt_di);
}
struct BBDebugScope_25 maxgui_proxygadgets_spinner_TSpinner_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TSpinner",
	{
		{
			BBDEBUGDECL_CONST,
			"SLIDERWIDTH",
			"i",
			.const_value=&_s6
		},
		{
			BBDEBUGDECL_CONST,
			"DIV",
			"i",
			.const_value=&_s7
		},
		{
			BBDEBUGDECL_FIELD,
			"panel",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_spinner_TSpinner_obj,_maxgui_proxygadgets_spinner_tspinner_panel)
		},
		{
			BBDEBUGDECL_FIELD,
			"textfield",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_spinner_TSpinner_obj,_maxgui_proxygadgets_spinner_tspinner_textfield)
		},
		{
			BBDEBUGDECL_FIELD,
			"slider",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_spinner_TSpinner_obj,_maxgui_proxygadgets_spinner_tspinner_slider)
		},
		{
			BBDEBUGDECL_FIELD,
			"trackbar",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_spinner_TSpinner_obj,_maxgui_proxygadgets_spinner_tspinner_trackbar)
		},
		{
			BBDEBUGDECL_FIELD,
			"value",
			"d",
			.field_offset=offsetof(struct maxgui_proxygadgets_spinner_TSpinner_obj,_maxgui_proxygadgets_spinner_tspinner_value)
		},
		{
			BBDEBUGDECL_FIELD,
			"Range",
			"[]d",
			.field_offset=offsetof(struct maxgui_proxygadgets_spinner_TSpinner_obj,_maxgui_proxygadgets_spinner_tspinner_range)
		},
		{
			BBDEBUGDECL_FIELD,
			"accuracy",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_spinner_TSpinner_obj,_maxgui_proxygadgets_spinner_tspinner_accuracy)
		},
		{
			BBDEBUGDECL_FIELD,
			"floatitemmultiplier",
			"d",
			.field_offset=offsetof(struct maxgui_proxygadgets_spinner_TSpinner_obj,_maxgui_proxygadgets_spinner_tspinner_floatitemmultiplier)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_maxgui_proxygadgets_spinner_TSpinner_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetProp",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_spinner_TSpinner_SetProp_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Class",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_spinner_TSpinner_Class
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetFont",
			"(:TGuiFont)i",
			.var_address=(void*)&_maxgui_proxygadgets_spinner_TSpinner_SetFont_TTGuiFont
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetShow",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_spinner_TSpinner_SetShow_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetRange_",
			"(d,d,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_spinner_TSpinner_SetRange__ddi
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetColor",
			"(i,i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_spinner_TSpinner_SetColor_iii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetEnabled",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_spinner_TSpinner_SetEnabled_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"CleanUp",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_spinner_TSpinner_CleanUp
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Create",
			"(i,i,i,i,:TGadget,i):TSpinner",
			.var_address=(void*)&maxgui_proxygadgets_spinner_TSpinner_Create_TTSpinner_iiiiTTGadgeti
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetValue_",
			"(d)i",
			.var_address=(void*)&_maxgui_proxygadgets_spinner_TSpinner_SetValue__d
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetText",
			"()$",
			.var_address=(void*)&_maxgui_proxygadgets_spinner_TSpinner_GetText
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"EventHook",
			"(i,:Object,:Object):Object",
			.var_address=(void*)&maxgui_proxygadgets_spinner_TSpinner_EventHook_TObject_iTObjectTObject
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Round",
			"(d)i",
			.var_address=(void*)&maxgui_proxygadgets_spinner_TSpinner_Round_i_d
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"FloatToString",
			"(f,i)$",
			.var_address=(void*)&maxgui_proxygadgets_spinner_TSpinner_FloatToString_S_fi
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_maxgui_proxygadgets_spinner_TSpinner maxgui_proxygadgets_spinner_TSpinner={
	&maxgui_maxgui_gadget_TProxyGadget,
	bbObjectFree,
	(BBDebugScope*)&maxgui_proxygadgets_spinner_TSpinner_scope,
	sizeof(struct maxgui_proxygadgets_spinner_TSpinner_obj),
	(void (*)(BBOBJECT))_maxgui_proxygadgets_spinner_TSpinner_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct maxgui_proxygadgets_spinner_TSpinner_obj,_maxgui_proxygadgets_spinner_tspinner_floatitemmultiplier) - sizeof(void*) + sizeof(BBDOUBLE)
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
	,_maxgui_proxygadgets_spinner_TSpinner_CleanUp
	,_maxgui_maxgui_gadget_TProxyGadget_Free
	,_maxgui_maxgui_gadget_TProxyGadget_Rethink
	,_maxgui_maxgui_gadget_TProxyGadget_ClientWidth
	,_maxgui_maxgui_gadget_TProxyGadget_ClientHeight
	,_maxgui_maxgui_gadget_TProxyGadget_Activate_i
	,_maxgui_maxgui_gadget_TProxyGadget_State
	,_maxgui_maxgui_gadget_TProxyGadget_SetText_S
	,_maxgui_proxygadgets_spinner_TSpinner_GetText
	,_maxgui_proxygadgets_spinner_TSpinner_SetFont_TTGuiFont
	,_maxgui_proxygadgets_spinner_TSpinner_SetColor_iii
	,_maxgui_maxgui_gadget_TProxyGadget_RemoveColor
	,_maxgui_maxgui_gadget_TProxyGadget_SetAlpha_f
	,_maxgui_maxgui_gadget_TProxyGadget_SetTextColor_iii
	,_maxgui_maxgui_gadget_TProxyGadget_SetTooltip_S
	,_maxgui_maxgui_gadget_TProxyGadget_GetTooltip
	,_maxgui_maxgui_gadget_TProxyGadget_SetPixmap_TTPixmapi
	,_maxgui_maxgui_gadget_TProxyGadget_SetIconStrip_TTIconStrip
	,_maxgui_proxygadgets_spinner_TSpinner_SetShow_i
	,_maxgui_proxygadgets_spinner_TSpinner_SetEnabled_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetSelected_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetHotKey_ii
	,_maxgui_maxgui_gadget_TProxyGadget_SetSensitivity_i
	,_maxgui_maxgui_gadget_TProxyGadget_GetSensitivity
	,_maxgui_proxygadgets_spinner_TSpinner_Class
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
	,_maxgui_proxygadgets_spinner_TSpinner_SetProp_i
	,_maxgui_maxgui_gadget_TProxyGadget_GetProp
	,_maxgui_maxgui_gadget_TProxyGadget_AttachGraphics_i
	,_maxgui_maxgui_gadget_TProxyGadget_CanvasGraphics
	,_maxgui_maxgui_gadget_TProxyGadget_Run_S
	,_maxgui_maxgui_gadget_TProxyGadget_SetProxy_TTGadget
	,_maxgui_maxgui_gadget_TProxyGadget_GetProxy
	,_maxgui_maxgui_gadget_TProxyGadget_SetStatus_S
	,_maxgui_proxygadgets_spinner_TSpinner_SetRange__ddi
	,maxgui_proxygadgets_spinner_TSpinner_Create_TTSpinner_iiiiTTGadgeti
	,_maxgui_proxygadgets_spinner_TSpinner_SetValue__d
	,maxgui_proxygadgets_spinner_TSpinner_EventHook_TObject_iTObjectTObject
	,maxgui_proxygadgets_spinner_TSpinner_Round_i_d
	,maxgui_proxygadgets_spinner_TSpinner_FloatToString_S_fi
};

struct maxgui_proxygadgets_spinner_TSpinner_obj* maxgui_proxygadgets_spinner_CreateSpinner(BBINT bbt_x,BBINT bbt_y,BBINT bbt_W,BBINT bbt_H,struct maxgui_maxgui_gadget_TGadget_obj* bbt_group,BBINT bbt_flags){
	return (struct maxgui_proxygadgets_spinner_TSpinner_obj*)maxgui_proxygadgets_spinner_TSpinner_Create_TTSpinner_iiiiTTGadgeti(bbt_x,bbt_y,bbt_W,bbt_H,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group,bbt_flags);
}
BBINT maxgui_proxygadgets_spinner_SetSpinnerRange(struct maxgui_proxygadgets_spinner_TSpinner_obj* bbt_spinner,BBDOUBLE bbt_minimum,BBDOUBLE bbt_maximum,BBINT bbt_accuracy){
	(bbt_spinner)->clas->m_SetRange__ddi((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbt_spinner,bbt_minimum,bbt_maximum,bbt_accuracy);
	maxgui_maxgui_SetGadgetToolTip((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_spinner->_maxgui_proxygadgets_spinner_tspinner_textfield ,bbStringConcat(bbStringConcat(bbStringConcat(&_s4,(bbt_spinner)->clas->f_FloatToString_S_fi(((BBFLOAT)bbt_minimum),3)),&_s5),(bbt_spinner)->clas->f_FloatToString_S_fi(((BBFLOAT)bbt_maximum),3)));
	return 0;
}
BBINT maxgui_proxygadgets_spinner_SetSpinnerValue(struct maxgui_proxygadgets_spinner_TSpinner_obj* bbt_spinner,BBDOUBLE bbt_value){
	(bbt_spinner)->clas->m_SetValue__d((struct maxgui_proxygadgets_spinner_TSpinner_obj*)bbt_spinner,bbt_value);
	return 0;
}
BBDOUBLE maxgui_proxygadgets_spinner_SpinnerValue(struct maxgui_proxygadgets_spinner_TSpinner_obj* bbt_spinner){
	if(bbt_spinner->_maxgui_proxygadgets_spinner_tspinner_accuracy ==0){
		return bbt_spinner->_maxgui_proxygadgets_spinner_tspinner_value ;
	}else{
		return (bbt_spinner->_maxgui_proxygadgets_spinner_tspinner_value /10.000000000000000);
	}
}
static int _bb_maxgui_proxygadgets_spinner_inited = 0;
int _bb_maxgui_proxygadgets_spinner(){
	if (!_bb_maxgui_proxygadgets_spinner_inited) {
		_bb_maxgui_proxygadgets_spinner_inited = 1;
		__bb_brl_blitz_blitz();
		__bb_maxgui_drivers_drivers();
		__bb_brl_eventqueue_eventqueue();
		bbObjectRegisterType((BBCLASS)&maxgui_proxygadgets_spinner_TSpinner);
		return 0;
	}
	return 0;
}