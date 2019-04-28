#include "splitter.bmx.release.win32.x64.h"
static BBString _s2={
	&bbStringClass,
	1,
	{48}
};
static BBString _s3={
	&bbStringClass,
	1,
	{49}
};
static BBString _s1={
	&bbStringClass,
	3,
	{50,48,48}
};
static BBString _s0={
	&bbStringClass,
	16,
	{67,108,105,99,107,32,116,111,32,116,111,103,103,108,101,33}
};
struct BBDebugScope_1{int kind; const char *name; BBDebugDecl decls[2]; };
struct BBDebugScope_55{int kind; const char *name; BBDebugDecl decls[56]; };
struct BBDebugScope_8{int kind; const char *name; BBDebugDecl decls[9]; };
struct BBDebugScope_9{int kind; const char *name; BBDebugDecl decls[10]; };
void _maxgui_proxygadgets_splitter_TSplitter_New(struct maxgui_proxygadgets_splitter_TSplitter_obj* o) {
	_maxgui_maxgui_gadget_TProxyGadget_New((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o);
	o->clas = &maxgui_proxygadgets_splitter_TSplitter;
	o->_maxgui_proxygadgets_splitter_tsplitter_strtoggletooltip = &_s0;
	o->_maxgui_proxygadgets_splitter_tsplitter_intorientation = 0;
	o->_maxgui_proxygadgets_splitter_tsplitter_intminpanelspace = 0;
	o->_maxgui_proxygadgets_splitter_tsplitter_intsavepanelspace = 220;
	o->_maxgui_proxygadgets_splitter_tsplitter_intbehavior = 0;
	o->_maxgui_proxygadgets_splitter_tsplitter_intguttersize = 0;
	o->_maxgui_proxygadgets_splitter_tsplitter_intpanelspace = o->_maxgui_proxygadgets_splitter_tsplitter_intminpanelspace ;
	o->_maxgui_proxygadgets_splitter_tsplitter_intmousedown = bbArrayNew1D("i", 2);
	o->_maxgui_proxygadgets_splitter_tsplitter_inthasmoved = 0;
	o->_maxgui_proxygadgets_splitter_tsplitter_intshouldupdate = 0;
	o->_maxgui_proxygadgets_splitter_tsplitter_pnlpanes = &bbEmptyArray;
	o->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle1 = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle2 = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_splitter_tsplitter_gadparent = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	struct brl_pixmap_TPixmap_obj* bbt_[]={&bbNullObject,&bbNullObject};
	BBARRAY bbt_2 = bbArrayFromData(":TPixmap",2,bbt_);
	o->_maxgui_proxygadgets_splitter_tsplitter_pixhandle = bbt_2;
}
struct maxgui_proxygadgets_splitter_TSplitter_obj* _maxgui_proxygadgets_splitter_TSplitter_Create_iiiiTTGadgetii(struct maxgui_proxygadgets_splitter_TSplitter_obj* o,BBINT bbt_pX,BBINT bbt_pY,BBINT bbt_pW,BBINT bbt_pH,struct maxgui_maxgui_gadget_TGadget_obj* bbt_pParent,BBINT bbt_pOrientation,BBINT bbt_pHandleSize){
	o->_maxgui_proxygadgets_splitter_tsplitter_gadparent =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreatePanel(bbt_pX,bbt_pY,bbt_pW,bbt_pH,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_pParent,0,&bbEmptyString);
	((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)->clas->m_SetProxy_TTGadget((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o,(struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_splitter_tsplitter_gadparent );
	o->_maxgui_proxygadgets_splitter_tsplitter_intguttersize =brl_blitz_Max(bbt_pHandleSize,4);
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_DrawHandle((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o);
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_DrawPanes((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o);
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_ChangeOrientation_i((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o,bbt_pOrientation);
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_SetBehavior_i((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o,-3);
	brl_hook_AddHook(brl_event_EmitEventHook,o->clas->f_eventHandler_TObject_iTObjectTObject,(BBOBJECT)o,-1);
	return (struct maxgui_proxygadgets_splitter_TSplitter_obj*)o;
}
BBINT _maxgui_proxygadgets_splitter_TSplitter_GetOrientation(struct maxgui_proxygadgets_splitter_TSplitter_obj* o){
	return o->_maxgui_proxygadgets_splitter_tsplitter_intorientation ;
}
void _maxgui_proxygadgets_splitter_TSplitter_SetOrientation_i(struct maxgui_proxygadgets_splitter_TSplitter_obj* o,BBINT bbt_pOrientation){
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_ChangeOrientation_i((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o,bbt_pOrientation);
}
void _maxgui_proxygadgets_splitter_TSplitter_SetBehavior_i(struct maxgui_proxygadgets_splitter_TSplitter_obj* o,BBINT bbt_pBehavior){
	o->_maxgui_proxygadgets_splitter_tsplitter_intbehavior =bbt_pBehavior;
	if(((unsigned int)(o->_maxgui_proxygadgets_splitter_tsplitter_intbehavior )&32)!=0){
		if(o->_maxgui_proxygadgets_splitter_tsplitter_strtoggletooltip != &bbEmptyString){
			maxgui_maxgui_SetGadgetToolTip((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle ,o->_maxgui_proxygadgets_splitter_tsplitter_strtoggletooltip );
		}
	}else{
		if(o->_maxgui_proxygadgets_splitter_tsplitter_strtoggletooltip != &bbEmptyString){
			maxgui_maxgui_SetGadgetToolTip((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle ,&bbEmptyString);
		}
	}
}
BBINT _maxgui_proxygadgets_splitter_TSplitter_GetBehavior(struct maxgui_proxygadgets_splitter_TSplitter_obj* o){
	return o->_maxgui_proxygadgets_splitter_tsplitter_intbehavior ;
}
struct maxgui_maxgui_gadget_TGadget_obj* _maxgui_proxygadgets_splitter_TSplitter_GetPanel_i(struct maxgui_proxygadgets_splitter_TSplitter_obj* o,BBINT bbt_pPane){
	return (struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_splitter_tsplitter_pnlpanes ,1))[((BBUINT)bbt_pPane)];
}
BBINT _maxgui_proxygadgets_splitter_TSplitter_GetPanelSpace_i(struct maxgui_proxygadgets_splitter_TSplitter_obj* o,BBINT bbt_pPane){
	BBINT bbt_=bbt_pPane;
	if(bbt_==1){
		return o->_maxgui_proxygadgets_splitter_tsplitter_intpanelspace ;
	}else{
		if(bbt_==0){
			if(((unsigned int)(o->_maxgui_proxygadgets_splitter_tsplitter_intorientation )&1)!=0){
				return ((((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)->clas->m_ClientWidth((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)-o->_maxgui_proxygadgets_splitter_tsplitter_intpanelspace )-o->_maxgui_proxygadgets_splitter_tsplitter_intguttersize );
			}else{
				return ((((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)->clas->m_ClientHeight((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)-o->_maxgui_proxygadgets_splitter_tsplitter_intpanelspace )-o->_maxgui_proxygadgets_splitter_tsplitter_intguttersize );
			}
		}
	}
	return 0;
}
void _maxgui_proxygadgets_splitter_TSplitter_SetPanelSpace_ii(struct maxgui_proxygadgets_splitter_TSplitter_obj* o,BBINT bbt_pPanelSpace,BBINT bbt_flgSave){
	BBINT bbt_tmpOldPanelSpace=o->_maxgui_proxygadgets_splitter_tsplitter_intpanelspace ;
	if(((unsigned int)(o->_maxgui_proxygadgets_splitter_tsplitter_intbehavior )&2)!=0){
		BBINT bbt_2[]={((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)->clas->m_ClientHeight((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o),((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)->clas->m_ClientWidth((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)};
		BBARRAY bbt_3 = bbArrayFromData("i",2,bbt_2);
		BBARRAY volatile bbt_=bbt_3;
		bbt_pPanelSpace=brl_blitz_Min(bbt_pPanelSpace,((unsigned int)(((BBINT*)BBARRAYDATA(bbt_,1))[((BBUINT)((unsigned int)(o->_maxgui_proxygadgets_splitter_tsplitter_intorientation )&1))])>>1));
	}
	bbt_pPanelSpace=brl_blitz_Max(bbt_pPanelSpace,o->_maxgui_proxygadgets_splitter_tsplitter_intminpanelspace );
	o->_maxgui_proxygadgets_splitter_tsplitter_intpanelspace =bbt_pPanelSpace;
	if(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_GetPanelSpace_i((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o,0)<o->_maxgui_proxygadgets_splitter_tsplitter_intminpanelspace ){
		o->_maxgui_proxygadgets_splitter_tsplitter_intpanelspace =bbt_tmpOldPanelSpace;
	}
	if((bbt_flgSave!=0) && (o->_maxgui_proxygadgets_splitter_tsplitter_intpanelspace >brl_blitz_Min(o->_maxgui_proxygadgets_splitter_tsplitter_intguttersize ,o->_maxgui_proxygadgets_splitter_tsplitter_intminpanelspace ))){
		o->_maxgui_proxygadgets_splitter_tsplitter_intsavepanelspace =o->_maxgui_proxygadgets_splitter_tsplitter_intpanelspace ;
	}
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_DrawHandle((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o);
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_DrawPanes((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o);
}
BBINT _maxgui_proxygadgets_splitter_TSplitter_CleanUp(struct maxgui_proxygadgets_splitter_TSplitter_obj* o){
	brl_hook_RemoveHook(brl_event_EmitEventHook,o->clas->f_eventHandler_TObject_iTObjectTObject,(BBOBJECT)o);
	o->_maxgui_proxygadgets_splitter_tsplitter_gadparent =(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	return (&maxgui_proxygadgets_splitter_TSplitter)->super->m_CleanUp((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o);
}
BBINT _maxgui_proxygadgets_splitter_TSplitter_SetTooltip_S(struct maxgui_proxygadgets_splitter_TSplitter_obj* o,BBSTRING bbt_pTooltip){
	o->_maxgui_proxygadgets_splitter_tsplitter_strtoggletooltip =&bbEmptyString;
	(o->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle1 )->clas->m_SetTooltip_S((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle1 ,bbt_pTooltip);
	(o->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle2 )->clas->m_SetTooltip_S((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle2 ,bbt_pTooltip);
	return (o->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle )->clas->m_SetTooltip_S((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle ,bbt_pTooltip);
}
BBSTRING _maxgui_proxygadgets_splitter_TSplitter_GetTooltip(struct maxgui_proxygadgets_splitter_TSplitter_obj* o){
	return (o->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle )->clas->m_GetTooltip((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle );
}
BBINT _maxgui_proxygadgets_splitter_TSplitter_SetTextColor_iii(struct maxgui_proxygadgets_splitter_TSplitter_obj* o,BBINT bbt_pRed,BBINT bbt_pGreen,BBINT bbt_pBlue){
	((struct brl_pixmap_TPixmap_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_splitter_tsplitter_pixhandle ,1))[0U]=(struct brl_pixmap_TPixmap_obj*)o->clas->f_MakeColourHandlePixmap_TTPixmap_iiii(bbt_pRed,bbt_pGreen,bbt_pBlue,o->_maxgui_proxygadgets_splitter_tsplitter_intguttersize );
	if(((unsigned int)(o->_maxgui_proxygadgets_splitter_tsplitter_intorientation )&1)!=0){
		((struct brl_pixmap_TPixmap_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_splitter_tsplitter_pixhandle ,1))[0U]=(struct brl_pixmap_TPixmap_obj*)o->clas->f_RotatePixmap_TTPixmap_TTPixmap((struct brl_pixmap_TPixmap_obj*)((struct brl_pixmap_TPixmap_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_splitter_tsplitter_pixhandle ,1))[0U]);
	}
	((struct brl_pixmap_TPixmap_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_splitter_tsplitter_pixhandle ,1))[1U]=(struct brl_pixmap_TPixmap_obj*)o->clas->f_BrightenPixmap_TTPixmap_TTPixmapf((struct brl_pixmap_TPixmap_obj*)((struct brl_pixmap_TPixmap_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_splitter_tsplitter_pixhandle ,1))[0U],1.05f);
	maxgui_maxgui_HideGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle1 );
	maxgui_maxgui_HideGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle2 );
	maxgui_maxgui_SetPanelPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle ,(struct brl_pixmap_TPixmap_obj*)((struct brl_pixmap_TPixmap_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_splitter_tsplitter_pixhandle ,1))[0U],0);
	return 0;
}
BBINT _maxgui_proxygadgets_splitter_TSplitter_SetColor_iii(struct maxgui_proxygadgets_splitter_TSplitter_obj* o,BBINT bbt_pRed,BBINT bbt_pGreen,BBINT bbt_pBlue){
	return maxgui_maxgui_SetPanelColor((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle ,bbt_pRed,bbt_pGreen,bbt_pBlue);
}
BBINT _maxgui_proxygadgets_splitter_TSplitter_SetSensitivity_i(struct maxgui_proxygadgets_splitter_TSplitter_obj* o,BBINT bbt_pSensitivity){
	return 0;
}
BBINT _maxgui_proxygadgets_splitter_TSplitter_GetSensitivity(struct maxgui_proxygadgets_splitter_TSplitter_obj* o){
	return 0;
}
void _maxgui_proxygadgets_splitter_TSplitter_ReapplyLocks(struct maxgui_proxygadgets_splitter_TSplitter_obj* o){
	BBARRAY volatile bbt_tmpLocks=((BBARRAY*)BBARRAYDATA(maxgui_proxygadgets_splitter_TSplitter_intOrientationLocks,1))[((BBUINT)o->_maxgui_proxygadgets_splitter_tsplitter_intorientation )];
	if((o->_maxgui_proxygadgets_splitter_tsplitter_pnlpanes != &bbEmptyArray) && ((o->_maxgui_proxygadgets_splitter_tsplitter_pnlpanes ->scales[0])>1)){
		BBARRAY volatile bbt_=((BBARRAY*)BBARRAYDATA(bbt_tmpLocks,1))[0U];
		BBARRAY volatile bbt_2=((BBARRAY*)BBARRAYDATA(bbt_tmpLocks,1))[0U];
		BBARRAY volatile bbt_3=((BBARRAY*)BBARRAYDATA(bbt_tmpLocks,1))[0U];
		BBARRAY volatile bbt_4=((BBARRAY*)BBARRAYDATA(bbt_tmpLocks,1))[0U];
		maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_splitter_tsplitter_pnlpanes ,1))[0U],((BBINT*)BBARRAYDATA(bbt_,1))[0U],((BBINT*)BBARRAYDATA(bbt_2,1))[1U],((BBINT*)BBARRAYDATA(bbt_3,1))[2U],((BBINT*)BBARRAYDATA(bbt_4,1))[3U]);
		BBARRAY volatile bbt_5=((BBARRAY*)BBARRAYDATA(bbt_tmpLocks,1))[1U];
		BBARRAY volatile bbt_6=((BBARRAY*)BBARRAYDATA(bbt_tmpLocks,1))[1U];
		BBARRAY volatile bbt_7=((BBARRAY*)BBARRAYDATA(bbt_tmpLocks,1))[1U];
		BBARRAY volatile bbt_8=((BBARRAY*)BBARRAYDATA(bbt_tmpLocks,1))[1U];
		maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_splitter_tsplitter_pnlpanes ,1))[1U],((BBINT*)BBARRAYDATA(bbt_5,1))[0U],((BBINT*)BBARRAYDATA(bbt_6,1))[1U],((BBINT*)BBARRAYDATA(bbt_7,1))[2U],((BBINT*)BBARRAYDATA(bbt_8,1))[3U]);
	}
	if(((BBObject*)o->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle )!= &bbNullObject){
		BBARRAY volatile bbt_9=((BBARRAY*)BBARRAYDATA(bbt_tmpLocks,1))[2U];
		BBARRAY volatile bbt_10=((BBARRAY*)BBARRAYDATA(bbt_tmpLocks,1))[2U];
		BBARRAY volatile bbt_11=((BBARRAY*)BBARRAYDATA(bbt_tmpLocks,1))[2U];
		BBARRAY volatile bbt_12=((BBARRAY*)BBARRAYDATA(bbt_tmpLocks,1))[2U];
		maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle ,((BBINT*)BBARRAYDATA(bbt_9,1))[0U],((BBINT*)BBARRAYDATA(bbt_10,1))[1U],((BBINT*)BBARRAYDATA(bbt_11,1))[2U],((BBINT*)BBARRAYDATA(bbt_12,1))[3U]);
	}
}
BBINT _maxgui_proxygadgets_splitter_TSplitter_GetSideSpace_i(struct maxgui_proxygadgets_splitter_TSplitter_obj* o,BBINT bbt_pSide){
	BBARRAY volatile bbt_=((BBARRAY*)BBARRAYDATA(maxgui_proxygadgets_splitter_TSplitter_intSideToPanelMapping,1))[((BBUINT)o->_maxgui_proxygadgets_splitter_tsplitter_intorientation )];
	return ((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_GetPanelSpace_i((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o,((BBINT*)BBARRAYDATA(bbt_,1))[((BBUINT)bbt_pSide)]);
}
void _maxgui_proxygadgets_splitter_TSplitter_DrawHandle(struct maxgui_proxygadgets_splitter_TSplitter_obj* o){
	BBARRAY volatile bbt_tmpDimensions=&bbEmptyArray;
	BBINT bbt_=((unsigned int)(o->_maxgui_proxygadgets_splitter_tsplitter_intorientation )&1);
	if(bbt_==0){
		BBINT bbt_2[]={0,((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_GetSideSpace_i((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o,0),((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)->clas->m_ClientWidth((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o),o->_maxgui_proxygadgets_splitter_tsplitter_intguttersize };
		BBARRAY bbt_3 = bbArrayFromData("i",4,bbt_2);
		bbt_tmpDimensions=bbt_3;
	}else{
		if(bbt_==1){
			BBINT bbt_4[]={((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_GetSideSpace_i((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o,0),0,o->_maxgui_proxygadgets_splitter_tsplitter_intguttersize ,((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)->clas->m_ClientHeight((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)};
			BBARRAY bbt_5 = bbArrayFromData("i",4,bbt_4);
			bbt_tmpDimensions=bbt_5;
		}
	}
	if(((BBObject*)o->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle )!= &bbNullObject){
		maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle ,((BBINT*)BBARRAYDATA(bbt_tmpDimensions,1))[0U],((BBINT*)BBARRAYDATA(bbt_tmpDimensions,1))[1U],((BBINT*)BBARRAYDATA(bbt_tmpDimensions,1))[2U],((BBINT*)BBARRAYDATA(bbt_tmpDimensions,1))[3U]);
		BBINT bbt_6=((unsigned int)(o->_maxgui_proxygadgets_splitter_tsplitter_intorientation )&1);
		if(bbt_6==0){
			maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle1 ,0,((BBINT)(bbCeil((BBDOUBLE)(((BBFLOAT)((BBINT*)BBARRAYDATA(bbt_tmpDimensions,1))[3U])/2.0f))-2.0000000000000000)),((BBINT*)BBARRAYDATA(bbt_tmpDimensions,1))[2U],2);
			maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle2 ,0,((BBINT)bbCeil((BBDOUBLE)(((BBFLOAT)((BBINT*)BBARRAYDATA(bbt_tmpDimensions,1))[3U])/2.0f))),((BBINT*)BBARRAYDATA(bbt_tmpDimensions,1))[2U],2);
		}else{
			if(bbt_6==1){
				maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle1 ,((BBINT)(bbCeil((BBDOUBLE)(((BBFLOAT)((BBINT*)BBARRAYDATA(bbt_tmpDimensions,1))[2U])/2.0f))-2.0000000000000000)),0,2,((BBINT*)BBARRAYDATA(bbt_tmpDimensions,1))[3U]);
				maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle2 ,((BBINT)bbCeil((BBDOUBLE)(((BBFLOAT)((BBINT*)BBARRAYDATA(bbt_tmpDimensions,1))[2U])/2.0f))),0,2,((BBINT*)BBARRAYDATA(bbt_tmpDimensions,1))[3U]);
			}
		}
		if(((BBObject*)((struct brl_pixmap_TPixmap_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_splitter_tsplitter_pixhandle ,1))[0U])!= &bbNullObject){
			maxgui_maxgui_HideGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle1 );
			maxgui_maxgui_HideGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle2 );
		}else{
			maxgui_maxgui_ShowGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle1 );
			maxgui_maxgui_ShowGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle2 );
		}
	}else{
		o->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreatePanel(((BBINT*)BBARRAYDATA(bbt_tmpDimensions,1))[0U],((BBINT*)BBARRAYDATA(bbt_tmpDimensions,1))[1U],((BBINT*)BBARRAYDATA(bbt_tmpDimensions,1))[2U],((BBINT*)BBARRAYDATA(bbt_tmpDimensions,1))[3U],(struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_splitter_tsplitter_gadparent ,4,&bbEmptyString);
		maxgui_maxgui_SetPanelPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle ,(struct brl_pixmap_TPixmap_obj*)((struct brl_pixmap_TPixmap_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_splitter_tsplitter_pixhandle ,1))[0U],0);
		maxgui_maxgui_SetGadgetToolTip((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle ,o->_maxgui_proxygadgets_splitter_tsplitter_strtoggletooltip );
		BBINT bbt_7=((unsigned int)(o->_maxgui_proxygadgets_splitter_tsplitter_intorientation )&1);
		if(bbt_7==0){
			o->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle1 =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateLabel(&bbEmptyString,0,((BBINT)(bbCeil((BBDOUBLE)(((BBFLOAT)((BBINT*)BBARRAYDATA(bbt_tmpDimensions,1))[3U])/2.0f))-2.0000000000000000)),((BBINT*)BBARRAYDATA(bbt_tmpDimensions,1))[2U],2,(struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle ,3);
			o->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle2 =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateLabel(&bbEmptyString,0,((BBINT)bbCeil((BBDOUBLE)(((BBFLOAT)((BBINT*)BBARRAYDATA(bbt_tmpDimensions,1))[3U])/2.0f))),((BBINT*)BBARRAYDATA(bbt_tmpDimensions,1))[2U],2,(struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle ,3);
		}else{
			if(bbt_7==1){
				o->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle1 =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateLabel(&bbEmptyString,((BBINT)(bbCeil((BBDOUBLE)(((BBFLOAT)((BBINT*)BBARRAYDATA(bbt_tmpDimensions,1))[2U])/2.0f))-2.0000000000000000)),0,2,((BBINT*)BBARRAYDATA(bbt_tmpDimensions,1))[3U],(struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle ,3);
				o->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle2 =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateLabel(&bbEmptyString,((BBINT)bbCeil((BBDOUBLE)(((BBFLOAT)((BBINT*)BBARRAYDATA(bbt_tmpDimensions,1))[2U])/2.0f))),0,2,((BBINT*)BBARRAYDATA(bbt_tmpDimensions,1))[3U],(struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle ,3);
			}
		}
		maxgui_maxgui_SetGadgetSensitivity((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle1 ,1);
		maxgui_maxgui_SetGadgetSensitivity((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle2 ,1);
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle1 );
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle2 );
		maxgui_maxgui_SetGadgetToolTip((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle1 ,o->_maxgui_proxygadgets_splitter_tsplitter_strtoggletooltip );
		maxgui_maxgui_SetGadgetToolTip((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle2 ,o->_maxgui_proxygadgets_splitter_tsplitter_strtoggletooltip );
		maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle1 ,1,1,1,1);
		maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle2 ,1,1,1,1);
		if(((BBObject*)((struct brl_pixmap_TPixmap_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_splitter_tsplitter_pixhandle ,1))[0U])!= &bbNullObject){
			maxgui_maxgui_HideGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle1 );
			maxgui_maxgui_HideGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle2 );
		}
	}
}
void _maxgui_proxygadgets_splitter_TSplitter_DrawPanes(struct maxgui_proxygadgets_splitter_TSplitter_obj* o){
	BBARRAY volatile bbt_tmpDimensions=&bbEmptyArray;
	BBINT bbt_=((unsigned int)(o->_maxgui_proxygadgets_splitter_tsplitter_intorientation )&1);
	if(bbt_==0){
		BBINT bbt_4[]={0,0,((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)->clas->m_ClientWidth((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o),((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_GetSideSpace_i((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o,0)};
		BBARRAY bbt_5 = bbArrayFromData("i",4,bbt_4);
		BBINT bbt_6[]={0,(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_GetSideSpace_i((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o,0)+o->_maxgui_proxygadgets_splitter_tsplitter_intguttersize ),((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)->clas->m_ClientWidth((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o),((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_GetSideSpace_i((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o,1)};
		BBARRAY bbt_7 = bbArrayFromData("i",4,bbt_6);
		BBARRAY bbt_2[]={bbt_5,bbt_7};
		BBARRAY bbt_3 = bbArrayFromData("[]i",2,bbt_2);
		bbt_tmpDimensions=bbt_3;
	}else{
		if(bbt_==1){
			BBINT bbt_10[]={0,0,((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_GetSideSpace_i((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o,0),((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)->clas->m_ClientHeight((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)};
			BBARRAY bbt_11 = bbArrayFromData("i",4,bbt_10);
			BBINT bbt_12[]={(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_GetSideSpace_i((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o,0)+o->_maxgui_proxygadgets_splitter_tsplitter_intguttersize ),0,((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_GetSideSpace_i((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o,1),((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)->clas->m_ClientHeight((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)};
			BBARRAY bbt_13 = bbArrayFromData("i",4,bbt_12);
			BBARRAY bbt_8[]={bbt_11,bbt_13};
			BBARRAY bbt_9 = bbArrayFromData("[]i",2,bbt_8);
			bbt_tmpDimensions=bbt_9;
		}
	}
	if(((unsigned int)(o->_maxgui_proxygadgets_splitter_tsplitter_intorientation )&2)!=0){
		BBARRAY bbt_14[]={((BBARRAY*)BBARRAYDATA(bbt_tmpDimensions,1))[1U],((BBARRAY*)BBARRAYDATA(bbt_tmpDimensions,1))[0U]};
		BBARRAY bbt_15 = bbArrayFromData("[]i",2,bbt_14);
		bbt_tmpDimensions=bbt_15;
	}
	if((o->_maxgui_proxygadgets_splitter_tsplitter_pnlpanes ->scales[0])!=2){
		struct maxgui_maxgui_gadget_TGadget_obj* bbt_16[]={maxgui_maxgui_CreatePanel(0,0,1,1,(struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_splitter_tsplitter_gadparent ,0,&bbEmptyString),maxgui_maxgui_CreatePanel(0,0,1,1,(struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_splitter_tsplitter_gadparent ,0,&bbEmptyString)};
		BBARRAY bbt_17 = bbArrayFromData(":TGadget",2,bbt_16);
		o->_maxgui_proxygadgets_splitter_tsplitter_pnlpanes =bbt_17;
		((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_ReapplyLocks((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o);
	}
	BBARRAY volatile bbt_18=((BBARRAY*)BBARRAYDATA(bbt_tmpDimensions,1))[0U];
	BBARRAY volatile bbt_19=((BBARRAY*)BBARRAYDATA(bbt_tmpDimensions,1))[0U];
	BBARRAY volatile bbt_20=((BBARRAY*)BBARRAYDATA(bbt_tmpDimensions,1))[0U];
	BBARRAY volatile bbt_21=((BBARRAY*)BBARRAYDATA(bbt_tmpDimensions,1))[0U];
	maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_splitter_tsplitter_pnlpanes ,1))[0U],((BBINT*)BBARRAYDATA(bbt_18,1))[0U],((BBINT*)BBARRAYDATA(bbt_19,1))[1U],((BBINT*)BBARRAYDATA(bbt_20,1))[2U],((BBINT*)BBARRAYDATA(bbt_21,1))[3U]);
	BBARRAY volatile bbt_22=((BBARRAY*)BBARRAYDATA(bbt_tmpDimensions,1))[1U];
	BBARRAY volatile bbt_23=((BBARRAY*)BBARRAYDATA(bbt_tmpDimensions,1))[1U];
	BBARRAY volatile bbt_24=((BBARRAY*)BBARRAYDATA(bbt_tmpDimensions,1))[1U];
	BBARRAY volatile bbt_25=((BBARRAY*)BBARRAYDATA(bbt_tmpDimensions,1))[1U];
	maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_splitter_tsplitter_pnlpanes ,1))[1U],((BBINT*)BBARRAYDATA(bbt_22,1))[0U],((BBINT*)BBARRAYDATA(bbt_23,1))[1U],((BBINT*)BBARRAYDATA(bbt_24,1))[2U],((BBINT*)BBARRAYDATA(bbt_25,1))[3U]);
}
void _maxgui_proxygadgets_splitter_TSplitter_ChangeOrientation_i(struct maxgui_proxygadgets_splitter_TSplitter_obj* o,BBINT bbt_pOrientation){
	if(bbt_pOrientation==o->_maxgui_proxygadgets_splitter_tsplitter_intorientation ){
		return;
	}
	if(bbt_pOrientation<0){
		o->_maxgui_proxygadgets_splitter_tsplitter_intorientation =(o->_maxgui_proxygadgets_splitter_tsplitter_intorientation ^2);
	}else{
		if((((BBObject*)((struct brl_pixmap_TPixmap_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_splitter_tsplitter_pixhandle ,1))[0U])!= &bbNullObject) && (((unsigned int)(o->_maxgui_proxygadgets_splitter_tsplitter_intorientation )&1)!=((unsigned int)(bbt_pOrientation)&1))){
			((struct brl_pixmap_TPixmap_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_splitter_tsplitter_pixhandle ,1))[0U]=(struct brl_pixmap_TPixmap_obj*)o->clas->f_RotatePixmap_TTPixmap_TTPixmap((struct brl_pixmap_TPixmap_obj*)((struct brl_pixmap_TPixmap_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_splitter_tsplitter_pixhandle ,1))[0U]);
			((struct brl_pixmap_TPixmap_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_splitter_tsplitter_pixhandle ,1))[1U]=(struct brl_pixmap_TPixmap_obj*)o->clas->f_RotatePixmap_TTPixmap_TTPixmap((struct brl_pixmap_TPixmap_obj*)((struct brl_pixmap_TPixmap_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_splitter_tsplitter_pixhandle ,1))[1U]);
		}
		o->_maxgui_proxygadgets_splitter_tsplitter_intorientation =bbt_pOrientation;
	}
	maxgui_maxgui_SetPanelPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle ,(struct brl_pixmap_TPixmap_obj*)((struct brl_pixmap_TPixmap_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_splitter_tsplitter_pixhandle ,1))[0U],0);
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_DrawHandle((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o);
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_DrawPanes((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o);
	((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_ReapplyLocks((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o);
	maxgui_maxgui_RedrawGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_splitter_tsplitter_gadparent );
}
void _maxgui_proxygadgets_splitter_TSplitter_Toggle(struct maxgui_proxygadgets_splitter_TSplitter_obj* o){
	if(o->_maxgui_proxygadgets_splitter_tsplitter_intpanelspace >o->_maxgui_proxygadgets_splitter_tsplitter_intminpanelspace ){
		((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_SetPanelSpace_ii((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o,o->_maxgui_proxygadgets_splitter_tsplitter_intminpanelspace ,1);
	}else{
		((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_SetPanelSpace_ii((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o,o->_maxgui_proxygadgets_splitter_tsplitter_intsavepanelspace ,1);
	}
}
BBOBJECT _maxgui_proxygadgets_splitter_TSplitter_eventHook_iTObject(struct maxgui_proxygadgets_splitter_TSplitter_obj* o,BBINT bbt_pID,BBOBJECT bbt_pData){
	struct brl_event_TEvent_obj* bbt_tmpEvent=(struct brl_event_TEvent_obj*)((struct brl_event_TEvent_obj*)bbObjectDowncast((BBOBJECT)bbt_pData,(BBClass*)&brl_event_TEvent));
	if(!(((BBObject*)bbt_tmpEvent)!= &bbNullObject) || !(((BBObject*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_tmpEvent->_brl_event_tevent_source ,(BBClass*)&maxgui_maxgui_gadget_TGadget)))!= &bbNullObject)){
		return (BBOBJECT)bbt_pData;
	}
	BBOBJECT bbt_=(BBOBJECT)bbt_tmpEvent->_brl_event_tevent_source ;
	if(((bbt_==o->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle ) || (bbt_==o->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle1 )) || (bbt_==o->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle2 )){
		if((bbt_tmpEvent->_brl_event_tevent_source ==o->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle1 ) || (bbt_tmpEvent->_brl_event_tevent_source ==o->_maxgui_proxygadgets_splitter_tsplitter_divsplithandle2 )){
			bbt_tmpEvent->_brl_event_tevent_x +=maxgui_maxgui_GadgetX((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_tmpEvent->_brl_event_tevent_source ,(BBClass*)&maxgui_maxgui_gadget_TGadget)));
			bbt_tmpEvent->_brl_event_tevent_y +=maxgui_maxgui_GadgetY((struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_tmpEvent->_brl_event_tevent_source ,(BBClass*)&maxgui_maxgui_gadget_TGadget)));
			bbt_tmpEvent->_brl_event_tevent_source =(BBOBJECT)o->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle ;
		}
		BBINT bbt_2=bbt_tmpEvent->_brl_event_tevent_id ;
		if(bbt_2==1025){
			if(bbt_tmpEvent->_brl_event_tevent_data !=1){
				return (BBOBJECT)&bbNullObject;
			}
			BBINT bbt_3[]={bbt_tmpEvent->_brl_event_tevent_x ,bbt_tmpEvent->_brl_event_tevent_y };
			BBARRAY bbt_4 = bbArrayFromData("i",2,bbt_3);
			o->_maxgui_proxygadgets_splitter_tsplitter_intmousedown =bbt_4;
			o->_maxgui_proxygadgets_splitter_tsplitter_inthasmoved =0;
		}else{
			if(bbt_2==1027){
				o->_maxgui_proxygadgets_splitter_tsplitter_inthasmoved =1;
				if(bbt_tmpEvent->_brl_event_tevent_data !=0){
					if((o->_maxgui_proxygadgets_splitter_tsplitter_intmousedown != &bbEmptyArray) || ((bbt_tmpEvent->_brl_event_tevent_data ==1) && (o->_maxgui_proxygadgets_splitter_tsplitter_intshouldupdate !=0))){
						((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_ShowDragPointer((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o);
						if((o->_maxgui_proxygadgets_splitter_tsplitter_intshouldupdate !=0) || !(o->_maxgui_proxygadgets_splitter_tsplitter_intmousedown != &bbEmptyArray)){
							BBINT bbt_5[]={bbt_tmpEvent->_brl_event_tevent_x ,bbt_tmpEvent->_brl_event_tevent_y };
							BBARRAY bbt_6 = bbArrayFromData("i",2,bbt_5);
							o->_maxgui_proxygadgets_splitter_tsplitter_intmousedown =bbt_6;
							o->_maxgui_proxygadgets_splitter_tsplitter_intshouldupdate =0;
						}
						BBINT bbt_tmpOrientation=((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_GetOrientation((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o);
						BBINT bbt_tmpPanelSpace=-1;
						BBINT bbt_tmpPanelSave=0;
						BBINT bbt_8[]={(bbt_tmpEvent->_brl_event_tevent_y -((BBINT*)BBARRAYDATA(o->_maxgui_proxygadgets_splitter_tsplitter_intmousedown ,1))[1U]),(bbt_tmpEvent->_brl_event_tevent_x -((BBINT*)BBARRAYDATA(o->_maxgui_proxygadgets_splitter_tsplitter_intmousedown ,1))[0U])};
						BBARRAY bbt_9 = bbArrayFromData("i",2,bbt_8);
						BBARRAY volatile bbt_7=bbt_9;
						BBINT bbt_tmpDraggedSpace=-((BBINT*)BBARRAYDATA(bbt_7,1))[((BBUINT)((unsigned int)(o->_maxgui_proxygadgets_splitter_tsplitter_intorientation )&1))];
						if(((unsigned int)(bbt_tmpOrientation)&2)!=0){
							bbt_tmpDraggedSpace*=-1;
						}
						bbt_tmpDraggedSpace+=o->_maxgui_proxygadgets_splitter_tsplitter_intpanelspace ;
						if((((unsigned int)(o->_maxgui_proxygadgets_splitter_tsplitter_intbehavior )&1)!=0) && (bbt_tmpDraggedSpace!=o->_maxgui_proxygadgets_splitter_tsplitter_intpanelspace )){
							if(bbt_tmpDraggedSpace<o->_maxgui_proxygadgets_splitter_tsplitter_intguttersize ){
								bbt_tmpDraggedSpace=o->_maxgui_proxygadgets_splitter_tsplitter_intminpanelspace ;
							}
							bbt_tmpPanelSpace=bbt_tmpDraggedSpace;
							o->_maxgui_proxygadgets_splitter_tsplitter_intpanelspace =bbt_tmpDraggedSpace;
						}
						if(((unsigned int)(o->_maxgui_proxygadgets_splitter_tsplitter_intbehavior )&2)!=0){
							BBINT bbt_10[]={((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)->clas->m_ClientHeight((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o),((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)->clas->m_ClientWidth((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)};
							BBARRAY bbt_11 = bbArrayFromData("i",2,bbt_10);
							BBARRAY volatile bbt_tmpDimensions=bbt_11;
							if(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_GetPanelSpace_i((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o,1)>(((BBINT*)BBARRAYDATA(bbt_tmpDimensions,1))[((BBUINT)((unsigned int)(bbt_tmpOrientation)&1))]/2)){
								if(((unsigned int)(o->_maxgui_proxygadgets_splitter_tsplitter_intbehavior )&4)!=0){
									bbt_tmpOrientation=(bbt_tmpOrientation^2);
									bbt_tmpPanelSpace=((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_GetPanelSpace_i((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o,0);
								}else{
									bbt_tmpPanelSpace=(((BBINT*)BBARRAYDATA(bbt_tmpDimensions,1))[((BBUINT)((unsigned int)(bbt_tmpOrientation)&1))]/2);
								}
								bbt_tmpPanelSave=1;
							}
						}
						if(((unsigned int)(o->_maxgui_proxygadgets_splitter_tsplitter_intbehavior )&12)!=0){
							BBINT bbt_tmpLeftCond=((maxgui_maxgui_GadgetX((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle )+bbt_tmpEvent->_brl_event_tevent_x )<1);
							BBINT bbt_tmpRightCond=((maxgui_maxgui_GadgetX((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle )+bbt_tmpEvent->_brl_event_tevent_x )>(((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)->clas->m_ClientWidth((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)-o->_maxgui_proxygadgets_splitter_tsplitter_intguttersize ));
							BBINT bbt_tmpTopCond=((maxgui_maxgui_GadgetY((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle )+bbt_tmpEvent->_brl_event_tevent_y )<1);
							BBINT bbt_tmpBottomCond=((maxgui_maxgui_GadgetY((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle )+bbt_tmpEvent->_brl_event_tevent_y )>(((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)->clas->m_ClientHeight((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)-o->_maxgui_proxygadgets_splitter_tsplitter_intguttersize ));
							BBINT bbt_12=1;
							if((((bbt_12==((bbt_tmpRightCond!=0) && !(((unsigned int)(bbt_tmpTopCond)|bbt_tmpBottomCond)!=0))) || (bbt_12==((bbt_tmpLeftCond!=0) && !(((unsigned int)(bbt_tmpTopCond)|bbt_tmpBottomCond)!=0)))) || (bbt_12==((bbt_tmpBottomCond!=0) && !(((unsigned int)(bbt_tmpLeftCond)|bbt_tmpRightCond)!=0)))) || (bbt_12==((bbt_tmpTopCond!=0) && !(((unsigned int)(bbt_tmpLeftCond)|bbt_tmpRightCond)!=0)))){
								if((((unsigned int)(o->_maxgui_proxygadgets_splitter_tsplitter_intbehavior )&4)!=0) || (((unsigned int)(bbt_tmpLeftCond)|bbt_tmpTopCond)==((unsigned int)(bbt_tmpOrientation)&2))){
									if(((unsigned int)(o->_maxgui_proxygadgets_splitter_tsplitter_intbehavior )&8)!=0){
										if(((unsigned int)(bbt_tmpLeftCond)|bbt_tmpRightCond)!=0){
											bbt_tmpOrientation|=1;
										}else{
											bbt_tmpOrientation&=-2;
										}
									}else{
										BBINT bbt_13=((unsigned int)(bbt_tmpOrientation)&1);
										if(bbt_13==1){
											bbt_tmpTopCond=0;
											bbt_tmpBottomCond=0;
										}else{
											if(bbt_13==0){
												bbt_tmpLeftCond=0;
												bbt_tmpRightCond=0;
											}
										}
									}
									if(((unsigned int)(bbt_tmpLeftCond)|bbt_tmpTopCond)!=0){
										bbt_tmpOrientation|=2;
									}else{
										if(((unsigned int)(bbt_tmpRightCond)|bbt_tmpBottomCond)!=0){
											bbt_tmpOrientation&=-3;
										}
									}
									if((((unsigned int)(o->_maxgui_proxygadgets_splitter_tsplitter_intbehavior )&1)!=0) && (bbt_tmpOrientation!=o->_maxgui_proxygadgets_splitter_tsplitter_intorientation )){
										bbt_tmpPanelSpace=o->_maxgui_proxygadgets_splitter_tsplitter_intminpanelspace ;
										bbt_tmpPanelSave=1;
									}
								}
							}
						}
						if(bbt_tmpOrientation!=((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_GetOrientation((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)){
							if(((unsigned int)(bbt_tmpOrientation)&1)!=((unsigned int)(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_GetOrientation((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o))&1)){
								o->_maxgui_proxygadgets_splitter_tsplitter_intmousedown =&bbEmptyArray;
								o->_maxgui_proxygadgets_splitter_tsplitter_intshouldupdate =1;
							}
							((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_ChangeOrientation_i((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o,bbt_tmpOrientation);
							((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_ShowActivePointer((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o);
						}
						if(bbt_tmpPanelSpace>-1){
							((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_SetPanelSpace_ii((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o,bbt_tmpPanelSpace,bbt_tmpPanelSave);
						}
					}
				}else{
					o->_maxgui_proxygadgets_splitter_tsplitter_intmousedown =&bbEmptyArray;
				}
			}else{
				if(bbt_2==1026){
					if((o->_maxgui_proxygadgets_splitter_tsplitter_intmousedown != &bbEmptyArray) && (bbt_tmpEvent->_brl_event_tevent_data ==1)){
						if(!(o->_maxgui_proxygadgets_splitter_tsplitter_inthasmoved !=0)){
							if(((unsigned int)(o->_maxgui_proxygadgets_splitter_tsplitter_intbehavior )&32)!=0){
								((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_Toggle((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o);
							}
						}else{
							((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_SetPanelSpace_ii((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o,o->_maxgui_proxygadgets_splitter_tsplitter_intpanelspace ,1);
						}
						o->_maxgui_proxygadgets_splitter_tsplitter_intmousedown =&bbEmptyArray;
						o->clas->f_ShowNormalPointer_v();
					}
				}else{
					if(bbt_2==1030){
						if(((unsigned int)(o->_maxgui_proxygadgets_splitter_tsplitter_intbehavior )&33)!=0){
							maxgui_maxgui_SetPanelPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle ,(struct brl_pixmap_TPixmap_obj*)((struct brl_pixmap_TPixmap_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_splitter_tsplitter_pixhandle ,1))[0U],0);
						}
						o->clas->f_ShowNormalPointer_v();
					}else{
						if(bbt_2==1029){
							if(((unsigned int)(o->_maxgui_proxygadgets_splitter_tsplitter_intbehavior )&33)!=0){
								maxgui_maxgui_SetPanelPixmap((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle ,(struct brl_pixmap_TPixmap_obj*)((struct brl_pixmap_TPixmap_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_splitter_tsplitter_pixhandle ,1))[1U],0);
							}
							((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_ShowActivePointer((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o);
						}
					}
				}
			}
		}
	}else{
		if(((bbt_==((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_splitter_tsplitter_pnlpanes ,1))[0U]) || (bbt_==((struct maxgui_maxgui_gadget_TGadget_obj**)BBARRAYDATA(o->_maxgui_proxygadgets_splitter_tsplitter_pnlpanes ,1))[1U])) || (bbt_==o->_maxgui_proxygadgets_splitter_tsplitter_gadparent )){
		}else{
			BBINT bbt_14=bbt_tmpEvent->_brl_event_tevent_id ;
			if(bbt_14==16386){
				struct maxgui_maxgui_gadget_TGadget_obj* bbt_15;
				if((((unsigned int)(o->_maxgui_proxygadgets_splitter_tsplitter_intbehavior )&1)!=0) && ((((struct maxgui_maxgui_gadget_TGadget_obj*)(bbt_15 = ((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_tmpEvent->_brl_event_tevent_source ,(BBClass*)&maxgui_maxgui_gadget_TGadget))))->clas)->m_HasDescendant_TTGadget((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_15,(struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_splitter_tsplitter_gadparent )!=0)){
					BBINT bbt_17[]={((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)->clas->m_ClientHeight((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o),((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)->clas->m_ClientWidth((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)};
					BBARRAY bbt_18 = bbArrayFromData("i",2,bbt_17);
					BBARRAY volatile bbt_16=bbt_18;
					BBINT bbt_tmpLimit=((BBINT*)BBARRAYDATA(bbt_16,1))[((BBUINT)((unsigned int)(o->_maxgui_proxygadgets_splitter_tsplitter_intorientation )&1))];
					if(((unsigned int)(o->_maxgui_proxygadgets_splitter_tsplitter_intbehavior )&2)!=0){
						bbt_tmpLimit>>=1;
					}else{
						bbt_tmpLimit-=o->_maxgui_proxygadgets_splitter_tsplitter_intguttersize ;
					}
					if(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_GetPanelSpace_i((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o,1)>bbt_tmpLimit){
						((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o)->clas->m_SetPanelSpace_ii((struct maxgui_proxygadgets_splitter_TSplitter_obj*)o,bbt_tmpLimit,1);
					}
				}
			}
			return (BBOBJECT)bbt_pData;
		}
	}
	return (BBOBJECT)&bbNullObject;
}
void maxgui_proxygadgets_splitter_TSplitter_ShowNormalPointer_v(){
	maxgui_maxgui_SetPointer(0);
}
void _maxgui_proxygadgets_splitter_TSplitter_ShowActivePointer(struct maxgui_proxygadgets_splitter_TSplitter_obj* o){
	if(((unsigned int)(o->_maxgui_proxygadgets_splitter_tsplitter_intbehavior )&1)!=0){
		BBINT bbt_=((unsigned int)(o->_maxgui_proxygadgets_splitter_tsplitter_intorientation )&1);
		if(bbt_==0){
			maxgui_maxgui_SetPointer(9);
		}else{
			if(bbt_==1){
				maxgui_maxgui_SetPointer(8);
			}
		}
	}else{
		if(((unsigned int)(o->_maxgui_proxygadgets_splitter_tsplitter_intbehavior )&32)!=0){
			maxgui_maxgui_SetPointer(12);
		}else{
			maxgui_maxgui_SetPointer(0);
		}
	}
}
void _maxgui_proxygadgets_splitter_TSplitter_ShowDragPointer(struct maxgui_proxygadgets_splitter_TSplitter_obj* o){
	if(((unsigned int)(o->_maxgui_proxygadgets_splitter_tsplitter_intbehavior )&1)!=0){
		BBINT bbt_=((unsigned int)(o->_maxgui_proxygadgets_splitter_tsplitter_intorientation )&1);
		if(bbt_==0){
			maxgui_maxgui_SetPointer(9);
		}else{
			if(bbt_==1){
				maxgui_maxgui_SetPointer(8);
			}
		}
	}else{
		if(((unsigned int)(o->_maxgui_proxygadgets_splitter_tsplitter_intbehavior )&12)!=0){
			maxgui_maxgui_SetPointer(10);
		}else{
			maxgui_maxgui_SetPointer(0);
		}
	}
}
BBOBJECT maxgui_proxygadgets_splitter_TSplitter_eventHandler_TObject_iTObjectTObject(BBINT bbt_pID,BBOBJECT bbt_pData,BBOBJECT bbt_pContext){
	if(((BBObject*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbObjectDowncast((BBOBJECT)bbt_pContext,(BBClass*)&maxgui_proxygadgets_splitter_TSplitter)))!= &bbNullObject){
		struct maxgui_proxygadgets_splitter_TSplitter_obj* bbt_;
		return (BBOBJECT)(((struct maxgui_proxygadgets_splitter_TSplitter_obj*)(bbt_ = ((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbObjectDowncast((BBOBJECT)bbt_pContext,(BBClass*)&maxgui_proxygadgets_splitter_TSplitter))))->clas)->m_eventHook_iTObject((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbt_,bbt_pID,(BBOBJECT)bbt_pData);
	}else{
		return (BBOBJECT)bbt_pData;
	}
}
struct brl_pixmap_TPixmap_obj* maxgui_proxygadgets_splitter_TSplitter_RotatePixmap_TTPixmap_TTPixmap(struct brl_pixmap_TPixmap_obj* bbt_pSrcPixmap){
	struct brl_pixmap_TPixmap_obj* bbt_tmpDestPixmap=(struct brl_pixmap_TPixmap_obj*)brl_pixmap_CreatePixmap(bbt_pSrcPixmap->_brl_pixmap_tpixmap_height ,bbt_pSrcPixmap->_brl_pixmap_tpixmap_width ,bbt_pSrcPixmap->_brl_pixmap_tpixmap_format ,4);
	{
		BBINT bbt_y=0;
		BBINT bbt_=bbt_pSrcPixmap->_brl_pixmap_tpixmap_height ;
		for(;(bbt_y<bbt_);bbt_y=(bbt_y+1)){
			{
				BBINT bbt_x=0;
				BBINT bbt_2=bbt_pSrcPixmap->_brl_pixmap_tpixmap_width ;
				for(;(bbt_x<bbt_2);bbt_x=(bbt_x+1)){
					brl_pixmap_WritePixel((struct brl_pixmap_TPixmap_obj*)bbt_tmpDestPixmap,bbt_y,bbt_x,brl_pixmap_ReadPixel((struct brl_pixmap_TPixmap_obj*)bbt_pSrcPixmap,bbt_x,bbt_y));
				}
			}
		}
	}
	return (struct brl_pixmap_TPixmap_obj*)bbt_tmpDestPixmap;
}
struct brl_pixmap_TPixmap_obj* maxgui_proxygadgets_splitter_TSplitter_BrightenPixmap_TTPixmap_TTPixmapf(struct brl_pixmap_TPixmap_obj* bbt_pSrcPixmap,BBFLOAT bbt_pBrightness){
	struct brl_pixmap_TPixmap_obj* bbt_tmpDestPixmap=(struct brl_pixmap_TPixmap_obj*)brl_pixmap_CreatePixmap(bbt_pSrcPixmap->_brl_pixmap_tpixmap_width ,bbt_pSrcPixmap->_brl_pixmap_tpixmap_height ,bbt_pSrcPixmap->_brl_pixmap_tpixmap_format ,4);
	{
		BBINT bbt_y=0;
		BBINT bbt_=bbt_pSrcPixmap->_brl_pixmap_tpixmap_height ;
		for(;(bbt_y<bbt_);bbt_y=(bbt_y+1)){
			{
				BBINT bbt_x=0;
				BBINT bbt_2=bbt_pSrcPixmap->_brl_pixmap_tpixmap_width ;
				for(;(bbt_x<bbt_2);bbt_x=(bbt_x+1)){
					brl_pixmap_WritePixel((struct brl_pixmap_TPixmap_obj*)bbt_tmpDestPixmap,bbt_x,bbt_y,maxgui_proxygadgets_splitter_TSplitter_BrightenPixel_i_if(brl_pixmap_ReadPixel((struct brl_pixmap_TPixmap_obj*)bbt_pSrcPixmap,bbt_x,bbt_y),bbt_pBrightness));
				}
			}
		}
	}
	return (struct brl_pixmap_TPixmap_obj*)bbt_tmpDestPixmap;
}
BBINT maxgui_proxygadgets_splitter_TSplitter_BrightenPixel_i_if(BBINT bbt_pARGB,BBFLOAT bbt_pBrightness){
	struct maxgui_proxygadgets_splitter_TColorHSV_obj* bbt_tmpHSV=(struct maxgui_proxygadgets_splitter_TColorHSV_obj*)((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbObjectAtomicNew((BBClass *)&maxgui_proxygadgets_splitter_TColorHSV)))->clas->f_fromARGB_TTColorHSV_i(bbt_pARGB);
	bbt_tmpHSV->_maxgui_proxygadgets_splitter_tcolorhsv_v =brl_blitz_Min3((bbt_tmpHSV->_maxgui_proxygadgets_splitter_tcolorhsv_v *bbt_pBrightness),1.00000000f);
	return (bbt_tmpHSV)->clas->m_toARGB((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbt_tmpHSV);
}
BBINT maxgui_proxygadgets_splitter_TSplitter_WhitenPixel_i_if(BBINT bbt_pARGB,BBFLOAT bbt_pWhiteness){
	struct maxgui_proxygadgets_splitter_TColorHSV_obj* bbt_tmpHSV=(struct maxgui_proxygadgets_splitter_TColorHSV_obj*)((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbObjectAtomicNew((BBClass *)&maxgui_proxygadgets_splitter_TColorHSV)))->clas->f_fromARGB_TTColorHSV_i(bbt_pARGB);
	bbt_tmpHSV->_maxgui_proxygadgets_splitter_tcolorhsv_s =brl_blitz_Min3((bbt_tmpHSV->_maxgui_proxygadgets_splitter_tcolorhsv_s *bbt_pWhiteness),1.00000000f);
	return (bbt_tmpHSV)->clas->m_toARGB((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbt_tmpHSV);
}
struct brl_pixmap_TPixmap_obj* maxgui_proxygadgets_splitter_TSplitter_MakeColourHandlePixmap_TTPixmap_iiii(BBINT bbt_pRed,BBINT bbt_pGreen,BBINT bbt_pBlue,BBINT bbt_pWidth){
	struct brl_pixmap_TPixmap_obj* bbt_tmpPixmap=(struct brl_pixmap_TPixmap_obj*)brl_pixmap_CreatePixmap(1,bbt_pWidth,4,4);
	BBINT bbt_tmpPixel=((unsigned int)(((unsigned int)((bbt_pRed<<16))|(bbt_pGreen<<8)))|bbt_pBlue);
	{
		BBINT bbt_i=0;
		BBINT bbt_=(bbt_pWidth/2);
		for(;(bbt_i<=bbt_);bbt_i=(bbt_i+1)){
			BBINT bbt_tmpCalculatedPixel=maxgui_proxygadgets_splitter_TSplitter_BrightenPixel_i_if(bbt_tmpPixel,((BBFLOAT)bbFloatPow(1.05, ((BBDOUBLE)bbt_i))));
			brl_pixmap_WritePixel((struct brl_pixmap_TPixmap_obj*)bbt_tmpPixmap,0,bbt_i,bbt_tmpCalculatedPixel);
			brl_pixmap_WritePixel((struct brl_pixmap_TPixmap_obj*)bbt_tmpPixmap,0,((bbt_pWidth-1)-bbt_i),bbt_tmpCalculatedPixel);
		}
	}
	return (struct brl_pixmap_TPixmap_obj*)bbt_tmpPixmap;
}
BBARRAY maxgui_proxygadgets_splitter_TSplitter_intSideToPanelMapping;
BBARRAY maxgui_proxygadgets_splitter_TSplitter_intOrientationLocks;
struct BBDebugScope_55 maxgui_proxygadgets_splitter_TSplitter_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TSplitter",
	{
		{
			BBDEBUGDECL_CONST,
			"JUMP",
			"i",
			.const_value=&_s1
		},
		{
			BBDEBUGDECL_CONST,
			"SPLITSIDE_LEFT",
			"i",
			.const_value=&_s2
		},
		{
			BBDEBUGDECL_CONST,
			"SPLITSIDE_RIGHT",
			"i",
			.const_value=&_s3
		},
		{
			BBDEBUGDECL_CONST,
			"SPLITSIDE_TOP",
			"i",
			.const_value=&_s2
		},
		{
			BBDEBUGDECL_CONST,
			"SPLITSIDE_BOTTOM",
			"i",
			.const_value=&_s3
		},
		{
			BBDEBUGDECL_FIELD,
			"strToggleTooltip",
			"$",
			.field_offset=offsetof(struct maxgui_proxygadgets_splitter_TSplitter_obj,_maxgui_proxygadgets_splitter_tsplitter_strtoggletooltip)
		},
		{
			BBDEBUGDECL_FIELD,
			"intOrientation",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_splitter_TSplitter_obj,_maxgui_proxygadgets_splitter_tsplitter_intorientation)
		},
		{
			BBDEBUGDECL_FIELD,
			"intMinPanelSpace",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_splitter_TSplitter_obj,_maxgui_proxygadgets_splitter_tsplitter_intminpanelspace)
		},
		{
			BBDEBUGDECL_FIELD,
			"intSavePanelSpace",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_splitter_TSplitter_obj,_maxgui_proxygadgets_splitter_tsplitter_intsavepanelspace)
		},
		{
			BBDEBUGDECL_FIELD,
			"intBehavior",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_splitter_TSplitter_obj,_maxgui_proxygadgets_splitter_tsplitter_intbehavior)
		},
		{
			BBDEBUGDECL_FIELD,
			"intGutterSize",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_splitter_TSplitter_obj,_maxgui_proxygadgets_splitter_tsplitter_intguttersize)
		},
		{
			BBDEBUGDECL_FIELD,
			"intPanelSpace",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_splitter_TSplitter_obj,_maxgui_proxygadgets_splitter_tsplitter_intpanelspace)
		},
		{
			BBDEBUGDECL_FIELD,
			"intMouseDown",
			"[]i",
			.field_offset=offsetof(struct maxgui_proxygadgets_splitter_TSplitter_obj,_maxgui_proxygadgets_splitter_tsplitter_intmousedown)
		},
		{
			BBDEBUGDECL_FIELD,
			"intHasMoved",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_splitter_TSplitter_obj,_maxgui_proxygadgets_splitter_tsplitter_inthasmoved)
		},
		{
			BBDEBUGDECL_FIELD,
			"intShouldUpdate",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_splitter_TSplitter_obj,_maxgui_proxygadgets_splitter_tsplitter_intshouldupdate)
		},
		{
			BBDEBUGDECL_FIELD,
			"pnlPanes",
			"[]:TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_splitter_TSplitter_obj,_maxgui_proxygadgets_splitter_tsplitter_pnlpanes)
		},
		{
			BBDEBUGDECL_FIELD,
			"pnlSplitHandle",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_splitter_TSplitter_obj,_maxgui_proxygadgets_splitter_tsplitter_pnlsplithandle)
		},
		{
			BBDEBUGDECL_FIELD,
			"divSplitHandle1",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_splitter_TSplitter_obj,_maxgui_proxygadgets_splitter_tsplitter_divsplithandle1)
		},
		{
			BBDEBUGDECL_FIELD,
			"divSplitHandle2",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_splitter_TSplitter_obj,_maxgui_proxygadgets_splitter_tsplitter_divsplithandle2)
		},
		{
			BBDEBUGDECL_FIELD,
			"gadParent",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_splitter_TSplitter_obj,_maxgui_proxygadgets_splitter_tsplitter_gadparent)
		},
		{
			BBDEBUGDECL_FIELD,
			"pixHandle",
			"[]:TPixmap",
			.field_offset=offsetof(struct maxgui_proxygadgets_splitter_TSplitter_obj,_maxgui_proxygadgets_splitter_tsplitter_pixhandle)
		},
		{
			BBDEBUGDECL_GLOBAL,
			"intOrientationLocks",
			"[][][]i",
			.var_address=(void*)&maxgui_proxygadgets_splitter_TSplitter_intOrientationLocks
		},
		{
			BBDEBUGDECL_GLOBAL,
			"intSideToPanelMapping",
			"[][]i",
			.var_address=(void*)&maxgui_proxygadgets_splitter_TSplitter_intSideToPanelMapping
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TSplitter_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Create",
			"(i,i,i,i,:TGadget,i,i):TSplitter",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TSplitter_Create_iiiiTTGadgetii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetOrientation",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TSplitter_GetOrientation
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetOrientation",
			"(i)",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TSplitter_SetOrientation_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetBehavior",
			"(i)",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TSplitter_SetBehavior_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetBehavior",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TSplitter_GetBehavior
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetPanel",
			"(i):TGadget",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TSplitter_GetPanel_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetPanelSpace",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TSplitter_GetPanelSpace_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetPanelSpace",
			"(i,i)",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TSplitter_SetPanelSpace_ii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"CleanUp",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TSplitter_CleanUp
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetTooltip",
			"($)i",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TSplitter_SetTooltip_S
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetTooltip",
			"()$",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TSplitter_GetTooltip
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetTextColor",
			"(i,i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TSplitter_SetTextColor_iii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetColor",
			"(i,i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TSplitter_SetColor_iii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetSensitivity",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TSplitter_SetSensitivity_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetSensitivity",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TSplitter_GetSensitivity
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ReapplyLocks",
			"()",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TSplitter_ReapplyLocks
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetSideSpace",
			"(i)i",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TSplitter_GetSideSpace_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"DrawHandle",
			"()",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TSplitter_DrawHandle
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"DrawPanes",
			"()",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TSplitter_DrawPanes
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ChangeOrientation",
			"(i)",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TSplitter_ChangeOrientation_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Toggle",
			"()",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TSplitter_Toggle
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"eventHook",
			"(i,:Object):Object",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TSplitter_eventHook_iTObject
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"ShowNormalPointer",
			"()",
			.var_address=(void*)&maxgui_proxygadgets_splitter_TSplitter_ShowNormalPointer_v
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ShowActivePointer",
			"()",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TSplitter_ShowActivePointer
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ShowDragPointer",
			"()",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TSplitter_ShowDragPointer
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"eventHandler",
			"(i,:Object,:Object):Object",
			.var_address=(void*)&maxgui_proxygadgets_splitter_TSplitter_eventHandler_TObject_iTObjectTObject
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"RotatePixmap",
			"(:TPixmap):TPixmap",
			.var_address=(void*)&maxgui_proxygadgets_splitter_TSplitter_RotatePixmap_TTPixmap_TTPixmap
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"BrightenPixmap",
			"(:TPixmap,f):TPixmap",
			.var_address=(void*)&maxgui_proxygadgets_splitter_TSplitter_BrightenPixmap_TTPixmap_TTPixmapf
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"BrightenPixel",
			"(i,f)i",
			.var_address=(void*)&maxgui_proxygadgets_splitter_TSplitter_BrightenPixel_i_if
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"WhitenPixel",
			"(i,f)i",
			.var_address=(void*)&maxgui_proxygadgets_splitter_TSplitter_WhitenPixel_i_if
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"MakeColourHandlePixmap",
			"(i,i,i,i):TPixmap",
			.var_address=(void*)&maxgui_proxygadgets_splitter_TSplitter_MakeColourHandlePixmap_TTPixmap_iiii
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_maxgui_proxygadgets_splitter_TSplitter maxgui_proxygadgets_splitter_TSplitter={
	&maxgui_maxgui_gadget_TProxyGadget,
	bbObjectFree,
	(BBDebugScope*)&maxgui_proxygadgets_splitter_TSplitter_scope,
	sizeof(struct maxgui_proxygadgets_splitter_TSplitter_obj),
	(void (*)(BBOBJECT))_maxgui_proxygadgets_splitter_TSplitter_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct maxgui_proxygadgets_splitter_TSplitter_obj,_maxgui_proxygadgets_splitter_tsplitter_pixhandle) - sizeof(void*) + sizeof(BBARRAY)
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
	,_maxgui_proxygadgets_splitter_TSplitter_CleanUp
	,_maxgui_maxgui_gadget_TProxyGadget_Free
	,_maxgui_maxgui_gadget_TProxyGadget_Rethink
	,_maxgui_maxgui_gadget_TProxyGadget_ClientWidth
	,_maxgui_maxgui_gadget_TProxyGadget_ClientHeight
	,_maxgui_maxgui_gadget_TProxyGadget_Activate_i
	,_maxgui_maxgui_gadget_TProxyGadget_State
	,_maxgui_maxgui_gadget_TProxyGadget_SetText_S
	,_maxgui_maxgui_gadget_TProxyGadget_GetText
	,_maxgui_maxgui_gadget_TProxyGadget_SetFont_TTGuiFont
	,_maxgui_proxygadgets_splitter_TSplitter_SetColor_iii
	,_maxgui_maxgui_gadget_TProxyGadget_RemoveColor
	,_maxgui_maxgui_gadget_TProxyGadget_SetAlpha_f
	,_maxgui_proxygadgets_splitter_TSplitter_SetTextColor_iii
	,_maxgui_proxygadgets_splitter_TSplitter_SetTooltip_S
	,_maxgui_proxygadgets_splitter_TSplitter_GetTooltip
	,_maxgui_maxgui_gadget_TProxyGadget_SetPixmap_TTPixmapi
	,_maxgui_maxgui_gadget_TProxyGadget_SetIconStrip_TTIconStrip
	,_maxgui_maxgui_gadget_TProxyGadget_SetShow_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetEnabled_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetSelected_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetHotKey_ii
	,_maxgui_proxygadgets_splitter_TSplitter_SetSensitivity_i
	,_maxgui_proxygadgets_splitter_TSplitter_GetSensitivity
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
	,_maxgui_proxygadgets_splitter_TSplitter_Create_iiiiTTGadgetii
	,_maxgui_proxygadgets_splitter_TSplitter_GetOrientation
	,_maxgui_proxygadgets_splitter_TSplitter_SetOrientation_i
	,_maxgui_proxygadgets_splitter_TSplitter_SetBehavior_i
	,_maxgui_proxygadgets_splitter_TSplitter_GetBehavior
	,_maxgui_proxygadgets_splitter_TSplitter_GetPanel_i
	,_maxgui_proxygadgets_splitter_TSplitter_GetPanelSpace_i
	,_maxgui_proxygadgets_splitter_TSplitter_SetPanelSpace_ii
	,_maxgui_proxygadgets_splitter_TSplitter_ReapplyLocks
	,_maxgui_proxygadgets_splitter_TSplitter_GetSideSpace_i
	,_maxgui_proxygadgets_splitter_TSplitter_DrawHandle
	,_maxgui_proxygadgets_splitter_TSplitter_DrawPanes
	,_maxgui_proxygadgets_splitter_TSplitter_ChangeOrientation_i
	,_maxgui_proxygadgets_splitter_TSplitter_Toggle
	,_maxgui_proxygadgets_splitter_TSplitter_eventHook_iTObject
	,maxgui_proxygadgets_splitter_TSplitter_ShowNormalPointer_v
	,_maxgui_proxygadgets_splitter_TSplitter_ShowActivePointer
	,_maxgui_proxygadgets_splitter_TSplitter_ShowDragPointer
	,maxgui_proxygadgets_splitter_TSplitter_eventHandler_TObject_iTObjectTObject
	,maxgui_proxygadgets_splitter_TSplitter_RotatePixmap_TTPixmap_TTPixmap
	,maxgui_proxygadgets_splitter_TSplitter_BrightenPixmap_TTPixmap_TTPixmapf
	,maxgui_proxygadgets_splitter_TSplitter_BrightenPixel_i_if
	,maxgui_proxygadgets_splitter_TSplitter_WhitenPixel_i_if
	,maxgui_proxygadgets_splitter_TSplitter_MakeColourHandlePixmap_TTPixmap_iiii
};

void _maxgui_proxygadgets_splitter_TColor_New(struct maxgui_proxygadgets_splitter_TColor_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &maxgui_proxygadgets_splitter_TColor;
}
BBINT _maxgui_proxygadgets_splitter_TColor_toARGB(struct maxgui_proxygadgets_splitter_TColor_obj* o){
	brl_blitz_NullMethodError();
	return 0;
}
struct BBDebugScope_1 maxgui_proxygadgets_splitter_TColor_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TColor",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TColor_New
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_maxgui_proxygadgets_splitter_TColor maxgui_proxygadgets_splitter_TColor={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&maxgui_proxygadgets_splitter_TColor_scope,
	sizeof(struct maxgui_proxygadgets_splitter_TColor_obj),
	(void (*)(BBOBJECT))_maxgui_proxygadgets_splitter_TColor_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,_maxgui_proxygadgets_splitter_TColor_toARGB
};

void _maxgui_proxygadgets_splitter_TColorHSV_New(struct maxgui_proxygadgets_splitter_TColorHSV_obj* o) {
	_maxgui_proxygadgets_splitter_TColor_New((struct maxgui_proxygadgets_splitter_TColor_obj*)o);
	o->clas = &maxgui_proxygadgets_splitter_TColorHSV;
	o->_maxgui_proxygadgets_splitter_tcolorhsv_h = .00000000f;
	o->_maxgui_proxygadgets_splitter_tcolorhsv_s = .00000000f;
	o->_maxgui_proxygadgets_splitter_tcolorhsv_v = .00000000f;
	o->_maxgui_proxygadgets_splitter_tcolorhsv_a = 1.0f;
}
struct maxgui_proxygadgets_splitter_TColorRGB_obj* _maxgui_proxygadgets_splitter_TColorHSV_toRGB(struct maxgui_proxygadgets_splitter_TColorHSV_obj* o){
	BBFLOAT bbt_temph=o->_maxgui_proxygadgets_splitter_tcolorhsv_h ;
	BBFLOAT bbt_temps=o->_maxgui_proxygadgets_splitter_tcolorhsv_s ;
	BBFLOAT bbt_tempv=o->_maxgui_proxygadgets_splitter_tcolorhsv_v ;
	struct maxgui_proxygadgets_splitter_TColorRGB_obj* bbt_rgb=(struct maxgui_proxygadgets_splitter_TColorRGB_obj*)(struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbObjectAtomicNew((BBClass *)&maxgui_proxygadgets_splitter_TColorRGB);
	if((bbt_temph>=360.0f) || (bbt_temph<0.0f)){
		bbt_temph=0.0f;
	}
	if(bbt_temps==0.000000000f){
		bbt_rgb->_maxgui_proxygadgets_splitter_tcolorrgb_r =o->_maxgui_proxygadgets_splitter_tcolorhsv_v ;
		bbt_rgb->_maxgui_proxygadgets_splitter_tcolorrgb_g =o->_maxgui_proxygadgets_splitter_tcolorhsv_v ;
		bbt_rgb->_maxgui_proxygadgets_splitter_tcolorrgb_b =o->_maxgui_proxygadgets_splitter_tcolorhsv_v ;
	}else{
		bbt_temph=(bbt_temph/60.0f);
		BBINT bbt_i=((BBINT)bbFloor((BBDOUBLE)bbt_temph));
		BBFLOAT bbt_f=(bbt_temph-((BBFLOAT)bbt_i));
		BBFLOAT bbt_p=(bbt_tempv*(1.00000000f-bbt_temps));
		BBFLOAT bbt_q=(bbt_tempv*(1.00000000f-(bbt_temps*bbt_f)));
		BBFLOAT bbt_t=(bbt_tempv*(1.00000000f-(bbt_temps*(1.00000000f-bbt_f))));
		BBINT bbt_=bbt_i;
		if(bbt_==0){
			bbt_rgb->_maxgui_proxygadgets_splitter_tcolorrgb_r =o->_maxgui_proxygadgets_splitter_tcolorhsv_v ;
			bbt_rgb->_maxgui_proxygadgets_splitter_tcolorrgb_g =bbt_t;
			bbt_rgb->_maxgui_proxygadgets_splitter_tcolorrgb_b =bbt_p;
		}else{
			if(bbt_==1){
				bbt_rgb->_maxgui_proxygadgets_splitter_tcolorrgb_r =bbt_q;
				bbt_rgb->_maxgui_proxygadgets_splitter_tcolorrgb_g =o->_maxgui_proxygadgets_splitter_tcolorhsv_v ;
				bbt_rgb->_maxgui_proxygadgets_splitter_tcolorrgb_b =bbt_p;
			}else{
				if(bbt_==2){
					bbt_rgb->_maxgui_proxygadgets_splitter_tcolorrgb_r =bbt_p;
					bbt_rgb->_maxgui_proxygadgets_splitter_tcolorrgb_g =o->_maxgui_proxygadgets_splitter_tcolorhsv_v ;
					bbt_rgb->_maxgui_proxygadgets_splitter_tcolorrgb_b =bbt_t;
				}else{
					if(bbt_==3){
						bbt_rgb->_maxgui_proxygadgets_splitter_tcolorrgb_r =bbt_p;
						bbt_rgb->_maxgui_proxygadgets_splitter_tcolorrgb_g =bbt_q;
						bbt_rgb->_maxgui_proxygadgets_splitter_tcolorrgb_b =o->_maxgui_proxygadgets_splitter_tcolorhsv_v ;
					}else{
						if(bbt_==4){
							bbt_rgb->_maxgui_proxygadgets_splitter_tcolorrgb_r =bbt_t;
							bbt_rgb->_maxgui_proxygadgets_splitter_tcolorrgb_g =bbt_p;
							bbt_rgb->_maxgui_proxygadgets_splitter_tcolorrgb_b =o->_maxgui_proxygadgets_splitter_tcolorhsv_v ;
						}else{
							bbt_rgb->_maxgui_proxygadgets_splitter_tcolorrgb_r =o->_maxgui_proxygadgets_splitter_tcolorhsv_v ;
							bbt_rgb->_maxgui_proxygadgets_splitter_tcolorrgb_g =bbt_p;
							bbt_rgb->_maxgui_proxygadgets_splitter_tcolorrgb_b =bbt_q;
						}
					}
				}
			}
		}
	}
	bbt_rgb->_maxgui_proxygadgets_splitter_tcolorrgb_a =o->_maxgui_proxygadgets_splitter_tcolorhsv_a ;
	return (struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbt_rgb;
}
struct maxgui_proxygadgets_splitter_TColorHSV_obj* maxgui_proxygadgets_splitter_TColorHSV_fromARGB_TTColorHSV_i(BBINT bbt_argb){
	struct maxgui_proxygadgets_splitter_TColorRGB_obj* bbt_;
	return (struct maxgui_proxygadgets_splitter_TColorHSV_obj*)(((struct maxgui_proxygadgets_splitter_TColorRGB_obj*)(bbt_ = maxgui_proxygadgets_splitter_TColorRGB_fromARGB_TTColorRGB_ii(bbt_argb,1)))->clas)->m_toHSV((struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbt_);
}
BBINT _maxgui_proxygadgets_splitter_TColorHSV_toARGB(struct maxgui_proxygadgets_splitter_TColorHSV_obj* o){
	struct maxgui_proxygadgets_splitter_TColorRGB_obj* bbt_;
	return (bbt_ = ((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)o)->clas->m_toRGB((struct maxgui_proxygadgets_splitter_TColorHSV_obj*)o))->clas->m_toARGB((struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbt_);
}
struct BBDebugScope_8 maxgui_proxygadgets_splitter_TColorHSV_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TColorHSV",
	{
		{
			BBDEBUGDECL_FIELD,
			"h",
			"f",
			.field_offset=offsetof(struct maxgui_proxygadgets_splitter_TColorHSV_obj,_maxgui_proxygadgets_splitter_tcolorhsv_h)
		},
		{
			BBDEBUGDECL_FIELD,
			"s",
			"f",
			.field_offset=offsetof(struct maxgui_proxygadgets_splitter_TColorHSV_obj,_maxgui_proxygadgets_splitter_tcolorhsv_s)
		},
		{
			BBDEBUGDECL_FIELD,
			"v",
			"f",
			.field_offset=offsetof(struct maxgui_proxygadgets_splitter_TColorHSV_obj,_maxgui_proxygadgets_splitter_tcolorhsv_v)
		},
		{
			BBDEBUGDECL_FIELD,
			"a",
			"f",
			.field_offset=offsetof(struct maxgui_proxygadgets_splitter_TColorHSV_obj,_maxgui_proxygadgets_splitter_tcolorhsv_a)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TColorHSV_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"toRGB",
			"():TColorRGB",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TColorHSV_toRGB
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"fromARGB",
			"(i):TColorHSV",
			.var_address=(void*)&maxgui_proxygadgets_splitter_TColorHSV_fromARGB_TTColorHSV_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"toARGB",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TColorHSV_toARGB
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_maxgui_proxygadgets_splitter_TColorHSV maxgui_proxygadgets_splitter_TColorHSV={
	&maxgui_proxygadgets_splitter_TColor,
	bbObjectFree,
	(BBDebugScope*)&maxgui_proxygadgets_splitter_TColorHSV_scope,
	sizeof(struct maxgui_proxygadgets_splitter_TColorHSV_obj),
	(void (*)(BBOBJECT))_maxgui_proxygadgets_splitter_TColorHSV_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct maxgui_proxygadgets_splitter_TColorHSV_obj,_maxgui_proxygadgets_splitter_tcolorhsv_a) - sizeof(void*) + sizeof(BBFLOAT)
	,_maxgui_proxygadgets_splitter_TColorHSV_toARGB
	,_maxgui_proxygadgets_splitter_TColorHSV_toRGB
	,maxgui_proxygadgets_splitter_TColorHSV_fromARGB_TTColorHSV_i
};

void _maxgui_proxygadgets_splitter_TColorRGB_New(struct maxgui_proxygadgets_splitter_TColorRGB_obj* o) {
	_maxgui_proxygadgets_splitter_TColor_New((struct maxgui_proxygadgets_splitter_TColor_obj*)o);
	o->clas = &maxgui_proxygadgets_splitter_TColorRGB;
	o->_maxgui_proxygadgets_splitter_tcolorrgb_r = .00000000f;
	o->_maxgui_proxygadgets_splitter_tcolorrgb_g = .00000000f;
	o->_maxgui_proxygadgets_splitter_tcolorrgb_b = .00000000f;
	o->_maxgui_proxygadgets_splitter_tcolorrgb_a = 1.0f;
}
struct maxgui_proxygadgets_splitter_TColorHSV_obj* _maxgui_proxygadgets_splitter_TColorRGB_toHSV(struct maxgui_proxygadgets_splitter_TColorRGB_obj* o){
	BBFLOAT bbt_tempr=brl_blitz_Min3(1.0f,brl_blitz_Max3(0.0f,o->_maxgui_proxygadgets_splitter_tcolorrgb_r ));
	BBFLOAT bbt_tempg=brl_blitz_Min3(1.0f,brl_blitz_Max3(0.0f,o->_maxgui_proxygadgets_splitter_tcolorrgb_g ));
	BBFLOAT bbt_tempb=brl_blitz_Min3(1.0f,brl_blitz_Max3(0.0f,o->_maxgui_proxygadgets_splitter_tcolorrgb_b ));
	BBFLOAT bbt_minVal=brl_blitz_Min3(brl_blitz_Min3(bbt_tempr,bbt_tempg),bbt_tempb);
	BBFLOAT bbt_maxVal=brl_blitz_Max3(brl_blitz_Max3(bbt_tempr,bbt_tempg),bbt_tempb);
	BBFLOAT bbt_diff=(bbt_maxVal-bbt_minVal);
	struct maxgui_proxygadgets_splitter_TColorHSV_obj* bbt_hsv=(struct maxgui_proxygadgets_splitter_TColorHSV_obj*)(struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbObjectAtomicNew((BBClass *)&maxgui_proxygadgets_splitter_TColorHSV);
	bbt_hsv->_maxgui_proxygadgets_splitter_tcolorhsv_v =bbt_maxVal;
	if(bbt_maxVal==0.0f){
		bbt_hsv->_maxgui_proxygadgets_splitter_tcolorhsv_s =0.0f;
		bbt_hsv->_maxgui_proxygadgets_splitter_tcolorhsv_h =0.0f;
	}else{
		bbt_hsv->_maxgui_proxygadgets_splitter_tcolorhsv_s =(bbt_diff/bbt_maxVal);
		if(bbt_tempr==bbt_maxVal){
			bbt_hsv->_maxgui_proxygadgets_splitter_tcolorhsv_h =((bbt_tempg-bbt_tempb)/bbt_diff);
		}else{
			if(bbt_tempg==bbt_maxVal){
				bbt_hsv->_maxgui_proxygadgets_splitter_tcolorhsv_h =(2.0f+((bbt_tempb-bbt_tempr)/bbt_diff));
			}else{
				bbt_hsv->_maxgui_proxygadgets_splitter_tcolorhsv_h =(4.0f+((bbt_tempr-bbt_tempg)/bbt_diff));
			}
		}
		bbt_hsv->_maxgui_proxygadgets_splitter_tcolorhsv_h =(bbt_hsv->_maxgui_proxygadgets_splitter_tcolorhsv_h *60.0f);
		if(bbt_hsv->_maxgui_proxygadgets_splitter_tcolorhsv_h <0.000000000f){
			bbt_hsv->_maxgui_proxygadgets_splitter_tcolorhsv_h =(bbt_hsv->_maxgui_proxygadgets_splitter_tcolorhsv_h +360.0f);
		}
	}
	if(bbt_hsv->_maxgui_proxygadgets_splitter_tcolorhsv_h <0.0f){
		bbt_hsv->_maxgui_proxygadgets_splitter_tcolorhsv_h =0.0f;
	}
	if(bbt_hsv->_maxgui_proxygadgets_splitter_tcolorhsv_h >360.0f){
		bbt_hsv->_maxgui_proxygadgets_splitter_tcolorhsv_h =0.0f;
	}
	bbt_hsv->_maxgui_proxygadgets_splitter_tcolorhsv_a =o->_maxgui_proxygadgets_splitter_tcolorrgb_a ;
	return (struct maxgui_proxygadgets_splitter_TColorHSV_obj*)bbt_hsv;
}
struct maxgui_proxygadgets_splitter_TColorRGB_obj* maxgui_proxygadgets_splitter_TColorRGB_fromARGB_TTColorRGB_ii(BBINT bbt_argb,BBINT bbt_alpha){
	struct maxgui_proxygadgets_splitter_TColorRGB_obj* bbt_rgb=(struct maxgui_proxygadgets_splitter_TColorRGB_obj*)(struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbObjectAtomicNew((BBClass *)&maxgui_proxygadgets_splitter_TColorRGB);
	if(bbt_alpha!=0){
		bbt_rgb->_maxgui_proxygadgets_splitter_tcolorrgb_a =(((BBFLOAT)((unsigned int)(((unsigned int)(bbt_argb)>>24))&255))/255.0f);
	}
	bbt_rgb->_maxgui_proxygadgets_splitter_tcolorrgb_r =(((BBFLOAT)((unsigned int)(((unsigned int)(bbt_argb)>>16))&255))/255.0f);
	bbt_rgb->_maxgui_proxygadgets_splitter_tcolorrgb_g =(((BBFLOAT)((unsigned int)(((unsigned int)(bbt_argb)>>8))&255))/255.0f);
	bbt_rgb->_maxgui_proxygadgets_splitter_tcolorrgb_b =(((BBFLOAT)((unsigned int)(bbt_argb)&255))/255.0f);
	return (struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbt_rgb;
}
struct maxgui_proxygadgets_splitter_TColorRGB_obj* maxgui_proxygadgets_splitter_TColorRGB_fromBGR_TTColorRGB_i(BBINT bbt_argb){
	struct maxgui_proxygadgets_splitter_TColorRGB_obj* bbt_rgb=(struct maxgui_proxygadgets_splitter_TColorRGB_obj*)(struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbObjectAtomicNew((BBClass *)&maxgui_proxygadgets_splitter_TColorRGB);
	bbt_rgb->_maxgui_proxygadgets_splitter_tcolorrgb_r =(((BBFLOAT)((unsigned int)(bbt_argb)&255))/255.0f);
	bbt_rgb->_maxgui_proxygadgets_splitter_tcolorrgb_g =(((BBFLOAT)((unsigned int)(((unsigned int)(bbt_argb)>>8))&255))/255.0f);
	bbt_rgb->_maxgui_proxygadgets_splitter_tcolorrgb_b =(((BBFLOAT)((unsigned int)(((unsigned int)(bbt_argb)>>16))&255))/255.0f);
	return (struct maxgui_proxygadgets_splitter_TColorRGB_obj*)bbt_rgb;
}
BBINT _maxgui_proxygadgets_splitter_TColorRGB_toARGB(struct maxgui_proxygadgets_splitter_TColorRGB_obj* o){
	BBINT bbt_tempr=brl_blitz_Min(255,brl_blitz_Max(0,((BBINT)(o->_maxgui_proxygadgets_splitter_tcolorrgb_r *255.000000f))));
	BBINT bbt_tempg=brl_blitz_Min(255,brl_blitz_Max(0,((BBINT)(o->_maxgui_proxygadgets_splitter_tcolorrgb_g *255.000000f))));
	BBINT bbt_tempb=brl_blitz_Min(255,brl_blitz_Max(0,((BBINT)(o->_maxgui_proxygadgets_splitter_tcolorrgb_b *255.000000f))));
	BBINT bbt_tempa=brl_blitz_Min(255,brl_blitz_Max(0,((BBINT)(o->_maxgui_proxygadgets_splitter_tcolorrgb_a *255.000000f))));
	return ((unsigned int)(((unsigned int)(((unsigned int)((bbt_tempa<<24))|(bbt_tempr<<16)))|(bbt_tempg<<8)))|bbt_tempb);
}
struct BBDebugScope_9 maxgui_proxygadgets_splitter_TColorRGB_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TColorRGB",
	{
		{
			BBDEBUGDECL_FIELD,
			"r",
			"f",
			.field_offset=offsetof(struct maxgui_proxygadgets_splitter_TColorRGB_obj,_maxgui_proxygadgets_splitter_tcolorrgb_r)
		},
		{
			BBDEBUGDECL_FIELD,
			"g",
			"f",
			.field_offset=offsetof(struct maxgui_proxygadgets_splitter_TColorRGB_obj,_maxgui_proxygadgets_splitter_tcolorrgb_g)
		},
		{
			BBDEBUGDECL_FIELD,
			"b",
			"f",
			.field_offset=offsetof(struct maxgui_proxygadgets_splitter_TColorRGB_obj,_maxgui_proxygadgets_splitter_tcolorrgb_b)
		},
		{
			BBDEBUGDECL_FIELD,
			"a",
			"f",
			.field_offset=offsetof(struct maxgui_proxygadgets_splitter_TColorRGB_obj,_maxgui_proxygadgets_splitter_tcolorrgb_a)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TColorRGB_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"toHSV",
			"():TColorHSV",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TColorRGB_toHSV
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"fromARGB",
			"(i,i):TColorRGB",
			.var_address=(void*)&maxgui_proxygadgets_splitter_TColorRGB_fromARGB_TTColorRGB_ii
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"fromBGR",
			"(i):TColorRGB",
			.var_address=(void*)&maxgui_proxygadgets_splitter_TColorRGB_fromBGR_TTColorRGB_i
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"toARGB",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_splitter_TColorRGB_toARGB
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_maxgui_proxygadgets_splitter_TColorRGB maxgui_proxygadgets_splitter_TColorRGB={
	&maxgui_proxygadgets_splitter_TColor,
	bbObjectFree,
	(BBDebugScope*)&maxgui_proxygadgets_splitter_TColorRGB_scope,
	sizeof(struct maxgui_proxygadgets_splitter_TColorRGB_obj),
	(void (*)(BBOBJECT))_maxgui_proxygadgets_splitter_TColorRGB_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct maxgui_proxygadgets_splitter_TColorRGB_obj,_maxgui_proxygadgets_splitter_tcolorrgb_a) - sizeof(void*) + sizeof(BBFLOAT)
	,_maxgui_proxygadgets_splitter_TColorRGB_toARGB
	,_maxgui_proxygadgets_splitter_TColorRGB_toHSV
	,maxgui_proxygadgets_splitter_TColorRGB_fromARGB_TTColorRGB_ii
	,maxgui_proxygadgets_splitter_TColorRGB_fromBGR_TTColorRGB_i
};

struct maxgui_proxygadgets_splitter_TSplitter_obj* maxgui_proxygadgets_splitter_CreateSplitter(BBINT bbt_pX,BBINT bbt_pY,BBINT bbt_pW,BBINT bbt_pH,struct maxgui_maxgui_gadget_TGadget_obj* bbt_pParent,BBINT bbt_pOrientation,BBINT bbt_pHandleSize){
	return (struct maxgui_proxygadgets_splitter_TSplitter_obj*)maxgui_proxygadgets_splitter_TSplitter.m_Create_iiiiTTGadgetii((struct maxgui_proxygadgets_splitter_TSplitter_obj*)((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbObjectNew((BBClass *)&maxgui_proxygadgets_splitter_TSplitter)),bbt_pX,bbt_pY,bbt_pW,bbt_pH,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_pParent,bbt_pOrientation,bbt_pHandleSize);
}
struct maxgui_maxgui_gadget_TGadget_obj* maxgui_proxygadgets_splitter_SplitterPanel(struct maxgui_proxygadgets_splitter_TSplitter_obj* bbt_splitter,BBINT bbt_panel){
	return (struct maxgui_maxgui_gadget_TGadget_obj*)(bbt_splitter)->clas->m_GetPanel_i((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbt_splitter,bbt_panel);
}
void maxgui_proxygadgets_splitter_SetSplitterPosition(struct maxgui_proxygadgets_splitter_TSplitter_obj* bbt_splitter,BBINT bbt_position,BBINT bbt_save){
	(bbt_splitter)->clas->m_SetPanelSpace_ii((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbt_splitter,bbt_position,bbt_save);
}
BBINT maxgui_proxygadgets_splitter_SplitterPosition(struct maxgui_proxygadgets_splitter_TSplitter_obj* bbt_splitter){
	return (bbt_splitter)->clas->m_GetPanelSpace_i((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbt_splitter,1);
}
void maxgui_proxygadgets_splitter_SetSplitterOrientation(struct maxgui_proxygadgets_splitter_TSplitter_obj* bbt_splitter,BBINT bbt_orientation){
	(bbt_splitter)->clas->m_ChangeOrientation_i((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbt_splitter,bbt_orientation);
}
BBINT maxgui_proxygadgets_splitter_SplitterOrientation(struct maxgui_proxygadgets_splitter_TSplitter_obj* bbt_splitter){
	return (bbt_splitter)->clas->m_GetOrientation((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbt_splitter);
}
void maxgui_proxygadgets_splitter_SetSplitterBehavior(struct maxgui_proxygadgets_splitter_TSplitter_obj* bbt_splitter,BBINT bbt_flags){
	(bbt_splitter)->clas->m_SetBehavior_i((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbt_splitter,bbt_flags);
}
BBINT maxgui_proxygadgets_splitter_SplitterBehavior(struct maxgui_proxygadgets_splitter_TSplitter_obj* bbt_splitter){
	return (bbt_splitter)->clas->m_GetBehavior((struct maxgui_proxygadgets_splitter_TSplitter_obj*)bbt_splitter);
}
static int _bb_maxgui_proxygadgets_splitter_inited = 0;
int _bb_maxgui_proxygadgets_splitter(){
	if (!_bb_maxgui_proxygadgets_splitter_inited) {
		_bb_maxgui_proxygadgets_splitter_inited = 1;
		GC_add_roots(&maxgui_proxygadgets_splitter_TSplitter_intSideToPanelMapping, &maxgui_proxygadgets_splitter_TSplitter_intOrientationLocks + 1);
		__bb_brl_blitz_blitz();
		__bb_maxgui_maxgui_maxgui();
		bbObjectRegisterType((BBCLASS)&maxgui_proxygadgets_splitter_TSplitter);
		bbObjectRegisterType((BBCLASS)&maxgui_proxygadgets_splitter_TColor);
		bbObjectRegisterType((BBCLASS)&maxgui_proxygadgets_splitter_TColorHSV);
		bbObjectRegisterType((BBCLASS)&maxgui_proxygadgets_splitter_TColorRGB);
		BBINT bbt_7[]={1,1,1,1};
		BBARRAY bbt_8 = bbArrayFromData("i",4,bbt_7);
		BBINT bbt_9[]={1,1,0,1};
		BBARRAY bbt_10 = bbArrayFromData("i",4,bbt_9);
		BBINT bbt_11[]={1,1,0,1};
		BBARRAY bbt_12 = bbArrayFromData("i",4,bbt_11);
		BBARRAY bbt_5[]={bbt_8,bbt_10,bbt_12};
		BBARRAY bbt_6 = bbArrayFromData("[]i",3,bbt_5);
		BBINT bbt_15[]={1,1,1,1};
		BBARRAY bbt_16 = bbArrayFromData("i",4,bbt_15);
		BBINT bbt_17[]={0,1,1,1};
		BBARRAY bbt_18 = bbArrayFromData("i",4,bbt_17);
		BBINT bbt_19[]={0,1,1,1};
		BBARRAY bbt_20 = bbArrayFromData("i",4,bbt_19);
		BBARRAY bbt_13[]={bbt_16,bbt_18,bbt_20};
		BBARRAY bbt_14 = bbArrayFromData("[]i",3,bbt_13);
		BBINT bbt_23[]={1,1,1,1};
		BBARRAY bbt_24 = bbArrayFromData("i",4,bbt_23);
		BBINT bbt_25[]={1,1,1,0};
		BBARRAY bbt_26 = bbArrayFromData("i",4,bbt_25);
		BBINT bbt_27[]={1,1,1,0};
		BBARRAY bbt_28 = bbArrayFromData("i",4,bbt_27);
		BBARRAY bbt_21[]={bbt_24,bbt_26,bbt_28};
		BBARRAY bbt_22 = bbArrayFromData("[]i",3,bbt_21);
		BBINT bbt_31[]={1,1,1,1};
		BBARRAY bbt_32 = bbArrayFromData("i",4,bbt_31);
		BBINT bbt_33[]={1,0,1,1};
		BBARRAY bbt_34 = bbArrayFromData("i",4,bbt_33);
		BBINT bbt_35[]={1,0,1,1};
		BBARRAY bbt_36 = bbArrayFromData("i",4,bbt_35);
		BBARRAY bbt_29[]={bbt_32,bbt_34,bbt_36};
		BBARRAY bbt_30 = bbArrayFromData("[]i",3,bbt_29);
		BBARRAY bbt_3[]={bbt_6,bbt_14,bbt_22,bbt_30};
		BBARRAY bbt_4 = bbArrayFromData("[][]i",4,bbt_3);
		maxgui_proxygadgets_splitter_TSplitter_intOrientationLocks=bbt_4;
		BBINT bbt_39[]={0,1};
		BBARRAY bbt_40 = bbArrayFromData("i",2,bbt_39);
		BBINT bbt_41[]={0,1};
		BBARRAY bbt_42 = bbArrayFromData("i",2,bbt_41);
		BBINT bbt_43[]={1,0};
		BBARRAY bbt_44 = bbArrayFromData("i",2,bbt_43);
		BBINT bbt_45[]={1,0};
		BBARRAY bbt_46 = bbArrayFromData("i",2,bbt_45);
		BBARRAY bbt_37[]={bbt_40,bbt_42,bbt_44,bbt_46};
		BBARRAY bbt_38 = bbArrayFromData("[]i",4,bbt_37);
		maxgui_proxygadgets_splitter_TSplitter_intSideToPanelMapping=bbt_38;
		return 0;
	}
	return 0;
}