#include "ListManager.bmx.release.win32.x64.h"
static BBString _s22={
	&bbStringClass,
	1,
	{32}
};
static BBString _s14={
	&bbStringClass,
	3,
	{32,43,32}
};
static BBString _s15={
	&bbStringClass,
	3,
	{32,45,32}
};
static BBString _s16={
	&bbStringClass,
	3,
	{32,94,32}
};
static BBString _s17={
	&bbStringClass,
	3,
	{32,118,32}
};
static BBString _s21={
	&bbStringClass,
	10,
	{37,37,78,85,77,66,69,82,37,37}
};
static BBString _s11={
	&bbStringClass,
	1,
	{44}
};
static BBString _s25={
	&bbStringClass,
	1,
	{46}
};
static BBString _s26={
	&bbStringClass,
	2,
	{46,46}
};
static BBString _s27={
	&bbStringClass,
	1,
	{47}
};
static BBString _s10={
	&bbStringClass,
	1,
	{59}
};
static BBString _s13={
	&bbStringClass,
	12,
	{59,65,108,108,32,102,105,108,101,115,58,42}
};
static BBString _s5={
	&bbStringClass,
	3,
	{65,100,100}
};
static BBString _s1={
	&bbStringClass,
	10,
	{65,100,100,32,97,32,102,105,108,101}
};
static BBString _s18={
	&bbStringClass,
	5,
	{67,108,101,97,114}
};
static BBString _s2={
	&bbStringClass,
	19,
	{67,108,101,97,114,32,97,108,108,32,116,104,101,32,105,116,101
	,109,115}
};
static BBString _s20={
	&bbStringClass,
	6,
	{68,69,70,32,58,32}
};
static BBString _s19={
	&bbStringClass,
	3,
	{68,105,114}
};
static BBString _s8={
	&bbStringClass,
	23,
	{77,111,118,101,32,100,111,119,110,32,115,101,108,101,99,116,101
	,100,32,105,116,101,109}
};
static BBString _s7={
	&bbStringClass,
	21,
	{77,111,118,101,32,117,112,32,115,101,108,101,99,116,101,100,32
	,105,116,101,109}
};
static BBString _s6={
	&bbStringClass,
	6,
	{82,101,109,111,118,101}
};
static BBString _s9={
	&bbStringClass,
	32,
	{83,99,97,110,32,97,32,102,111,108,100,101,114,32,97,110,100
	,32,97,100,100,115,32,116,104,101,32,102,105,108,101,115}
};
static BBString _s3={
	&bbStringClass,
	15,
	{83,101,108,101,99,116,32,97,32,102,111,108,100,101,114}
};
static BBString _s12={
	&bbStringClass,
	5,
	{85,115,101,114,58}
};
static BBString _s4={
	&bbStringClass,
	58,
	{87,97,114,110,105,110,103,33,33,33,32,84,104,101,114,101,32
	,97,114,101,32,37,37,78,85,77,66,69,82,37,37,32,102
	,105,108,101,115,10,32,116,111,32,97,100,100,32,116,111,32
	,116,104,101,32,108,105,115,116,33}
};
static BBString _s23={
	&bbStringClass,
	1,
	{92}
};
static BBString _s24={
	&bbStringClass,
	2,
	{92,92}
};
static BBString _s0={
	&bbStringClass,
	3,
	{101,120,101}
};
struct BBDebugScope_5{int kind; const char *name; BBDebugDecl decls[6]; };
struct BBDebugScope_61{int kind; const char *name; BBDebugDecl decls[62]; };
void _maxgui_proxygadgets_listmanager_TlistManager_New(struct maxgui_proxygadgets_listmanager_TlistManager_obj* o) {
	_maxgui_maxgui_gadget_TProxyGadget_New((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o);
	o->clas = &maxgui_proxygadgets_listmanager_TlistManager;
	o->_maxgui_proxygadgets_listmanager_tlistmanager_fpointer_filter = &brl_blitz_NullFunctionError;
	o->_maxgui_proxygadgets_listmanager_tlistmanager_sid = &bbEmptyString;
	o->_maxgui_proxygadgets_listmanager_tlistmanager_parent = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_listmanager_tlistmanager_panel = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_listmanager_tlistmanager_list_box = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_add = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_remove = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_up = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_down = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_clear = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_adddir = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_listmanager_tlistmanager_txt_item = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_listmanager_tlistmanager_filter = &bbEmptyString;
	o->_maxgui_proxygadgets_listmanager_tlistmanager_path = &bbEmptyString;
	o->_maxgui_proxygadgets_listmanager_tlistmanager_reqfilter = &bbEmptyString;
	o->_maxgui_proxygadgets_listmanager_tlistmanager_filter_items = &bbEmptyArray;
	o->_maxgui_proxygadgets_listmanager_tlistmanager_last_selected = -1;
	o->_maxgui_proxygadgets_listmanager_tlistmanager__list_manager_icons = (struct maxgui_maxgui_iconstrip_TIconStrip_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_listmanager_tlistmanager__list_manager_icons_disabled = (struct maxgui_maxgui_iconstrip_TIconStrip_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_listmanager_tlistmanager_hidden = 0;
	o->_maxgui_proxygadgets_listmanager_tlistmanager_style = 0;
}
BBINT _maxgui_proxygadgets_listmanager_TlistManager_SetFont_TTGuiFont(struct maxgui_proxygadgets_listmanager_TlistManager_obj* o,struct maxgui_maxgui_guifont_TGuiFont_obj* bbt_fnt){
	if(bbt_fnt==&bbNullObject){
		return 0;
	}
	if(((BBObject*)o->_maxgui_proxygadgets_listmanager_tlistmanager_list_box )!= &bbNullObject){
		maxgui_maxgui_SetGadgetFont((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_list_box ,(struct maxgui_maxgui_guifont_TGuiFont_obj*)bbt_fnt,0);
	}
	if(((BBObject*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_add )!= &bbNullObject){
		maxgui_maxgui_SetGadgetFont((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_add ,(struct maxgui_maxgui_guifont_TGuiFont_obj*)bbt_fnt,0);
	}
	if(((BBObject*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_remove )!= &bbNullObject){
		maxgui_maxgui_SetGadgetFont((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_remove ,(struct maxgui_maxgui_guifont_TGuiFont_obj*)bbt_fnt,0);
	}
	if(((BBObject*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_up )!= &bbNullObject){
		maxgui_maxgui_SetGadgetFont((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_up ,(struct maxgui_maxgui_guifont_TGuiFont_obj*)bbt_fnt,0);
	}
	if(((BBObject*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_down )!= &bbNullObject){
		maxgui_maxgui_SetGadgetFont((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_down ,(struct maxgui_maxgui_guifont_TGuiFont_obj*)bbt_fnt,0);
	}
	if(((BBObject*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_clear )!= &bbNullObject){
		maxgui_maxgui_SetGadgetFont((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_clear ,(struct maxgui_maxgui_guifont_TGuiFont_obj*)bbt_fnt,0);
	}
	if(((BBObject*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_adddir )!= &bbNullObject){
		maxgui_maxgui_SetGadgetFont((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_adddir ,(struct maxgui_maxgui_guifont_TGuiFont_obj*)bbt_fnt,0);
	}
	if(((BBObject*)o->_maxgui_proxygadgets_listmanager_tlistmanager_txt_item )!= &bbNullObject){
		maxgui_maxgui_SetGadgetFont((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_txt_item ,(struct maxgui_maxgui_guifont_TGuiFont_obj*)bbt_fnt,0);
	}
	return 0;
}
BBINT _maxgui_proxygadgets_listmanager_TlistManager_SetEnabled_i(struct maxgui_proxygadgets_listmanager_TlistManager_obj* o,BBINT bbt_sta){
	if(bbt_sta!=0){
		((struct maxgui_proxygadgets_listmanager_TlistManager_obj*)o)->clas->m_EnableAll((struct maxgui_proxygadgets_listmanager_TlistManager_obj*)o);
	}else{
		((struct maxgui_proxygadgets_listmanager_TlistManager_obj*)o)->clas->m_DisableAll((struct maxgui_proxygadgets_listmanager_TlistManager_obj*)o);
	}
	return 0;
}
BBINT _maxgui_proxygadgets_listmanager_TlistManager_SelectFilter_S(struct maxgui_proxygadgets_listmanager_TlistManager_obj* o,BBSTRING bbt__filter){
	if(bbt__filter==&bbEmptyString){
		o->_maxgui_proxygadgets_listmanager_tlistmanager_filter =&bbEmptyString;
		o->_maxgui_proxygadgets_listmanager_tlistmanager_filter_items =bbArraySlice("$",o->_maxgui_proxygadgets_listmanager_tlistmanager_filter_items ,0,0);
		o->_maxgui_proxygadgets_listmanager_tlistmanager_reqfilter =&bbEmptyString;
		return -1;
	}
	o->_maxgui_proxygadgets_listmanager_tlistmanager_filter =bbt__filter;
	BBINT bbt_Current_item=0;
	BBARRAY bbt_=bbStringSplit((BBSTRING)bbt__filter,&_s10);
	BBUINT bbt_2=0U;
	while(bbt_2<((BBUINT)(bbt_->scales[0]))){
		BBSTRING bbt_it=((BBSTRING*)BBARRAYDATA(bbt_,1))[bbt_2];
		bbt_2=(bbt_2+1U);
		o->_maxgui_proxygadgets_listmanager_tlistmanager_filter_items =bbArraySlice("$",o->_maxgui_proxygadgets_listmanager_tlistmanager_filter_items ,0,(bbt_Current_item+1));
		((BBSTRING*)BBARRAYDATA(o->_maxgui_proxygadgets_listmanager_tlistmanager_filter_items ,1))[((BBUINT)bbt_Current_item)]=bbStringToLower((BBSTRING)bbt_it);
		o->_maxgui_proxygadgets_listmanager_tlistmanager_reqfilter =bbStringConcat(bbStringConcat(o->_maxgui_proxygadgets_listmanager_tlistmanager_reqfilter ,bbStringToLower((BBSTRING)bbt_it)),&_s11);
		bbt_Current_item+=1;
	}
	o->_maxgui_proxygadgets_listmanager_tlistmanager_reqfilter =bbStringSlice(o->_maxgui_proxygadgets_listmanager_tlistmanager_reqfilter ,0,((o->_maxgui_proxygadgets_listmanager_tlistmanager_reqfilter )->length-1));
	o->_maxgui_proxygadgets_listmanager_tlistmanager_reqfilter =bbStringConcat(bbStringConcat(&_s12,o->_maxgui_proxygadgets_listmanager_tlistmanager_reqfilter ),&_s13);
	return 0;
}
BBINT _maxgui_proxygadgets_listmanager_TlistManager_SelectPath_S(struct maxgui_proxygadgets_listmanager_TlistManager_obj* o,BBSTRING bbt__PATH){
	o->_maxgui_proxygadgets_listmanager_tlistmanager_path =bbt__PATH;
	return 0;
}
BBSTRING _maxgui_proxygadgets_listmanager_TlistManager_GetItem(struct maxgui_proxygadgets_listmanager_TlistManager_obj* o){
	BBINT bbt_ipos=maxgui_maxgui_SelectedGadgetItem((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_list_box );
	if(bbt_ipos>-1){
		return (o->_maxgui_proxygadgets_listmanager_tlistmanager_list_box )->clas->m_ItemText_i((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_list_box ,bbt_ipos);
	}
	return &bbEmptyString;
}
BBINT _maxgui_proxygadgets_listmanager_TlistManager_SetShape_iiii(struct maxgui_proxygadgets_listmanager_TlistManager_obj* o,BBINT bbt_x,BBINT bbt_y,BBINT bbt_w,BBINT bbt_h){
	(&maxgui_proxygadgets_listmanager_TlistManager)->super->m_SetShape_iiii((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o,bbt_x,bbt_y,bbt_w,bbt_h);
	(o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_adddir )->clas->m_SetShape_iiii((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_adddir ,bbt_x,bbt_y,bbt_w,bbt_h);
	(o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_add )->clas->m_SetShape_iiii((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_add ,bbt_x,bbt_y,bbt_w,bbt_h);
	(o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_clear )->clas->m_SetShape_iiii((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_clear ,bbt_x,bbt_y,bbt_w,bbt_h);
	(o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_down )->clas->m_SetShape_iiii((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_down ,bbt_x,bbt_y,bbt_w,bbt_h);
	(o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_up )->clas->m_SetShape_iiii((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_up ,bbt_x,bbt_y,bbt_w,bbt_h);
	(o->_maxgui_proxygadgets_listmanager_tlistmanager_list_box )->clas->m_SetShape_iiii((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_list_box ,bbt_x,bbt_y,bbt_w,bbt_h);
	(o->_maxgui_proxygadgets_listmanager_tlistmanager_panel )->clas->m_SetShape_iiii((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_panel ,bbt_x,bbt_y,bbt_w,bbt_h);
	(o->_maxgui_proxygadgets_listmanager_tlistmanager_txt_item )->clas->m_SetShape_iiii((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_txt_item ,bbt_x,bbt_y,bbt_w,bbt_h);
	return 0;
}
BBOBJECT _maxgui_proxygadgets_listmanager_TlistManager_ItemExtra_i(struct maxgui_proxygadgets_listmanager_TlistManager_obj* o,BBINT bbt_index){
	return (BBOBJECT)maxgui_maxgui_GadgetItemExtra((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_list_box ,bbt_index);
}
BBINT _maxgui_proxygadgets_listmanager_TlistManager_SetItem_iSSiTObjecti(struct maxgui_proxygadgets_listmanager_TlistManager_obj* o,BBINT bbt_index,BBSTRING bbt_Text,BBSTRING bbt_tip,BBINT bbt_icon,BBOBJECT bbt_extra,BBINT bbt_flags){
	maxgui_maxgui_ModifyGadgetItem((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_list_box ,bbt_index,bbt_Text,bbt_flags,bbt_icon,bbt_tip,(BBOBJECT)bbt_extra);
	return 0;
}
BBINT _maxgui_proxygadgets_listmanager_TlistManager_InsertItem_iSSiTObjecti(struct maxgui_proxygadgets_listmanager_TlistManager_obj* o,BBINT bbt_index,BBSTRING bbt_Text,BBSTRING bbt_tip,BBINT bbt_icon,BBOBJECT bbt_extra,BBINT bbt_flags){
	if(bbt_index==maxgui_maxgui_CountGadgetItems((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_list_box )){
		maxgui_maxgui_AddGadgetItem((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_list_box ,bbt_Text,bbt_flags,bbt_icon,bbt_tip,(BBOBJECT)bbt_extra);
	}else{
		maxgui_maxgui_InsertGadgetItem((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_list_box ,bbt_index,bbt_Text,bbt_flags,bbt_icon,bbt_tip,(BBOBJECT)bbt_extra);
	}
	return 0;
}
BBINT _maxgui_proxygadgets_listmanager_TlistManager_RemoveItem_i(struct maxgui_proxygadgets_listmanager_TlistManager_obj* o,BBINT bbt_index){
	maxgui_maxgui_RemoveGadgetItem((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_list_box ,bbt_index);
	return 0;
}
BBINT _maxgui_proxygadgets_listmanager_TlistManager_ItemCount(struct maxgui_proxygadgets_listmanager_TlistManager_obj* o){
	return maxgui_maxgui_CountGadgetItems((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_list_box );
}
BBINT _maxgui_proxygadgets_listmanager_TlistManager_CleanUp(struct maxgui_proxygadgets_listmanager_TlistManager_obj* o){
	brl_hook_RemoveHook(brl_event_EmitEventHook,o->clas->f_eventHandler_TObject_iTObjectTObject,(BBOBJECT)o);
	if(((BBObject*)o->_maxgui_proxygadgets_listmanager_tlistmanager_list_box )!= &bbNullObject){
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_list_box );
		o->_maxgui_proxygadgets_listmanager_tlistmanager_list_box =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	}
	if(((BBObject*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_add )!= &bbNullObject){
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_add );
		o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_add =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	}
	if(((BBObject*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_remove )!= &bbNullObject){
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_remove );
		o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_remove =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	}
	if(((BBObject*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_up )!= &bbNullObject){
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_up );
		o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_up =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	}
	if(((BBObject*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_down )!= &bbNullObject){
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_down );
		o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_down =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	}
	if(((BBObject*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_clear )!= &bbNullObject){
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_clear );
		o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_clear =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	}
	if(((BBObject*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_adddir )!= &bbNullObject){
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_adddir );
		o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_adddir =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	}
	if(((BBObject*)o->_maxgui_proxygadgets_listmanager_tlistmanager_txt_item )!= &bbNullObject){
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_txt_item );
		o->_maxgui_proxygadgets_listmanager_tlistmanager_txt_item =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	}
	if(((BBObject*)o->_maxgui_proxygadgets_listmanager_tlistmanager_panel )!= &bbNullObject){
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_panel );
		o->_maxgui_proxygadgets_listmanager_tlistmanager_panel =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	}
	(&maxgui_proxygadgets_listmanager_TlistManager)->super->m_CleanUp((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o);
	return 0;
}
BBINT _maxgui_proxygadgets_listmanager_TlistManager_Clear(struct maxgui_proxygadgets_listmanager_TlistManager_obj* o){
	if(((BBObject*)o->_maxgui_proxygadgets_listmanager_tlistmanager_list_box )!= &bbNullObject){
		maxgui_maxgui_ClearGadgetItems((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_list_box );
	}
	return 0;
}
BBINT _maxgui_proxygadgets_listmanager_TlistManager_Class(struct maxgui_proxygadgets_listmanager_TlistManager_obj* o){
	return 25;
}
BBINT _maxgui_proxygadgets_listmanager_TlistManager_SetColor_iii(struct maxgui_proxygadgets_listmanager_TlistManager_obj* o,BBINT bbt_RED,BBINT bbt_green,BBINT bbt_blue){
	maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_list_box ,bbt_RED,bbt_green,bbt_blue,1);
	return 0;
}
BBINT _maxgui_proxygadgets_listmanager_TlistManager_SetLayout_iiii(struct maxgui_proxygadgets_listmanager_TlistManager_obj* o,BBINT bbt_le,BBINT bbt_ri,BBINT bbt_Top,BBINT bbt_bot){
	maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_panel ,bbt_le,bbt_ri,bbt_Top,bbt_bot);
	maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_list_box ,bbt_le,bbt_ri,1,2);
	maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_add ,1,2,2,2);
	maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_remove ,2,2,2,2);
	maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_up ,2,2,2,2);
	maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_down ,2,2,2,2);
	maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_clear ,2,1,2,2);
	if(((BBObject*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_adddir )!= &bbNullObject){
		maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_adddir ,2,1,2,2);
	}
	if(((BBObject*)o->_maxgui_proxygadgets_listmanager_tlistmanager_txt_item )!= &bbNullObject){
		maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_txt_item ,1,1,2,2);
	}
	return 0;
}
BBSTRING _maxgui_proxygadgets_listmanager_TlistManager_ItemText_i(struct maxgui_proxygadgets_listmanager_TlistManager_obj* o,BBINT bbt_index){
	return maxgui_maxgui_GadgetItemText((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_list_box ,bbt_index);
}
BBINT _maxgui_proxygadgets_listmanager_TlistManager_State(struct maxgui_proxygadgets_listmanager_TlistManager_obj* o){
	return 8;
}
BBINT _maxgui_proxygadgets_listmanager_TlistManager_SetShow_i(struct maxgui_proxygadgets_listmanager_TlistManager_obj* o,BBINT bbt_truefalse){
	(&maxgui_proxygadgets_listmanager_TlistManager)->super->m_SetShow_i((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o,bbt_truefalse);
	if(bbt_truefalse==1){
		o->_maxgui_proxygadgets_listmanager_tlistmanager_hidden =0;
	}else{
		o->_maxgui_proxygadgets_listmanager_tlistmanager_hidden =8;
	}
	return 0;
}
BBINT _maxgui_proxygadgets_listmanager_TlistManager_SetItemList_TTList(struct maxgui_proxygadgets_listmanager_TlistManager_obj* o,struct brl_linkedlist_TList_obj* bbt__CONTENT){
	if(bbt__CONTENT==&bbNullObject){
		return -1;
	}
	struct brl_linkedlist_TListEnum_obj* bbt_=(struct brl_linkedlist_TListEnum_obj*)(bbt__CONTENT)->clas->m_ObjectEnumerator((struct brl_linkedlist_TList_obj*)bbt__CONTENT);
	while((bbt_)->clas->m_HasNext((struct brl_linkedlist_TListEnum_obj*)bbt_)!=0){
		BBSTRING bbt_ss=((BBString *)bbObjectDowncast((BBOBJECT)(bbt_)->clas->m_NextObject((struct brl_linkedlist_TListEnum_obj*)bbt_),(BBClass*)&bbStringClass));
		if(bbt_ss==&bbEmptyString){
			continue;
		}
		if(bbt_ss!=&bbEmptyString){
			maxgui_maxgui_AddGadgetItem((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_list_box ,bbt_ss,0,-1,bbt_ss,(BBOBJECT)bbt_ss);
		}
	}
	return 0;
}
BBINT _maxgui_proxygadgets_listmanager_TlistManager_SetItemArray_aS(struct maxgui_proxygadgets_listmanager_TlistManager_obj* o,BBARRAY bbt__CONTENT){
	if(bbt__CONTENT==&bbEmptyArray){
		return -1;
	}
	BBARRAY bbt_=bbt__CONTENT;
	BBUINT bbt_2=0U;
	while(bbt_2<((BBUINT)(bbt_->scales[0]))){
		BBSTRING bbt_ss=((BBSTRING*)BBARRAYDATA(bbt_,1))[bbt_2];
		bbt_2=(bbt_2+1U);
		if(bbt_ss!=&bbEmptyString){
			((struct maxgui_proxygadgets_listmanager_TlistManager_obj*)o)->clas->m_InsertItem_iSSiTObjecti((struct maxgui_proxygadgets_listmanager_TlistManager_obj*)o,maxgui_maxgui_CountGadgetItems((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_list_box ),bbt_ss,bbt_ss,-1,(BBOBJECT)bbt_ss,0);
		}
	}
	return 0;
}
struct brl_linkedlist_TList_obj* _maxgui_proxygadgets_listmanager_TlistManager_GetItemList(struct maxgui_proxygadgets_listmanager_TlistManager_obj* o){
	struct brl_linkedlist_TList_obj* bbt_temp=(struct brl_linkedlist_TList_obj*)(struct brl_linkedlist_TList_obj*)bbObjectNew((BBClass *)&brl_linkedlist_TList);
	{
		BBINT bbt_c=0;
		BBINT bbt_=maxgui_maxgui_CountGadgetItems((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_list_box );
		for(;(bbt_c<bbt_);bbt_c=(bbt_c+1)){
			(bbt_temp)->clas->m_AddLast_TObject((struct brl_linkedlist_TList_obj*)bbt_temp,(BBOBJECT)(o->_maxgui_proxygadgets_listmanager_tlistmanager_list_box )->clas->m_ItemText_i((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_list_box ,bbt_c));
		}
	}
	return (struct brl_linkedlist_TList_obj*)bbt_temp;
}
struct brl_linkedlist_TList_obj* _maxgui_proxygadgets_listmanager_TlistManager_GetItemExtraList(struct maxgui_proxygadgets_listmanager_TlistManager_obj* o){
	struct brl_linkedlist_TList_obj* bbt_temp=(struct brl_linkedlist_TList_obj*)(struct brl_linkedlist_TList_obj*)bbObjectNew((BBClass *)&brl_linkedlist_TList);
	{
		BBINT bbt_c=0;
		BBINT bbt_=maxgui_maxgui_CountGadgetItems((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_list_box );
		for(;(bbt_c<bbt_);bbt_c=(bbt_c+1)){
			(bbt_temp)->clas->m_AddLast_TObject((struct brl_linkedlist_TList_obj*)bbt_temp,(BBOBJECT)(o->_maxgui_proxygadgets_listmanager_tlistmanager_list_box )->clas->m_ItemExtra_i((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_list_box ,bbt_c));
		}
	}
	return (struct brl_linkedlist_TList_obj*)bbt_temp;
}
BBARRAY _maxgui_proxygadgets_listmanager_TlistManager_GetItemArray(struct maxgui_proxygadgets_listmanager_TlistManager_obj* o){
	BBARRAY volatile bbt_temp=&bbEmptyArray;
	BBINT bbt_size=0;
	bbt_temp=bbArrayNew1D("$", maxgui_maxgui_CountGadgetItems((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_list_box ));
	{
		BBINT bbt_c=0;
		BBINT bbt_=maxgui_maxgui_CountGadgetItems((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_list_box );
		for(;(bbt_c<bbt_);bbt_c=(bbt_c+1)){
			((BBSTRING*)BBARRAYDATA(bbt_temp,1))[((BBUINT)bbt_c)]=(o->_maxgui_proxygadgets_listmanager_tlistmanager_list_box )->clas->m_ItemText_i((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_list_box ,bbt_c);
		}
	}
	return bbt_temp;
}
BBARRAY _maxgui_proxygadgets_listmanager_TlistManager_GetItemExtraArray(struct maxgui_proxygadgets_listmanager_TlistManager_obj* o){
	BBARRAY volatile bbt_temp=&bbEmptyArray;
	BBINT bbt_size=0;
	bbt_temp=bbArrayNew1D("$", maxgui_maxgui_CountGadgetItems((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_list_box ));
	{
		BBINT bbt_c=0;
		BBINT bbt_=maxgui_maxgui_CountGadgetItems((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_list_box );
		for(;(bbt_c<bbt_);bbt_c=(bbt_c+1)){
			((BBSTRING*)BBARRAYDATA(bbt_temp,1))[((BBUINT)bbt_c)]=((BBString *)bbObjectDowncast((BBOBJECT)(o->_maxgui_proxygadgets_listmanager_tlistmanager_list_box )->clas->m_ItemExtra_i((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_list_box ,bbt_c),(BBClass*)&bbStringClass));
		}
	}
	return bbt_temp;
}
struct maxgui_proxygadgets_listmanager_TlistManager_obj* maxgui_proxygadgets_listmanager_TlistManager_Create_TTlistManager_iiiiTTGadgeti(BBINT bbt_x,BBINT bbt_y,BBINT bbt_w,BBINT bbt_h,struct maxgui_maxgui_gadget_TGadget_obj* bbt_group,BBINT bbt_style){
	struct maxgui_proxygadgets_listmanager_TlistManager_obj* bbt_sp=(struct maxgui_proxygadgets_listmanager_TlistManager_obj*)(struct maxgui_proxygadgets_listmanager_TlistManager_obj*)bbObjectNew((BBClass *)&maxgui_proxygadgets_listmanager_TlistManager);
	BBINT bbt_sizew=(bbt_w/5);
	BBINT bbt_hh=50;
	BBINT bbt_ip=0;
	BBINT bbt_posx=0;
	if((((unsigned int)(bbt_style)&1)!=0) || (((unsigned int)(bbt_style)&64)!=0)){
		bbt_hh=25;
		bbt_sizew=(bbt_w/6);
	}
	bbt_sp->_maxgui_proxygadgets_listmanager_tlistmanager_panel =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreatePanel(bbt_x,bbt_y,bbt_w,bbt_h,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group,0,&bbEmptyString);
	bbt_posx=5;
	bbt_sizew-=2;
	bbt_sp->_maxgui_proxygadgets_listmanager_tlistmanager_list_box =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateListBox(5,1,(bbt_w-10),((bbt_h-bbt_hh)-3),(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_listmanager_tlistmanager_panel ,0);
	bbt_sp->_maxgui_proxygadgets_listmanager_tlistmanager_btn_add =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateButton(&_s14,bbt_posx,(bbt_h-bbt_hh),bbt_sizew,22,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_listmanager_tlistmanager_panel ,8);
	bbt_posx+=bbt_sizew;
	bbt_sp->_maxgui_proxygadgets_listmanager_tlistmanager_btn_remove =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateButton(&_s15,bbt_posx,(bbt_h-bbt_hh),bbt_sizew,22,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_listmanager_tlistmanager_panel ,8);
	bbt_posx+=bbt_sizew;
	bbt_sp->_maxgui_proxygadgets_listmanager_tlistmanager_btn_up =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateButton(&_s16,bbt_posx,(bbt_h-bbt_hh),bbt_sizew,22,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_listmanager_tlistmanager_panel ,8);
	bbt_posx+=bbt_sizew;
	bbt_sp->_maxgui_proxygadgets_listmanager_tlistmanager_btn_down =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateButton(&_s17,bbt_posx,(bbt_h-bbt_hh),bbt_sizew,22,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_listmanager_tlistmanager_panel ,8);
	bbt_posx+=bbt_sizew;
	bbt_sp->_maxgui_proxygadgets_listmanager_tlistmanager_btn_clear =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateButton(&_s18,bbt_posx,(bbt_h-bbt_hh),bbt_sizew,22,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_listmanager_tlistmanager_panel ,8);
	bbt_posx+=bbt_sizew;
	if((((unsigned int)(bbt_style)&1)!=0) || (((unsigned int)(bbt_style)&64)!=0)){
		bbt_sp->_maxgui_proxygadgets_listmanager_tlistmanager_btn_adddir =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateButton(&_s19,bbt_posx,(bbt_h-bbt_hh),bbt_sizew,22,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_listmanager_tlistmanager_panel ,8);
		maxgui_maxgui_SetGadgetToolTip((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_listmanager_tlistmanager_btn_adddir ,((BBSTRING*)BBARRAYDATA(maxgui_proxygadgets_listmanager_TlistManager__BTN_BALOON,1))[5U]);
	}else{
		bbt_sp->_maxgui_proxygadgets_listmanager_tlistmanager_txt_item =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateTextField(5,((bbt_h-bbt_hh)+24),(bbt_w-10),22,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_listmanager_tlistmanager_panel ,0);
	}
	(bbt_sp)->clas->m_EnableIcons((struct maxgui_proxygadgets_listmanager_TlistManager_obj*)bbt_sp);
	maxgui_maxgui_SetGadgetToolTip((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_listmanager_tlistmanager_btn_add ,((BBSTRING*)BBARRAYDATA(maxgui_proxygadgets_listmanager_TlistManager__BTN_BALOON,1))[0U]);
	maxgui_maxgui_SetGadgetToolTip((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_listmanager_tlistmanager_btn_remove ,((BBSTRING*)BBARRAYDATA(maxgui_proxygadgets_listmanager_TlistManager__BTN_BALOON,1))[1U]);
	maxgui_maxgui_SetGadgetToolTip((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_listmanager_tlistmanager_btn_up ,((BBSTRING*)BBARRAYDATA(maxgui_proxygadgets_listmanager_TlistManager__BTN_BALOON,1))[2U]);
	maxgui_maxgui_SetGadgetToolTip((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_listmanager_tlistmanager_btn_down ,((BBSTRING*)BBARRAYDATA(maxgui_proxygadgets_listmanager_TlistManager__BTN_BALOON,1))[3U]);
	maxgui_maxgui_SetGadgetToolTip((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_listmanager_tlistmanager_btn_clear ,((BBSTRING*)BBARRAYDATA(maxgui_proxygadgets_listmanager_TlistManager__BTN_BALOON,1))[4U]);
	bbt_sp->_maxgui_proxygadgets_listmanager_tlistmanager_style =bbt_style;
	(bbt_sp)->clas->m_SetProxy_TTGadget((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbt_sp,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_sp->_maxgui_proxygadgets_listmanager_tlistmanager_panel );
	maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_sp,(BBClass*)&maxgui_maxgui_gadget_TGadget)),1,1,1,1);
	brl_hook_AddHook(brl_event_EmitEventHook,maxgui_proxygadgets_listmanager_TlistManager_eventHandler_TObject_iTObjectTObject,(BBOBJECT)bbt_sp,-1);
	(maxgui_proxygadgets_listmanager_TlistManager_list_listmanager)->clas->m_AddLast_TObject((struct brl_linkedlist_TList_obj*)maxgui_proxygadgets_listmanager_TlistManager_list_listmanager,(BBOBJECT)bbt_sp);
	return (struct maxgui_proxygadgets_listmanager_TlistManager_obj*)bbt_sp;
}
BBINT _maxgui_proxygadgets_listmanager_TlistManager_SetDefinitions_aS(struct maxgui_proxygadgets_listmanager_TlistManager_obj* o,BBARRAY bbt_array){
	bbt_array=bbArraySlice("$",bbt_array,0,6);
	maxgui_maxgui_SetGadgetToolTip((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_add ,((BBSTRING*)BBARRAYDATA(bbt_array,1))[0U]);
	maxgui_maxgui_SetGadgetToolTip((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_remove ,((BBSTRING*)BBARRAYDATA(bbt_array,1))[1U]);
	maxgui_maxgui_SetGadgetToolTip((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_up ,((BBSTRING*)BBARRAYDATA(bbt_array,1))[2U]);
	maxgui_maxgui_SetGadgetToolTip((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_down ,((BBSTRING*)BBARRAYDATA(bbt_array,1))[3U]);
	maxgui_maxgui_SetGadgetToolTip((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_clear ,((BBSTRING*)BBARRAYDATA(bbt_array,1))[4U]);
	if(((BBSTRING*)BBARRAYDATA(bbt_array,1))[5U]!=&bbEmptyString){
		maxgui_maxgui_SetGadgetToolTip((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_adddir ,((BBSTRING*)BBARRAYDATA(bbt_array,1))[5U]);
		brl_standardio_Print(bbStringConcat(&_s20,((BBSTRING*)BBARRAYDATA(bbt_array,1))[5U]));
	}
	return 0;
}
BBINT _maxgui_proxygadgets_listmanager_TlistManager_SetTooltips_aS(struct maxgui_proxygadgets_listmanager_TlistManager_obj* o,BBARRAY bbt_array){
	if((maxgui_proxygadgets_listmanager_TlistManager__BTN_BALOON)->scales[0]!=(bbt_array)->scales[0]){
		bbt_array=bbArraySlice("$",bbt_array,0,(maxgui_proxygadgets_listmanager_TlistManager__BTN_BALOON)->scales[0]);
	}
	maxgui_proxygadgets_listmanager_TlistManager__BTN_BALOON=bbt_array;
	return 0;
}
BBINT _maxgui_proxygadgets_listmanager_TlistManager_SetMessage_aS(struct maxgui_proxygadgets_listmanager_TlistManager_obj* o,BBARRAY bbt_array){
	if((maxgui_proxygadgets_listmanager_TlistManager__IN_MSG)->scales[0]!=(bbt_array)->scales[0]){
		bbt_array=bbArraySlice("$",bbt_array,0,(maxgui_proxygadgets_listmanager_TlistManager__IN_MSG)->scales[0]);
	}
	maxgui_proxygadgets_listmanager_TlistManager__IN_MSG=bbt_array;
	return 0;
}
BBINT _maxgui_proxygadgets_listmanager_TlistManager_SetPixmap_TTPixmapi(struct maxgui_proxygadgets_listmanager_TlistManager_obj* o,struct brl_pixmap_TPixmap_obj* bbt__iconstrip,BBINT bbt_style){
	if(bbt__iconstrip==&bbNullObject){
		return -1;
	}
	o->_maxgui_proxygadgets_listmanager_tlistmanager__list_manager_icons =(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)maxgui_maxgui_LoadIconStrip((BBOBJECT)bbt__iconstrip);
	((struct maxgui_proxygadgets_listmanager_TlistManager_obj*)o)->clas->m_EnableIcons((struct maxgui_proxygadgets_listmanager_TlistManager_obj*)o);
	if(((BBObject*)o->_maxgui_proxygadgets_listmanager_tlistmanager__list_manager_icons )!= &bbNullObject){
		o->_maxgui_proxygadgets_listmanager_tlistmanager__list_manager_icons_disabled =(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)maxgui_maxgui_LoadIconStrip((BBOBJECT)maxgui_proxygadgets_common_MakeGrey((BBOBJECT)bbt__iconstrip));
	}
	return 0;
}
BBINT _maxgui_proxygadgets_listmanager_TlistManager_EnableIcons(struct maxgui_proxygadgets_listmanager_TlistManager_obj* o){
	struct brl_pixmap_TPixmap_obj* bbt_pix=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	if(o->_maxgui_proxygadgets_listmanager_tlistmanager__list_manager_icons !=&bbNullObject){
		bbt_pix=(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager__list_manager_icons ,0);
		maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_add ,(struct brl_pixmap_TPixmap_obj*)bbt_pix,24);
		bbt_pix=(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager__list_manager_icons ,1);
		maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_remove ,(struct brl_pixmap_TPixmap_obj*)bbt_pix,24);
		bbt_pix=(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager__list_manager_icons ,2);
		maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_up ,(struct brl_pixmap_TPixmap_obj*)bbt_pix,24);
		bbt_pix=(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager__list_manager_icons ,3);
		maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_down ,(struct brl_pixmap_TPixmap_obj*)bbt_pix,24);
		bbt_pix=(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager__list_manager_icons ,4);
		maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_clear ,(struct brl_pixmap_TPixmap_obj*)bbt_pix,24);
		if(((BBObject*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_adddir )!= &bbNullObject){
			bbt_pix=(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager__list_manager_icons ,5);
			maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_adddir ,(struct brl_pixmap_TPixmap_obj*)bbt_pix,24);
		}
	}
	return 0;
}
BBINT _maxgui_proxygadgets_listmanager_TlistManager_DisableIcons(struct maxgui_proxygadgets_listmanager_TlistManager_obj* o){
	struct brl_pixmap_TPixmap_obj* bbt_pix=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	if(o->_maxgui_proxygadgets_listmanager_tlistmanager__list_manager_icons_disabled !=&bbNullObject){
		bbt_pix=(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager__list_manager_icons_disabled ,0);
		maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_add ,(struct brl_pixmap_TPixmap_obj*)bbt_pix,24);
		bbt_pix=(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager__list_manager_icons_disabled ,1);
		maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_remove ,(struct brl_pixmap_TPixmap_obj*)bbt_pix,24);
		bbt_pix=(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager__list_manager_icons_disabled ,2);
		maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_up ,(struct brl_pixmap_TPixmap_obj*)bbt_pix,24);
		bbt_pix=(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager__list_manager_icons_disabled ,3);
		maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_down ,(struct brl_pixmap_TPixmap_obj*)bbt_pix,24);
		bbt_pix=(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager__list_manager_icons_disabled ,4);
		maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_clear ,(struct brl_pixmap_TPixmap_obj*)bbt_pix,24);
		if(((BBObject*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_adddir )!= &bbNullObject){
			bbt_pix=(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager__list_manager_icons_disabled ,5);
			maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_adddir ,(struct brl_pixmap_TPixmap_obj*)bbt_pix,24);
		}
	}
	return 0;
}
BBINT _maxgui_proxygadgets_listmanager_TlistManager_EnableAll(struct maxgui_proxygadgets_listmanager_TlistManager_obj* o){
	maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_panel );
	maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_list_box );
	maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_add );
	maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_remove );
	maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_up );
	maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_down );
	maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_clear );
	if(((BBObject*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_adddir )!= &bbNullObject){
		maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_adddir );
	}
	if(((BBObject*)o->_maxgui_proxygadgets_listmanager_tlistmanager_txt_item )!= &bbNullObject){
		maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_txt_item );
		maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_txt_item ,255,255,255,1);
	}
	((struct maxgui_proxygadgets_listmanager_TlistManager_obj*)o)->clas->m_EnableIcons((struct maxgui_proxygadgets_listmanager_TlistManager_obj*)o);
	return 0;
}
BBINT _maxgui_proxygadgets_listmanager_TlistManager_DisableAll(struct maxgui_proxygadgets_listmanager_TlistManager_obj* o){
	maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_panel );
	maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_list_box );
	maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_add );
	maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_remove );
	maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_up );
	maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_down );
	maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_clear );
	if(((BBObject*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_adddir )!= &bbNullObject){
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_btn_adddir );
	}
	if(((BBObject*)o->_maxgui_proxygadgets_listmanager_tlistmanager_txt_item )!= &bbNullObject){
		maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_txt_item ,212,208,200,1);
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_txt_item );
	}
	((struct maxgui_proxygadgets_listmanager_TlistManager_obj*)o)->clas->m_DisableIcons((struct maxgui_proxygadgets_listmanager_TlistManager_obj*)o);
	return 0;
}
BBINT _maxgui_proxygadgets_listmanager_TlistManager_AddItem_SiiSTObject(struct maxgui_proxygadgets_listmanager_TlistManager_obj* o,BBSTRING bbt_Text,BBINT bbt_flags,BBINT bbt_icon,BBSTRING bbt_tip,BBOBJECT bbt_extra){
	((struct maxgui_proxygadgets_listmanager_TlistManager_obj*)o)->clas->m_InsertItem_iSSiTObjecti((struct maxgui_proxygadgets_listmanager_TlistManager_obj*)o,maxgui_maxgui_CountGadgetItems((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_listmanager_tlistmanager_list_box ),bbt_Text,bbt_tip,bbt_icon,(BBOBJECT)bbt_extra,bbt_flags);
	return 0;
}
BBOBJECT maxgui_proxygadgets_listmanager_TlistManager_eventHandler_TObject_iTObjectTObject(BBINT bbt_pID,BBOBJECT bbt_pData,BBOBJECT bbt_pContext){
	struct brl_event_TEvent_obj* bbt_event=(struct brl_event_TEvent_obj*)((struct brl_event_TEvent_obj*)bbObjectDowncast((BBOBJECT)bbt_pData,(BBClass*)&brl_event_TEvent));
	struct maxgui_proxygadgets_listmanager_TlistManager_obj* bbt_obj=(struct maxgui_proxygadgets_listmanager_TlistManager_obj*)((struct maxgui_proxygadgets_listmanager_TlistManager_obj*)bbObjectDowncast((BBOBJECT)bbt_pContext,(BBClass*)&maxgui_proxygadgets_listmanager_TlistManager));
	BBSTRING bbt_temp=&bbEmptyString;
	BBINT bbt_ipos=0;
	BBINT bbt_dpos=0;
	BBOBJECT bbt_cotemp=(BBOBJECT)&bbNullObject;
	BBSTRING bbt_cttemp=&bbEmptyString;
	BBOBJECT bbt_otemp=(BBOBJECT)&bbNullObject;
	BBSTRING bbt_ttemp=&bbEmptyString;
	BBSTRING bbt_otip=&bbEmptyString;
	BBSTRING bbt_dtip=&bbEmptyString;
	if(((BBObject*)bbt_event)!= &bbNullObject){
		if(((BBObject*)bbt_obj)!= &bbNullObject){
			BBINT bbt_=bbt_event->_brl_event_tevent_id ;
			if(bbt_==8195){
				if((bbt_event->_brl_event_tevent_source ==bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_list_box ) && (((unsigned int)(bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_style )&2)!=0)){
					bbt_ipos=maxgui_maxgui_SelectedGadgetItem((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_list_box );
					bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_last_selected =bbt_ipos;
				}
			}else{
				if(bbt_==8193){
					BBOBJECT bbt_2=(BBOBJECT)bbt_event->_brl_event_tevent_source ;
					if(bbt_2==bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_list_box ){
						if(((unsigned int)(bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_style )&2)!=0){
							bbt_ipos=maxgui_maxgui_SelectedGadgetItem((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_list_box );
							if((bbt_ipos>-1) && (bbt_ipos<maxgui_maxgui_CountGadgetItems((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_list_box ))){
								maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_txt_item ,maxgui_maxgui_GadgetItemText((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_list_box ,bbt_ipos));
								bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_last_selected =bbt_ipos;
							}
						}
					}else{
						if(bbt_2==bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_txt_item ){
							if((bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_last_selected >-1) && (bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_last_selected <maxgui_maxgui_CountGadgetItems((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_list_box ))){
								maxgui_maxgui_ModifyGadgetItem((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_list_box ,bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_last_selected ,maxgui_maxgui_GadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_txt_item ),0,-1,&bbEmptyString,(BBOBJECT)&bbNullObject);
							}
						}else{
							if(bbt_2==bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_btn_add ){
								bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_last_selected =-1;
								if(((unsigned int)(bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_style )&1)!=0){
									bbt_temp=brl_system_RequestFile(((BBSTRING*)BBARRAYDATA(maxgui_proxygadgets_listmanager_TlistManager__IN_MSG,1))[0U],bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_reqfilter ,0,bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_path );
									if(bbt_temp!=&bbEmptyString){
										if(((unsigned int)(bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_style )&4)!=0){
											(bbt_obj)->clas->m_AddItem_SiiSTObject((struct maxgui_proxygadgets_listmanager_TlistManager_obj*)bbt_obj,brl_filesystem_StripAll(bbt_temp),0,-1,bbt_temp,(BBOBJECT)bbt_temp);
										}else{
											(bbt_obj)->clas->m_AddItem_SiiSTObject((struct maxgui_proxygadgets_listmanager_TlistManager_obj*)bbt_obj,bbt_temp,0,-1,bbt_temp,(BBOBJECT)bbt_temp);
										}
									}
								}
								if(((unsigned int)(bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_style )&64)!=0){
									bbt_temp=brl_system_RequestDir(((BBSTRING*)BBARRAYDATA(maxgui_proxygadgets_listmanager_TlistManager__IN_MSG,1))[0U],bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_path );
									if(bbt_temp!=&bbEmptyString){
										if(((unsigned int)(bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_style )&4)!=0){
											(bbt_obj)->clas->m_AddItem_SiiSTObject((struct maxgui_proxygadgets_listmanager_TlistManager_obj*)bbt_obj,brl_filesystem_StripAll(bbt_temp),0,-1,bbt_temp,(BBOBJECT)bbt_temp);
										}else{
											(bbt_obj)->clas->m_AddItem_SiiSTObject((struct maxgui_proxygadgets_listmanager_TlistManager_obj*)bbt_obj,bbt_temp,0,-1,bbt_temp,(BBOBJECT)bbt_temp);
										}
									}
								}
								if(((unsigned int)(bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_style )&2)!=0){
									maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_txt_item ,255,255,255,1);
									bbt_temp=maxgui_maxgui_GadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_txt_item );
									if(bbt_temp!=&bbEmptyString){
										(bbt_obj)->clas->m_AddItem_SiiSTObject((struct maxgui_proxygadgets_listmanager_TlistManager_obj*)bbt_obj,bbt_temp,0,-1,bbt_temp,(BBOBJECT)bbt_temp);
										maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_txt_item ,&bbEmptyString);
										maxgui_maxgui_ActivateGadget((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_txt_item );
									}else{
										maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_txt_item ,200,20,20,1);
										maxgui_maxgui_ActivateGadget((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_txt_item );
									}
									if(((unsigned int)(bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_style )&8)!=0){
										BBARRAY volatile bbt_tempitems=(bbt_obj)->clas->m_GetItemArray((struct maxgui_proxygadgets_listmanager_TlistManager_obj*)bbt_obj);
										bbArraySort((struct bbArrayClass_obj*)bbt_tempitems,1);
										maxgui_maxgui_ClearGadgetItems((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_list_box );
										(bbt_obj)->clas->m_SetItemArray_aS((struct maxgui_proxygadgets_listmanager_TlistManager_obj*)bbt_obj,bbt_tempitems);
										bbt_tempitems=&bbEmptyArray;
									}
								}
								return (BBOBJECT)&bbNullObject;
							}else{
								if(bbt_2==bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_btn_up ){
									bbt_ipos=maxgui_maxgui_SelectedGadgetItem((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_list_box );
									if(bbt_ipos>-1){
										bbt_cotemp=(BBOBJECT)maxgui_maxgui_GadgetItemExtra((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_list_box ,bbt_ipos);
										bbt_cttemp=maxgui_maxgui_GadgetItemText((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_list_box ,bbt_ipos);
										struct maxgui_maxgui_gadget_TGadget_obj* bbt_3;
										bbt_otip=(((struct maxgui_maxgui_gadget_TGadget_obj*)(bbt_3 = bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_list_box ))->clas)->m_ItemTip_i((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_3,bbt_ipos);
										bbt_dpos=(bbt_ipos-1);
										if(bbt_dpos>-1){
											bbt_otemp=(BBOBJECT)maxgui_maxgui_GadgetItemExtra((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_list_box ,bbt_dpos);
											bbt_ttemp=maxgui_maxgui_GadgetItemText((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_list_box ,bbt_dpos);
											struct maxgui_maxgui_gadget_TGadget_obj* bbt_4;
											bbt_dtip=(((struct maxgui_maxgui_gadget_TGadget_obj*)(bbt_4 = bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_list_box ))->clas)->m_ItemTip_i((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_4,bbt_dpos);
											maxgui_maxgui_ModifyGadgetItem((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_list_box ,bbt_dpos,bbt_cttemp,0,-1,bbt_otip,(BBOBJECT)bbt_cotemp);
											maxgui_maxgui_ModifyGadgetItem((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_list_box ,bbt_ipos,bbt_ttemp,0,-1,bbt_dtip,(BBOBJECT)bbt_otemp);
											maxgui_maxgui_SelectGadgetItem((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_list_box ,bbt_dpos);
											bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_last_selected =bbt_dpos;
										}
									}
									return (BBOBJECT)&bbNullObject;
								}else{
									if(bbt_2==bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_btn_down ){
										bbt_ipos=maxgui_maxgui_SelectedGadgetItem((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_list_box );
										if(bbt_ipos>-1){
											bbt_cotemp=(BBOBJECT)maxgui_maxgui_GadgetItemExtra((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_list_box ,bbt_ipos);
											bbt_cttemp=maxgui_maxgui_GadgetItemText((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_list_box ,bbt_ipos);
											struct maxgui_maxgui_gadget_TGadget_obj* bbt_5;
											bbt_otip=(((struct maxgui_maxgui_gadget_TGadget_obj*)(bbt_5 = bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_list_box ))->clas)->m_ItemTip_i((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_5,bbt_ipos);
											bbt_dpos=(bbt_ipos+1);
											if((bbt_dpos>-1) && (bbt_dpos<maxgui_maxgui_CountGadgetItems((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_list_box ))){
												bbt_otemp=(BBOBJECT)maxgui_maxgui_GadgetItemExtra((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_list_box ,bbt_dpos);
												bbt_ttemp=maxgui_maxgui_GadgetItemText((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_list_box ,bbt_dpos);
												struct maxgui_maxgui_gadget_TGadget_obj* bbt_6;
												bbt_dtip=(((struct maxgui_maxgui_gadget_TGadget_obj*)(bbt_6 = bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_list_box ))->clas)->m_ItemTip_i((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_6,bbt_dpos);
												maxgui_maxgui_ModifyGadgetItem((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_list_box ,bbt_dpos,bbt_cttemp,0,-1,bbt_otip,(BBOBJECT)bbt_cotemp);
												maxgui_maxgui_ModifyGadgetItem((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_list_box ,bbt_ipos,bbt_ttemp,0,-1,bbt_dtip,(BBOBJECT)bbt_otemp);
												maxgui_maxgui_SelectGadgetItem((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_list_box ,bbt_dpos);
												bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_last_selected =bbt_dpos;
											}
										}
										return (BBOBJECT)&bbNullObject;
									}else{
										if(bbt_2==bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_btn_remove ){
											bbt_ipos=maxgui_maxgui_SelectedGadgetItem((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_list_box );
											if(bbt_ipos>-1){
												maxgui_maxgui_RemoveGadgetItem((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_list_box ,bbt_ipos);
											}
											return (BBOBJECT)&bbNullObject;
										}else{
											if(bbt_2==bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_btn_clear ){
												if(maxgui_maxgui_CountGadgetItems((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_list_box )>0){
													BBINT bbt_Con=brl_system_Confirm(((BBSTRING*)BBARRAYDATA(maxgui_proxygadgets_listmanager_TlistManager__IN_MSG,1))[1U],1);
													if(bbt_Con==1){
														maxgui_maxgui_ClearGadgetItems((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_list_box );
													}
												}
												return (BBOBJECT)&bbNullObject;
											}else{
												if(bbt_2==bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_btn_adddir ){
													if((((unsigned int)(bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_style )&1)!=0) || (((unsigned int)(bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_style )&64)!=0)){
														bbt_temp=brl_system_RequestDir(((BBSTRING*)BBARRAYDATA(maxgui_proxygadgets_listmanager_TlistManager__IN_MSG,1))[2U],bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_path );
														if(bbt_temp!=&bbEmptyString){
															maxgui_proxygadgets_listmanager_tfiles_Clear_v();
															(bbt_obj)->clas->m_DisableAll((struct maxgui_proxygadgets_listmanager_TlistManager_obj*)bbt_obj);
															maxgui_proxygadgets_listmanager_ScanDir((struct maxgui_proxygadgets_listmanager_TlistManager_obj*)bbt_obj,bbt_temp,1,0);
															if((maxgui_proxygadgets_listmanager_tfiles_lista)->clas->m_Count((struct brl_linkedlist_TList_obj*)maxgui_proxygadgets_listmanager_tfiles_lista)>10000){
																BBSTRING bbt_tmp_msg=((BBSTRING*)BBARRAYDATA(maxgui_proxygadgets_listmanager_TlistManager__IN_MSG,1))[3U];
																bbt_tmp_msg=bbStringReplace((BBSTRING)bbt_tmp_msg,&_s21,bbStringConcat(bbStringConcat(&_s22,bbStringFromInt((maxgui_proxygadgets_listmanager_tfiles_lista)->clas->m_Count((struct brl_linkedlist_TList_obj*)maxgui_proxygadgets_listmanager_tfiles_lista))),&_s22));
																brl_system_Notify(bbt_tmp_msg,0);
															}
															struct brl_linkedlist_TListEnum_obj* bbt_7=(struct brl_linkedlist_TListEnum_obj*)(maxgui_proxygadgets_listmanager_tfiles_lista)->clas->m_ObjectEnumerator((struct brl_linkedlist_TList_obj*)maxgui_proxygadgets_listmanager_tfiles_lista);
															while((bbt_7)->clas->m_HasNext((struct brl_linkedlist_TListEnum_obj*)bbt_7)!=0){
																struct maxgui_proxygadgets_listmanager_tfiles_obj* bbt_ss=(struct maxgui_proxygadgets_listmanager_tfiles_obj*)((struct maxgui_proxygadgets_listmanager_tfiles_obj*)bbObjectDowncast((BBOBJECT)(bbt_7)->clas->m_NextObject((struct brl_linkedlist_TListEnum_obj*)bbt_7),(BBClass*)&maxgui_proxygadgets_listmanager_tfiles));
																if(bbt_ss==&bbNullObject){
																	continue;
																}
																if(bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_fpointer_filter !=&brl_blitz_NullFunctionError){
																	bbt_ss->_maxgui_proxygadgets_listmanager_tfiles_file =bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_fpointer_filter(bbt_ss->_maxgui_proxygadgets_listmanager_tfiles_file ,&bbEmptyString);
																}
																if(((unsigned int)(bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_style )&4)!=0){
																	maxgui_maxgui_AddGadgetItem((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_list_box ,brl_filesystem_StripAll(bbt_ss->_maxgui_proxygadgets_listmanager_tfiles_file ),0,-1,bbt_ss->_maxgui_proxygadgets_listmanager_tfiles_file ,(BBOBJECT)bbt_ss->_maxgui_proxygadgets_listmanager_tfiles_file );
																}else{
																	maxgui_maxgui_AddGadgetItem((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_list_box ,bbt_ss->_maxgui_proxygadgets_listmanager_tfiles_file ,0,-1,bbt_ss->_maxgui_proxygadgets_listmanager_tfiles_file ,(BBOBJECT)bbt_ss->_maxgui_proxygadgets_listmanager_tfiles_file );
																}
															}
														}
														(bbt_obj)->clas->m_EnableAll((struct maxgui_proxygadgets_listmanager_TlistManager_obj*)bbt_obj);
													}
													return (BBOBJECT)&bbNullObject;
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
	}
	return (BBOBJECT)bbt_pData;
}
BBARRAY maxgui_proxygadgets_listmanager_TlistManager__BTN_BALOON;
BBARRAY maxgui_proxygadgets_listmanager_TlistManager__IN_MSG;
struct brl_linkedlist_TList_obj* maxgui_proxygadgets_listmanager_TlistManager_list_listmanager;
struct BBDebugScope_61 maxgui_proxygadgets_listmanager_TlistManager_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TlistManager",
	{
		{
			BBDEBUGDECL_FIELD,
			"fpointer_FILTER",
			"($,$)$",
			.field_offset=offsetof(struct maxgui_proxygadgets_listmanager_TlistManager_obj,_maxgui_proxygadgets_listmanager_tlistmanager_fpointer_filter)
		},
		{
			BBDEBUGDECL_FIELD,
			"sid",
			"$",
			.field_offset=offsetof(struct maxgui_proxygadgets_listmanager_TlistManager_obj,_maxgui_proxygadgets_listmanager_tlistmanager_sid)
		},
		{
			BBDEBUGDECL_FIELD,
			"parent",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_listmanager_TlistManager_obj,_maxgui_proxygadgets_listmanager_tlistmanager_parent)
		},
		{
			BBDEBUGDECL_FIELD,
			"panel",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_listmanager_TlistManager_obj,_maxgui_proxygadgets_listmanager_tlistmanager_panel)
		},
		{
			BBDEBUGDECL_FIELD,
			"list_box",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_listmanager_TlistManager_obj,_maxgui_proxygadgets_listmanager_tlistmanager_list_box)
		},
		{
			BBDEBUGDECL_FIELD,
			"btn_add",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_listmanager_TlistManager_obj,_maxgui_proxygadgets_listmanager_tlistmanager_btn_add)
		},
		{
			BBDEBUGDECL_FIELD,
			"btn_remove",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_listmanager_TlistManager_obj,_maxgui_proxygadgets_listmanager_tlistmanager_btn_remove)
		},
		{
			BBDEBUGDECL_FIELD,
			"btn_up",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_listmanager_TlistManager_obj,_maxgui_proxygadgets_listmanager_tlistmanager_btn_up)
		},
		{
			BBDEBUGDECL_FIELD,
			"btn_down",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_listmanager_TlistManager_obj,_maxgui_proxygadgets_listmanager_tlistmanager_btn_down)
		},
		{
			BBDEBUGDECL_FIELD,
			"btn_clear",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_listmanager_TlistManager_obj,_maxgui_proxygadgets_listmanager_tlistmanager_btn_clear)
		},
		{
			BBDEBUGDECL_FIELD,
			"btn_AddDir",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_listmanager_TlistManager_obj,_maxgui_proxygadgets_listmanager_tlistmanager_btn_adddir)
		},
		{
			BBDEBUGDECL_FIELD,
			"txt_item",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_listmanager_TlistManager_obj,_maxgui_proxygadgets_listmanager_tlistmanager_txt_item)
		},
		{
			BBDEBUGDECL_FIELD,
			"filter",
			"$",
			.field_offset=offsetof(struct maxgui_proxygadgets_listmanager_TlistManager_obj,_maxgui_proxygadgets_listmanager_tlistmanager_filter)
		},
		{
			BBDEBUGDECL_FIELD,
			"path",
			"$",
			.field_offset=offsetof(struct maxgui_proxygadgets_listmanager_TlistManager_obj,_maxgui_proxygadgets_listmanager_tlistmanager_path)
		},
		{
			BBDEBUGDECL_FIELD,
			"reqfilter",
			"$",
			.field_offset=offsetof(struct maxgui_proxygadgets_listmanager_TlistManager_obj,_maxgui_proxygadgets_listmanager_tlistmanager_reqfilter)
		},
		{
			BBDEBUGDECL_FIELD,
			"filter_items",
			"[]$",
			.field_offset=offsetof(struct maxgui_proxygadgets_listmanager_TlistManager_obj,_maxgui_proxygadgets_listmanager_tlistmanager_filter_items)
		},
		{
			BBDEBUGDECL_FIELD,
			"last_selected",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_listmanager_TlistManager_obj,_maxgui_proxygadgets_listmanager_tlistmanager_last_selected)
		},
		{
			BBDEBUGDECL_FIELD,
			"_list_manager_icons",
			":TIconStrip",
			.field_offset=offsetof(struct maxgui_proxygadgets_listmanager_TlistManager_obj,_maxgui_proxygadgets_listmanager_tlistmanager__list_manager_icons)
		},
		{
			BBDEBUGDECL_FIELD,
			"_list_manager_icons_disabled",
			":TIconStrip",
			.field_offset=offsetof(struct maxgui_proxygadgets_listmanager_TlistManager_obj,_maxgui_proxygadgets_listmanager_tlistmanager__list_manager_icons_disabled)
		},
		{
			BBDEBUGDECL_FIELD,
			"hidden",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_listmanager_TlistManager_obj,_maxgui_proxygadgets_listmanager_tlistmanager_hidden)
		},
		{
			BBDEBUGDECL_FIELD,
			"style",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_listmanager_TlistManager_obj,_maxgui_proxygadgets_listmanager_tlistmanager_style)
		},
		{
			BBDEBUGDECL_GLOBAL,
			"list_listmanager",
			":TList",
			.var_address=(void*)&maxgui_proxygadgets_listmanager_TlistManager_list_listmanager
		},
		{
			BBDEBUGDECL_GLOBAL,
			"_IN_MSG",
			"[]$",
			.var_address=(void*)&maxgui_proxygadgets_listmanager_TlistManager__IN_MSG
		},
		{
			BBDEBUGDECL_GLOBAL,
			"_BTN_BALOON",
			"[]$",
			.var_address=(void*)&maxgui_proxygadgets_listmanager_TlistManager__BTN_BALOON
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_maxgui_proxygadgets_listmanager_TlistManager_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetFont",
			"(:TGuiFont)i",
			.var_address=(void*)&_maxgui_proxygadgets_listmanager_TlistManager_SetFont_TTGuiFont
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetEnabled",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_listmanager_TlistManager_SetEnabled_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SelectFilter",
			"($)i",
			.var_address=(void*)&_maxgui_proxygadgets_listmanager_TlistManager_SelectFilter_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SelectPath",
			"($)i",
			.var_address=(void*)&_maxgui_proxygadgets_listmanager_TlistManager_SelectPath_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetItem",
			"()$",
			.var_address=(void*)&_maxgui_proxygadgets_listmanager_TlistManager_GetItem
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetShape",
			"(i,i,i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_listmanager_TlistManager_SetShape_iiii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ItemExtra",
			"(i):Object",
			.var_address=(void*)&_maxgui_proxygadgets_listmanager_TlistManager_ItemExtra_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetItem",
			"(i,$,$,i,:Object,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_listmanager_TlistManager_SetItem_iSSiTObjecti
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"InsertItem",
			"(i,$,$,i,:Object,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_listmanager_TlistManager_InsertItem_iSSiTObjecti
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"RemoveItem",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_listmanager_TlistManager_RemoveItem_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ItemCount",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_listmanager_TlistManager_ItemCount
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"CleanUp",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_listmanager_TlistManager_CleanUp
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Clear",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_listmanager_TlistManager_Clear
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Class",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_listmanager_TlistManager_Class
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetColor",
			"(i,i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_listmanager_TlistManager_SetColor_iii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetLayout",
			"(i,i,i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_listmanager_TlistManager_SetLayout_iiii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ItemText",
			"(i)$",
			.var_address=(void*)&_maxgui_proxygadgets_listmanager_TlistManager_ItemText_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"State",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_listmanager_TlistManager_State
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetShow",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_listmanager_TlistManager_SetShow_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetItemList",
			"(:TList)i",
			.var_address=(void*)&_maxgui_proxygadgets_listmanager_TlistManager_SetItemList_TTList
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetItemArray",
			"([]$)i",
			.var_address=(void*)&_maxgui_proxygadgets_listmanager_TlistManager_SetItemArray_aS
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetItemList",
			"():TList",
			.var_address=(void*)&_maxgui_proxygadgets_listmanager_TlistManager_GetItemList
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetItemExtraList",
			"():TList",
			.var_address=(void*)&_maxgui_proxygadgets_listmanager_TlistManager_GetItemExtraList
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetItemArray",
			"()[]$",
			.var_address=(void*)&_maxgui_proxygadgets_listmanager_TlistManager_GetItemArray
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetItemExtraArray",
			"()[]$",
			.var_address=(void*)&_maxgui_proxygadgets_listmanager_TlistManager_GetItemExtraArray
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Create",
			"(i,i,i,i,:TGadget,i):TlistManager",
			.var_address=(void*)&maxgui_proxygadgets_listmanager_TlistManager_Create_TTlistManager_iiiiTTGadgeti
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetDefinitions",
			"([]$)i",
			.var_address=(void*)&_maxgui_proxygadgets_listmanager_TlistManager_SetDefinitions_aS
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetTooltips",
			"([]$)i",
			.var_address=(void*)&_maxgui_proxygadgets_listmanager_TlistManager_SetTooltips_aS
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetMessage",
			"([]$)i",
			.var_address=(void*)&_maxgui_proxygadgets_listmanager_TlistManager_SetMessage_aS
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetPixmap",
			"(:TPixmap,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_listmanager_TlistManager_SetPixmap_TTPixmapi
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"EnableIcons",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_listmanager_TlistManager_EnableIcons
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"DisableIcons",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_listmanager_TlistManager_DisableIcons
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"EnableAll",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_listmanager_TlistManager_EnableAll
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"DisableAll",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_listmanager_TlistManager_DisableAll
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"AddItem",
			"($,i,i,$,:Object)i",
			.var_address=(void*)&_maxgui_proxygadgets_listmanager_TlistManager_AddItem_SiiSTObject
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"eventHandler",
			"(i,:Object,:Object):Object",
			.var_address=(void*)&maxgui_proxygadgets_listmanager_TlistManager_eventHandler_TObject_iTObjectTObject
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_maxgui_proxygadgets_listmanager_TlistManager maxgui_proxygadgets_listmanager_TlistManager={
	&maxgui_maxgui_gadget_TProxyGadget,
	bbObjectFree,
	(BBDebugScope*)&maxgui_proxygadgets_listmanager_TlistManager_scope,
	sizeof(struct maxgui_proxygadgets_listmanager_TlistManager_obj),
	(void (*)(BBOBJECT))_maxgui_proxygadgets_listmanager_TlistManager_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct maxgui_proxygadgets_listmanager_TlistManager_obj,_maxgui_proxygadgets_listmanager_tlistmanager_style) - sizeof(void*) + sizeof(BBINT)
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
	,_maxgui_proxygadgets_listmanager_TlistManager_SetShape_iiii
	,_maxgui_maxgui_gadget_TGadget_SetArea_iiii
	,_maxgui_maxgui_gadget_TGadget_SetRect_iiii
	,_maxgui_maxgui_gadget_TGadget_LockLayout
	,_maxgui_proxygadgets_listmanager_TlistManager_SetLayout_iiii
	,_maxgui_maxgui_gadget_TGadget_LayoutKids
	,_maxgui_maxgui_gadget_TGadget_DoLayout
	,_maxgui_maxgui_gadget_TGadget_SetDataSource_TObject
	,maxgui_maxgui_gadget_TGadget_KeysFromList_aS_TTList
	,maxgui_maxgui_gadget_TGadget_KeysFromObjectArray_aS_aTObject
	,_maxgui_maxgui_gadget_TGadget_SyncDataSource
	,_maxgui_maxgui_gadget_TGadget_SyncData_aS
	,_maxgui_maxgui_gadget_TGadget_InsertItemFromKey_iS
	,_maxgui_proxygadgets_listmanager_TlistManager_Clear
	,_maxgui_proxygadgets_listmanager_TlistManager_InsertItem_iSSiTObjecti
	,_maxgui_proxygadgets_listmanager_TlistManager_SetItem_iSSiTObjecti
	,_maxgui_proxygadgets_listmanager_TlistManager_RemoveItem_i
	,_maxgui_proxygadgets_listmanager_TlistManager_ItemCount
	,_maxgui_proxygadgets_listmanager_TlistManager_ItemText_i
	,_maxgui_maxgui_gadget_TProxyGadget_ItemTip_i
	,_maxgui_maxgui_gadget_TProxyGadget_ItemFlags_i
	,_maxgui_maxgui_gadget_TProxyGadget_ItemIcon_i
	,_maxgui_proxygadgets_listmanager_TlistManager_ItemExtra_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetItemState_ii
	,_maxgui_maxgui_gadget_TProxyGadget_ItemState_i
	,_maxgui_maxgui_gadget_TProxyGadget_SelectItem_ii
	,_maxgui_maxgui_gadget_TProxyGadget_SelectedItem
	,_maxgui_maxgui_gadget_TProxyGadget_SelectedItems
	,_maxgui_maxgui_gadget_TGadget_Insert_TTGadgeti
	,_maxgui_maxgui_gadget_TProxyGadget_Query_i
	,_maxgui_maxgui_gadget_TGadget_ScaleFactor
	,_maxgui_proxygadgets_listmanager_TlistManager_CleanUp
	,_maxgui_maxgui_gadget_TProxyGadget_Free
	,_maxgui_maxgui_gadget_TProxyGadget_Rethink
	,_maxgui_maxgui_gadget_TProxyGadget_ClientWidth
	,_maxgui_maxgui_gadget_TProxyGadget_ClientHeight
	,_maxgui_maxgui_gadget_TProxyGadget_Activate_i
	,_maxgui_proxygadgets_listmanager_TlistManager_State
	,_maxgui_maxgui_gadget_TProxyGadget_SetText_S
	,_maxgui_maxgui_gadget_TProxyGadget_GetText
	,_maxgui_proxygadgets_listmanager_TlistManager_SetFont_TTGuiFont
	,_maxgui_proxygadgets_listmanager_TlistManager_SetColor_iii
	,_maxgui_maxgui_gadget_TProxyGadget_RemoveColor
	,_maxgui_maxgui_gadget_TProxyGadget_SetAlpha_f
	,_maxgui_maxgui_gadget_TProxyGadget_SetTextColor_iii
	,_maxgui_maxgui_gadget_TProxyGadget_SetTooltip_S
	,_maxgui_maxgui_gadget_TProxyGadget_GetTooltip
	,_maxgui_proxygadgets_listmanager_TlistManager_SetPixmap_TTPixmapi
	,_maxgui_maxgui_gadget_TProxyGadget_SetIconStrip_TTIconStrip
	,_maxgui_proxygadgets_listmanager_TlistManager_SetShow_i
	,_maxgui_proxygadgets_listmanager_TlistManager_SetEnabled_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetSelected_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetHotKey_ii
	,_maxgui_maxgui_gadget_TProxyGadget_SetSensitivity_i
	,_maxgui_maxgui_gadget_TProxyGadget_GetSensitivity
	,_maxgui_proxygadgets_listmanager_TlistManager_Class
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
	,_maxgui_proxygadgets_listmanager_TlistManager_SelectFilter_S
	,_maxgui_proxygadgets_listmanager_TlistManager_SelectPath_S
	,_maxgui_proxygadgets_listmanager_TlistManager_GetItem
	,_maxgui_proxygadgets_listmanager_TlistManager_SetItemList_TTList
	,_maxgui_proxygadgets_listmanager_TlistManager_SetItemArray_aS
	,_maxgui_proxygadgets_listmanager_TlistManager_GetItemList
	,_maxgui_proxygadgets_listmanager_TlistManager_GetItemExtraList
	,_maxgui_proxygadgets_listmanager_TlistManager_GetItemArray
	,_maxgui_proxygadgets_listmanager_TlistManager_GetItemExtraArray
	,maxgui_proxygadgets_listmanager_TlistManager_Create_TTlistManager_iiiiTTGadgeti
	,_maxgui_proxygadgets_listmanager_TlistManager_SetDefinitions_aS
	,_maxgui_proxygadgets_listmanager_TlistManager_SetTooltips_aS
	,_maxgui_proxygadgets_listmanager_TlistManager_SetMessage_aS
	,_maxgui_proxygadgets_listmanager_TlistManager_EnableIcons
	,_maxgui_proxygadgets_listmanager_TlistManager_DisableIcons
	,_maxgui_proxygadgets_listmanager_TlistManager_EnableAll
	,_maxgui_proxygadgets_listmanager_TlistManager_DisableAll
	,_maxgui_proxygadgets_listmanager_TlistManager_AddItem_SiiSTObject
	,maxgui_proxygadgets_listmanager_TlistManager_eventHandler_TObject_iTObjectTObject
};

void _maxgui_proxygadgets_listmanager_tfiles_New(struct maxgui_proxygadgets_listmanager_tfiles_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &maxgui_proxygadgets_listmanager_tfiles;
	o->_maxgui_proxygadgets_listmanager_tfiles_file = &bbEmptyString;
}
struct maxgui_proxygadgets_listmanager_tfiles_obj* maxgui_proxygadgets_listmanager_tfiles_add_Ttfiles_S(BBSTRING bbt__NAME){
	if(bbStringTrim((BBSTRING)bbt__NAME)==&bbEmptyString){
		return (struct maxgui_proxygadgets_listmanager_tfiles_obj*)&bbNullObject;
	}
	struct maxgui_proxygadgets_listmanager_tfiles_obj* bbt_cc=(struct maxgui_proxygadgets_listmanager_tfiles_obj*)(struct maxgui_proxygadgets_listmanager_tfiles_obj*)bbObjectNew((BBClass *)&maxgui_proxygadgets_listmanager_tfiles);
	bbt_cc->_maxgui_proxygadgets_listmanager_tfiles_file =bbt__NAME;
	(maxgui_proxygadgets_listmanager_tfiles_lista)->clas->m_AddLast_TObject((struct brl_linkedlist_TList_obj*)maxgui_proxygadgets_listmanager_tfiles_lista,(BBOBJECT)bbt_cc);
	return (struct maxgui_proxygadgets_listmanager_tfiles_obj*)bbt_cc;
}
void maxgui_proxygadgets_listmanager_tfiles_Clear_v(){
	brl_linkedlist_ClearList((struct brl_linkedlist_TList_obj*)maxgui_proxygadgets_listmanager_tfiles_lista);
}
struct brl_linkedlist_TList_obj* maxgui_proxygadgets_listmanager_tfiles_lista;
struct BBDebugScope_5 maxgui_proxygadgets_listmanager_tfiles_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"tfiles",
	{
		{
			BBDEBUGDECL_FIELD,
			"file",
			"$",
			.field_offset=offsetof(struct maxgui_proxygadgets_listmanager_tfiles_obj,_maxgui_proxygadgets_listmanager_tfiles_file)
		},
		{
			BBDEBUGDECL_GLOBAL,
			"lista",
			":TList",
			.var_address=(void*)&maxgui_proxygadgets_listmanager_tfiles_lista
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_maxgui_proxygadgets_listmanager_tfiles_New
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"add",
			"($):tfiles",
			.var_address=(void*)&maxgui_proxygadgets_listmanager_tfiles_add_Ttfiles_S
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Clear",
			"()",
			.var_address=(void*)&maxgui_proxygadgets_listmanager_tfiles_Clear_v
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_maxgui_proxygadgets_listmanager_tfiles maxgui_proxygadgets_listmanager_tfiles={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&maxgui_proxygadgets_listmanager_tfiles_scope,
	sizeof(struct maxgui_proxygadgets_listmanager_tfiles_obj),
	(void (*)(BBOBJECT))_maxgui_proxygadgets_listmanager_tfiles_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct maxgui_proxygadgets_listmanager_tfiles_obj,_maxgui_proxygadgets_listmanager_tfiles_file) - sizeof(void*) + sizeof(BBSTRING)
	,maxgui_proxygadgets_listmanager_tfiles_add_Ttfiles_S
	,maxgui_proxygadgets_listmanager_tfiles_Clear_v
};

BBSTRING maxgui_proxygadgets_listmanager_lPath(BBSTRING bbt_file){
	BBSTRING bbt_fi=bbt_file;
	BBINT bbt_lo=0;
	for(bbt_lo=(bbt_fi)->length;(bbt_lo>=1);bbt_lo=(bbt_lo+-1)){
		if(bbStringCompare(bbStringSlice(bbt_fi,bbt_lo,(bbt_lo+1)), &_s27)==0 || bbStringCompare(bbStringSlice(bbt_fi,bbt_lo,(bbt_lo+1)), &_s23)==0){
			break;
		}
	}
	return bbStringSlice(bbt_fi,(bbt_lo+1),((bbt_lo+(bbt_fi)->length)-bbt_lo));
}
BBINT maxgui_proxygadgets_listmanager_ScanDir(struct maxgui_proxygadgets_listmanager_TlistManager_obj* bbt_obj,BBSTRING bbt_path,BBINT bbt_recursive,BBINT bbt_lvl){
	BBINT bbt_counter=0;
	BBBYTE* bbt_mydir=0;
	BBSTRING bbt_file=&bbEmptyString;
	BBSTRING bbt_filename=&bbEmptyString;
	BBSTRING bbt_lastpath=&bbEmptyString;
	BBSTRING bbt_lst=&bbEmptyString;
	if(bbt_path==&bbEmptyString){
		bbt_path=brl_filesystem_CurrentDir();
	}
	if(bbStringCompare(bbStringFromInt((bbt_path)->buf[((BBUINT)((bbt_path)->length-1))]), &_s23)!=0){
		bbt_path=bbStringConcat(bbt_path,&_s23);
	}
	bbt_path=bbStringReplace((BBSTRING)bbt_path,&_s24,&_s23);
	bbt_mydir=brl_filesystem_ReadDir(bbt_path);
	bbt_counter=0;
	do{
		bbt_file=brl_filesystem_NextFile(bbt_mydir);
		if(bbt_file==&bbEmptyString){
			break;
		}
		bbt_filename=bbStringConcat(bbt_path,bbt_file);
		if(((unsigned int)(bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_style )&1)!=0){
			if(brl_filesystem_FileType(bbt_filename)==1){
				if(bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_filter !=&bbEmptyString){
					BBARRAY bbt_=bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_filter_items ;
					BBUINT bbt_2=0U;
					while(bbt_2<((BBUINT)(bbt_->scales[0]))){
						BBSTRING bbt_fitem=((BBSTRING*)BBARRAYDATA(bbt_,1))[bbt_2];
						bbt_2=(bbt_2+1U);
						if(bbStringCompare(brl_filesystem_ExtractExt(bbStringToLower((BBSTRING)bbt_filename)), bbStringToLower((BBSTRING)bbt_fitem))==0){
							maxgui_proxygadgets_listmanager_tfiles_add_Ttfiles_S(bbt_filename);
							bbt_counter+=1;
						}
					}
				}else{
					maxgui_proxygadgets_listmanager_tfiles_add_Ttfiles_S(bbt_filename);
					bbt_counter+=1;
				}
			}else{
				if(bbt_recursive==1){
					if(bbStringCompare(bbt_file, &_s25)!=0 && bbStringCompare(bbt_file, &_s26)!=0){
						if(brl_filesystem_FileType(bbt_filename)==2){
							bbt_lst=maxgui_proxygadgets_listmanager_lPath(bbt_filename);
							bbt_lvl=(bbt_lvl+1);
							maxgui_proxygadgets_listmanager_ScanDir((struct maxgui_proxygadgets_listmanager_TlistManager_obj*)bbt_obj,bbt_filename,1,bbt_lvl);
						}
					}
				}
			}
		}
		if(((unsigned int)(bbt_obj->_maxgui_proxygadgets_listmanager_tlistmanager_style )&64)!=0){
			if(brl_filesystem_FileType(bbt_filename)==2){
				maxgui_proxygadgets_listmanager_tfiles_add_Ttfiles_S(bbt_filename);
				bbt_counter+=1;
			}
		}else{
			if(bbt_recursive==1){
				if(bbStringCompare(bbt_file, &_s25)!=0 && bbStringCompare(bbt_file, &_s26)!=0){
					if(brl_filesystem_FileType(bbt_filename)==2){
						bbt_lst=maxgui_proxygadgets_listmanager_lPath(bbt_filename);
						bbt_lvl=(bbt_lvl+1);
						maxgui_proxygadgets_listmanager_ScanDir((struct maxgui_proxygadgets_listmanager_TlistManager_obj*)bbt_obj,bbt_filename,1,bbt_lvl);
					}
				}
			}
		}
	}while(!(0));
	brl_filesystem_CloseDir(bbt_mydir);
	return bbt_counter;
}
struct maxgui_proxygadgets_listmanager_TlistManager_obj* maxgui_proxygadgets_listmanager_CreateListManager(BBINT bbt_x,BBINT bbt_y,BBINT bbt_w,BBINT bbt_h,struct maxgui_maxgui_gadget_TGadget_obj* bbt_group,BBINT bbt__style,BBSTRING bbt_filter){
	if(bbt_group==&bbNullObject){
		return (struct maxgui_proxygadgets_listmanager_TlistManager_obj*)&bbNullObject;
	}
	return (struct maxgui_proxygadgets_listmanager_TlistManager_obj*)maxgui_proxygadgets_listmanager_TlistManager_Create_TTlistManager_iiiiTTGadgeti(bbt_x,bbt_y,bbt_w,bbt_h,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group,bbt__style);
}
BBSTRING maxgui_proxygadgets_listmanager_ExternalFilter(BBSTRING bbt_source,BBSTRING bbt_st){
	return bbt_source;
}
static int _bb_maxgui_proxygadgets_listmanager_inited = 0;
int _bb_maxgui_proxygadgets_listmanager(){
	if (!_bb_maxgui_proxygadgets_listmanager_inited) {
		_bb_maxgui_proxygadgets_listmanager_inited = 1;
		GC_add_roots(&maxgui_proxygadgets_listmanager_TlistManager__BTN_BALOON, &maxgui_proxygadgets_listmanager_TlistManager_list_listmanager + 1);
		__bb_brl_blitz_blitz();
		__bb_maxgui_maxgui_maxgui();
		__bb_brl_max2d_max2d();
		_bb_maxgui_proxygadgets_common();
		bbObjectRegisterType((BBCLASS)&maxgui_proxygadgets_listmanager_TlistManager);
		bbObjectRegisterType((BBCLASS)&maxgui_proxygadgets_listmanager_tfiles);
		maxgui_proxygadgets_listmanager_TlistManager_list_listmanager=(struct brl_linkedlist_TList_obj*)(struct brl_linkedlist_TList_obj*)bbObjectNew((BBClass *)&brl_linkedlist_TList);
		BBSTRING bbt_[]={&_s1,&_s2,&_s3,&_s4};
		BBARRAY bbt_2 = bbArrayFromData("$",4,bbt_);
		maxgui_proxygadgets_listmanager_TlistManager__IN_MSG=bbt_2;
		BBSTRING bbt_3[]={&_s5,&_s6,&_s7,&_s8,&_s2,&_s9};
		BBARRAY bbt_4 = bbArrayFromData("$",6,bbt_3);
		maxgui_proxygadgets_listmanager_TlistManager__BTN_BALOON=bbt_4;
		maxgui_proxygadgets_listmanager_tfiles_lista=(struct brl_linkedlist_TList_obj*)(struct brl_linkedlist_TList_obj*)bbObjectNew((BBClass *)&brl_linkedlist_TList);
		return 0;
	}
	return 0;
}