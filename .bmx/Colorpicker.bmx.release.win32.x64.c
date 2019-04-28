#include "Colorpicker.bmx.release.win32.x64.h"
static BBString _s5={
	&bbStringClass,
	1,
	{32}
};
static BBString _s4={
	&bbStringClass,
	3,
	{32,66,58}
};
static BBString _s3={
	&bbStringClass,
	3,
	{32,71,58}
};
static BBString _s6={
	&bbStringClass,
	1,
	{36}
};
static BBString _s0={
	&bbStringClass,
	1,
	{44}
};
static BBString _s2={
	&bbStringClass,
	3,
	{48,48,48}
};
static BBString _s1={
	&bbStringClass,
	2,
	{82,58}
};
struct BBDebugScope_18{int kind; const char *name; BBDebugDecl decls[19]; };
void _maxgui_proxygadgets_colorpicker_tColorpicker_New(struct maxgui_proxygadgets_colorpicker_tColorpicker_obj* o) {
	_maxgui_maxgui_gadget_TProxyGadget_New((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o);
	o->clas = &maxgui_proxygadgets_colorpicker_tColorpicker;
	o->_maxgui_proxygadgets_colorpicker_tcolorpicker_panel = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_colorpicker_tcolorpicker_label = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_colorpicker_tcolorpicker_button = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb = bbArrayNew1D("i", 3);
	o->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner = bbArrayNew1D(":TSpinner", 3);
}
BBINT _maxgui_proxygadgets_colorpicker_tColorpicker_Class(struct maxgui_proxygadgets_colorpicker_tColorpicker_obj* o){
	return 33;
}
BBINT _maxgui_proxygadgets_colorpicker_tColorpicker_SetFont_TTGuiFont(struct maxgui_proxygadgets_colorpicker_tColorpicker_obj* o,struct maxgui_maxgui_guifont_TGuiFont_obj* bbt_fnt){
	if(bbt_fnt==&bbNullObject){
		return 0;
	}
	if(((BBObject*)o->_maxgui_proxygadgets_colorpicker_tcolorpicker_label )!= &bbNullObject){
		maxgui_maxgui_SetGadgetFont((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_colorpicker_tcolorpicker_label ,(struct maxgui_maxgui_guifont_TGuiFont_obj*)bbt_fnt,0);
	}
	if(((BBObject*)o->_maxgui_proxygadgets_colorpicker_tcolorpicker_button )!= &bbNullObject){
		maxgui_maxgui_SetGadgetFont((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_colorpicker_tcolorpicker_button ,(struct maxgui_maxgui_guifont_TGuiFont_obj*)bbt_fnt,0);
	}
	if(o->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner != &bbEmptyArray){
		BBARRAY bbt_=o->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ;
		BBUINT bbt_2=0U;
		while(bbt_2<((BBUINT)(bbt_->scales[0]))){
			struct maxgui_proxygadgets_spinner_TSpinner_obj* bbt_sp=(struct maxgui_proxygadgets_spinner_TSpinner_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATA(bbt_,1))[bbt_2];
			bbt_2=(bbt_2+1U);
			if(bbt_sp==&bbNullObject){
				continue;
			}
			maxgui_maxgui_SetGadgetFont((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_sp,(BBClass*)&maxgui_maxgui_gadget_TGadget)),(struct maxgui_maxgui_guifont_TGuiFont_obj*)bbt_fnt,0);
		}
	}
	return 0;
}
BBINT _maxgui_proxygadgets_colorpicker_tColorpicker_CleanUp(struct maxgui_proxygadgets_colorpicker_tColorpicker_obj* o){
	brl_hook_RemoveHook(brl_event_EmitEventHook,o->clas->f_eventHandler_TObject_iTObjectTObject,(BBOBJECT)o);
	if(((BBObject*)o->_maxgui_proxygadgets_colorpicker_tcolorpicker_label )!= &bbNullObject){
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_colorpicker_tcolorpicker_label );
		o->_maxgui_proxygadgets_colorpicker_tcolorpicker_label =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	}
	if(((BBObject*)o->_maxgui_proxygadgets_colorpicker_tcolorpicker_button )!= &bbNullObject){
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_colorpicker_tcolorpicker_button );
		o->_maxgui_proxygadgets_colorpicker_tcolorpicker_button =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	}
	if(((BBObject*)o->_maxgui_proxygadgets_colorpicker_tcolorpicker_panel )!= &bbNullObject){
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_colorpicker_tcolorpicker_panel );
		o->_maxgui_proxygadgets_colorpicker_tcolorpicker_panel =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	}
	if(o->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner != &bbEmptyArray){
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ,1))[0U],(BBClass*)&maxgui_maxgui_gadget_TGadget)));
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ,1))[1U],(BBClass*)&maxgui_maxgui_gadget_TGadget)));
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ,1))[2U],(BBClass*)&maxgui_maxgui_gadget_TGadget)));
		o->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner =&bbEmptyArray;
	}
	(&maxgui_proxygadgets_colorpicker_tColorpicker)->super->m_CleanUp((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o);
	return 0;
}
BBINT _maxgui_proxygadgets_colorpicker_tColorpicker_SetShow_i(struct maxgui_proxygadgets_colorpicker_tColorpicker_obj* o,BBINT bbt_bool){
	(o->_maxgui_proxygadgets_colorpicker_tcolorpicker_panel )->clas->m_SetShow_i((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_colorpicker_tcolorpicker_panel ,bbt_bool);
	return 0;
}
BBINT _maxgui_proxygadgets_colorpicker_tColorpicker_SetEnabled_i(struct maxgui_proxygadgets_colorpicker_tColorpicker_obj* o,BBINT bbt_status){
	if(bbt_status==1){
		maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_colorpicker_tcolorpicker_panel );
		maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_colorpicker_tcolorpicker_label );
		maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_colorpicker_tcolorpicker_button );
		if(o->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner != &bbEmptyArray){
			maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ,1))[0U],(BBClass*)&maxgui_maxgui_gadget_TGadget)));
			maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ,1))[1U],(BBClass*)&maxgui_maxgui_gadget_TGadget)));
			maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ,1))[2U],(BBClass*)&maxgui_maxgui_gadget_TGadget)));
		}
	}else{
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_colorpicker_tcolorpicker_panel );
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_colorpicker_tcolorpicker_label );
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_colorpicker_tcolorpicker_button );
		if(o->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner != &bbEmptyArray){
			maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ,1))[0U],(BBClass*)&maxgui_maxgui_gadget_TGadget)));
			maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ,1))[1U],(BBClass*)&maxgui_maxgui_gadget_TGadget)));
			maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ,1))[2U],(BBClass*)&maxgui_maxgui_gadget_TGadget)));
		}
	}
	return 0;
}
struct maxgui_proxygadgets_colorpicker_tColorpicker_obj* maxgui_proxygadgets_colorpicker_tColorpicker_Create_TtColorpicker_iiiiTTGadgeti(BBINT bbt_x,BBINT bbt_y,BBINT bbt_w,BBINT bbt_h,struct maxgui_maxgui_gadget_TGadget_obj* bbt_group,BBINT bbt_style){
	struct maxgui_proxygadgets_colorpicker_tColorpicker_obj* bbt_sp=(struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)(struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbObjectNew((BBClass *)&maxgui_proxygadgets_colorpicker_tColorpicker);
	BBINT bbt_w1=((bbt_w-25)/3);
	bbt_sp->_maxgui_proxygadgets_colorpicker_tcolorpicker_panel =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreatePanel(bbt_x,bbt_y,bbt_w,bbt_h,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group,0,&bbEmptyString);
	BBINT bbt_[]={255,255,255};
	BBARRAY bbt_2 = bbArrayFromData("i",3,bbt_);
	bbt_sp->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb =bbt_2;
	if(bbt_style==2){
		bbt_sp->_maxgui_proxygadgets_colorpicker_tcolorpicker_label =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateTextField(1,1,(bbt_w-25),(bbt_h-3),(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_colorpicker_tcolorpicker_panel ,0);
	}else{
		if(bbt_style==3){
			((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATA(bbt_sp->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ,1))[0U]=(struct maxgui_proxygadgets_spinner_TSpinner_obj*)maxgui_proxygadgets_spinner_CreateSpinner(0,0,bbt_w1,25,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_colorpicker_tcolorpicker_panel ,0);
			((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATA(bbt_sp->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ,1))[1U]=(struct maxgui_proxygadgets_spinner_TSpinner_obj*)maxgui_proxygadgets_spinner_CreateSpinner(bbt_w1,0,bbt_w1,25,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_colorpicker_tcolorpicker_panel ,0);
			((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATA(bbt_sp->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ,1))[2U]=(struct maxgui_proxygadgets_spinner_TSpinner_obj*)maxgui_proxygadgets_spinner_CreateSpinner((bbt_w1*2),0,bbt_w1,25,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_colorpicker_tcolorpicker_panel ,0);
			maxgui_proxygadgets_spinner_SetSpinnerRange((struct maxgui_proxygadgets_spinner_TSpinner_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATA(bbt_sp->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ,1))[0U],0.00000000000000000,255.00000000000000,0);
			maxgui_proxygadgets_spinner_SetSpinnerRange((struct maxgui_proxygadgets_spinner_TSpinner_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATA(bbt_sp->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ,1))[1U],0.00000000000000000,255.00000000000000,0);
			maxgui_proxygadgets_spinner_SetSpinnerRange((struct maxgui_proxygadgets_spinner_TSpinner_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATA(bbt_sp->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ,1))[2U],0.00000000000000000,255.00000000000000,0);
			maxgui_proxygadgets_spinner_SetSpinnerValue((struct maxgui_proxygadgets_spinner_TSpinner_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATA(bbt_sp->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ,1))[0U],255.00000000000000);
			maxgui_proxygadgets_spinner_SetSpinnerValue((struct maxgui_proxygadgets_spinner_TSpinner_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATA(bbt_sp->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ,1))[1U],255.00000000000000);
			maxgui_proxygadgets_spinner_SetSpinnerValue((struct maxgui_proxygadgets_spinner_TSpinner_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATA(bbt_sp->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ,1))[2U],255.00000000000000);
		}else{
			bbt_sp->_maxgui_proxygadgets_colorpicker_tcolorpicker_label =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateLabel(&bbEmptyString,1,1,(bbt_w-25),(bbt_h-3),(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_colorpicker_tcolorpicker_panel ,18);
		}
	}
	bbt_sp->_maxgui_proxygadgets_colorpicker_tcolorpicker_button =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreatePanel((bbt_w-24),1,22,(bbt_h-2),(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_colorpicker_tcolorpicker_panel ,1,&bbEmptyString);
	bbt_sp->_maxgui_maxgui_gadget_tgadget_style =bbt_style;
	(bbt_sp)->clas->m_UpdateValue((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbt_sp);
	maxgui_maxgui_SetGadgetSensitivity((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_colorpicker_tcolorpicker_button ,3);
	if(((BBObject*)bbt_sp->_maxgui_proxygadgets_colorpicker_tcolorpicker_label )!= &bbNullObject){
		maxgui_maxgui_SetGadgetSensitivity((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_colorpicker_tcolorpicker_label ,1);
	}
	brl_hook_AddHook(brl_event_EmitEventHook,maxgui_proxygadgets_colorpicker_tColorpicker_eventHandler_TObject_iTObjectTObject,(BBOBJECT)bbt_sp,0);
	(bbt_sp)->clas->m_SetProxy_TTGadget((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbt_sp,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_colorpicker_tcolorpicker_panel );
	maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_colorpicker_tcolorpicker_panel ,1,1,0,0);
	if(((BBObject*)bbt_sp->_maxgui_proxygadgets_colorpicker_tcolorpicker_label )!= &bbNullObject){
		maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_colorpicker_tcolorpicker_label ,1,1,2,2);
	}
	maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_colorpicker_tcolorpicker_button ,0,1,2,2);
	if(((BBObject*)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATA(bbt_sp->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ,1))[0U])!= &bbNullObject){
		maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATA(bbt_sp->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ,1))[0U],(BBClass*)&maxgui_maxgui_gadget_TGadget)),1,2,2,2);
	}
	if(((BBObject*)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATA(bbt_sp->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ,1))[1U])!= &bbNullObject){
		maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATA(bbt_sp->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ,1))[1U],(BBClass*)&maxgui_maxgui_gadget_TGadget)),2,2,2,2);
	}
	if(((BBObject*)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATA(bbt_sp->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ,1))[2U])!= &bbNullObject){
		maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATA(bbt_sp->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ,1))[2U],(BBClass*)&maxgui_maxgui_gadget_TGadget)),2,1,2,2);
	}
	return (struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbt_sp;
}
BBINT _maxgui_proxygadgets_colorpicker_tColorpicker_SetColor_iii(struct maxgui_proxygadgets_colorpicker_tColorpicker_obj* o,BBINT bbt_RED,BBINT bbt_green,BBINT bbt_blue){
	maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_colorpicker_tcolorpicker_label ,bbt_RED,bbt_green,bbt_blue,1);
	return 0;
}
BBSTRING _maxgui_proxygadgets_colorpicker_tColorpicker_GetText(struct maxgui_proxygadgets_colorpicker_tColorpicker_obj* o){
	return bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(bbStringFromInt(((BBINT*)BBARRAYDATA(o->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ,1))[0U]),&_s0),bbStringFromInt(((BBINT*)BBARRAYDATA(o->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ,1))[1U])),&_s0),bbStringFromInt(((BBINT*)BBARRAYDATA(o->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ,1))[2U]));
}
BBINT _maxgui_proxygadgets_colorpicker_tColorpicker_UpdateValue(struct maxgui_proxygadgets_colorpicker_tColorpicker_obj* o){
	BBINT bbt_=o->_maxgui_maxgui_gadget_tgadget_style ;
	if(bbt_==0){
		maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_colorpicker_tcolorpicker_label ,bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(&_s1,brl_retro_RSet(bbStringConcat(&_s2,bbStringFromInt(((BBINT*)BBARRAYDATA(o->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ,1))[0U])),3)),&_s3),brl_retro_RSet(bbStringConcat(&_s2,bbStringFromInt(((BBINT*)BBARRAYDATA(o->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ,1))[1U])),3)),&_s4),brl_retro_RSet(bbStringConcat(&_s2,bbStringFromInt(((BBINT*)BBARRAYDATA(o->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ,1))[2U])),3)));
	}else{
		if(bbt_==1){
			maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_colorpicker_tcolorpicker_label ,bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(brl_retro_RSet(bbStringConcat(&_s2,bbStringFromInt(((BBINT*)BBARRAYDATA(o->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ,1))[0U])),3),&_s5),brl_retro_RSet(bbStringConcat(&_s2,bbStringFromInt(((BBINT*)BBARRAYDATA(o->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ,1))[1U])),3)),&_s5),brl_retro_RSet(bbStringConcat(&_s2,bbStringFromInt(((BBINT*)BBARRAYDATA(o->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ,1))[2U])),3)));
		}else{
			if(bbt_==2){
				maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_colorpicker_tcolorpicker_label ,bbStringConcat(bbStringConcat(bbStringSlice(brl_retro_Hex(((BBINT*)BBARRAYDATA(o->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ,1))[0U]),6,(brl_retro_Hex(((BBINT*)BBARRAYDATA(o->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ,1))[0U]))->length),bbStringSlice(brl_retro_Hex(((BBINT*)BBARRAYDATA(o->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ,1))[1U]),6,(brl_retro_Hex(((BBINT*)BBARRAYDATA(o->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ,1))[1U]))->length)),bbStringSlice(brl_retro_Hex(((BBINT*)BBARRAYDATA(o->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ,1))[2U]),6,(brl_retro_Hex(((BBINT*)BBARRAYDATA(o->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ,1))[2U]))->length)));
			}
		}
	}
	maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_colorpicker_tcolorpicker_button ,((BBINT*)BBARRAYDATA(o->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ,1))[0U],((BBINT*)BBARRAYDATA(o->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ,1))[1U],((BBINT*)BBARRAYDATA(o->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ,1))[2U],1);
	if(o->_maxgui_maxgui_gadget_tgadget_style ==3){
		maxgui_proxygadgets_spinner_SetSpinnerValue((struct maxgui_proxygadgets_spinner_TSpinner_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ,1))[0U],((BBDOUBLE)((BBINT*)BBARRAYDATA(o->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ,1))[0U]));
		maxgui_proxygadgets_spinner_SetSpinnerValue((struct maxgui_proxygadgets_spinner_TSpinner_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ,1))[1U],((BBDOUBLE)((BBINT*)BBARRAYDATA(o->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ,1))[1U]));
		maxgui_proxygadgets_spinner_SetSpinnerValue((struct maxgui_proxygadgets_spinner_TSpinner_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ,1))[2U],((BBDOUBLE)((BBINT*)BBARRAYDATA(o->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ,1))[2U]));
	}
	return 0;
}
BBINT _maxgui_proxygadgets_colorpicker_tColorpicker_SetText_S(struct maxgui_proxygadgets_colorpicker_tColorpicker_obj* o,BBSTRING bbt_tx){
	if(bbt_tx==&bbEmptyString){
		return -1;
	}
	BBARRAY volatile bbt_tmp=bbStringSplit((BBSTRING)bbt_tx,&_s0);
	bbt_tmp=bbArraySlice("$",bbt_tmp,0,3);
	((BBINT*)BBARRAYDATA(o->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ,1))[0U]=bbStringToInt(((BBSTRING*)BBARRAYDATA(bbt_tmp,1))[0U]);
	((BBINT*)BBARRAYDATA(o->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ,1))[1U]=bbStringToInt(((BBSTRING*)BBARRAYDATA(bbt_tmp,1))[1U]);
	((BBINT*)BBARRAYDATA(o->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ,1))[2U]=bbStringToInt(((BBSTRING*)BBARRAYDATA(bbt_tmp,1))[2U]);
	((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)o)->clas->m_UpdateValue((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)o);
	return 0;
}
BBINT _maxgui_proxygadgets_colorpicker_tColorpicker_SetLayout_iiii(struct maxgui_proxygadgets_colorpicker_tColorpicker_obj* o,BBINT bbt_a,BBINT bbt_b,BBINT bbt_c,BBINT bbt_d){
	return 0;
}
BBOBJECT maxgui_proxygadgets_colorpicker_tColorpicker_eventHandler_TObject_iTObjectTObject(BBINT bbt_pID,BBOBJECT bbt_pData,BBOBJECT bbt_pContext){
	struct brl_event_TEvent_obj* bbt_pEvent=(struct brl_event_TEvent_obj*)((struct brl_event_TEvent_obj*)bbObjectDowncast((BBOBJECT)bbt_pData,(BBClass*)&brl_event_TEvent));
	struct maxgui_proxygadgets_colorpicker_tColorpicker_obj* bbt_obj=(struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbObjectDowncast((BBOBJECT)bbt_pContext,(BBClass*)&maxgui_proxygadgets_colorpicker_tColorpicker));
	if(((BBObject*)bbt_pEvent)!= &bbNullObject){
		BBINT bbt_=bbt_pEvent->_brl_event_tevent_id ;
		if((bbt_==8193) || (bbt_==8200)){
			if(((bbt_pEvent->_brl_event_tevent_source ==((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATA(bbt_obj->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ,1))[0U]) || (bbt_pEvent->_brl_event_tevent_source ==((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATA(bbt_obj->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ,1))[1U])) || (bbt_pEvent->_brl_event_tevent_source ==((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATA(bbt_obj->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ,1))[2U])){
				((BBINT*)BBARRAYDATA(bbt_obj->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ,1))[0U]=((BBINT)maxgui_proxygadgets_spinner_SpinnerValue((struct maxgui_proxygadgets_spinner_TSpinner_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATA(bbt_obj->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ,1))[0U]));
				((BBINT*)BBARRAYDATA(bbt_obj->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ,1))[1U]=((BBINT)maxgui_proxygadgets_spinner_SpinnerValue((struct maxgui_proxygadgets_spinner_TSpinner_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATA(bbt_obj->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ,1))[1U]));
				((BBINT*)BBARRAYDATA(bbt_obj->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ,1))[2U]=((BBINT)maxgui_proxygadgets_spinner_SpinnerValue((struct maxgui_proxygadgets_spinner_TSpinner_obj*)((struct maxgui_proxygadgets_spinner_TSpinner_obj**)BBARRAYDATA(bbt_obj->_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner ,1))[2U]));
				maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_colorpicker_tcolorpicker_button ,((BBINT*)BBARRAYDATA(bbt_obj->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ,1))[0U],((BBINT*)BBARRAYDATA(bbt_obj->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ,1))[1U],((BBINT*)BBARRAYDATA(bbt_obj->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ,1))[2U],1);
				brl_event_EmitEvent((struct brl_event_TEvent_obj*)brl_event_CreateEvent(8193,(BBOBJECT)bbt_obj,0,0,0,0,(BBOBJECT)bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(bbStringFromInt(((BBINT*)BBARRAYDATA(bbt_obj->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ,1))[0U]),&_s0),bbStringFromInt(((BBINT*)BBARRAYDATA(bbt_obj->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ,1))[1U])),&_s0),bbStringFromInt(((BBINT*)BBARRAYDATA(bbt_obj->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ,1))[2U]))));
				return (BBOBJECT)bbt_pEvent;
			}
			if(bbt_pEvent->_brl_event_tevent_source ==bbt_obj->_maxgui_proxygadgets_colorpicker_tcolorpicker_label ){
				if(bbt_obj->_maxgui_maxgui_gadget_tgadget_style ==2){
					BBSTRING bbt_ty=maxgui_maxgui_GadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_colorpicker_tcolorpicker_label );
					if((bbt_ty)->length>=6){
						((BBINT*)BBARRAYDATA(bbt_obj->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ,1))[0U]=bbStringToInt((BBSTRING)(bbStringConcat(&_s6,bbStringSlice(bbt_ty,0,2))));
						((BBINT*)BBARRAYDATA(bbt_obj->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ,1))[1U]=bbStringToInt((BBSTRING)(bbStringConcat(&_s6,bbStringSlice(bbt_ty,2,4))));
						((BBINT*)BBARRAYDATA(bbt_obj->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ,1))[2U]=bbStringToInt((BBSTRING)(bbStringConcat(&_s6,bbStringSlice(bbt_ty,4,6))));
						maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_colorpicker_tcolorpicker_button ,((BBINT*)BBARRAYDATA(bbt_obj->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ,1))[0U],((BBINT*)BBARRAYDATA(bbt_obj->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ,1))[1U],((BBINT*)BBARRAYDATA(bbt_obj->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ,1))[2U],1);
						brl_event_EmitEvent((struct brl_event_TEvent_obj*)brl_event_CreateEvent(8193,(BBOBJECT)bbt_obj,0,0,0,0,(BBOBJECT)bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(bbStringFromInt(((BBINT*)BBARRAYDATA(bbt_obj->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ,1))[0U]),&_s0),bbStringFromInt(((BBINT*)BBARRAYDATA(bbt_obj->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ,1))[1U])),&_s0),bbStringFromInt(((BBINT*)BBARRAYDATA(bbt_obj->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ,1))[2U]))));
						return (BBOBJECT)bbt_pEvent;
					}
				}
			}
		}else{
			if(bbt_==1025){
				if(bbt_pEvent->_brl_event_tevent_source ==bbt_obj->_maxgui_proxygadgets_colorpicker_tcolorpicker_button ){
					if(maxgui_maxgui_RequestColor(((BBINT*)BBARRAYDATA(bbt_obj->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ,1))[0U],((BBINT*)BBARRAYDATA(bbt_obj->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ,1))[1U],((BBINT*)BBARRAYDATA(bbt_obj->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ,1))[2U])!=0){
						((BBINT*)BBARRAYDATA(bbt_obj->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ,1))[0U]=maxgui_maxgui_RequestedRed();
						((BBINT*)BBARRAYDATA(bbt_obj->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ,1))[1U]=maxgui_maxgui_RequestedGreen();
						((BBINT*)BBARRAYDATA(bbt_obj->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ,1))[2U]=maxgui_maxgui_RequestedBlue();
						(bbt_obj)->clas->m_UpdateValue((struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)bbt_obj);
					}
					brl_event_EmitEvent((struct brl_event_TEvent_obj*)brl_event_CreateEvent(8193,(BBOBJECT)bbt_obj,0,0,0,0,(BBOBJECT)bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(bbStringFromInt(((BBINT*)BBARRAYDATA(bbt_obj->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ,1))[0U]),&_s0),bbStringFromInt(((BBINT*)BBARRAYDATA(bbt_obj->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ,1))[1U])),&_s0),bbStringFromInt(((BBINT*)BBARRAYDATA(bbt_obj->_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb ,1))[2U]))));
					return (BBOBJECT)bbt_pEvent;
				}
			}
		}
	}
	return (BBOBJECT)bbt_pData;
}
struct BBDebugScope_18 maxgui_proxygadgets_colorpicker_tColorpicker_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"tColorpicker",
	{
		{
			BBDEBUGDECL_FIELD,
			"panel",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_colorpicker_tColorpicker_obj,_maxgui_proxygadgets_colorpicker_tcolorpicker_panel)
		},
		{
			BBDEBUGDECL_FIELD,
			"label",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_colorpicker_tColorpicker_obj,_maxgui_proxygadgets_colorpicker_tcolorpicker_label)
		},
		{
			BBDEBUGDECL_FIELD,
			"button",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_colorpicker_tColorpicker_obj,_maxgui_proxygadgets_colorpicker_tcolorpicker_button)
		},
		{
			BBDEBUGDECL_FIELD,
			"rgb",
			"[]i",
			.field_offset=offsetof(struct maxgui_proxygadgets_colorpicker_tColorpicker_obj,_maxgui_proxygadgets_colorpicker_tcolorpicker_rgb)
		},
		{
			BBDEBUGDECL_FIELD,
			"spinner",
			"[]:TSpinner",
			.field_offset=offsetof(struct maxgui_proxygadgets_colorpicker_tColorpicker_obj,_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_maxgui_proxygadgets_colorpicker_tColorpicker_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Class",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_colorpicker_tColorpicker_Class
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetFont",
			"(:TGuiFont)i",
			.var_address=(void*)&_maxgui_proxygadgets_colorpicker_tColorpicker_SetFont_TTGuiFont
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"CleanUp",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_colorpicker_tColorpicker_CleanUp
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetShow",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_colorpicker_tColorpicker_SetShow_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetEnabled",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_colorpicker_tColorpicker_SetEnabled_i
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Create",
			"(i,i,i,i,:TGadget,i):tColorpicker",
			.var_address=(void*)&maxgui_proxygadgets_colorpicker_tColorpicker_Create_TtColorpicker_iiiiTTGadgeti
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetColor",
			"(i,i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_colorpicker_tColorpicker_SetColor_iii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetText",
			"()$",
			.var_address=(void*)&_maxgui_proxygadgets_colorpicker_tColorpicker_GetText
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"UpdateValue",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_colorpicker_tColorpicker_UpdateValue
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetText",
			"($)i",
			.var_address=(void*)&_maxgui_proxygadgets_colorpicker_tColorpicker_SetText_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetLayout",
			"(i,i,i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_colorpicker_tColorpicker_SetLayout_iiii
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"eventHandler",
			"(i,:Object,:Object):Object",
			.var_address=(void*)&maxgui_proxygadgets_colorpicker_tColorpicker_eventHandler_TObject_iTObjectTObject
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_maxgui_proxygadgets_colorpicker_tColorpicker maxgui_proxygadgets_colorpicker_tColorpicker={
	&maxgui_maxgui_gadget_TProxyGadget,
	bbObjectFree,
	(BBDebugScope*)&maxgui_proxygadgets_colorpicker_tColorpicker_scope,
	sizeof(struct maxgui_proxygadgets_colorpicker_tColorpicker_obj),
	(void (*)(BBOBJECT))_maxgui_proxygadgets_colorpicker_tColorpicker_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct maxgui_proxygadgets_colorpicker_tColorpicker_obj,_maxgui_proxygadgets_colorpicker_tcolorpicker_spinner) - sizeof(void*) + sizeof(BBARRAY)
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
	,_maxgui_proxygadgets_colorpicker_tColorpicker_SetLayout_iiii
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
	,_maxgui_proxygadgets_colorpicker_tColorpicker_CleanUp
	,_maxgui_maxgui_gadget_TProxyGadget_Free
	,_maxgui_maxgui_gadget_TProxyGadget_Rethink
	,_maxgui_maxgui_gadget_TProxyGadget_ClientWidth
	,_maxgui_maxgui_gadget_TProxyGadget_ClientHeight
	,_maxgui_maxgui_gadget_TProxyGadget_Activate_i
	,_maxgui_maxgui_gadget_TProxyGadget_State
	,_maxgui_proxygadgets_colorpicker_tColorpicker_SetText_S
	,_maxgui_proxygadgets_colorpicker_tColorpicker_GetText
	,_maxgui_proxygadgets_colorpicker_tColorpicker_SetFont_TTGuiFont
	,_maxgui_proxygadgets_colorpicker_tColorpicker_SetColor_iii
	,_maxgui_maxgui_gadget_TProxyGadget_RemoveColor
	,_maxgui_maxgui_gadget_TProxyGadget_SetAlpha_f
	,_maxgui_maxgui_gadget_TProxyGadget_SetTextColor_iii
	,_maxgui_maxgui_gadget_TProxyGadget_SetTooltip_S
	,_maxgui_maxgui_gadget_TProxyGadget_GetTooltip
	,_maxgui_maxgui_gadget_TProxyGadget_SetPixmap_TTPixmapi
	,_maxgui_maxgui_gadget_TProxyGadget_SetIconStrip_TTIconStrip
	,_maxgui_proxygadgets_colorpicker_tColorpicker_SetShow_i
	,_maxgui_proxygadgets_colorpicker_tColorpicker_SetEnabled_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetSelected_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetHotKey_ii
	,_maxgui_maxgui_gadget_TProxyGadget_SetSensitivity_i
	,_maxgui_maxgui_gadget_TProxyGadget_GetSensitivity
	,_maxgui_proxygadgets_colorpicker_tColorpicker_Class
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
	,maxgui_proxygadgets_colorpicker_tColorpicker_Create_TtColorpicker_iiiiTTGadgeti
	,_maxgui_proxygadgets_colorpicker_tColorpicker_UpdateValue
	,maxgui_proxygadgets_colorpicker_tColorpicker_eventHandler_TObject_iTObjectTObject
};

struct maxgui_proxygadgets_colorpicker_tColorpicker_obj* maxgui_proxygadgets_colorpicker_CreateColorPicker(BBINT bbt_x,BBINT bbt_y,BBINT bbt_w,BBINT bbt_h,struct maxgui_maxgui_gadget_TGadget_obj* bbt_group,BBINT bbt_style){
	return (struct maxgui_proxygadgets_colorpicker_tColorpicker_obj*)maxgui_proxygadgets_colorpicker_tColorpicker_Create_TtColorpicker_iiiiTTGadgeti(bbt_x,bbt_y,bbt_w,bbt_h,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group,bbt_style);
}
static int _bb_maxgui_proxygadgets_colorpicker_inited = 0;
int _bb_maxgui_proxygadgets_colorpicker(){
	if (!_bb_maxgui_proxygadgets_colorpicker_inited) {
		_bb_maxgui_proxygadgets_colorpicker_inited = 1;
		__bb_brl_blitz_blitz();
		__bb_maxgui_maxgui_maxgui();
		__bb_brl_retro_retro();
		_bb_maxgui_proxygadgets_spinner();
		bbObjectRegisterType((BBCLASS)&maxgui_proxygadgets_colorpicker_tColorpicker);
		return 0;
	}
	return 0;
}