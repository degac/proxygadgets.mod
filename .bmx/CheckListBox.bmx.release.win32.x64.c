#include "CheckListBox.bmx.release.win32.x64.h"
static BBString _s0={
	&bbStringClass,
	1,
	{44}
};
static BBString _s1={
	&bbStringClass,
	16,
	{69,120,116,114,97,32,105,115,32,78,85,76,76,46,46,46}
};
struct BBDebugScope_13{int kind; const char *name; BBDebugDecl decls[14]; };
struct BBDebugScope_41{int kind; const char *name; BBDebugDecl decls[42]; };
void _maxgui_proxygadgets_checklistbox_SingleItem_New(struct maxgui_proxygadgets_checklistbox_SingleItem_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &maxgui_proxygadgets_checklistbox_SingleItem;
	o->_maxgui_proxygadgets_checklistbox_singleitem_panel = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_checklistbox_singleitem_check = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_checklistbox_singleitem_label = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_checklistbox_singleitem_icon = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_checklistbox_singleitem_iconnumber = 0;
	o->_maxgui_proxygadgets_checklistbox_singleitem_parent = (struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_checklistbox_singleitem_item_h = 20;
}
struct maxgui_proxygadgets_checklistbox_SingleItem_obj* maxgui_proxygadgets_checklistbox_SingleItem_Create_TSingleItem_TTchecklistboxSSii(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* bbt_parent,BBSTRING bbt_txt,BBSTRING bbt_tip,BBINT bbt_icon,BBINT bbt_state){
	struct maxgui_proxygadgets_checklistbox_SingleItem_obj* bbt_ss=(struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)(struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbObjectNew((BBClass *)&maxgui_proxygadgets_checklistbox_SingleItem);
	BBINT bbt_yy=(((bbt_parent->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ->scales[0])*bbt_ss->_maxgui_proxygadgets_checklistbox_singleitem_item_h )-bbt_ss->_maxgui_proxygadgets_checklistbox_singleitem_item_h );
	bbt_ss->_maxgui_proxygadgets_checklistbox_singleitem_panel =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreatePanel(0,bbt_yy,maxgui_maxgui_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_parent->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel ),bbt_ss->_maxgui_proxygadgets_checklistbox_singleitem_item_h ,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_parent->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel ,4,&bbEmptyString);
	bbt_ss->_maxgui_proxygadgets_checklistbox_singleitem_check =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateButton(&bbEmptyString,5,0,16,(bbt_ss->_maxgui_proxygadgets_checklistbox_singleitem_item_h -1),(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_ss->_maxgui_proxygadgets_checklistbox_singleitem_panel ,2);
	bbt_ss->_maxgui_proxygadgets_checklistbox_singleitem_label =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateLabel(bbt_txt,40,2,maxgui_maxgui_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_ss->_maxgui_proxygadgets_checklistbox_singleitem_panel ),bbt_ss->_maxgui_proxygadgets_checklistbox_singleitem_item_h ,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_ss->_maxgui_proxygadgets_checklistbox_singleitem_panel ,0);
	bbt_ss->_maxgui_proxygadgets_checklistbox_singleitem_icon =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreatePanel(20,1,18,(bbt_ss->_maxgui_proxygadgets_checklistbox_singleitem_item_h -2),(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_ss->_maxgui_proxygadgets_checklistbox_singleitem_panel ,0,&bbEmptyString);
	maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_ss->_maxgui_proxygadgets_checklistbox_singleitem_panel ,1,1,1,2);
	maxgui_maxgui_SetGadgetSensitivity((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_ss->_maxgui_proxygadgets_checklistbox_singleitem_label ,1);
	if((maxgui_maxgui_GadgetY((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_ss->_maxgui_proxygadgets_checklistbox_singleitem_panel )<0) || (maxgui_maxgui_GadgetY((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_ss->_maxgui_proxygadgets_checklistbox_singleitem_panel )>(maxgui_maxgui_GadgetY((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_parent->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel )+maxgui_maxgui_GadgetHeight((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_parent->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel )))){
		maxgui_maxgui_HideGadget((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_ss->_maxgui_proxygadgets_checklistbox_singleitem_panel );
	}
	bbt_ss->_maxgui_proxygadgets_checklistbox_singleitem_parent =(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbt_parent;
	maxgui_maxgui_SetGadgetToolTip((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_ss->_maxgui_proxygadgets_checklistbox_singleitem_label ,bbt_tip);
	maxgui_maxgui_SetButtonState((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_ss->_maxgui_proxygadgets_checklistbox_singleitem_check ,bbt_state);
	return (struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbt_ss;
}
BBINT _maxgui_proxygadgets_checklistbox_SingleItem_Change_SSii(struct maxgui_proxygadgets_checklistbox_SingleItem_obj* o,BBSTRING bbt_txt,BBSTRING bbt_tip,BBINT bbt__iconNumber,BBINT bbt_state){
	maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_checklistbox_singleitem_label ,bbt_txt);
	maxgui_maxgui_SetGadgetToolTip((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_checklistbox_singleitem_label ,bbt_tip);
	if(bbt__iconNumber>-1){
		struct brl_pixmap_TPixmap_obj* bbt_px=(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)o->_maxgui_proxygadgets_checklistbox_singleitem_parent ->_maxgui_proxygadgets_checklistbox_tchecklistbox_myiconstrip ,bbt__iconNumber);
		maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_checklistbox_singleitem_icon ,(struct brl_pixmap_TPixmap_obj*)bbt_px,1);
		o->_maxgui_proxygadgets_checklistbox_singleitem_iconnumber =bbt__iconNumber;
	}
	if(bbt_state!=-1){
		maxgui_maxgui_SetButtonState((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_checklistbox_singleitem_check ,bbt_state);
	}
	return 0;
}
BBINT _maxgui_proxygadgets_checklistbox_SingleItem_Clear(struct maxgui_proxygadgets_checklistbox_SingleItem_obj* o){
	if(((BBObject*)o->_maxgui_proxygadgets_checklistbox_singleitem_label )!= &bbNullObject){
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_checklistbox_singleitem_label );
	}
	if(((BBObject*)o->_maxgui_proxygadgets_checklistbox_singleitem_check )!= &bbNullObject){
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_checklistbox_singleitem_check );
	}
	if(((BBObject*)o->_maxgui_proxygadgets_checklistbox_singleitem_panel )!= &bbNullObject){
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_checklistbox_singleitem_panel );
	}
	if(((BBObject*)o->_maxgui_proxygadgets_checklistbox_singleitem_icon )!= &bbNullObject){
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_checklistbox_singleitem_icon );
	}
	o->_maxgui_proxygadgets_checklistbox_singleitem_icon =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_checklistbox_singleitem_label =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_checklistbox_singleitem_check =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_checklistbox_singleitem_panel =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	return 0;
}
BBINT _maxgui_proxygadgets_checklistbox_SingleItem_SetFont_TTGuiFont(struct maxgui_proxygadgets_checklistbox_SingleItem_obj* o,struct maxgui_maxgui_guifont_TGuiFont_obj* bbt_fnt){
	if(bbt_fnt==&bbNullObject){
		return -1;
	}
	maxgui_maxgui_SetGadgetFont((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_checklistbox_singleitem_label ,(struct maxgui_maxgui_guifont_TGuiFont_obj*)bbt_fnt,0);
	o->_maxgui_proxygadgets_checklistbox_singleitem_item_h =((BBINT)((maxgui_maxgui_FontSize((struct maxgui_maxgui_guifont_TGuiFont_obj*)bbt_fnt)*2.0000000000000000)+4.0000000000000000));
	if(o->_maxgui_proxygadgets_checklistbox_singleitem_item_h <20){
		o->_maxgui_proxygadgets_checklistbox_singleitem_item_h =20;
	}
	return 0;
}
BBINT _maxgui_proxygadgets_checklistbox_SingleItem_SetEnabled_i(struct maxgui_proxygadgets_checklistbox_SingleItem_obj* o,BBINT bbt_status){
	if(bbt_status==1){
		maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_checklistbox_singleitem_label );
		maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_checklistbox_singleitem_check );
		maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_checklistbox_singleitem_panel );
		maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_checklistbox_singleitem_icon );
	}else{
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_checklistbox_singleitem_label );
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_checklistbox_singleitem_check );
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_checklistbox_singleitem_panel );
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_checklistbox_singleitem_icon );
	}
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
	o->_maxgui_proxygadgets_checklistbox_tchecklistbox_myiconstrip = (struct maxgui_maxgui_iconstrip_TIconStrip_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_checklistbox_tchecklistbox_slider = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_checklistbox_tchecklistbox_style = 0;
	o->_maxgui_proxygadgets_checklistbox_tchecklistbox_current_position = 0;
	o->_maxgui_proxygadgets_checklistbox_tchecklistbox_visible = 0;
	o->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel_width = 0;
	o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it = &bbEmptyArray;
	o->_maxgui_proxygadgets_checklistbox_tchecklistbox_mx = &bbEmptyArray;
	o->_maxgui_proxygadgets_checklistbox_tchecklistbox_mx_counter = 0;
	o->_maxgui_proxygadgets_checklistbox_tchecklistbox__r = 255;
	o->_maxgui_proxygadgets_checklistbox_tchecklistbox__g = 255;
	o->_maxgui_proxygadgets_checklistbox_tchecklistbox__b = 255;
	o->_maxgui_proxygadgets_checklistbox_tchecklistbox_item_h = 20;
}
BBINT _maxgui_proxygadgets_checklistbox_Tchecklistbox_AddExclusion_S(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* o,BBSTRING bbt_linea){
	if(bbt_linea==&bbEmptyString){
		return -1;
	}
	o->_maxgui_proxygadgets_checklistbox_tchecklistbox_mx =bbArraySlice("[]i",o->_maxgui_proxygadgets_checklistbox_tchecklistbox_mx ,0,(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_mx_counter +1));
	BBINT bbt_subsize=0;
	BBARRAY bbt_=bbStringSplit((BBSTRING)bbt_linea,&_s0);
	BBUINT bbt_2=0U;
	while(bbt_2<((BBUINT)(bbt_->scales[0]))){
		BBSTRING bbt_si=((BBSTRING*)BBARRAYDATA(bbt_,1))[bbt_2];
		bbt_2=(bbt_2+1U);
		bbt_subsize=(((BBARRAY*)BBARRAYDATA(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_mx ,1))[((BBUINT)o->_maxgui_proxygadgets_checklistbox_tchecklistbox_mx_counter )]->scales[0]);
		((BBARRAY*)BBARRAYDATA(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_mx ,1))[((BBUINT)o->_maxgui_proxygadgets_checklistbox_tchecklistbox_mx_counter )]=bbArraySlice("i",((BBARRAY*)BBARRAYDATA(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_mx ,1))[((BBUINT)o->_maxgui_proxygadgets_checklistbox_tchecklistbox_mx_counter )],0,(bbt_subsize+1));
		BBARRAY volatile bbt_3=((BBARRAY*)BBARRAYDATA(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_mx ,1))[((BBUINT)o->_maxgui_proxygadgets_checklistbox_tchecklistbox_mx_counter )];
		((BBINT*)BBARRAYDATA(bbt_3,1))[((BBUINT)bbt_subsize)]=bbStringToInt(bbt_si);
	}
	o->_maxgui_proxygadgets_checklistbox_tchecklistbox_mx_counter +=1;
	return 0;
}
BBINT _maxgui_proxygadgets_checklistbox_Tchecklistbox_CleanExclusion(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* o){
	o->_maxgui_proxygadgets_checklistbox_tchecklistbox_mx_counter =0;
	{
		BBINT bbt_o=0;
		BBINT bbt_=(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_mx ->scales[0]);
		for(;(bbt_o<bbt_);bbt_o=(bbt_o+1)){
			((BBARRAY*)BBARRAYDATA(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_mx ,1))[((BBUINT)bbt_o)]=bbArraySlice("i",((BBARRAY*)BBARRAYDATA(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_mx ,1))[((BBUINT)bbt_o)],0,0);
		}
	}
	o->_maxgui_proxygadgets_checklistbox_tchecklistbox_mx =bbArraySlice("[]i",o->_maxgui_proxygadgets_checklistbox_tchecklistbox_mx ,0,0);
	return 0;
}
BBINT _maxgui_proxygadgets_checklistbox_Tchecklistbox_InsertItem_iSSiTObjecti(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* o,BBINT bbt_index,BBSTRING bbt_Text,BBSTRING bbt_tip,BBINT bbt_icon,BBOBJECT bbt_extra,BBINT bbt_flags){
	o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it =bbArraySlice(":SingleItem",o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ,0,((o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ->scales[0])+1));
	{
		BBINT bbt_i=((o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ->scales[0])-2);
		BBINT bbt_=bbt_index;
		for(;(bbt_i>=bbt_);bbt_i=(bbt_i+-1)){
			((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ,1))[((BBUINT)(bbt_i+1))]=(struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ,1))[((BBUINT)bbt_i)];
		}
	}
	if(((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ,1))[((BBUINT)bbt_index)]!=&bbNullObject){
		maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ,1))[((BBUINT)bbt_index)]->_maxgui_proxygadgets_checklistbox_singleitem_label ,bbt_Text);
		maxgui_maxgui_SetGadgetExtra((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ,1))[((BBUINT)bbt_index)]->_maxgui_proxygadgets_checklistbox_singleitem_label ,(BBOBJECT)bbt_extra);
		if(bbt_extra==&bbNullObject){
			brl_standardio_Print(&_s1);
		}
		if(bbt_icon>-1){
			struct brl_pixmap_TPixmap_obj* bbt_px=(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)o->_maxgui_proxygadgets_checklistbox_tchecklistbox_myiconstrip ,bbt_icon);
			maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ,1))[((BBUINT)bbt_index)]->_maxgui_proxygadgets_checklistbox_singleitem_icon ,(struct brl_pixmap_TPixmap_obj*)bbt_px,1);
			((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ,1))[((BBUINT)bbt_index)]->_maxgui_proxygadgets_checklistbox_singleitem_iconnumber =bbt_icon;
		}
	}else{
		((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ,1))[((BBUINT)bbt_index)]=(struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)maxgui_proxygadgets_checklistbox_SingleItem_Create_TSingleItem_TTchecklistboxSSii((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)o,bbt_Text,bbt_tip,bbt_icon,bbt_flags);
		((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ,1))[((BBUINT)bbt_index)]->_maxgui_proxygadgets_checklistbox_singleitem_label ->_maxgui_maxgui_gadget_tgadget_extra =(BBOBJECT)bbt_extra;
		if(bbt_icon>-1){
			struct brl_pixmap_TPixmap_obj* bbt_px2=(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)o->_maxgui_proxygadgets_checklistbox_tchecklistbox_myiconstrip ,bbt_icon);
			maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ,1))[((BBUINT)bbt_index)]->_maxgui_proxygadgets_checklistbox_singleitem_icon ,(struct brl_pixmap_TPixmap_obj*)bbt_px2,1);
			((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ,1))[((BBUINT)bbt_index)]->_maxgui_proxygadgets_checklistbox_singleitem_iconnumber =bbt_icon;
		}
	}
	BBINT bbt_num=(((o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ->scales[0])-o->_maxgui_proxygadgets_checklistbox_tchecklistbox_visible )+1);
	if(((BBObject*)o->_maxgui_proxygadgets_checklistbox_tchecklistbox_slider )!= &bbNullObject){
		maxgui_maxgui_SetSliderRange((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_checklistbox_tchecklistbox_slider ,0,bbt_num);
	}
	return 0;
}
BBINT _maxgui_proxygadgets_checklistbox_Tchecklistbox_SetIconStrip_TTIconStrip(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* o,struct maxgui_maxgui_iconstrip_TIconStrip_obj* bbt__iconstrip){
	o->_maxgui_proxygadgets_checklistbox_tchecklistbox_myiconstrip =(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbt__iconstrip;
	return 0;
}
BBINT _maxgui_proxygadgets_checklistbox_Tchecklistbox_SetFont_TTGuiFont(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* o,struct maxgui_maxgui_guifont_TGuiFont_obj* bbt_fnt){
	if(bbt_fnt==&bbNullObject){
		return -1;
	}
	o->_maxgui_proxygadgets_checklistbox_tchecklistbox_item_h =((BBINT)((maxgui_maxgui_FontSize((struct maxgui_maxgui_guifont_TGuiFont_obj*)bbt_fnt)*2.0000000000000000)+4.0000000000000000));
	if(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_item_h <20){
		o->_maxgui_proxygadgets_checklistbox_tchecklistbox_item_h =20;
	}
	if(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it !=&bbEmptyArray){
		BBARRAY bbt_=o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ;
		BBUINT bbt_2=0U;
		while(bbt_2<((BBUINT)(bbt_->scales[0]))){
			struct maxgui_proxygadgets_checklistbox_SingleItem_obj* bbt_iu=(struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATA(bbt_,1))[bbt_2];
			bbt_2=(bbt_2+1U);
			if(bbt_iu==&bbNullObject){
				continue;
			}
			(bbt_iu)->clas->m_SetFont_TTGuiFont((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbt_iu,(struct maxgui_maxgui_guifont_TGuiFont_obj*)bbt_fnt);
		}
	}
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)o)->clas->m__refresh((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)o);
	return 0;
}
BBINT _maxgui_proxygadgets_checklistbox_Tchecklistbox_SelectItem_ii(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* o,BBINT bbt_index,BBINT bbt_op){
	if(bbt_index==-1){
		if((bbt_op==0) || (bbt_op==1)){
			BBARRAY bbt_=o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ;
			BBUINT bbt_2=0U;
			while(bbt_2<((BBUINT)(bbt_->scales[0]))){
				struct maxgui_proxygadgets_checklistbox_SingleItem_obj* bbt_ss=(struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATA(bbt_,1))[bbt_2];
				bbt_2=(bbt_2+1U);
				if(bbt_ss==&bbNullObject){
					continue;
				}
				if(((BBObject*)bbt_ss)!= &bbNullObject){
					maxgui_maxgui_SetButtonState((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_ss->_maxgui_proxygadgets_checklistbox_singleitem_check ,bbt_op);
				}
			}
		}else{
			BBARRAY bbt_3=o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ;
			BBUINT bbt_4=0U;
			while(bbt_4<((BBUINT)(bbt_3->scales[0]))){
				struct maxgui_proxygadgets_checklistbox_SingleItem_obj* bbt_ss2=(struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATA(bbt_3,1))[bbt_4];
				bbt_4=(bbt_4+1U);
				if(bbt_ss2==&bbNullObject){
					continue;
				}
				if(((BBObject*)bbt_ss2)!= &bbNullObject){
					maxgui_maxgui_SetButtonState((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_ss2->_maxgui_proxygadgets_checklistbox_singleitem_check ,(1-maxgui_maxgui_ButtonState((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_ss2->_maxgui_proxygadgets_checklistbox_singleitem_check )));
				}
			}
		}
	}else{
		if(bbt_index<(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ->scales[0])){
			if((bbt_op==0) || (bbt_op==1)){
				maxgui_maxgui_SetButtonState((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ,1))[((BBUINT)bbt_index)]->_maxgui_proxygadgets_checklistbox_singleitem_check ,bbt_op);
			}else{
				maxgui_maxgui_SetButtonState((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ,1))[((BBUINT)bbt_index)]->_maxgui_proxygadgets_checklistbox_singleitem_check ,(1-maxgui_maxgui_ButtonState((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ,1))[((BBUINT)bbt_index)]->_maxgui_proxygadgets_checklistbox_singleitem_check )));
			}
		}
	}
	return 0;
}
BBINT _maxgui_proxygadgets_checklistbox_Tchecklistbox_SetEnabled_i(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* o,BBINT bbt_status){
	if(bbt_status==1){
		maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_checklistbox_tchecklistbox_slider );
		maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel );
	}else{
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_checklistbox_tchecklistbox_slider );
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel );
	}
	BBARRAY bbt_=o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ;
	BBUINT bbt_2=0U;
	while(bbt_2<((BBUINT)(bbt_->scales[0]))){
		struct maxgui_proxygadgets_checklistbox_SingleItem_obj* bbt_ss=(struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATA(bbt_,1))[bbt_2];
		bbt_2=(bbt_2+1U);
		if(bbt_ss==&bbNullObject){
			continue;
		}
		(bbt_ss)->clas->m_SetEnabled_i((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbt_ss,bbt_status);
	}
	return 0;
}
BBINT _maxgui_proxygadgets_checklistbox_Tchecklistbox_ItemCount(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* o){
	return (o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ->scales[0]);
}
BBINT _maxgui_proxygadgets_checklistbox_Tchecklistbox_Class(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* o){
	return 21;
}
BBINT _maxgui_proxygadgets_checklistbox_Tchecklistbox_RemoveItem_i(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* o,BBINT bbt_index){
	struct maxgui_proxygadgets_checklistbox_SingleItem_obj* bbt_;
	((bbt_ = ((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ,1))[((BBUINT)bbt_index)])->clas)->m_Clear((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbt_);
	((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ,1))[((BBUINT)bbt_index)]=(struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)&bbNullObject;
	{
		BBINT bbt_t=(bbt_index+1);
		BBINT bbt_2=(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ->scales[0]);
		for(;(bbt_t<bbt_2);bbt_t=(bbt_t+1)){
			((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ,1))[((BBUINT)(bbt_t-1))]=(struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ,1))[((BBUINT)bbt_t)];
		}
	}
	o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it =bbArraySlice(":SingleItem",o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ,0,((o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ->scales[0])-1));
	{
		BBINT bbt_t2=bbt_index;
		BBINT bbt_3=(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ->scales[0]);
		for(;(bbt_t2<bbt_3);bbt_t2=(bbt_t2+1)){
			maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ,1))[((BBUINT)bbt_t2)]->_maxgui_proxygadgets_checklistbox_singleitem_panel ,0,(bbt_t2*o->_maxgui_proxygadgets_checklistbox_tchecklistbox_item_h ),o->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel_width ,o->_maxgui_proxygadgets_checklistbox_tchecklistbox_item_h );
		}
	}
	if(((BBObject*)o->_maxgui_proxygadgets_checklistbox_tchecklistbox_slider )!= &bbNullObject){
		maxgui_maxgui_SetSliderRange((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_checklistbox_tchecklistbox_slider ,(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ->scales[0]),o->_maxgui_proxygadgets_checklistbox_tchecklistbox_visible );
	}
	return 0;
}
BBINT _maxgui_proxygadgets_checklistbox_Tchecklistbox__refresh(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* o){
	{
		BBINT bbt_t=0;
		BBINT bbt_=(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ->scales[0]);
		for(;(bbt_t<bbt_);bbt_t=(bbt_t+1)){
			maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ,1))[((BBUINT)bbt_t)]->_maxgui_proxygadgets_checklistbox_singleitem_panel ,0,(bbt_t*o->_maxgui_proxygadgets_checklistbox_tchecklistbox_item_h ),o->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel_width ,o->_maxgui_proxygadgets_checklistbox_tchecklistbox_item_h );
			maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ,1))[((BBUINT)bbt_t)]->_maxgui_proxygadgets_checklistbox_singleitem_label ,40,2,o->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel_width ,o->_maxgui_proxygadgets_checklistbox_tchecklistbox_item_h );
		}
	}
	return 0;
}
BBINT _maxgui_proxygadgets_checklistbox_Tchecklistbox_SetItem_iSSiTObjecti(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* o,BBINT bbt_index,BBSTRING bbt_Text,BBSTRING bbt_tip,BBINT bbt_icon,BBOBJECT bbt_extra,BBINT bbt_flags){
	struct maxgui_proxygadgets_checklistbox_SingleItem_obj* bbt_;
	((bbt_ = ((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ,1))[((BBUINT)bbt_index)])->clas)->m_Change_SSii((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbt_,bbt_Text,bbt_tip,bbt_icon,bbt_flags);
	return 0;
}
BBSTRING _maxgui_proxygadgets_checklistbox_Tchecklistbox_ItemText_i(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* o,BBINT bbt_index){
	return maxgui_maxgui_GadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ,1))[((BBUINT)bbt_index)]->_maxgui_proxygadgets_checklistbox_singleitem_label );
}
BBSTRING _maxgui_proxygadgets_checklistbox_Tchecklistbox_ItemTip_i(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* o,BBINT bbt_index){
	struct maxgui_maxgui_gadget_TGadget_obj* bbt_;
	return (((struct maxgui_maxgui_gadget_TGadget_obj*)(bbt_ = ((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ,1))[((BBUINT)bbt_index)]->_maxgui_proxygadgets_checklistbox_singleitem_label ))->clas)->m_GetTooltip((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_);
}
BBOBJECT _maxgui_proxygadgets_checklistbox_Tchecklistbox_ItemExtra_i(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* o,BBINT bbt_index){
	return (BBOBJECT)maxgui_maxgui_GadgetExtra((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ,1))[((BBUINT)bbt_index)]->_maxgui_proxygadgets_checklistbox_singleitem_label );
}
BBINT _maxgui_proxygadgets_checklistbox_Tchecklistbox_ItemIcon_i(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* o,BBINT bbt_index){
	return ((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ,1))[((BBUINT)bbt_index)]->_maxgui_proxygadgets_checklistbox_singleitem_iconnumber ;
}
BBINT _maxgui_proxygadgets_checklistbox_Tchecklistbox_ItemState_i(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* o,BBINT bbt_index){
	return maxgui_maxgui_ButtonState((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ,1))[((BBUINT)bbt_index)]->_maxgui_proxygadgets_checklistbox_singleitem_check );
}
BBINT _maxgui_proxygadgets_checklistbox_Tchecklistbox_Clear(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* o){
	BBARRAY bbt_=o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ;
	BBUINT bbt_2=0U;
	while(bbt_2<((BBUINT)(bbt_->scales[0]))){
		struct maxgui_proxygadgets_checklistbox_SingleItem_obj* bbt_ss=(struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATA(bbt_,1))[bbt_2];
		bbt_2=(bbt_2+1U);
		if(bbt_ss==&bbNullObject){
			continue;
		}
		(bbt_ss)->clas->m_Clear((struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)bbt_ss);
		bbt_ss=(struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)&bbNullObject;
	}
	o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it =&bbEmptyArray;
	return 0;
}
BBINT _maxgui_proxygadgets_checklistbox_Tchecklistbox_SetColor_iii(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* o,BBINT bbt_r,BBINT bbt_g,BBINT bbt_b){
	maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel ,bbt_r,bbt_g,bbt_b,1);
	BBARRAY bbt_=o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ;
	BBUINT bbt_2=0U;
	while(bbt_2<((BBUINT)(bbt_->scales[0]))){
		struct maxgui_proxygadgets_checklistbox_SingleItem_obj* bbt_si=(struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATA(bbt_,1))[bbt_2];
		bbt_2=(bbt_2+1U);
		if(bbt_si==&bbNullObject){
			continue;
		}
		maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_si->_maxgui_proxygadgets_checklistbox_singleitem_panel ,bbt_r,bbt_g,bbt_b,1);
		maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_si->_maxgui_proxygadgets_checklistbox_singleitem_label ,bbt_r,bbt_g,bbt_b,1);
		maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_si->_maxgui_proxygadgets_checklistbox_singleitem_check ,bbt_r,bbt_g,bbt_b,1);
	}
	o->_maxgui_proxygadgets_checklistbox_tchecklistbox__r =bbt_r;
	o->_maxgui_proxygadgets_checklistbox_tchecklistbox__g =bbt_g;
	o->_maxgui_proxygadgets_checklistbox_tchecklistbox__b =bbt_b;
	return 0;
}
BBARRAY _maxgui_proxygadgets_checklistbox_Tchecklistbox_SelectedItems(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* o){
	BBINT bbt_count=0;
	BBINT bbt_i=0;
	BBARRAY volatile bbt_array=bbArrayNew1D("i", (o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ->scales[0]));
	BBINT bbt_=(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ->scales[0]);
	for(bbt_i=0;(bbt_i<bbt_);bbt_i=(bbt_i+1)){
		if(((BBObject*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ,1))[((BBUINT)bbt_i)])!= &bbNullObject){
			if(maxgui_maxgui_ButtonState((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ,1))[((BBUINT)bbt_i)]->_maxgui_proxygadgets_checklistbox_singleitem_check )==1){
				((BBINT*)BBARRAYDATA(bbt_array,1))[((BBUINT)bbt_count)]=bbt_i;
				bbt_count+=1;
			}
		}
	}
	if(bbt_count>0){
		return bbArraySlice("i",bbt_array,0,bbt_count);
	}
	return &bbEmptyArray;
}
BBINT _maxgui_proxygadgets_checklistbox_Tchecklistbox_CleanUp(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* o){
	brl_hook_RemoveHook(brl_event_EmitEventHook,o->clas->f_eventHandler_TObject_iTObjectTObject,(BBOBJECT)o);
	((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)->clas->m_SetProxy_TTGadget((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o,(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject);
	((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)o)->clas->m_Clear((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)o);
	if(((BBObject*)o->_maxgui_proxygadgets_checklistbox_tchecklistbox_slider )!= &bbNullObject){
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_checklistbox_tchecklistbox_slider );
	}
	if(((BBObject*)o->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel )!= &bbNullObject){
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel );
	}
	(&maxgui_proxygadgets_checklistbox_Tchecklistbox)->super->m_CleanUp((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o);
	return 0;
}
BBINT _maxgui_proxygadgets_checklistbox_Tchecklistbox_Free(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* o){
	return 0;
}
struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* maxgui_proxygadgets_checklistbox_Tchecklistbox_Create_TTchecklistbox_iiiiTTGadgeti(BBINT bbt_x,BBINT bbt_y,BBINT bbt_w,BBINT bbt_h,struct maxgui_maxgui_gadget_TGadget_obj* bbt_group,BBINT bbt_style){
	struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* bbt_mb=(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbObjectNew((BBClass *)&maxgui_proxygadgets_checklistbox_Tchecklistbox);
	bbt_mb->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreatePanel(bbt_x,bbt_y,(bbt_w-20),bbt_h,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group,4,&bbEmptyString);
	bbt_mb->_maxgui_proxygadgets_checklistbox_tchecklistbox_style =bbt_style;
	bbt_mb->_maxgui_proxygadgets_checklistbox_tchecklistbox_slider =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateSlider(((bbt_x+bbt_w)-20),bbt_y,20,bbt_h,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group,2);
	maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_mb->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel ,1,1,1,1);
	maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_mb->_maxgui_proxygadgets_checklistbox_tchecklistbox_slider ,1,1,1,1);
	maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_mb->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel ,255,255,255,1);
	maxgui_maxgui_ActivateGadget((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_mb->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel );
	brl_hook_AddHook(brl_event_EmitEventHook,maxgui_proxygadgets_checklistbox_Tchecklistbox_eventHandler_TObject_iTObjectTObject,(BBOBJECT)bbt_mb,-1);
	(bbt_mb)->clas->m_SetProxy_TTGadget((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbt_mb,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_mb->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel );
	bbt_mb->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel_width =maxgui_maxgui_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_mb->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel );
	bbt_mb->_maxgui_proxygadgets_checklistbox_tchecklistbox_visible =(bbt_h/bbt_mb->_maxgui_proxygadgets_checklistbox_tchecklistbox_item_h );
	return (struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbt_mb;
}
BBOBJECT maxgui_proxygadgets_checklistbox_Tchecklistbox_eventHandler_TObject_iTObjectTObject(BBINT bbt_pID,BBOBJECT bbt_pData,BBOBJECT bbt_pContext){
	struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* bbt_tmpSuperPanel=(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbObjectDowncast((BBOBJECT)bbt_pContext,(BBClass*)&maxgui_proxygadgets_checklistbox_Tchecklistbox));
	if(((BBObject*)bbt_tmpSuperPanel)!= &bbNullObject){
		bbt_pData=(BBOBJECT)(bbt_tmpSuperPanel)->clas->m_EventHook_iTObjectTObject((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbt_tmpSuperPanel,bbt_pID,(BBOBJECT)bbt_pData,(BBOBJECT)bbt_pContext);
	}
	return (BBOBJECT)bbt_pData;
}
BBOBJECT _maxgui_proxygadgets_checklistbox_Tchecklistbox_EventHook_iTObjectTObject(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* o,BBINT bbt_id,BBOBJECT bbt_data,BBOBJECT bbt_context){
	struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* bbt_mb=(struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)&bbNullObject;
	struct brl_event_TEvent_obj* bbt_event=(struct brl_event_TEvent_obj*)&bbNullObject;
	BBINT bbt_con=0;
	bbt_event=(struct brl_event_TEvent_obj*)((struct brl_event_TEvent_obj*)bbObjectDowncast((BBOBJECT)bbt_data,(BBClass*)&brl_event_TEvent));
	if(bbt_event==&bbNullObject){
		return (BBOBJECT)bbt_data;
	}
	BBINT bbt_=bbt_event->_brl_event_tevent_id ;
	if(bbt_==1025){
		BBARRAY bbt_2=o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ;
		BBUINT bbt_3=0U;
		while(bbt_3<((BBUINT)(bbt_2->scales[0]))){
			struct maxgui_proxygadgets_checklistbox_SingleItem_obj* bbt_what=(struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATA(bbt_2,1))[bbt_3];
			bbt_3=(bbt_3+1U);
			if(bbt_what==&bbNullObject){
				continue;
			}
			maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_what->_maxgui_proxygadgets_checklistbox_singleitem_panel ,bbt_what->_maxgui_proxygadgets_checklistbox_singleitem_parent ->_maxgui_proxygadgets_checklistbox_tchecklistbox__r ,bbt_what->_maxgui_proxygadgets_checklistbox_singleitem_parent ->_maxgui_proxygadgets_checklistbox_tchecklistbox__g ,bbt_what->_maxgui_proxygadgets_checklistbox_singleitem_parent ->_maxgui_proxygadgets_checklistbox_tchecklistbox__b ,1);
		}
		BBARRAY bbt_4=o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ;
		BBUINT bbt_5=0U;
		while(bbt_5<((BBUINT)(bbt_4->scales[0]))){
			struct maxgui_proxygadgets_checklistbox_SingleItem_obj* bbt_what2=(struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATA(bbt_4,1))[bbt_5];
			bbt_5=(bbt_5+1U);
			if(bbt_what2==&bbNullObject){
				continue;
			}
			maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_what2->_maxgui_proxygadgets_checklistbox_singleitem_panel ,bbt_what2->_maxgui_proxygadgets_checklistbox_singleitem_parent ->_maxgui_proxygadgets_checklistbox_tchecklistbox__r ,bbt_what2->_maxgui_proxygadgets_checklistbox_singleitem_parent ->_maxgui_proxygadgets_checklistbox_tchecklistbox__g ,bbt_what2->_maxgui_proxygadgets_checklistbox_singleitem_parent ->_maxgui_proxygadgets_checklistbox_tchecklistbox__b ,1);
			if(bbt_what2->_maxgui_proxygadgets_checklistbox_singleitem_label ==bbt_event->_brl_event_tevent_source ){
				brl_event_EmitEvent((struct brl_event_TEvent_obj*)brl_event_CreateEvent(8195,(BBOBJECT)o,bbt_con,0,maxgui_maxgui_ButtonState((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_what2->_maxgui_proxygadgets_checklistbox_singleitem_check ),0,(BBOBJECT)maxgui_maxgui_GadgetExtra((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_what2->_maxgui_proxygadgets_checklistbox_singleitem_label )));
				maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_what2->_maxgui_proxygadgets_checklistbox_singleitem_panel ,(255-(bbt_what2->_maxgui_proxygadgets_checklistbox_singleitem_parent ->_maxgui_proxygadgets_checklistbox_tchecklistbox__r /2)),(255-(bbt_what2->_maxgui_proxygadgets_checklistbox_singleitem_parent ->_maxgui_proxygadgets_checklistbox_tchecklistbox__g /2)),(255-(bbt_what2->_maxgui_proxygadgets_checklistbox_singleitem_parent ->_maxgui_proxygadgets_checklistbox_tchecklistbox__b /2)),1);
				bbt_data=(BBOBJECT)&bbNullObject;
				return (BBOBJECT)bbt_data;
			}
			bbt_con+=1;
		}
	}else{
		if(bbt_==1028){
			o->_maxgui_proxygadgets_checklistbox_tchecklistbox_current_position -=brl_eventqueue_CurrentEvent->_brl_event_tevent_data ;
			if(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_current_position <0){
				o->_maxgui_proxygadgets_checklistbox_tchecklistbox_current_position =0;
			}
			if(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_current_position >((o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ->scales[0])-o->_maxgui_proxygadgets_checklistbox_tchecklistbox_visible )){
				o->_maxgui_proxygadgets_checklistbox_tchecklistbox_current_position =((o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ->scales[0])-o->_maxgui_proxygadgets_checklistbox_tchecklistbox_visible );
			}
			bbt_con=0;
			BBARRAY bbt_6=o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ;
			BBUINT bbt_7=0U;
			while(bbt_7<((BBUINT)(bbt_6->scales[0]))){
				struct maxgui_proxygadgets_checklistbox_SingleItem_obj* bbt_what3=(struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATA(bbt_6,1))[bbt_7];
				bbt_7=(bbt_7+1U);
				if(bbt_what3==&bbNullObject){
					continue;
				}
				maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_what3->_maxgui_proxygadgets_checklistbox_singleitem_panel ,0,((bbt_con*bbt_what3->_maxgui_proxygadgets_checklistbox_singleitem_item_h )-(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_current_position *bbt_what3->_maxgui_proxygadgets_checklistbox_singleitem_item_h )),o->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel_width ,bbt_what3->_maxgui_proxygadgets_checklistbox_singleitem_item_h );
				if((maxgui_maxgui_GadgetY((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_what3->_maxgui_proxygadgets_checklistbox_singleitem_panel )<0) || (maxgui_maxgui_GadgetY((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_what3->_maxgui_proxygadgets_checklistbox_singleitem_panel )>((maxgui_maxgui_GadgetY((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel )+maxgui_maxgui_GadgetHeight((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel ))+bbt_what3->_maxgui_proxygadgets_checklistbox_singleitem_item_h ))){
					maxgui_maxgui_HideGadget((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_what3->_maxgui_proxygadgets_checklistbox_singleitem_panel );
				}else{
					maxgui_maxgui_ShowGadget((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_what3->_maxgui_proxygadgets_checklistbox_singleitem_panel );
				}
				bbt_con+=1;
			}
			maxgui_maxgui_SetSliderValue((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_checklistbox_tchecklistbox_slider ,o->_maxgui_proxygadgets_checklistbox_tchecklistbox_current_position );
		}else{
			if(bbt_==8193){
				BBARRAY bbt_8=o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ;
				BBUINT bbt_9=0U;
				while(bbt_9<((BBUINT)(bbt_8->scales[0]))){
					struct maxgui_proxygadgets_checklistbox_SingleItem_obj* bbt_what4=(struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATA(bbt_8,1))[bbt_9];
					bbt_9=(bbt_9+1U);
					if(bbt_what4==&bbNullObject){
						continue;
					}
					if(bbt_what4->_maxgui_proxygadgets_checklistbox_singleitem_check ==bbt_event->_brl_event_tevent_source ){
						brl_event_EmitEvent((struct brl_event_TEvent_obj*)brl_event_CreateEvent(8193,(BBOBJECT)o,bbt_con,0,maxgui_maxgui_ButtonState((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_what4->_maxgui_proxygadgets_checklistbox_singleitem_check ),0,(BBOBJECT)&bbNullObject));
						bbt_data=(BBOBJECT)&bbNullObject;
						return (BBOBJECT)bbt_data;
					}
					bbt_con+=1;
				}
				BBOBJECT bbt_10=(BBOBJECT)bbt_event->_brl_event_tevent_source ;
				if(bbt_10==o->_maxgui_proxygadgets_checklistbox_tchecklistbox_slider ){
					o->_maxgui_proxygadgets_checklistbox_tchecklistbox_current_position =maxgui_maxgui_SliderValue((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_checklistbox_tchecklistbox_slider );
					if(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_current_position <0){
						o->_maxgui_proxygadgets_checklistbox_tchecklistbox_current_position =0;
					}
					if(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_current_position >(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ->scales[0])){
						o->_maxgui_proxygadgets_checklistbox_tchecklistbox_current_position =(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ->scales[0]);
					}
					BBINT bbt_con2=0;
					BBARRAY bbt_11=o->_maxgui_proxygadgets_checklistbox_tchecklistbox_it ;
					BBUINT bbt_12=0U;
					while(bbt_12<((BBUINT)(bbt_11->scales[0]))){
						struct maxgui_proxygadgets_checklistbox_SingleItem_obj* bbt_what5=(struct maxgui_proxygadgets_checklistbox_SingleItem_obj*)((struct maxgui_proxygadgets_checklistbox_SingleItem_obj**)BBARRAYDATA(bbt_11,1))[bbt_12];
						bbt_12=(bbt_12+1U);
						if(bbt_what5==&bbNullObject){
							continue;
						}
						maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_what5->_maxgui_proxygadgets_checklistbox_singleitem_panel ,0,((bbt_con2*bbt_what5->_maxgui_proxygadgets_checklistbox_singleitem_item_h )-(o->_maxgui_proxygadgets_checklistbox_tchecklistbox_current_position *bbt_what5->_maxgui_proxygadgets_checklistbox_singleitem_item_h )),o->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel_width ,bbt_what5->_maxgui_proxygadgets_checklistbox_singleitem_item_h );
						if((maxgui_maxgui_GadgetY((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_what5->_maxgui_proxygadgets_checklistbox_singleitem_panel )<0) || (maxgui_maxgui_GadgetY((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_what5->_maxgui_proxygadgets_checklistbox_singleitem_panel )>((maxgui_maxgui_GadgetY((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel )+maxgui_maxgui_GadgetHeight((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_checklistbox_tchecklistbox_panel ))+bbt_what5->_maxgui_proxygadgets_checklistbox_singleitem_item_h ))){
							maxgui_maxgui_HideGadget((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_what5->_maxgui_proxygadgets_checklistbox_singleitem_panel );
						}else{
							maxgui_maxgui_ShowGadget((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_what5->_maxgui_proxygadgets_checklistbox_singleitem_panel );
						}
						bbt_con2+=1;
					}
				}else{
					return (BBOBJECT)bbt_data;
				}
				bbt_data=(BBOBJECT)&bbNullObject;
			}
		}
	}
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
	return (struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)maxgui_proxygadgets_checklistbox_Tchecklistbox_Create_TTchecklistbox_iiiiTTGadgeti(bbt_x,bbt_y,bbt_w,bbt_h,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_win,bbt_style);
}
BBINT maxgui_proxygadgets_checklistbox_ListAddExclusion(struct maxgui_maxgui_gadget_TGadget_obj* bbt_gad,BBSTRING bbt_lista){
	struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* bbt_;
	(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)(bbt_ = ((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbObjectDowncast((BBOBJECT)bbt_gad,(BBClass*)&maxgui_proxygadgets_checklistbox_Tchecklistbox))))->clas)->m_AddExclusion_S((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbt_,bbt_lista);
	return 0;
}
BBINT maxgui_proxygadgets_checklistbox_ListCleanExclusion(struct maxgui_maxgui_gadget_TGadget_obj* bbt_gad){
	struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj* bbt_;
	(((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)(bbt_ = ((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbObjectDowncast((BBOBJECT)bbt_gad,(BBClass*)&maxgui_proxygadgets_checklistbox_Tchecklistbox))))->clas)->m_CleanExclusion((struct maxgui_proxygadgets_checklistbox_Tchecklistbox_obj*)bbt_);
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
		return 0;
	}
	return 0;
}