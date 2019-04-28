#include "ToolBarExtra.bmx.release.win32.x64.h"
static BBString _s0={
	&bbStringClass,
	2,
	{37,86}
};
static BBString _s1={
	&bbStringClass,
	1,
	{44}
};
static BBString _s5={
	&bbStringClass,
	1,
	{60}
};
static BBString _s6={
	&bbStringClass,
	1,
	{62}
};
static BBString _s7={
	&bbStringClass,
	12,
	{73,115,32,78,85,76,76,32,105,100,32,58}
};
static BBString _s3={
	&bbStringClass,
	5,
	{82,65,78,71,69}
};
static BBString _s2={
	&bbStringClass,
	5,
	{83,84,65,84,69}
};
static BBString _s4={
	&bbStringClass,
	5,
	{86,65,76,85,69}
};
struct BBDebugScope_25{int kind; const char *name; BBDebugDecl decls[26]; };
struct BBDebugScope_53{int kind; const char *name; BBDebugDecl decls[54]; };
void _maxgui_proxygadgets_toolbarextra_tToolItem_New(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &maxgui_proxygadgets_toolbarextra_tToolItem;
	o->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_toolbarextra_ttoolitem_return_id = 0;
	o->_maxgui_proxygadgets_toolbarextra_ttoolitem_status = 1;
	o->_maxgui_proxygadgets_toolbarextra_ttoolitem_width = 80;
	o->_maxgui_proxygadgets_toolbarextra_ttoolitem_enabled = -5;
	o->_maxgui_proxygadgets_toolbarextra_ttoolitem_old_enabled = -5;
	o->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_normal = 0;
	o->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_select = 0;
	o->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_current = 0;
	o->_maxgui_proxygadgets_toolbarextra_ttoolitem_item_type = 1;
	o->_maxgui_proxygadgets_toolbarextra_ttoolitem_toolbar = (struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_toolbarextra_ttoolitem_tip = &bbEmptyString;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolItem_Clear(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* o){
	if(((BBObject*)o->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget )!= &bbNullObject){
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget );
	}
	if(((BBObject*)o->_maxgui_proxygadgets_toolbarextra_ttoolitem_toolbar )!= &bbNullObject){
		o->_maxgui_proxygadgets_toolbarextra_ttoolitem_toolbar =(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)&bbNullObject;
	}
	return 0;
}
struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* maxgui_proxygadgets_toolbarextra_tToolItem_Create_TtToolItem_iTtToolbarExtraiiSii(BBINT bbt_id,struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* bbt_tb,BBINT bbt__x,BBINT bbt__TYPE,BBSTRING bbt__title,BBINT bbt__return_id,BBINT bbt__icon){
	struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* bbt_it=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbObjectNew((BBClass *)&maxgui_proxygadgets_toolbarextra_tToolItem);
	struct brl_pixmap_TPixmap_obj* bbt_pix=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	bbt_it->_maxgui_proxygadgets_toolbarextra_ttoolitem_return_id =bbt__return_id;
	if(bbt_it->_maxgui_proxygadgets_toolbarextra_ttoolitem_return_id ==-1){
		bbt_it->_maxgui_proxygadgets_toolbarextra_ttoolitem_return_id =((bbt_tb->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->scales[0]-1);
	}
	bbt_it->_maxgui_proxygadgets_toolbarextra_ttoolitem_item_type =bbt__TYPE;
	bbt_it->_maxgui_proxygadgets_toolbarextra_ttoolitem_width =maxgui_proxygadgets_toolbarextra_tToolbarExtra_item_width;
	BBINT bbt_=bbt__TYPE;
	if(bbt_==99){
	}else{
		if(bbt_==8){
			bbt_it->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateSlider(bbt__x,4,bbt_it->_maxgui_proxygadgets_toolbarextra_ttoolitem_width ,20,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_tb->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel ,5);
		}else{
			if((bbt_==1) || (bbt_==4)){
				bbt_it->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreatePanel(bbt__x,0,24,32,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_tb->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel ,4,&bbEmptyString);
				if(bbt__icon>-1){
					bbt_pix=(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbt_tb->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_iconstrip ,bbt__icon);
					maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_it->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,(struct brl_pixmap_TPixmap_obj*)bbt_pix,1);
					maxgui_maxgui_SetGadgetToolTip((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_it->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,maxgui_localization_LocalizeString(bbt__title));
					if(bbt__TYPE==4){
						bbt_it->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_normal =bbt__icon;
						bbt_it->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_select =(bbt__icon+1);
						bbt_it->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_current =bbt__icon;
					}
				}
			}else{
				if(bbt_==7){
					bbt_it->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateButton(maxgui_localization_LocalizeString(bbt__title),bbt__x,1,bbt_it->_maxgui_proxygadgets_toolbarextra_ttoolitem_width ,30,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_tb->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel ,11);
				}else{
					if(bbt_==6){
						bbt_it->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateButton(maxgui_localization_LocalizeString(bbt__title),bbt__x,3,bbt_it->_maxgui_proxygadgets_toolbarextra_ttoolitem_width ,25,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_tb->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel ,8);
					}else{
						if(bbt_==2){
							bbt_it->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateTextField(bbt__x,4,bbt_it->_maxgui_proxygadgets_toolbarextra_ttoolitem_width ,22,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_tb->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel ,0);
							maxgui_maxgui_SetGadgetToolTip((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_it->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,maxgui_localization_LocalizeString(bbt__title));
							maxgui_maxgui_SetGadgetSensitivity((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_it->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,2);
							maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_it->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,maxgui_localization_LocalizeString(bbt__title));
						}else{
							if(bbt_==3){
								bbt_it->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateComboBox(bbt__x,4,bbt_it->_maxgui_proxygadgets_toolbarextra_ttoolitem_width ,22,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_tb->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel ,0);
								maxgui_maxgui_SetGadgetToolTip((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_it->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,maxgui_localization_LocalizeString(bbt__title));
							}else{
								if(bbt_==5){
									bbt_it->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateLabel(maxgui_localization_LocalizeString(bbt__title),bbt__x,8,bbt_it->_maxgui_proxygadgets_toolbarextra_ttoolitem_width ,22,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_tb->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel ,0);
									BBINT bbt_size=(maxgui_localization_LocalizeString(bbt__title))->length;
									maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_it->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,bbt__x,8,((bbt_size-1)*maxgui_proxygadgets_toolbarextra_tToolItem_font_size),22);
								}
							}
						}
					}
				}
			}
		}
	}
	if(bbt_tb->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tfont !=&bbNullObject){
		maxgui_maxgui_SetGadgetFont((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_it->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,(struct maxgui_maxgui_guifont_TGuiFont_obj*)bbt_tb->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tfont ,0);
	}
	if(bbt_tb->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_txt_rgb != &bbEmptyArray){
		struct maxgui_maxgui_gadget_TGadget_obj* bbt_2;
		(((struct maxgui_maxgui_gadget_TGadget_obj*)(bbt_2 = bbt_it->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ))->clas)->m_SetTextColor_iii((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_2,((BBINT*)BBARRAYDATA(bbt_tb->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_txt_rgb ,1))[0U],((BBINT*)BBARRAYDATA(bbt_tb->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_txt_rgb ,1))[1U],((BBINT*)BBARRAYDATA(bbt_tb->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_txt_rgb ,1))[2U]);
	}
	if(bbt__TYPE==8){
		if(bbt_tb->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_colors != &bbEmptyArray){
			maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_it->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,((BBINT)((BBBYTE*)BBARRAYDATA(bbt_tb->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_colors ,1))[0U]),((BBINT)((BBBYTE*)BBARRAYDATA(bbt_tb->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_colors ,1))[1U]),((BBINT)((BBBYTE*)BBARRAYDATA(bbt_tb->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_colors ,1))[2U]),1);
		}
		maxgui_maxgui_SetGadgetToolTip((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_it->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,maxgui_localization_LocalizeString(bbStringReplace((BBSTRING)bbt__title,&_s0,&bbEmptyString)));
	}
	bbt_it->_maxgui_proxygadgets_toolbarextra_ttoolitem_tip =bbt__title;
	bbt_it->_maxgui_proxygadgets_toolbarextra_ttoolitem_toolbar =(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbt_tb;
	maxgui_maxgui_SetGadgetExtra((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_it->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,(BBOBJECT)bbt_it);
	bbt_it->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_current =bbt__icon;
	struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* bbt_3;
	(((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)(bbt_3 = bbt_it->_maxgui_proxygadgets_toolbarextra_ttoolitem_toolbar ))->clas)->m_ReshapeAll((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbt_3);
	return (struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbt_it;
}
struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* maxgui_proxygadgets_toolbarextra_tToolItem_CreateSeparator_TtToolItem(){
	struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* bbt_it=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbObjectNew((BBClass *)&maxgui_proxygadgets_toolbarextra_tToolItem);
	bbt_it->_maxgui_proxygadgets_toolbarextra_ttoolitem_item_type =99;
	return (struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbt_it;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolItem_AddSubItem_SiiSTObject(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* o,BBSTRING bbt__title,BBINT bbt__FLAGS,BBINT bbt__icon,BBSTRING bbt__tip,BBOBJECT bbt__EXTRA){
	maxgui_maxgui_AddGadgetItem((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,bbt__title,bbt__FLAGS,bbt__icon,bbt__tip,(BBOBJECT)bbt__EXTRA);
	return 0;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolItem_SelectSubItem_i(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* o,BBINT bbt_id){
	maxgui_maxgui_SelectGadgetItem((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,bbt_id);
	return 0;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolItem_SetSwitchIcon_ii(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* o,BBINT bbt__normal,BBINT bbt__select){
	o->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_normal =bbt__normal;
	o->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_select =bbt__select;
	((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)o)->clas->m_SwapIcon((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)o);
	return 0;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolItem_SetState_i(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* o,BBINT bbt__STATE){
	BBINT bbt__icon=0;
	BBINT bbt_=bbt__STATE;
	if(bbt_==0){
		bbt__icon=o->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_normal ;
	}else{
		if(bbt_==1){
			bbt__icon=o->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_select ;
		}
	}
	o->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_current =bbt__icon;
	struct brl_pixmap_TPixmap_obj* bbt_pix=(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)o->_maxgui_proxygadgets_toolbarextra_ttoolitem_toolbar ->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_iconstrip ,bbt__icon);
	maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,(struct brl_pixmap_TPixmap_obj*)bbt_pix,1);
	return 0;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolItem_SwapIcon(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* o){
	BBINT bbt__icon=o->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_normal ;
	BBINT bbt_=o->_maxgui_proxygadgets_toolbarextra_ttoolitem_status ;
	if(bbt_==0){
		bbt__icon=o->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_normal ;
	}else{
		if(bbt_==1){
			bbt__icon=o->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_select ;
		}
	}
	o->_maxgui_proxygadgets_toolbarextra_ttoolitem_status =(1-o->_maxgui_proxygadgets_toolbarextra_ttoolitem_status );
	o->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_current =bbt__icon;
	struct brl_pixmap_TPixmap_obj* bbt_pix=(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)o->_maxgui_proxygadgets_toolbarextra_ttoolitem_toolbar ->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_iconstrip ,bbt__icon);
	maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,(struct brl_pixmap_TPixmap_obj*)bbt_pix,1);
	return 0;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolItem_SetOver(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* o){
	struct brl_pixmap_TPixmap_obj* bbt_pix=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	if(o->_maxgui_proxygadgets_toolbarextra_ttoolitem_enabled ==-5){
		if((o->_maxgui_proxygadgets_toolbarextra_ttoolitem_item_type ==1) || (o->_maxgui_proxygadgets_toolbarextra_ttoolitem_item_type ==4)){
			bbt_pix=(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)o->_maxgui_proxygadgets_toolbarextra_ttoolitem_toolbar ->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_light_iconstrip ,o->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_current );
			maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,(struct brl_pixmap_TPixmap_obj*)bbt_pix,1);
		}
	}
	return 0;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolItem_SetNormal(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* o){
	struct brl_pixmap_TPixmap_obj* bbt_pix=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	if((o->_maxgui_proxygadgets_toolbarextra_ttoolitem_item_type ==1) || (o->_maxgui_proxygadgets_toolbarextra_ttoolitem_item_type ==4)){
		bbt_pix=(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)o->_maxgui_proxygadgets_toolbarextra_ttoolitem_toolbar ->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_iconstrip ,o->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_current );
		maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,(struct brl_pixmap_TPixmap_obj*)bbt_pix,1);
		if(o->_maxgui_proxygadgets_toolbarextra_ttoolitem_enabled ==4){
			bbt_pix=(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)o->_maxgui_proxygadgets_toolbarextra_ttoolitem_toolbar ->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_grey_iconstrip ,o->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_current );
			maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,(struct brl_pixmap_TPixmap_obj*)bbt_pix,1);
		}
	}
	return 0;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolItem_SetProp_SS(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* o,BBSTRING bbt_key,BBSTRING bbt_value){
	BBARRAY volatile bbt_vs=&bbEmptyArray;
	BBARRAY volatile bbt_vi=&bbEmptyArray;
	BBARRAY volatile bbt_vf=&bbEmptyArray;
	bbt_vs=bbStringSplit((BBSTRING)bbt_value,&_s1);
	BBSTRING bbt_=bbStringToUpper((BBSTRING)bbt_key);
	if(bbStringCompare(bbt_, &_s2)==0){
		((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)o)->clas->m_SwapIcon((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)o);
	}else{
		if(bbStringCompare(bbt_, &_s3)==0){
			bbt_vs=bbArraySlice("$",bbt_vs,0,2);
			bbt_vi=bbArraySlice("i",bbt_vi,0,(bbt_vs)->scales[0]);
			{
				BBINT bbt_i=0;
				BBINT bbt_2=(bbt_vs)->scales[0];
				for(;(bbt_i<bbt_2);bbt_i=(bbt_i+1)){
					((BBINT*)BBARRAYDATA(bbt_vi,1))[((BBUINT)bbt_i)]=bbStringToInt(((BBSTRING*)BBARRAYDATA(bbt_vs,1))[((BBUINT)bbt_i)]);
				}
			}
			if(o->_maxgui_proxygadgets_toolbarextra_ttoolitem_item_type ==8){
				maxgui_maxgui_SetSliderRange((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,((BBINT*)BBARRAYDATA(bbt_vi,1))[0U],((BBINT*)BBARRAYDATA(bbt_vi,1))[1U]);
			}
		}else{
			if(bbStringCompare(bbt_, &_s4)==0){
				bbt_vs=bbArraySlice("$",bbt_vs,0,1);
				if(o->_maxgui_proxygadgets_toolbarextra_ttoolitem_item_type ==8){
					maxgui_maxgui_SetSliderValue((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,bbStringToInt(((BBSTRING*)BBARRAYDATA(bbt_vs,1))[0U]));
				}
			}
		}
	}
	return 0;
}
BBINT maxgui_proxygadgets_toolbarextra_tToolItem_font_size;
struct BBDebugScope_25 maxgui_proxygadgets_toolbarextra_tToolItem_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"tToolItem",
	{
		{
			BBDEBUGDECL_FIELD,
			"gadget",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj,_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget)
		},
		{
			BBDEBUGDECL_FIELD,
			"return_id",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj,_maxgui_proxygadgets_toolbarextra_ttoolitem_return_id)
		},
		{
			BBDEBUGDECL_FIELD,
			"status",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj,_maxgui_proxygadgets_toolbarextra_ttoolitem_status)
		},
		{
			BBDEBUGDECL_FIELD,
			"WIDTH",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj,_maxgui_proxygadgets_toolbarextra_ttoolitem_width)
		},
		{
			BBDEBUGDECL_FIELD,
			"enabled",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj,_maxgui_proxygadgets_toolbarextra_ttoolitem_enabled)
		},
		{
			BBDEBUGDECL_FIELD,
			"old_enabled",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj,_maxgui_proxygadgets_toolbarextra_ttoolitem_old_enabled)
		},
		{
			BBDEBUGDECL_FIELD,
			"icon_normal",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj,_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_normal)
		},
		{
			BBDEBUGDECL_FIELD,
			"icon_select",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj,_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_select)
		},
		{
			BBDEBUGDECL_FIELD,
			"icon_current",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj,_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_current)
		},
		{
			BBDEBUGDECL_FIELD,
			"item_type",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj,_maxgui_proxygadgets_toolbarextra_ttoolitem_item_type)
		},
		{
			BBDEBUGDECL_FIELD,
			"toolbar",
			":tToolbarExtra",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj,_maxgui_proxygadgets_toolbarextra_ttoolitem_toolbar)
		},
		{
			BBDEBUGDECL_FIELD,
			"tip",
			"$",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj,_maxgui_proxygadgets_toolbarextra_ttoolitem_tip)
		},
		{
			BBDEBUGDECL_GLOBAL,
			"font_size",
			"i",
			.var_address=(void*)&maxgui_proxygadgets_toolbarextra_tToolItem_font_size
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolItem_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Clear",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolItem_Clear
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Create",
			"(i,:tToolbarExtra,i,i,$,i,i):tToolItem",
			.var_address=(void*)&maxgui_proxygadgets_toolbarextra_tToolItem_Create_TtToolItem_iTtToolbarExtraiiSii
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"CreateSeparator",
			"():tToolItem",
			.var_address=(void*)&maxgui_proxygadgets_toolbarextra_tToolItem_CreateSeparator_TtToolItem
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"AddSubItem",
			"($,i,i,$,:Object)i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolItem_AddSubItem_SiiSTObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SelectSubItem",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolItem_SelectSubItem_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetSwitchIcon",
			"(i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolItem_SetSwitchIcon_ii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetState",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolItem_SetState_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SwapIcon",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolItem_SwapIcon
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetOver",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolItem_SetOver
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetNormal",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolItem_SetNormal
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetProp",
			"($,$)i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolItem_SetProp_SS
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_maxgui_proxygadgets_toolbarextra_tToolItem maxgui_proxygadgets_toolbarextra_tToolItem={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&maxgui_proxygadgets_toolbarextra_tToolItem_scope,
	sizeof(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj),
	(void (*)(BBOBJECT))_maxgui_proxygadgets_toolbarextra_tToolItem_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj,_maxgui_proxygadgets_toolbarextra_ttoolitem_tip) - sizeof(void*) + sizeof(BBSTRING)
	,_maxgui_proxygadgets_toolbarextra_tToolItem_Clear
	,maxgui_proxygadgets_toolbarextra_tToolItem_Create_TtToolItem_iTtToolbarExtraiiSii
	,maxgui_proxygadgets_toolbarextra_tToolItem_CreateSeparator_TtToolItem
	,_maxgui_proxygadgets_toolbarextra_tToolItem_AddSubItem_SiiSTObject
	,_maxgui_proxygadgets_toolbarextra_tToolItem_SelectSubItem_i
	,_maxgui_proxygadgets_toolbarextra_tToolItem_SetSwitchIcon_ii
	,_maxgui_proxygadgets_toolbarextra_tToolItem_SetState_i
	,_maxgui_proxygadgets_toolbarextra_tToolItem_SwapIcon
	,_maxgui_proxygadgets_toolbarextra_tToolItem_SetOver
	,_maxgui_proxygadgets_toolbarextra_tToolItem_SetNormal
	,_maxgui_proxygadgets_toolbarextra_tToolItem_SetProp_SS
};

void _maxgui_proxygadgets_toolbarextra_tToolbarExtra_New(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o) {
	_maxgui_maxgui_gadget_TProxyGadget_New((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o);
	o->clas = &maxgui_proxygadgets_toolbarextra_tToolbarExtra;
	o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_line = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_line_up = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_parent = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tfont = (struct maxgui_maxgui_guifont_TGuiFont_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget = &bbEmptyArray;
	o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_colors = bbArrayNew1D("b", 3);
	o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_iconstrip = (struct maxgui_maxgui_iconstrip_TIconStrip_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_grey_iconstrip = (struct maxgui_maxgui_iconstrip_TIconStrip_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_light_iconstrip = (struct maxgui_maxgui_iconstrip_TIconStrip_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_x = 0;
	o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_name = &bbEmptyString;
	o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_left_button = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_right_button = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_start_from = 0;
	o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_last_from = 0;
	o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_txt_rgb = bbArrayNew1D("i", 3);
}
struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* maxgui_proxygadgets_toolbarextra_tToolbarExtra_Create_TtToolbarExtra_TTGadgetTTIconStripi(struct maxgui_maxgui_gadget_TGadget_obj* bbt_parent,struct maxgui_maxgui_iconstrip_TIconStrip_obj* bbt__iconstrip,BBINT bbt__style){
	if(bbt_parent==&bbNullObject){
		return (struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)&bbNullObject;
	}
	struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* bbt_tb=(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbObjectNew((BBClass *)&maxgui_proxygadgets_toolbarextra_tToolbarExtra);
	bbt_tb->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreatePanel(0,0,maxgui_maxgui_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_parent),32,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_parent,0,&bbEmptyString);
	bbt_tb->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_line =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateLabel(&bbEmptyString,0,30,maxgui_maxgui_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_parent),0,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_tb->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel ,3);
	bbt_tb->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_line_up =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateLabel(&bbEmptyString,0,0,maxgui_maxgui_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_parent),0,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_tb->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel ,3);
	bbt_tb->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_iconstrip =(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbt__iconstrip;
	bbt_tb->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_parent =(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_parent;
	brl_hook_AddHook(brl_event_EmitEventHook,maxgui_proxygadgets_toolbarextra_tToolbarExtra_eventHandler_TObject_iTObjectTObject,(BBOBJECT)bbt_tb,0);
	maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_tb->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel ,1,1,1,0);
	if(maxgui_proxygadgets_toolbarextra_tToolbarExtra_list_tbextra==&bbNullObject){
		maxgui_proxygadgets_toolbarextra_tToolbarExtra_list_tbextra=(struct brl_linkedlist_TList_obj*)(struct brl_linkedlist_TList_obj*)bbObjectNew((BBClass *)&brl_linkedlist_TList);
	}
	(maxgui_proxygadgets_toolbarextra_tToolbarExtra_list_tbextra)->clas->m_AddLast_TObject((struct brl_linkedlist_TList_obj*)maxgui_proxygadgets_toolbarextra_tToolbarExtra_list_tbextra,(BBOBJECT)bbt_tb);
	(bbt_tb)->clas->m_SetProxy_TTGadget((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbt_tb,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_tb,(BBClass*)&maxgui_maxgui_gadget_TGadget)));
	bbt_tb->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_left_button =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateButton(&_s5,0,2,10,28,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_tb->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel ,8);
	bbt_tb->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_right_button =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateButton(&_s6,10,2,10,28,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_tb->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel ,8);
	maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_tb->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_left_button ,1,0,1,0);
	maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_tb->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_right_button ,1,0,1,0);
	bbt_tb->_maxgui_maxgui_gadget_tgadget_visible =1;
	bbt_tb->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_grey_iconstrip =(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbObjectDowncast((BBOBJECT)maxgui_proxygadgets_common_MakeGrey((BBOBJECT)bbt__iconstrip),(BBClass*)&maxgui_maxgui_iconstrip_TIconStrip));
	bbt_tb->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_light_iconstrip =(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbObjectDowncast((BBOBJECT)maxgui_proxygadgets_common_MakeLight((BBOBJECT)bbt__iconstrip),(BBClass*)&maxgui_maxgui_iconstrip_TIconStrip));
	BBBYTE bbt_re=0;
	BBBYTE bbt_ge=0;
	BBBYTE bbt_be=0;
	maxgui_maxgui_LookupGuiColor(0,(&bbt_re),(&bbt_ge),(&bbt_be));
	maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_tb->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel ,((BBINT)bbt_re),((BBINT)bbt_ge),((BBINT)bbt_be),1);
	BBBYTE bbt_[]={bbt_re,bbt_ge,bbt_be};
	BBARRAY bbt_2 = bbArrayFromData("b",3,bbt_);
	bbt_tb->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_colors =bbt_2;
	return (struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbt_tb;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetTextColor_iii(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o,BBINT bbt_r,BBINT bbt_g,BBINT bbt_b){
	BBINT bbt_[]={bbt_r,bbt_g,bbt_b};
	BBARRAY bbt_2 = bbArrayFromData("i",3,bbt_);
	o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_txt_rgb =bbt_2;
	return 0;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetColor_iii(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o,BBINT bbt_r,BBINT bbt_g,BBINT bbt_b){
	maxgui_maxgui_SetGadgetColor((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel ,bbt_r,bbt_g,bbt_b,1);
	BBBYTE bbt_[]={((BBBYTE)bbt_r),((BBBYTE)bbt_g),((BBBYTE)bbt_b)};
	BBARRAY bbt_2 = bbArrayFromData("b",3,bbt_);
	o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_colors =bbt_2;
	return 0;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_Activate_i(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o,BBINT bbt_cmd){
	BBARRAY bbt_=o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ;
	BBUINT bbt_2=0U;
	while(bbt_2<((BBUINT)(bbt_->scales[0]))){
		struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* bbt_t=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATA(bbt_,1))[bbt_2];
		bbt_2=(bbt_2+1U);
		if(bbt_t==&bbNullObject){
			continue;
		}
		if(((BBObject*)bbt_t->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget )!= &bbNullObject){
			maxgui_maxgui_SetGadgetToolTip((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_t->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,maxgui_maxgui_gadget_TGadget_LocalizeString(bbt_t->_maxgui_proxygadgets_toolbarextra_ttoolitem_tip ));
		}
	}
	return 0;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_CleanUp(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o){
	brl_hook_RemoveHook(brl_event_EmitEventHook,o->clas->f_eventHandler_TObject_iTObjectTObject,(BBOBJECT)o);
	if(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget != &bbEmptyArray){
		{
			BBINT bbt_k=0;
			BBINT bbt_=(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->scales[0];
			for(;(bbt_k<bbt_);bbt_k=(bbt_k+1)){
				if(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,1))[((BBUINT)bbt_k)]!=&bbNullObject){
					struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* bbt_2;
					((bbt_2 = ((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,1))[((BBUINT)bbt_k)])->clas)->m_Clear((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbt_2);
					((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,1))[((BBUINT)bbt_k)]=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)&bbNullObject;
				}
			}
		}
		o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget =&bbEmptyArray;
	}
	if(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_colors != &bbEmptyArray){
		o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_colors =&bbEmptyArray;
	}
	if(((BBObject*)o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_iconstrip )!= &bbNullObject){
		o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_iconstrip =(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)&bbNullObject;
	}
	if(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_txt_rgb != &bbEmptyArray){
		o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_txt_rgb =&bbEmptyArray;
	}
	if(((BBObject*)o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_grey_iconstrip )!= &bbNullObject){
		o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_grey_iconstrip =(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)&bbNullObject;
	}
	if(((BBObject*)o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_light_iconstrip )!= &bbNullObject){
		o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_light_iconstrip =(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)&bbNullObject;
	}
	if(((BBObject*)o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tfont )!= &bbNullObject){
		o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tfont =(struct maxgui_maxgui_guifont_TGuiFont_obj*)&bbNullObject;
	}
	if(((BBObject*)o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_left_button )!= &bbNullObject){
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_left_button );
		o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_left_button =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	}
	if(((BBObject*)o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_right_button )!= &bbNullObject){
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_right_button );
		o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_right_button =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	}
	if(((BBObject*)o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_line )!= &bbNullObject){
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_line );
		o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_line =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	}
	if(((BBObject*)o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel )!= &bbNullObject){
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel );
		o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	}
	if(((BBObject*)o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel )!= &bbNullObject){
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel );
		o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	}
	return 0;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetShow_i(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o,BBINT bbt_truefalse){
	if((bbt_truefalse==1) && (o->_maxgui_maxgui_gadget_tgadget_visible ==0)){
		maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel ,0,0,o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel ->_maxgui_maxgui_gadget_tgadget_width ,32);
		struct brl_linkedlist_TList_obj* bbt_2;
		struct brl_linkedlist_TListEnum_obj* bbt_=(struct brl_linkedlist_TListEnum_obj*)(((struct brl_linkedlist_TList_obj*)(bbt_2 = o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_parent ->_maxgui_maxgui_gadget_tgadget_kids ))->clas)->m_ObjectEnumerator((struct brl_linkedlist_TList_obj*)bbt_2);
		while((bbt_)->clas->m_HasNext((struct brl_linkedlist_TListEnum_obj*)bbt_)!=0){
			struct maxgui_maxgui_gadget_TGadget_obj* bbt_g=(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)(bbt_)->clas->m_NextObject((struct brl_linkedlist_TListEnum_obj*)bbt_),(BBClass*)&maxgui_maxgui_gadget_TGadget));
			if(bbt_g==&bbNullObject){
				continue;
			}
			if(bbt_g!=o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel ){
				maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_g,bbt_g->_maxgui_maxgui_gadget_tgadget_xpos ,(bbt_g->_maxgui_maxgui_gadget_tgadget_ypos +32),bbt_g->_maxgui_maxgui_gadget_tgadget_width ,bbt_g->_maxgui_maxgui_gadget_tgadget_height );
			}
		}
		o->_maxgui_maxgui_gadget_tgadget_visible =1;
		((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)o)->clas->m_ReshapeAll((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)o);
		((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)o)->clas->m_EnableAll((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)o);
		maxgui_maxgui_RedrawGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel );
	}
	if((bbt_truefalse==0) && (o->_maxgui_maxgui_gadget_tgadget_visible ==1)){
		maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel ,0,0,o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel ->_maxgui_maxgui_gadget_tgadget_width ,0);
		maxgui_maxgui_RedrawGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel );
		struct brl_linkedlist_TList_obj* bbt_4;
		struct brl_linkedlist_TListEnum_obj* bbt_3=(struct brl_linkedlist_TListEnum_obj*)(((struct brl_linkedlist_TList_obj*)(bbt_4 = o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_parent ->_maxgui_maxgui_gadget_tgadget_kids ))->clas)->m_ObjectEnumerator((struct brl_linkedlist_TList_obj*)bbt_4);
		while((bbt_3)->clas->m_HasNext((struct brl_linkedlist_TListEnum_obj*)bbt_3)!=0){
			struct maxgui_maxgui_gadget_TGadget_obj* bbt_g2=(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)(bbt_3)->clas->m_NextObject((struct brl_linkedlist_TListEnum_obj*)bbt_3),(BBClass*)&maxgui_maxgui_gadget_TGadget));
			if(bbt_g2==&bbNullObject){
				continue;
			}
			if(bbt_g2!=o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel ){
				maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_g2,bbt_g2->_maxgui_maxgui_gadget_tgadget_xpos ,(bbt_g2->_maxgui_maxgui_gadget_tgadget_ypos -32),bbt_g2->_maxgui_maxgui_gadget_tgadget_width ,bbt_g2->_maxgui_maxgui_gadget_tgadget_height );
			}
		}
		o->_maxgui_maxgui_gadget_tgadget_visible =0;
	}
	return 0;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_ReshapeAll(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o){
	BBINT bbt__x=0;
	BBINT bbt__y=0;
	BBINT bbt__h=0;
	BBINT bbt__w=0;
	BBINT bbt_tow=0;
	if(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ==&bbEmptyArray){
		return 0;
	}
	BBARRAY bbt_=o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ;
	BBUINT bbt_2=0U;
	while(bbt_2<((BBUINT)(bbt_->scales[0]))){
		struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* bbt_g=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATA(bbt_,1))[bbt_2];
		bbt_2=(bbt_2+1U);
		if(bbt_g==&bbNullObject){
			continue;
		}
		if(bbt_g->_maxgui_proxygadgets_toolbarextra_ttoolitem_item_type !=99){
			bbt_tow+=(maxgui_maxgui_GadgetWidth((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_g->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget )+1);
			maxgui_maxgui_HideGadget((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_g->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget );
		}else{
			bbt_tow+=16;
		}
	}
	if(bbt_tow>o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel ->_maxgui_maxgui_gadget_tgadget_width ){
		bbt__x=20;
	}
	bbt_tow=0;
	struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* bbt_g2=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)&bbNullObject;
	if(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_start_from >((o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->scales[0]-1)){
		o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_start_from =((o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->scales[0]-1);
	}
	if(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_start_from <0){
		o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_start_from =0;
	}
	{
		BBINT bbt_index=o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_start_from ;
		BBINT bbt_3=(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->scales[0];
		for(;(bbt_index<bbt_3);bbt_index=(bbt_index+1)){
			bbt_g2=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,1))[((BBUINT)bbt_index)];
			if(((BBObject*)bbt_g2)!= &bbNullObject){
				if(bbt_g2->_maxgui_proxygadgets_toolbarextra_ttoolitem_item_type !=99){
					maxgui_maxgui_ShowGadget((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_g2->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget );
					bbt__y=maxgui_maxgui_GadgetY((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_g2->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget );
					bbt__w=maxgui_maxgui_GadgetWidth((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_g2->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget );
					bbt__h=maxgui_maxgui_GadgetHeight((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_g2->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget );
					maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_g2->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,bbt__x,bbt__y,bbt__w,bbt__h);
					bbt__x+=(bbt__w+1);
					bbt_tow+=(bbt__w+1);
				}else{
					bbt__x+=16;
					bbt_tow+=16;
				}
			}
		}
	}
	if(bbt_tow>(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel ->_maxgui_maxgui_gadget_tgadget_width -32)){
		maxgui_maxgui_ShowGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_left_button );
		maxgui_maxgui_ShowGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_right_button );
	}else{
		maxgui_maxgui_HideGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_left_button );
		maxgui_maxgui_HideGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_right_button );
	}
	if(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_last_from >0){
		maxgui_maxgui_ShowGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_right_button );
		maxgui_maxgui_ShowGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_left_button );
	}
	maxgui_maxgui_RedrawGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel );
	return 0;
}
BBOBJECT maxgui_proxygadgets_toolbarextra_tToolbarExtra_eventHandler_TObject_iTObjectTObject(BBINT bbt_pID,BBOBJECT bbt_pData,BBOBJECT bbt_pContext){
	struct brl_event_TEvent_obj* bbt_pEvent=(struct brl_event_TEvent_obj*)((struct brl_event_TEvent_obj*)bbObjectDowncast((BBOBJECT)bbt_pData,(BBClass*)&brl_event_TEvent));
	struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* bbt_obj=(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbObjectDowncast((BBOBJECT)bbt_pContext,(BBClass*)&maxgui_proxygadgets_toolbarextra_tToolbarExtra));
	struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* bbt_item=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)&bbNullObject;
	BBSTRING bbt_extra=&bbEmptyString;
	if(((BBObject*)bbt_pEvent)!= &bbNullObject){
		BBINT bbt_=bbt_pEvent->_brl_event_tevent_id ;
		if(bbt_==1030){
			if(bbt_pEvent->_brl_event_tevent_source !=&bbNullObject){
				bbt_item=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbObjectDowncast((BBOBJECT)maxgui_maxgui_GadgetExtra((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_pEvent->_brl_event_tevent_source ,(BBClass*)&maxgui_maxgui_gadget_TGadget))),(BBClass*)&maxgui_proxygadgets_toolbarextra_tToolItem));
				if(((BBObject*)bbt_item)!= &bbNullObject){
					(bbt_item)->clas->m_SetNormal((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbt_item);
				}
			}
		}else{
			if(bbt_==1029){
				if(bbt_pEvent->_brl_event_tevent_source !=&bbNullObject){
					bbt_item=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbObjectDowncast((BBOBJECT)maxgui_maxgui_GadgetExtra((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_pEvent->_brl_event_tevent_source ,(BBClass*)&maxgui_maxgui_gadget_TGadget))),(BBClass*)&maxgui_proxygadgets_toolbarextra_tToolItem));
					if(((BBObject*)bbt_item)!= &bbNullObject){
						(bbt_item)->clas->m_SetOver((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbt_item);
					}
				}
			}else{
				if((((bbt_==16385) || (bbt_==16387)) || (bbt_==16388)) || (bbt_==128)){
					(bbt_obj)->clas->m_ReshapeAll((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbt_obj);
				}else{
					if(bbt_==16386){
						if(bbt_obj->_maxgui_maxgui_gadget_tgadget_visible ==1){
							BBINT bbt_w=maxgui_maxgui_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_pEvent->_brl_event_tevent_source ,(BBClass*)&maxgui_maxgui_gadget_TGadget)));
							maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel ,0,0,bbt_w,32);
							maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_line ,0,30,bbt_w,0);
							maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_obj->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_line_up ,0,0,bbt_w,0);
							bbt_obj->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_last_from =0;
							bbt_obj->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_start_from =0;
							(bbt_obj)->clas->m_ReshapeAll((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbt_obj);
						}
					}else{
						if(bbt_==514){
							if(bbt_pEvent->_brl_event_tevent_data ==13){
								struct brl_linkedlist_TListEnum_obj* bbt_2=(struct brl_linkedlist_TListEnum_obj*)(maxgui_proxygadgets_toolbarextra_tToolbarExtra_list_tbextra)->clas->m_ObjectEnumerator((struct brl_linkedlist_TList_obj*)maxgui_proxygadgets_toolbarextra_tToolbarExtra_list_tbextra);
								while((bbt_2)->clas->m_HasNext((struct brl_linkedlist_TListEnum_obj*)bbt_2)!=0){
									struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* bbt_tb=(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbObjectDowncast((BBOBJECT)(bbt_2)->clas->m_NextObject((struct brl_linkedlist_TListEnum_obj*)bbt_2),(BBClass*)&maxgui_proxygadgets_toolbarextra_tToolbarExtra));
									if(bbt_tb==&bbNullObject){
										continue;
									}
									if(bbt_tb!=&bbNullObject){
										BBARRAY bbt_3=bbt_tb->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ;
										BBUINT bbt_4=0U;
										while(bbt_4<((BBUINT)(bbt_3->scales[0]))){
											struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* bbt_item2=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATA(bbt_3,1))[bbt_4];
											bbt_4=(bbt_4+1U);
											if(bbt_item2==&bbNullObject){
												continue;
											}
											if(bbt_item2->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ==bbt_pEvent->_brl_event_tevent_source ){
												return (BBOBJECT)brl_event_CreateEvent(8193,(BBOBJECT)bbt_item2->_maxgui_proxygadgets_toolbarextra_ttoolitem_toolbar ,bbt_item2->_maxgui_proxygadgets_toolbarextra_ttoolitem_return_id ,0,0,0,(BBOBJECT)maxgui_maxgui_GadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_item2->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ));
											}
										}
									}
								}
							}
						}else{
							if(bbt_==8193){
								struct brl_linkedlist_TListEnum_obj* bbt_5=(struct brl_linkedlist_TListEnum_obj*)(maxgui_proxygadgets_toolbarextra_tToolbarExtra_list_tbextra)->clas->m_ObjectEnumerator((struct brl_linkedlist_TList_obj*)maxgui_proxygadgets_toolbarextra_tToolbarExtra_list_tbextra);
								while((bbt_5)->clas->m_HasNext((struct brl_linkedlist_TListEnum_obj*)bbt_5)!=0){
									struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* bbt_tb2=(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbObjectDowncast((BBOBJECT)(bbt_5)->clas->m_NextObject((struct brl_linkedlist_TListEnum_obj*)bbt_5),(BBClass*)&maxgui_proxygadgets_toolbarextra_tToolbarExtra));
									if(bbt_tb2==&bbNullObject){
										continue;
									}
									if(bbt_tb2!=&bbNullObject){
										if(bbt_tb2->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_left_button ==((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_pEvent->_brl_event_tevent_source ,(BBClass*)&maxgui_maxgui_gadget_TGadget))){
											bbt_tb2->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_start_from +=1;
											bbt_tb2->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_last_from =bbt_tb2->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_start_from ;
											(bbt_tb2)->clas->m_ReshapeAll((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbt_tb2);
											bbt_pEvent=(struct brl_event_TEvent_obj*)&bbNullObject;
											return (BBOBJECT)&bbNullObject;
										}
										if(bbt_tb2->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_right_button ==((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_pEvent->_brl_event_tevent_source ,(BBClass*)&maxgui_maxgui_gadget_TGadget))){
											bbt_tb2->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_last_from -=1;
											bbt_tb2->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_start_from =bbt_tb2->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_last_from ;
											(bbt_tb2)->clas->m_ReshapeAll((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbt_tb2);
											bbt_pEvent=(struct brl_event_TEvent_obj*)&bbNullObject;
											return (BBOBJECT)&bbNullObject;
										}
										BBINT bbt_mods=0;
										BBINT bbt_x=0;
										BBINT bbt_y=0;
										BBSTRING bbt_ti=&bbEmptyString;
										BBARRAY bbt_6=bbt_tb2->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ;
										BBUINT bbt_7=0U;
										while(bbt_7<((BBUINT)(bbt_6->scales[0]))){
											struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* bbt_item3=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATA(bbt_6,1))[bbt_7];
											bbt_7=(bbt_7+1U);
											if(bbt_item3==&bbNullObject){
												continue;
											}
											bbt_mods=-1;
											if(bbt_pEvent->_brl_event_tevent_source ==bbt_item3->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ){
												if((bbt_item3->_maxgui_proxygadgets_toolbarextra_ttoolitem_enabled ==-5) && (bbt_item3->_maxgui_proxygadgets_toolbarextra_ttoolitem_item_type !=2)){
													if(bbt_item3->_maxgui_proxygadgets_toolbarextra_ttoolitem_item_type ==3){
														bbt_extra=bbStringFromInt(bbt_pEvent->_brl_event_tevent_data );
													}
													if(bbt_item3->_maxgui_proxygadgets_toolbarextra_ttoolitem_item_type ==8){
														bbt_mods=maxgui_maxgui_SliderValue((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_item3->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget );
														bbt_ti=bbt_item3->_maxgui_proxygadgets_toolbarextra_ttoolitem_tip ;
														if(bbt_ti!=&bbEmptyString){
															if(bbStringContains((BBSTRING)bbt_ti,&_s0)!=0){
																bbt_ti=bbStringReplace((BBSTRING)bbt_ti,&_s0,bbStringFromInt(bbt_mods));
															}
														}
														maxgui_maxgui_SetGadgetToolTip((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_item3->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,bbt_ti);
													}
													return (BBOBJECT)brl_event_CreateEvent(8193,(BBOBJECT)bbt_item3->_maxgui_proxygadgets_toolbarextra_ttoolitem_toolbar ,bbt_item3->_maxgui_proxygadgets_toolbarextra_ttoolitem_return_id ,bbt_mods,bbt_x,bbt_y,(BBOBJECT)bbt_extra);
												}
											}
										}
									}
								}
							}else{
								if(bbt_==1025){
									struct brl_linkedlist_TListEnum_obj* bbt_8=(struct brl_linkedlist_TListEnum_obj*)(maxgui_proxygadgets_toolbarextra_tToolbarExtra_list_tbextra)->clas->m_ObjectEnumerator((struct brl_linkedlist_TList_obj*)maxgui_proxygadgets_toolbarextra_tToolbarExtra_list_tbextra);
									while((bbt_8)->clas->m_HasNext((struct brl_linkedlist_TListEnum_obj*)bbt_8)!=0){
										struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* bbt_tb3=(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbObjectDowncast((BBOBJECT)(bbt_8)->clas->m_NextObject((struct brl_linkedlist_TListEnum_obj*)bbt_8),(BBClass*)&maxgui_proxygadgets_toolbarextra_tToolbarExtra));
										if(bbt_tb3==&bbNullObject){
											continue;
										}
										if(bbt_tb3!=&bbNullObject){
											if(bbt_tb3->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_left_button ==bbt_pEvent->_brl_event_tevent_source ){
												bbt_tb3->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_start_from +=1;
												(bbt_tb3)->clas->m_ReshapeAll((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)bbt_tb3);
												return (BBOBJECT)&bbNullObject;
											}
										}
									}
									bbt_item=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbObjectDowncast((BBOBJECT)maxgui_maxgui_GadgetExtra((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_pEvent->_brl_event_tevent_source ,(BBClass*)&maxgui_maxgui_gadget_TGadget))),(BBClass*)&maxgui_proxygadgets_toolbarextra_tToolItem));
									if(((BBObject*)bbt_item)!= &bbNullObject){
										if(bbt_item->_maxgui_proxygadgets_toolbarextra_ttoolitem_enabled ==-5){
											if(bbt_item->_maxgui_proxygadgets_toolbarextra_ttoolitem_item_type ==4){
												(bbt_item)->clas->m_SwapIcon((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbt_item);
											}
											return (BBOBJECT)brl_event_CreateEvent(8193,(BBOBJECT)bbt_item->_maxgui_proxygadgets_toolbarextra_ttoolitem_toolbar ,bbt_item->_maxgui_proxygadgets_toolbarextra_ttoolitem_return_id ,0,0,0,(BBOBJECT)&bbNullObject);
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
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_InsertItem_iSSiTObjecti(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o,BBINT bbt_index,BBSTRING bbt_Text,BBSTRING bbt_tip,BBINT bbt_icon,BBOBJECT bbt_extra,BBINT bbt_flags){
	o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget =bbArraySlice(":tToolItem",o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,0,(bbt_index+1));
	BBINT bbt_Return_ID=bbt_index;
	if(bbt_tip!=&bbEmptyString){
		bbt_Return_ID=bbStringToInt(bbt_tip);
	}
	if(bbt_flags==99){
		((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,1))[((BBUINT)bbt_index)]=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)maxgui_proxygadgets_toolbarextra_tToolItem_CreateSeparator_TtToolItem();
		o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_x +=16;
	}else{
		((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,1))[((BBUINT)bbt_index)]=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)maxgui_proxygadgets_toolbarextra_tToolItem_Create_TtToolItem_iTtToolbarExtraiiSii(bbt_index,(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)o,o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_x ,bbt_flags,bbt_Text,bbt_Return_ID,bbt_icon);
		o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_x +=(maxgui_maxgui_GadgetWidth((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,1))[((BBUINT)bbt_index)]->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget )+1);
	}
	return 0;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_SelectItem_ii(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o,BBINT bbt_index,BBINT bbt_t){
	if(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,1))[((BBUINT)bbt_index)]->_maxgui_proxygadgets_toolbarextra_ttoolitem_item_type ==4){
		struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* bbt_;
		((bbt_ = ((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,1))[((BBUINT)bbt_index)])->clas)->m_SwapIcon((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbt_);
	}
	return 0;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetEnabled_i(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o,BBINT bbt_sta){
	if(bbt_sta!=0){
		((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)o)->clas->m_EnableAll((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)o);
	}else{
		((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)o)->clas->m_DisableAll((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)o);
	}
	return 0;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_State(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o){
	return -9;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_EnableAll(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o){
	struct brl_pixmap_TPixmap_obj* bbt_pix=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	BBARRAY bbt_=o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ;
	BBUINT bbt_2=0U;
	while(bbt_2<((BBUINT)(bbt_->scales[0]))){
		struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* bbt_t=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATA(bbt_,1))[bbt_2];
		bbt_2=(bbt_2+1U);
		if(bbt_t==&bbNullObject){
			continue;
		}
		if(((BBObject*)bbt_t->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget )!= &bbNullObject){
			maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_t->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget );
			if((bbt_t->_maxgui_proxygadgets_toolbarextra_ttoolitem_item_type ==1) || (bbt_t->_maxgui_proxygadgets_toolbarextra_ttoolitem_item_type ==4)){
				bbt_pix=(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_iconstrip ,bbt_t->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_current );
				maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_t->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,(struct brl_pixmap_TPixmap_obj*)bbt_pix,1);
				if(bbt_t->_maxgui_proxygadgets_toolbarextra_ttoolitem_enabled ==4){
					bbt_pix=(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_grey_iconstrip ,bbt_t->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_current );
					maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_t->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,(struct brl_pixmap_TPixmap_obj*)bbt_pix,1);
				}
			}
		}
	}
	maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_left_button );
	maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_right_button );
	return 0;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_DisableAll(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o){
	struct brl_pixmap_TPixmap_obj* bbt_pix=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	BBARRAY bbt_=o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ;
	BBUINT bbt_2=0U;
	while(bbt_2<((BBUINT)(bbt_->scales[0]))){
		struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* bbt_t=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATA(bbt_,1))[bbt_2];
		bbt_2=(bbt_2+1U);
		if(bbt_t==&bbNullObject){
			continue;
		}
		if(((BBObject*)bbt_t->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget )!= &bbNullObject){
			maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_t->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget );
			if((bbt_t->_maxgui_proxygadgets_toolbarextra_ttoolitem_item_type ==1) || (bbt_t->_maxgui_proxygadgets_toolbarextra_ttoolitem_item_type ==4)){
				bbt_pix=(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_grey_iconstrip ,bbt_t->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_current );
				maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_t->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,(struct brl_pixmap_TPixmap_obj*)bbt_pix,1);
			}
		}
	}
	maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_left_button );
	maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_right_button );
	return 0;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetItem_iSSiTObjecti(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o,BBINT bbt_index,BBSTRING bbt_Text,BBSTRING bbt_tip,BBINT bbt_icon,BBOBJECT bbt_extra,BBINT bbt_flags){
	if(bbt_tip!=&bbEmptyString){
		maxgui_maxgui_SetGadgetToolTip((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,1))[((BBUINT)bbt_index)]->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,bbt_tip);
	}
	if(bbt_extra!=&bbNullObject){
		maxgui_maxgui_SetGadgetExtra((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,1))[((BBUINT)bbt_index)]->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,(BBOBJECT)bbt_extra);
	}
	if(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,1))[((BBUINT)bbt_index)]->_maxgui_proxygadgets_toolbarextra_ttoolitem_item_type ==4){
		struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* bbt_;
		((bbt_ = ((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,1))[((BBUINT)bbt_index)])->clas)->m_SwapIcon((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbt_);
		return 0;
	}
	if(bbt_Text!=&bbEmptyString){
		maxgui_maxgui_SetGadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,1))[((BBUINT)bbt_index)]->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,bbt_Text);
	}
	return 0;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetItemState_ii(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o,BBINT bbt_index,BBINT bbt_state){
	struct brl_pixmap_TPixmap_obj* bbt_pix=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	BBINT bbt_=bbt_state;
	if(bbt_==-1){
		bbt_pix=(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_grey_iconstrip ,((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,1))[((BBUINT)bbt_index)]->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_current );
		maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,1))[((BBUINT)bbt_index)]->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,(struct brl_pixmap_TPixmap_obj*)bbt_pix,1);
		((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,1))[((BBUINT)bbt_index)]->_maxgui_proxygadgets_toolbarextra_ttoolitem_enabled =4;
	}else{
		if(bbt_==0){
			bbt_pix=(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_iconstrip ,((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,1))[((BBUINT)bbt_index)]->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_current );
			maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,1))[((BBUINT)bbt_index)]->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,(struct brl_pixmap_TPixmap_obj*)bbt_pix,1);
			((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,1))[((BBUINT)bbt_index)]->_maxgui_proxygadgets_toolbarextra_ttoolitem_enabled =-5;
		}
	}
	return 0;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_ItemState_i(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o,BBINT bbt_index){
	return ((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,1))[((BBUINT)bbt_index)]->_maxgui_proxygadgets_toolbarextra_ttoolitem_enabled ;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_ItemCount(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o){
	return (o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->scales[0];
}
BBSTRING _maxgui_proxygadgets_toolbarextra_tToolbarExtra_ItemText_i(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o,BBINT bbt_index){
	if(bbt_index==-1){
		return &bbEmptyString;
	}
	if(((BBObject*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,1))[((BBUINT)bbt_index)]->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget )!= &bbNullObject){
		return maxgui_maxgui_GadgetText((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,1))[((BBUINT)bbt_index)]->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget );
	}
	return &bbEmptyString;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_ItemIcon_i(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o,BBINT bbt_index){
	return ((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,1))[((BBUINT)bbt_index)]->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_current ;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_ItemFlags_i(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o,BBINT bbt_index){
	return ((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,1))[((BBUINT)bbt_index)]->_maxgui_proxygadgets_toolbarextra_ttoolitem_item_type ;
}
BBOBJECT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_ItemExtra_i(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o,BBINT bbt_index){
	if(bbt_index==-1){
		return (BBOBJECT)&bbNullObject;
	}
	return (BBOBJECT)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,1))[((BBUINT)bbt_index)]->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ->_maxgui_maxgui_gadget_tgadget_extra ;
}
struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* _maxgui_proxygadgets_toolbarextra_tToolbarExtra_AddItem_iSii(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o,BBINT bbt__TYPE,BBSTRING bbt__title,BBINT bbt__return_id,BBINT bbt_icon){
	BBINT bbt_size=(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->scales[0];
	o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget =bbArraySlice(":tToolItem",o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,0,(bbt_size+1));
	if(bbt__TYPE==99){
		((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,1))[((BBUINT)bbt_size)]=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)maxgui_proxygadgets_toolbarextra_tToolItem_CreateSeparator_TtToolItem();
		o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_x +=16;
	}else{
		((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,1))[((BBUINT)bbt_size)]=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)maxgui_proxygadgets_toolbarextra_tToolItem_Create_TtToolItem_iTtToolbarExtraiiSii(bbt_size,(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)o,o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_x ,bbt__TYPE,bbt__title,bbt__return_id,bbt_icon);
		o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_x +=(maxgui_maxgui_GadgetWidth((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,1))[((BBUINT)bbt_size)]->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget )+1);
	}
	return (struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,1))[((BBUINT)bbt_size)];
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_AddSeparator(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o){
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)o)->clas->m_AddItem_iSii((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)o,99,&bbEmptyString,-1,-1);
	return 0;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_RemoveItem_i(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o,BBINT bbt_index){
	if(bbt_index<0){
		return 1;
	}
	if(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,1))[((BBUINT)bbt_index)]!=&bbNullObject){
		if(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,1))[((BBUINT)bbt_index)]->_maxgui_proxygadgets_toolbarextra_ttoolitem_item_type ==99){
			o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_x -=16;
		}else{
			o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_x -=(maxgui_maxgui_GadgetWidth((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,1))[((BBUINT)bbt_index)]->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget )+1);
		}
		struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* bbt_;
		((bbt_ = ((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,1))[((BBUINT)bbt_index)])->clas)->m_Clear((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbt_);
		((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,1))[((BBUINT)bbt_index)]=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)&bbNullObject;
		o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget =bbArrayConcat(":tToolItem",bbArraySlice(":tToolItem",o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,0,bbt_index),bbArraySlice(":tToolItem",o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,(bbt_index+1),(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->scales[0]));
		((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)o)->clas->m_ReshapeAll((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)o);
	}
	return 0;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_Clear(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o){
	{
		BBINT bbt_i=0;
		BBINT bbt_=(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ->scales[0]);
		for(;(bbt_i<bbt_);bbt_i=(bbt_i+1)){
			if(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,1))[((BBUINT)bbt_i)]!=&bbNullObject){
				struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* bbt_2;
				((bbt_2 = ((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,1))[((BBUINT)bbt_i)])->clas)->m_Clear((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)bbt_2);
				((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,1))[((BBUINT)bbt_i)]=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)&bbNullObject;
			}
		}
	}
	o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget =&bbEmptyArray;
	o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_x =0;
	((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)o)->clas->m_ReshapeAll((struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)o);
	return 0;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetIconStrip_TTIconStrip(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o,struct maxgui_maxgui_iconstrip_TIconStrip_obj* bbt_ics){
	o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_iconstrip =(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbt_ics;
	o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_grey_iconstrip =(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbObjectDowncast((BBOBJECT)maxgui_proxygadgets_common_MakeGrey((BBOBJECT)o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_iconstrip ),(BBClass*)&maxgui_maxgui_iconstrip_TIconStrip));
	o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_light_iconstrip =(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbObjectDowncast((BBOBJECT)maxgui_proxygadgets_common_MakeLight((BBOBJECT)o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_iconstrip ),(BBClass*)&maxgui_maxgui_iconstrip_TIconStrip));
	struct brl_pixmap_TPixmap_obj* bbt_pix=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	BBARRAY bbt_=o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ;
	BBUINT bbt_2=0U;
	while(bbt_2<((BBUINT)(bbt_->scales[0]))){
		struct maxgui_proxygadgets_toolbarextra_tToolItem_obj* bbt_t=(struct maxgui_proxygadgets_toolbarextra_tToolItem_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATA(bbt_,1))[bbt_2];
		bbt_2=(bbt_2+1U);
		if(bbt_t==&bbNullObject){
			continue;
		}
		if(((BBObject*)bbt_t->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget )!= &bbNullObject){
			if(bbt_t->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_current >-1){
				bbt_pix=(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_iconstrip ,bbt_t->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_current );
				maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_t->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,(struct brl_pixmap_TPixmap_obj*)bbt_pix,1);
				if(bbt_t->_maxgui_proxygadgets_toolbarextra_ttoolitem_enabled ==4){
					bbt_pix=(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_grey_iconstrip ,bbt_t->_maxgui_proxygadgets_toolbarextra_ttoolitem_icon_current );
					maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_t->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,(struct brl_pixmap_TPixmap_obj*)bbt_pix,1);
				}
			}
		}
	}
	return 0;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_Class(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o){
	return 8;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetToolTipExtra_iS(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o,BBINT bbt_ID,BBSTRING bbt__ti){
	if((bbt_ID>-1) && (bbt_ID<(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget )->scales[0])){
		if(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,1))[((BBUINT)bbt_ID)]==&bbNullObject){
			brl_standardio_Print(bbStringConcat(&_s7,bbStringFromInt(bbt_ID)));
		}
		if((bbStringContains((BBSTRING)bbt__ti,&_s0)!=0) && (((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,1))[((BBUINT)bbt_ID)]->_maxgui_proxygadgets_toolbarextra_ttoolitem_item_type ==8)){
			bbStringReplace((BBSTRING)bbt__ti,&_s0,bbStringFromInt(maxgui_maxgui_SliderValue((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,1))[((BBUINT)bbt_ID)]->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget )));
		}
		if(((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,1))[((BBUINT)bbt_ID)]->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget !=&bbNullObject){
			maxgui_maxgui_SetGadgetToolTip((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,1))[((BBUINT)bbt_ID)]->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,bbt__ti);
			((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,1))[((BBUINT)bbt_ID)]->_maxgui_proxygadgets_toolbarextra_ttoolitem_tip =bbt__ti;
		}
	}
	return 0;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetFont_TTGuiFont(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o,struct maxgui_maxgui_guifont_TGuiFont_obj* bbt_Font){
	return 0;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetIcon_ii(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o,BBINT bbt_ID,BBINT bbt__icon){
	if(bbt__icon>-1){
		struct brl_pixmap_TPixmap_obj* bbt_pix=(struct brl_pixmap_TPixmap_obj*)maxgui_maxgui_PixmapFromIconStrip((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_iconstrip ,bbt__icon);
		maxgui_maxgui_SetGadgetPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_proxygadgets_toolbarextra_tToolItem_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget ,1))[((BBUINT)bbt_ID)]->_maxgui_proxygadgets_toolbarextra_ttoolitem_gadget ,(struct brl_pixmap_TPixmap_obj*)bbt_pix,1);
	}
	return 0;
}
BBINT _maxgui_proxygadgets_toolbarextra_tToolbarExtra_SelectedItem(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o){
	return -1;
}
BBARRAY _maxgui_proxygadgets_toolbarextra_tToolbarExtra_SelectedItems(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* o){
	BBINT bbt_[]={0};
	BBARRAY bbt_2 = bbArrayFromData("i",1,bbt_);
	return bbt_2;
}
struct brl_linkedlist_TList_obj* maxgui_proxygadgets_toolbarextra_tToolbarExtra_list_tbextra;
BBINT maxgui_proxygadgets_toolbarextra_tToolbarExtra_item_width;
struct BBDebugScope_53 maxgui_proxygadgets_toolbarextra_tToolbarExtra_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"tToolbarExtra",
	{
		{
			BBDEBUGDECL_FIELD,
			"panel",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj,_maxgui_proxygadgets_toolbarextra_ttoolbarextra_panel)
		},
		{
			BBDEBUGDECL_FIELD,
			"line",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj,_maxgui_proxygadgets_toolbarextra_ttoolbarextra_line)
		},
		{
			BBDEBUGDECL_FIELD,
			"line_up",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj,_maxgui_proxygadgets_toolbarextra_ttoolbarextra_line_up)
		},
		{
			BBDEBUGDECL_FIELD,
			"parent",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj,_maxgui_proxygadgets_toolbarextra_ttoolbarextra_parent)
		},
		{
			BBDEBUGDECL_FIELD,
			"tfont",
			":TGuiFont",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj,_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tfont)
		},
		{
			BBDEBUGDECL_FIELD,
			"tool_gadget",
			"[]:tToolItem",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj,_maxgui_proxygadgets_toolbarextra_ttoolbarextra_tool_gadget)
		},
		{
			BBDEBUGDECL_FIELD,
			"colors",
			"[]b",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj,_maxgui_proxygadgets_toolbarextra_ttoolbarextra_colors)
		},
		{
			BBDEBUGDECL_FIELD,
			"iconstrip",
			":TIconStrip",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj,_maxgui_proxygadgets_toolbarextra_ttoolbarextra_iconstrip)
		},
		{
			BBDEBUGDECL_FIELD,
			"grey_iconstrip",
			":TIconStrip",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj,_maxgui_proxygadgets_toolbarextra_ttoolbarextra_grey_iconstrip)
		},
		{
			BBDEBUGDECL_FIELD,
			"light_iconstrip",
			":TIconStrip",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj,_maxgui_proxygadgets_toolbarextra_ttoolbarextra_light_iconstrip)
		},
		{
			BBDEBUGDECL_FIELD,
			"x",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj,_maxgui_proxygadgets_toolbarextra_ttoolbarextra_x)
		},
		{
			BBDEBUGDECL_FIELD,
			"name",
			"$",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj,_maxgui_proxygadgets_toolbarextra_ttoolbarextra_name)
		},
		{
			BBDEBUGDECL_FIELD,
			"left_button",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj,_maxgui_proxygadgets_toolbarextra_ttoolbarextra_left_button)
		},
		{
			BBDEBUGDECL_FIELD,
			"right_button",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj,_maxgui_proxygadgets_toolbarextra_ttoolbarextra_right_button)
		},
		{
			BBDEBUGDECL_FIELD,
			"start_from",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj,_maxgui_proxygadgets_toolbarextra_ttoolbarextra_start_from)
		},
		{
			BBDEBUGDECL_FIELD,
			"last_from",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj,_maxgui_proxygadgets_toolbarextra_ttoolbarextra_last_from)
		},
		{
			BBDEBUGDECL_FIELD,
			"txt_rgb",
			"[]i",
			.field_offset=offsetof(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj,_maxgui_proxygadgets_toolbarextra_ttoolbarextra_txt_rgb)
		},
		{
			BBDEBUGDECL_GLOBAL,
			"item_width",
			"i",
			.var_address=(void*)&maxgui_proxygadgets_toolbarextra_tToolbarExtra_item_width
		},
		{
			BBDEBUGDECL_GLOBAL,
			"list_tbextra",
			":TList",
			.var_address=(void*)&maxgui_proxygadgets_toolbarextra_tToolbarExtra_list_tbextra
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_New
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Create",
			"(:TGadget,:TIconStrip,i):tToolbarExtra",
			.var_address=(void*)&maxgui_proxygadgets_toolbarextra_tToolbarExtra_Create_TtToolbarExtra_TTGadgetTTIconStripi
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetTextColor",
			"(i,i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetTextColor_iii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetColor",
			"(i,i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetColor_iii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Activate",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_Activate_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"CleanUp",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_CleanUp
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetShow",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetShow_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ReshapeAll",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_ReshapeAll
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"eventHandler",
			"(i,:Object,:Object):Object",
			.var_address=(void*)&maxgui_proxygadgets_toolbarextra_tToolbarExtra_eventHandler_TObject_iTObjectTObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"InsertItem",
			"(i,$,$,i,:Object,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_InsertItem_iSSiTObjecti
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SelectItem",
			"(i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_SelectItem_ii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetEnabled",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetEnabled_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"State",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_State
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"EnableAll",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_EnableAll
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"DisableAll",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_DisableAll
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetItem",
			"(i,$,$,i,:Object,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetItem_iSSiTObjecti
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetItemState",
			"(i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetItemState_ii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ItemState",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_ItemState_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ItemCount",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_ItemCount
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ItemText",
			"(i)$",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_ItemText_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ItemIcon",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_ItemIcon_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ItemFlags",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_ItemFlags_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ItemExtra",
			"(i):Object",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_ItemExtra_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"AddItem",
			"(i,$,i,i):tToolItem",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_AddItem_iSii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"AddSeparator",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_AddSeparator
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"RemoveItem",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_RemoveItem_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Clear",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_Clear
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetIconStrip",
			"(:TIconStrip)i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetIconStrip_TTIconStrip
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Class",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_Class
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetToolTipExtra",
			"(i,$)i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetToolTipExtra_iS
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetFont",
			"(:TGuiFont)i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetFont_TTGuiFont
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetIcon",
			"(i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetIcon_ii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SelectedItem",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_SelectedItem
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SelectedItems",
			"()[]i",
			.var_address=(void*)&_maxgui_proxygadgets_toolbarextra_tToolbarExtra_SelectedItems
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_maxgui_proxygadgets_toolbarextra_tToolbarExtra maxgui_proxygadgets_toolbarextra_tToolbarExtra={
	&maxgui_maxgui_gadget_TProxyGadget,
	bbObjectFree,
	(BBDebugScope*)&maxgui_proxygadgets_toolbarextra_tToolbarExtra_scope,
	sizeof(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj),
	(void (*)(BBOBJECT))_maxgui_proxygadgets_toolbarextra_tToolbarExtra_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj,_maxgui_proxygadgets_toolbarextra_ttoolbarextra_txt_rgb) - sizeof(void*) + sizeof(BBARRAY)
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
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_Clear
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_InsertItem_iSSiTObjecti
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetItem_iSSiTObjecti
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_RemoveItem_i
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_ItemCount
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_ItemText_i
	,_maxgui_maxgui_gadget_TProxyGadget_ItemTip_i
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_ItemFlags_i
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_ItemIcon_i
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_ItemExtra_i
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetItemState_ii
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_ItemState_i
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_SelectItem_ii
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_SelectedItem
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_SelectedItems
	,_maxgui_maxgui_gadget_TGadget_Insert_TTGadgeti
	,_maxgui_maxgui_gadget_TProxyGadget_Query_i
	,_maxgui_maxgui_gadget_TGadget_ScaleFactor
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_CleanUp
	,_maxgui_maxgui_gadget_TProxyGadget_Free
	,_maxgui_maxgui_gadget_TProxyGadget_Rethink
	,_maxgui_maxgui_gadget_TProxyGadget_ClientWidth
	,_maxgui_maxgui_gadget_TProxyGadget_ClientHeight
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_Activate_i
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_State
	,_maxgui_maxgui_gadget_TProxyGadget_SetText_S
	,_maxgui_maxgui_gadget_TProxyGadget_GetText
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetFont_TTGuiFont
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetColor_iii
	,_maxgui_maxgui_gadget_TProxyGadget_RemoveColor
	,_maxgui_maxgui_gadget_TProxyGadget_SetAlpha_f
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetTextColor_iii
	,_maxgui_maxgui_gadget_TProxyGadget_SetTooltip_S
	,_maxgui_maxgui_gadget_TProxyGadget_GetTooltip
	,_maxgui_maxgui_gadget_TProxyGadget_SetPixmap_TTPixmapi
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetIconStrip_TTIconStrip
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetShow_i
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetEnabled_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetSelected_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetHotKey_ii
	,_maxgui_maxgui_gadget_TProxyGadget_SetSensitivity_i
	,_maxgui_maxgui_gadget_TProxyGadget_GetSensitivity
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_Class
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
	,maxgui_proxygadgets_toolbarextra_tToolbarExtra_Create_TtToolbarExtra_TTGadgetTTIconStripi
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_ReshapeAll
	,maxgui_proxygadgets_toolbarextra_tToolbarExtra_eventHandler_TObject_iTObjectTObject
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_EnableAll
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_DisableAll
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_AddItem_iSii
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_AddSeparator
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetToolTipExtra_iS
	,_maxgui_proxygadgets_toolbarextra_tToolbarExtra_SetIcon_ii
};

struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj* maxgui_proxygadgets_toolbarextra_CreateToolbarExtra(struct maxgui_maxgui_gadget_TGadget_obj* bbt__PARENT,struct maxgui_maxgui_iconstrip_TIconStrip_obj* bbt__iconstrip,BBINT bbt_style){
	return (struct maxgui_proxygadgets_toolbarextra_tToolbarExtra_obj*)maxgui_proxygadgets_toolbarextra_tToolbarExtra_Create_TtToolbarExtra_TTGadgetTTIconStripi((struct maxgui_maxgui_gadget_TGadget_obj*)bbt__PARENT,(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbt__iconstrip,bbt_style);
}
static int _bb_maxgui_proxygadgets_toolbarextra_inited = 0;
int _bb_maxgui_proxygadgets_toolbarextra(){
	if (!_bb_maxgui_proxygadgets_toolbarextra_inited) {
		_bb_maxgui_proxygadgets_toolbarextra_inited = 1;
		GC_add_roots(&maxgui_proxygadgets_toolbarextra_tToolbarExtra_list_tbextra, &maxgui_proxygadgets_toolbarextra_tToolbarExtra_item_width + 1);
		__bb_brl_blitz_blitz();
		__bb_maxgui_maxgui_maxgui();
		__bb_brl_max2d_max2d();
		_bb_maxgui_proxygadgets_common();
		bbObjectRegisterType((BBCLASS)&maxgui_proxygadgets_toolbarextra_tToolItem);
		bbObjectRegisterType((BBCLASS)&maxgui_proxygadgets_toolbarextra_tToolbarExtra);
		maxgui_proxygadgets_toolbarextra_tToolbarExtra_item_width=80;
		maxgui_proxygadgets_toolbarextra_tToolbarExtra_list_tbextra=(struct brl_linkedlist_TList_obj*)&bbNullObject;
		maxgui_proxygadgets_toolbarextra_tToolItem_font_size=((BBINT)maxgui_maxgui_FontSize((struct maxgui_maxgui_guifont_TGuiFont_obj*)maxgui_maxgui_LookupGuiFont(1,0.00000000000000000,0)));
		return 0;
	}
	return 0;
}