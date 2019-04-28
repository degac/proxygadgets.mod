#include "common.bmx.release.win32.x64.h"
static BBString _s1={
	&bbStringClass,
	7,
	{32,83,105,122,101,58,32}
};
static BBString _s2={
	&bbStringClass,
	3,
	{32,120,32}
};
static BBString _s0={
	&bbStringClass,
	6,
	{84,105,112,111,58,32}
};
BBINT maxgui_proxygadgets_common_MakeLight_CheckLimit(BBINT* bbt_value);
BBINT maxgui_proxygadgets_common_MakeLight_CheckLimit(BBINT* bbt_value){
	if(*bbt_value<0){
		*bbt_value=0;
	}
	if(*bbt_value>255){
		*bbt_value=255;
	}
	return 0;
}
BBOBJECT maxgui_proxygadgets_common_MakeLight(BBOBJECT bbt_src){
	BBINT bbt_r=0;
	BBINT bbt_g=0;
	BBINT bbt_b=0;
	BBINT bbt_argb=0;
	BBINT bbt_a=0;
	BBINT bbt_c=0;
	BBINT bbt_x=0;
	BBINT bbt_y=0;
	BBINT bbt_tipo=0;
	struct brl_pixmap_TPixmap_obj* bbt_pm=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	struct brl_max2d_image_TImage_obj* bbt_tmp_img=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
	struct brl_pixmap_TPixmap_obj* bbt_pix=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	struct maxgui_maxgui_iconstrip_TIconStrip_obj* bbt_ics=(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)&bbNullObject;
	if(((BBObject*)((struct brl_pixmap_TPixmap_obj*)bbObjectDowncast((BBOBJECT)bbt_src,(BBClass*)&brl_pixmap_TPixmap)))!= &bbNullObject){
		bbt_pix=(struct brl_pixmap_TPixmap_obj*)((struct brl_pixmap_TPixmap_obj*)bbObjectDowncast((BBOBJECT)bbt_src,(BBClass*)&brl_pixmap_TPixmap));
		bbt_tmp_img=(struct brl_max2d_image_TImage_obj*)brl_max2d_CreateImage(bbt_pix->_brl_pixmap_tpixmap_width ,bbt_pix->_brl_pixmap_tpixmap_height ,1,-1);
		bbt_pm=(struct brl_pixmap_TPixmap_obj*)bbt_pix;
		bbt_tipo=0;
	}
	if(((BBObject*)((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbObjectDowncast((BBOBJECT)bbt_src,(BBClass*)&maxgui_maxgui_iconstrip_TIconStrip)))!= &bbNullObject){
		bbt_ics=(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbObjectDowncast((BBOBJECT)bbt_src,(BBClass*)&maxgui_maxgui_iconstrip_TIconStrip));
		bbt_tmp_img=(struct brl_max2d_image_TImage_obj*)brl_max2d_CreateImage(bbt_ics->_maxgui_maxgui_iconstrip_ticonstrip_pixmap ->_brl_pixmap_tpixmap_width ,bbt_ics->_maxgui_maxgui_iconstrip_ticonstrip_pixmap ->_brl_pixmap_tpixmap_height ,1,-1);
		bbt_pm=(struct brl_pixmap_TPixmap_obj*)bbt_ics->_maxgui_maxgui_iconstrip_ticonstrip_pixmap ;
		bbt_tipo=1;
	}
	BBINT bbt_kk=64;
	BBINT bbt_hh=bbt_pm->_brl_pixmap_tpixmap_height ;
	BBINT bbt_ww=bbt_pm->_brl_pixmap_tpixmap_width ;
	BBARRAY volatile bbt_RED=bbArrayNew("i", 2, bbt_ww, bbt_hh);
	BBARRAY volatile bbt_green=bbArrayNew("i", 2, bbt_ww, bbt_hh);
	BBARRAY volatile bbt_blue=bbArrayNew("i", 2, bbt_ww, bbt_hh);
	BBARRAY volatile bbt_alpha=bbArrayNew("i", 2, bbt_ww, bbt_hh);
	struct brl_pixmap_TPixmap_obj* bbt_pm2=(struct brl_pixmap_TPixmap_obj*)brl_max2d_LockImage((struct brl_max2d_image_TImage_obj*)bbt_tmp_img,0,1,1);
	brl_blitz_DebugLog(bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(&_s0,bbStringFromInt(bbt_tipo)),&_s1),bbStringFromInt(bbt_pm->_brl_pixmap_tpixmap_width )),&_s2),bbStringFromInt(bbt_pm->_brl_pixmap_tpixmap_height )));
	BBINT bbt_=bbt_pm->_brl_pixmap_tpixmap_height ;
	for(bbt_y=0;(bbt_y<bbt_);bbt_y=(bbt_y+1)){
		BBINT bbt_2=bbt_pm->_brl_pixmap_tpixmap_width ;
		for(bbt_x=0;(bbt_x<bbt_2);bbt_x=(bbt_x+1)){
			bbt_argb=brl_pixmap_ReadPixel((struct brl_pixmap_TPixmap_obj*)bbt_pm,bbt_x,bbt_y);
			bbt_a=((unsigned int)(((unsigned int)(bbt_argb)>>24))&255);
			bbt_r=((unsigned int)(((unsigned int)(bbt_argb)>>16))&255);
			bbt_g=((unsigned int)(((unsigned int)(bbt_argb)>>8))&255);
			bbt_b=((unsigned int)(bbt_argb)&255);
			BBUINT* bbt_3=((BBARRAY)bbt_RED)->scales + 1;
			((BBINT*)BBARRAYDATA(bbt_RED,1))[(*(bbt_3)) * ((BBUINT)bbt_x) + ((BBUINT)bbt_y)]=bbt_r;
			BBUINT* bbt_4=((BBARRAY)bbt_green)->scales + 1;
			((BBINT*)BBARRAYDATA(bbt_green,1))[(*(bbt_4)) * ((BBUINT)bbt_x) + ((BBUINT)bbt_y)]=bbt_g;
			BBUINT* bbt_5=((BBARRAY)bbt_blue)->scales + 1;
			((BBINT*)BBARRAYDATA(bbt_blue,1))[(*(bbt_5)) * ((BBUINT)bbt_x) + ((BBUINT)bbt_y)]=bbt_b;
			BBUINT* bbt_6=((BBARRAY)bbt_alpha)->scales + 1;
			((BBINT*)BBARRAYDATA(bbt_alpha,1))[(*(bbt_6)) * ((BBUINT)bbt_x) + ((BBUINT)bbt_y)]=bbt_a;
		}
	}
	BBINT bbt_pixcol=0;
	BBINT bbt_7=bbt_pm->_brl_pixmap_tpixmap_height ;
	for(bbt_y=0;(bbt_y<bbt_7);bbt_y=(bbt_y+1)){
		BBINT bbt_8=bbt_pm->_brl_pixmap_tpixmap_width ;
		for(bbt_x=0;(bbt_x<bbt_8);bbt_x=(bbt_x+1)){
			BBUINT* bbt_9=((BBARRAY)bbt_RED)->scales + 1;
			bbt_r=(((BBINT*)BBARRAYDATA(bbt_RED,1))[(*(bbt_9)) * ((BBUINT)bbt_x) + ((BBUINT)bbt_y)]+bbt_kk);
			BBUINT* bbt_10=((BBARRAY)bbt_green)->scales + 1;
			bbt_g=(((BBINT*)BBARRAYDATA(bbt_green,1))[(*(bbt_10)) * ((BBUINT)bbt_x) + ((BBUINT)bbt_y)]+bbt_kk);
			BBUINT* bbt_11=((BBARRAY)bbt_blue)->scales + 1;
			bbt_b=(((BBINT*)BBARRAYDATA(bbt_blue,1))[(*(bbt_11)) * ((BBUINT)bbt_x) + ((BBUINT)bbt_y)]+bbt_kk);
			BBUINT* bbt_12=((BBARRAY)bbt_alpha)->scales + 1;
			bbt_a=((BBINT*)BBARRAYDATA(bbt_alpha,1))[(*(bbt_12)) * ((BBUINT)bbt_x) + ((BBUINT)bbt_y)];
			maxgui_proxygadgets_common_MakeLight_CheckLimit(&bbt_r);
			maxgui_proxygadgets_common_MakeLight_CheckLimit(&bbt_g);
			maxgui_proxygadgets_common_MakeLight_CheckLimit(&bbt_b);
			bbt_pixcol=((unsigned int)(((unsigned int)(((unsigned int)((bbt_a<<24))|(bbt_r<<16)))|(bbt_g<<8)))|bbt_b);
			brl_pixmap_WritePixel((struct brl_pixmap_TPixmap_obj*)bbt_pm2,bbt_x,bbt_y,bbt_pixcol);
		}
	}
	if(bbt_tipo==0){
		return (BBOBJECT)bbt_pm2;
	}
	if(bbt_tipo==1){
		return (BBOBJECT)maxgui_maxgui_LoadIconStrip((BBOBJECT)bbt_pm2);
	}
	return (BBOBJECT)&bbNullObject;
}
BBOBJECT maxgui_proxygadgets_common_MakeGrey(BBOBJECT bbt_src){
	BBINT bbt_r=0;
	BBINT bbt_g=0;
	BBINT bbt_b=0;
	BBINT bbt_argb=0;
	BBINT bbt_a=0;
	BBINT bbt_c=0;
	BBINT bbt_x=0;
	BBINT bbt_y=0;
	BBINT bbt_tipo=0;
	struct brl_max2d_image_TImage_obj* bbt_tmp_grey=(struct brl_max2d_image_TImage_obj*)&bbNullObject;
	struct brl_pixmap_TPixmap_obj* bbt_pix=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	struct maxgui_maxgui_iconstrip_TIconStrip_obj* bbt_ics=(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)&bbNullObject;
	struct brl_pixmap_TPixmap_obj* bbt_pm=(struct brl_pixmap_TPixmap_obj*)&bbNullObject;
	if(((BBObject*)((struct brl_pixmap_TPixmap_obj*)bbObjectDowncast((BBOBJECT)bbt_src,(BBClass*)&brl_pixmap_TPixmap)))!= &bbNullObject){
		bbt_pix=(struct brl_pixmap_TPixmap_obj*)((struct brl_pixmap_TPixmap_obj*)bbObjectDowncast((BBOBJECT)bbt_src,(BBClass*)&brl_pixmap_TPixmap));
		bbt_tmp_grey=(struct brl_max2d_image_TImage_obj*)brl_max2d_CreateImage(bbt_pix->_brl_pixmap_tpixmap_width ,bbt_pix->_brl_pixmap_tpixmap_height ,1,-1);
		bbt_pm=(struct brl_pixmap_TPixmap_obj*)bbt_pix;
		bbt_tipo=0;
	}
	if(((BBObject*)((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbObjectDowncast((BBOBJECT)bbt_src,(BBClass*)&maxgui_maxgui_iconstrip_TIconStrip)))!= &bbNullObject){
		bbt_ics=(struct maxgui_maxgui_iconstrip_TIconStrip_obj*)((struct maxgui_maxgui_iconstrip_TIconStrip_obj*)bbObjectDowncast((BBOBJECT)bbt_src,(BBClass*)&maxgui_maxgui_iconstrip_TIconStrip));
		bbt_tmp_grey=(struct brl_max2d_image_TImage_obj*)brl_max2d_CreateImage(bbt_ics->_maxgui_maxgui_iconstrip_ticonstrip_pixmap ->_brl_pixmap_tpixmap_width ,bbt_ics->_maxgui_maxgui_iconstrip_ticonstrip_pixmap ->_brl_pixmap_tpixmap_height ,1,-1);
		bbt_pm=(struct brl_pixmap_TPixmap_obj*)bbt_ics->_maxgui_maxgui_iconstrip_ticonstrip_pixmap ;
		bbt_tipo=1;
	}
	struct brl_pixmap_TPixmap_obj* bbt_pm2=(struct brl_pixmap_TPixmap_obj*)brl_max2d_LockImage((struct brl_max2d_image_TImage_obj*)bbt_tmp_grey,0,1,1);
	BBINT bbt_=bbt_pm->_brl_pixmap_tpixmap_height ;
	for(bbt_y=0;(bbt_y<bbt_);bbt_y=(bbt_y+1)){
		BBINT bbt_2=bbt_pm->_brl_pixmap_tpixmap_width ;
		for(bbt_x=0;(bbt_x<bbt_2);bbt_x=(bbt_x+1)){
			bbt_argb=brl_pixmap_ReadPixel((struct brl_pixmap_TPixmap_obj*)bbt_pm,bbt_x,bbt_y);
			bbt_a=((unsigned int)(((unsigned int)(bbt_argb)>>24))&255);
			bbt_r=((unsigned int)(((unsigned int)(bbt_argb)>>16))&255);
			bbt_g=((unsigned int)(((unsigned int)(bbt_argb)>>8))&255);
			bbt_b=((unsigned int)(bbt_argb)&255);
			bbt_c=(((bbt_r+bbt_g)+bbt_b)/3);
			BBINT bbt_pixcol=((unsigned int)(((unsigned int)(((unsigned int)((bbt_a<<24))|(bbt_c<<16)))|(bbt_c<<8)))|bbt_c);
			brl_pixmap_WritePixel((struct brl_pixmap_TPixmap_obj*)bbt_pm2,bbt_x,bbt_y,bbt_pixcol);
		}
	}
	if(bbt_tipo==0){
		return (BBOBJECT)bbt_pm2;
	}
	if(bbt_tipo==1){
		return (BBOBJECT)maxgui_maxgui_LoadIconStrip((BBOBJECT)bbt_pm2);
	}
	return (BBOBJECT)&bbNullObject;
}
static int _bb_maxgui_proxygadgets_common_inited = 0;
int _bb_maxgui_proxygadgets_common(){
	if (!_bb_maxgui_proxygadgets_common_inited) {
		_bb_maxgui_proxygadgets_common_inited = 1;
		__bb_brl_blitz_blitz();
		__bb_brl_max2d_max2d();
		__bb_maxgui_maxgui_maxgui();
		return 0;
	}
	return 0;
}