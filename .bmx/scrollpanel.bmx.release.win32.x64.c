#include "scrollpanel.bmx.release.win32.x64.h"
static BBString _s0={
	&bbStringClass,
	2,
	{49,56}
};
struct BBDebugScope_3{int kind; const char *name; BBDebugDecl decls[4]; };
struct BBDebugScope_30{int kind; const char *name; BBDebugDecl decls[31]; };
void _maxgui_proxygadgets_scrollpanel_TScrollPanel_New(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* o) {
	_maxgui_maxgui_gadget_TProxyGadget_New((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o);
	o->clas = &maxgui_proxygadgets_scrollpanel_TScrollPanel;
	o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_flags = 0;
	o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea = (struct maxgui_maxgui_gadget_TProxyGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrhorizontal = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrvertical = (struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject;
	o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_currenth = 0;
	o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_currentv = 0;
	o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_clientw = 0;
	o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_clienth = 0;
	brl_hook_AddHook(brl_event_EmitEventHook,maxgui_proxygadgets_scrollpanel_TScrollPanel_eventHandler_TObject_iTObjectTObject,(BBOBJECT)o,-1);
	((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o)->clas->m_RemoveVerticalScroll((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o);
	((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o)->clas->m_RemoveHorizontalScroll((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o);
}
struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* _maxgui_proxygadgets_scrollpanel_TScrollPanel_Create_iiiiTTGadgeti(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* o,BBINT bbt_pX,BBINT bbt_pY,BBINT bbt_pWidth,BBINT bbt_pHeight,struct maxgui_maxgui_gadget_TGadget_obj* bbt_pParent,BBINT bbt_pFlags){
	BBINT bbt_tmpPanelFlags=0;
	o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_flags =bbt_pFlags;
	if(((unsigned int)(o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_flags )&1)!=0){
		bbt_tmpPanelFlags|=1;
	}
	o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreatePanel(bbt_pX,bbt_pY,bbt_pWidth,bbt_pHeight,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_pParent,bbt_tmpPanelFlags,&bbEmptyString);
	maxgui_maxgui_HideGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire );
	((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)->clas->m_SetProxy_TTGadget((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o,(struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire );
	o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreatePanel(0,0,(o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire )->clas->m_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire ),(o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire )->clas->m_ClientHeight((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire ),(struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire ,0,&bbEmptyString);
	o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea =(struct maxgui_maxgui_gadget_TProxyGadget_obj*)((struct maxgui_maxgui_gadget_TProxyGadget_obj*)bbObjectDowncast((BBOBJECT)(struct maxgui_proxygadgets_scrollpanel_TScrollClient_obj*)bbObjectNew((BBClass *)&maxgui_proxygadgets_scrollpanel_TScrollClient),(BBClass*)&maxgui_maxgui_gadget_TProxyGadget));
	(o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )->clas->m_SetProxy_TTGadget((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ,(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreatePanel(0,0,(o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport )->clas->m_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ),(o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport )->clas->m_ClientHeight((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ),(struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ,0,&bbEmptyString));
	o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrhorizontal =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateSlider(0,((o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire )->clas->m_ClientHeight((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire )-18),((o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire )->clas->m_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire )-18),18,(struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire ,1);
	o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrvertical =(struct maxgui_maxgui_gadget_TGadget_obj*)maxgui_maxgui_CreateSlider(((o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire )->clas->m_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire )-18),0,18,((o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire )->clas->m_ClientHeight((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire )-18),(struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire ,2);
	maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ,1,1,1,1);
	maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrhorizontal ,1,1,0,1);
	maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrvertical ,0,1,1,1);
	BBINT bbt_=((unsigned int)(o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_flags )&24);
	if(bbt_==0){
		maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)(o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )->clas->m_GetProxy((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ),1,0,1,0);
	}else{
		if(bbt_==8){
			maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)(o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )->clas->m_GetProxy((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ),1,1,1,0);
		}else{
			if(bbt_==16){
				maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)(o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )->clas->m_GetProxy((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ),1,0,1,1);
			}else{
				if(bbt_==24){
					maxgui_maxgui_SetGadgetLayout((struct maxgui_maxgui_gadget_TGadget_obj*)(o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )->clas->m_GetProxy((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ),1,1,1,1);
				}
			}
		}
	}
	maxgui_maxgui_HideGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrhorizontal );
	maxgui_maxgui_HideGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrvertical );
	maxgui_maxgui_ShowGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire );
	return (struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o;
}
BBINT _maxgui_proxygadgets_scrollpanel_TScrollPanel_SetShape_iiii(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* o,BBINT bbt_x,BBINT bbt_y,BBINT bbt_w,BBINT bbt_h){
	(&maxgui_proxygadgets_scrollpanel_TScrollPanel)->super->m_SetShape_iiii((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o,bbt_x,bbt_y,bbt_w,bbt_h);
	((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o)->clas->m_Update((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o);
	return 0;
}
BBINT _maxgui_proxygadgets_scrollpanel_TScrollPanel_ClientWidth(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* o){
	return (o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport )->clas->m_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport );
}
BBINT _maxgui_proxygadgets_scrollpanel_TScrollPanel_ClientHeight(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* o){
	return (o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport )->clas->m_ClientHeight((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport );
}
BBINT _maxgui_proxygadgets_scrollpanel_TScrollPanel_GetXScroll(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* o){
	return o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_currenth ;
}
BBINT _maxgui_proxygadgets_scrollpanel_TScrollPanel_GetYScroll(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* o){
	return o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_currentv ;
}
BBINT _maxgui_proxygadgets_scrollpanel_TScrollPanel_ScrollTo_ii(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* o,BBINT bbt_pHSlider,BBINT bbt_pVSlider){
	BBINT bbt_tmpRight=brl_blitz_Max(((o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )->clas->m_ClientWidth((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )-(o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport )->clas->m_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport )),0);
	BBINT bbt_tmpBottom=brl_blitz_Max(((o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )->clas->m_ClientHeight((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )-(o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport )->clas->m_ClientHeight((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport )),0);
	if(bbt_pHSlider>bbt_tmpRight){
		bbt_pHSlider=bbt_tmpRight;
	}
	if(bbt_pVSlider>bbt_tmpBottom){
		bbt_pVSlider=bbt_tmpBottom;
	}
	if(bbt_pHSlider>=0){
		o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_currenth =bbt_pHSlider;
	}
	if(bbt_pVSlider>=0){
		o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_currentv =bbt_pVSlider;
	}
	maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)(o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )->clas->m_GetProxy((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ),-o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_currenth ,-o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_currentv ,(o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )->clas->m_GetWidth((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ),(o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )->clas->m_GetHeight((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ));
	return 0;
}
BBINT _maxgui_proxygadgets_scrollpanel_TScrollPanel_FitToChildren_ii(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* o,BBINT bbt_pRightMargin,BBINT bbt_pBottomMargin){
	BBINT bbt_tmpRight=0;
	BBINT bbt_tmpBottom=0;
	struct brl_linkedlist_TList_obj* bbt_2;
	struct brl_linkedlist_TListEnum_obj* bbt_=(struct brl_linkedlist_TListEnum_obj*)(((struct brl_linkedlist_TList_obj*)(bbt_2 = o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ->_maxgui_maxgui_gadget_tproxygadget_proxy ->_maxgui_maxgui_gadget_tgadget_kids ))->clas)->m_ObjectEnumerator((struct brl_linkedlist_TList_obj*)bbt_2);
	while((bbt_)->clas->m_HasNext((struct brl_linkedlist_TListEnum_obj*)bbt_)!=0){
		struct maxgui_maxgui_gadget_TGadget_obj* bbt_tmpChild=(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)(bbt_)->clas->m_NextObject((struct brl_linkedlist_TListEnum_obj*)bbt_),(BBClass*)&maxgui_maxgui_gadget_TGadget));
		if(bbt_tmpChild==&bbNullObject){
			continue;
		}
		bbt_tmpRight=brl_blitz_Max(bbt_tmpRight,(maxgui_maxgui_GadgetX((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_tmpChild)+maxgui_maxgui_GadgetWidth((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_tmpChild)));
		bbt_tmpBottom=brl_blitz_Max(bbt_tmpBottom,(maxgui_maxgui_GadgetY((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_tmpChild)+maxgui_maxgui_GadgetHeight((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_tmpChild)));
	}
	maxgui_maxgui_HideGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport );
	(o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )->clas->m_SetShape_iiii((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ,0,0,(bbt_tmpRight+bbt_pRightMargin),(bbt_tmpBottom+bbt_pBottomMargin));
	((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o)->clas->m_ScrollTo_ii((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o,0,0);
	maxgui_maxgui_ShowGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport );
	return 0;
}
BBINT _maxgui_proxygadgets_scrollpanel_TScrollPanel_FitToViewport(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* o){
	maxgui_maxgui_HideGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport );
	(o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )->clas->m_SetShape_iiii((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ,0,0,(o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport )->clas->m_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ),(o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport )->clas->m_ClientHeight((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ));
	((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o)->clas->m_ScrollTo_ii((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o,0,0);
	maxgui_maxgui_ShowGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport );
	return 0;
}
BBINT _maxgui_proxygadgets_scrollpanel_TScrollPanel_Update(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* o){
	BBINT bbt_tmpDiff=0;
	BBINT bbt_tmpPos=0;
	if(!(((BBObject*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )!= &bbNullObject)){
		return 0;
	}
	if((o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport )->clas->m_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport )<(o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )->clas->m_GetWidth((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )){
		((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o)->clas->m_AddHorizontalScroll_iii((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o,(o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport )->clas->m_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ),(o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )->clas->m_GetXPos((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ),(o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )->clas->m_GetWidth((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ));
	}else{
		((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o)->clas->m_RemoveHorizontalScroll((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o);
	}
	if((o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport )->clas->m_ClientHeight((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport )<(o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )->clas->m_GetHeight((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )){
		((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o)->clas->m_AddVerticalScroll_iii((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o,(o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport )->clas->m_ClientHeight((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ),(o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )->clas->m_GetYPos((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ),(o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )->clas->m_GetHeight((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ));
	}else{
		((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o)->clas->m_RemoveVerticalScroll((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o);
	}
	if((o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport )->clas->m_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport )<(o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )->clas->m_GetWidth((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )){
		bbt_tmpDiff=brl_blitz_Max(((o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport )->clas->m_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport )-((o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )->clas->m_GetXPos((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )+(o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )->clas->m_GetWidth((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ))),0);
		bbt_tmpPos=brl_blitz_Min(((o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )->clas->m_GetXPos((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )+bbt_tmpDiff),0);
		((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o)->clas->m_AddHorizontalScroll_iii((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o,(o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport )->clas->m_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ),bbt_tmpPos,(o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )->clas->m_GetWidth((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ));
		((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o)->clas->m_ScrollTo_ii((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o,-bbt_tmpPos,o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_currentv );
	}else{
		((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o)->clas->m_RemoveHorizontalScroll((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o);
	}
	if((o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport )->clas->m_ClientHeight((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport )<(o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )->clas->m_GetHeight((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )){
		bbt_tmpDiff=brl_blitz_Max(((o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport )->clas->m_ClientHeight((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport )-((o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )->clas->m_GetYPos((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )+(o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )->clas->m_GetHeight((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ))),0);
		bbt_tmpPos=brl_blitz_Min(((o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )->clas->m_GetYPos((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )+bbt_tmpDiff),0);
		((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o)->clas->m_AddVerticalScroll_iii((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o,(o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport )->clas->m_ClientHeight((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ),bbt_tmpPos,(o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )->clas->m_GetHeight((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ));
		((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o)->clas->m_ScrollTo_ii((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o,o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_currenth ,-bbt_tmpPos);
	}else{
		((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o)->clas->m_RemoveVerticalScroll((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o);
	}
	return 0;
}
BBINT _maxgui_proxygadgets_scrollpanel_TScrollPanel_AddVerticalScroll_iii(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* o,BBINT bbt_pVisible,BBINT bbt_pY,BBINT bbt_pHeight){
	if((((BBObject*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrvertical )!= &bbNullObject) && !(((unsigned int)(o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_flags )&64)!=0)){
		maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ,0,0,((o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire )->clas->m_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire )-18),maxgui_maxgui_GadgetHeight((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ));
		maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrvertical ,((o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire )->clas->m_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire )-18),0,18,maxgui_maxgui_GadgetHeight((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ));
		maxgui_maxgui_SetSliderRange((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrvertical ,bbt_pVisible,bbt_pHeight);
		maxgui_maxgui_SetSliderValue((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrvertical ,-bbt_pY);
		maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrvertical );
		maxgui_maxgui_ShowGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrvertical );
	}
	return 0;
}
BBINT _maxgui_proxygadgets_scrollpanel_TScrollPanel_RemoveVerticalScroll(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* o){
	if((((BBObject*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrvertical )!= &bbNullObject) && !(maxgui_maxgui_GadgetDisabled((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrvertical ,0)!=0)){
		if(!(((unsigned int)(o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_flags )&4)!=0)){
			maxgui_maxgui_HideGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrvertical );
			maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ,0,0,(o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire )->clas->m_ClientWidth((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire ),maxgui_maxgui_GadgetHeight((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ));
		}
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrvertical );
		((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o)->clas->m_ScrollTo_ii((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o,o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_currenth ,0);
	}
	return 0;
}
BBINT _maxgui_proxygadgets_scrollpanel_TScrollPanel_AddHorizontalScroll_iii(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* o,BBINT bbt_pVisible,BBINT bbt_pX,BBINT bbt_pWidth){
	if((((BBObject*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrhorizontal )!= &bbNullObject) && !(((unsigned int)(o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_flags )&32)!=0)){
		maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ,0,0,maxgui_maxgui_GadgetWidth((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ),((o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire )->clas->m_ClientHeight((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire )-18));
		maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrhorizontal ,0,((o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire )->clas->m_ClientHeight((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire )-18),maxgui_maxgui_GadgetWidth((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ),18);
		maxgui_maxgui_SetSliderRange((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrhorizontal ,bbt_pVisible,bbt_pWidth);
		maxgui_maxgui_SetSliderValue((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrhorizontal ,-bbt_pX);
		maxgui_maxgui_EnableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrhorizontal );
		maxgui_maxgui_ShowGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrhorizontal );
	}
	return 0;
}
BBINT _maxgui_proxygadgets_scrollpanel_TScrollPanel_RemoveHorizontalScroll(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* o){
	if((((BBObject*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrhorizontal )!= &bbNullObject) && !(maxgui_maxgui_GadgetDisabled((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrhorizontal ,0)!=0)){
		if(!(((unsigned int)(o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_flags )&2)!=0)){
			maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ,0,0,maxgui_maxgui_GadgetWidth((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport ),(o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire )->clas->m_ClientHeight((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire ));
			maxgui_maxgui_HideGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrhorizontal );
		}
		maxgui_maxgui_DisableGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrhorizontal );
		((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o)->clas->m_ScrollTo_ii((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o,0,o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_currentv );
	}
	return 0;
}
BBOBJECT _maxgui_proxygadgets_scrollpanel_TScrollPanel_eventHook_iTObjectTObject(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* o,BBINT bbt_pID,BBOBJECT bbt_pData,BBOBJECT bbt_pContext){
	struct brl_event_TEvent_obj* bbt_tmpEvent=(struct brl_event_TEvent_obj*)((struct brl_event_TEvent_obj*)bbObjectDowncast((BBOBJECT)bbt_pData,(BBClass*)&brl_event_TEvent));
	if(bbt_tmpEvent==&bbNullObject){
		return (BBOBJECT)bbt_pData;
	}
	BBINT bbt_=bbt_tmpEvent->_brl_event_tevent_id ;
	if(bbt_==16386){
		if(o->clas->f_CheckParent_i_TTGadgetTTGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire ,(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_tmpEvent->_brl_event_tevent_source ,(BBClass*)&maxgui_maxgui_gadget_TGadget)))!=0){
			((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o)->clas->m_Update((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o);
		}
	}else{
		if(bbt_==8193){
			BBINT bbt_tmpH=o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_currenth ;
			BBINT bbt_tmpV=o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_currentv ;
			BBOBJECT bbt_2=(BBOBJECT)bbt_tmpEvent->_brl_event_tevent_source ;
			if(bbt_2==o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrhorizontal ){
				bbt_tmpH=maxgui_maxgui_SliderValue((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrhorizontal );
			}else{
				if(bbt_2==o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrvertical ){
					bbt_tmpV=maxgui_maxgui_SliderValue((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrvertical );
				}else{
					return (BBOBJECT)bbt_pData;
				}
			}
			((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o)->clas->m_ScrollTo_ii((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)o,bbt_tmpH,bbt_tmpV);
			brl_event_EmitEvent((struct brl_event_TEvent_obj*)brl_event_CreateEvent(8193,(BBOBJECT)o,0,0,o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_currenth ,o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_currentv ,(BBOBJECT)&bbNullObject));
			bbt_pData=(BBOBJECT)&bbNullObject;
		}
	}
	return (BBOBJECT)bbt_pData;
}
BBINT _maxgui_proxygadgets_scrollpanel_TScrollPanel_CleanUp(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* o){
	brl_hook_RemoveHook(brl_event_EmitEventHook,o->clas->f_eventHandler_TObject_iTObjectTObject,(BBOBJECT)o);
	((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)->clas->m_SetProxy_TTGadget((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o,(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject);
	if(((BBObject*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )!= &bbNullObject){
		(o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea )->clas->m_SetProxy_TTGadget((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ,(struct maxgui_maxgui_gadget_TGadget_obj*)&bbNullObject);
		o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea =(struct maxgui_maxgui_gadget_TProxyGadget_obj*)&bbNullObject;
	}
	if(((BBObject*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire )!= &bbNullObject){
		maxgui_maxgui_HideGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire );
		maxgui_maxgui_FreeGadget((struct maxgui_maxgui_gadget_TGadget_obj*)o->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire );
	}
	return 0;
}
BBOBJECT maxgui_proxygadgets_scrollpanel_TScrollPanel_eventHandler_TObject_iTObjectTObject(BBINT bbt_pID,BBOBJECT bbt_pData,BBOBJECT bbt_pContext){
	struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* bbt_tmpSuperPanel=(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbObjectDowncast((BBOBJECT)bbt_pContext,(BBClass*)&maxgui_proxygadgets_scrollpanel_TScrollPanel));
	if(((BBObject*)bbt_tmpSuperPanel)!= &bbNullObject){
		bbt_pData=(BBOBJECT)(bbt_tmpSuperPanel)->clas->m_eventHook_iTObjectTObject((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbt_tmpSuperPanel,bbt_pID,(BBOBJECT)bbt_pData,(BBOBJECT)bbt_pContext);
	}
	return (BBOBJECT)bbt_pData;
}
BBINT maxgui_proxygadgets_scrollpanel_TScrollPanel_CheckParent_i_TTGadgetTTGadget(struct maxgui_maxgui_gadget_TGadget_obj* bbt_pGadget,struct maxgui_maxgui_gadget_TGadget_obj* bbt_pParentToCheck){
	if(bbt_pGadget==bbt_pParentToCheck){
		return 1;
	}
	if(((BBObject*)bbt_pGadget->_maxgui_maxgui_gadget_tgadget_parent )!= &bbNullObject){
		return maxgui_proxygadgets_scrollpanel_TScrollPanel_CheckParent_i_TTGadgetTTGadget((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_pGadget->_maxgui_maxgui_gadget_tgadget_parent ,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_pParentToCheck);
	}
	return 0;
}
struct BBDebugScope_30 maxgui_proxygadgets_scrollpanel_TScrollPanel_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TScrollPanel",
	{
		{
			BBDEBUGDECL_CONST,
			"SCROLL_WIDTH",
			"i",
			.const_value=&_s0
		},
		{
			BBDEBUGDECL_FIELD,
			"flags",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj,_maxgui_proxygadgets_scrollpanel_tscrollpanel_flags)
		},
		{
			BBDEBUGDECL_FIELD,
			"pnlEntire",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj,_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire)
		},
		{
			BBDEBUGDECL_FIELD,
			"pnlViewport",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj,_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport)
		},
		{
			BBDEBUGDECL_FIELD,
			"pnlClientArea",
			":TProxyGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj,_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea)
		},
		{
			BBDEBUGDECL_FIELD,
			"scrHorizontal",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj,_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrhorizontal)
		},
		{
			BBDEBUGDECL_FIELD,
			"scrVertical",
			":TGadget",
			.field_offset=offsetof(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj,_maxgui_proxygadgets_scrollpanel_tscrollpanel_scrvertical)
		},
		{
			BBDEBUGDECL_FIELD,
			"currentH",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj,_maxgui_proxygadgets_scrollpanel_tscrollpanel_currenth)
		},
		{
			BBDEBUGDECL_FIELD,
			"currentV",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj,_maxgui_proxygadgets_scrollpanel_tscrollpanel_currentv)
		},
		{
			BBDEBUGDECL_FIELD,
			"clientW",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj,_maxgui_proxygadgets_scrollpanel_tscrollpanel_clientw)
		},
		{
			BBDEBUGDECL_FIELD,
			"clientH",
			"i",
			.field_offset=offsetof(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj,_maxgui_proxygadgets_scrollpanel_tscrollpanel_clienth)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_scrollpanel_TScrollPanel_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Create",
			"(i,i,i,i,:TGadget,i):TScrollPanel",
			.var_address=(void*)&_maxgui_proxygadgets_scrollpanel_TScrollPanel_Create_iiiiTTGadgeti
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetShape",
			"(i,i,i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_scrollpanel_TScrollPanel_SetShape_iiii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ClientWidth",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_scrollpanel_TScrollPanel_ClientWidth
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ClientHeight",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_scrollpanel_TScrollPanel_ClientHeight
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetXScroll",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_scrollpanel_TScrollPanel_GetXScroll
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetYScroll",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_scrollpanel_TScrollPanel_GetYScroll
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ScrollTo",
			"(i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_scrollpanel_TScrollPanel_ScrollTo_ii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"FitToChildren",
			"(i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_scrollpanel_TScrollPanel_FitToChildren_ii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"FitToViewport",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_scrollpanel_TScrollPanel_FitToViewport
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Update",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_scrollpanel_TScrollPanel_Update
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"AddVerticalScroll",
			"(i,i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_scrollpanel_TScrollPanel_AddVerticalScroll_iii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"RemoveVerticalScroll",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_scrollpanel_TScrollPanel_RemoveVerticalScroll
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"AddHorizontalScroll",
			"(i,i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_scrollpanel_TScrollPanel_AddHorizontalScroll_iii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"RemoveHorizontalScroll",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_scrollpanel_TScrollPanel_RemoveHorizontalScroll
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"eventHook",
			"(i,:Object,:Object):Object",
			.var_address=(void*)&_maxgui_proxygadgets_scrollpanel_TScrollPanel_eventHook_iTObjectTObject
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"CleanUp",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_scrollpanel_TScrollPanel_CleanUp
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"eventHandler",
			"(i,:Object,:Object):Object",
			.var_address=(void*)&maxgui_proxygadgets_scrollpanel_TScrollPanel_eventHandler_TObject_iTObjectTObject
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"CheckParent",
			"(:TGadget,:TGadget)i",
			.var_address=(void*)&maxgui_proxygadgets_scrollpanel_TScrollPanel_CheckParent_i_TTGadgetTTGadget
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_maxgui_proxygadgets_scrollpanel_TScrollPanel maxgui_proxygadgets_scrollpanel_TScrollPanel={
	&maxgui_maxgui_gadget_TProxyGadget,
	bbObjectFree,
	(BBDebugScope*)&maxgui_proxygadgets_scrollpanel_TScrollPanel_scope,
	sizeof(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj),
	(void (*)(BBOBJECT))_maxgui_proxygadgets_scrollpanel_TScrollPanel_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj,_maxgui_proxygadgets_scrollpanel_tscrollpanel_clienth) - sizeof(void*) + sizeof(BBINT)
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
	,_maxgui_proxygadgets_scrollpanel_TScrollPanel_SetShape_iiii
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
	,_maxgui_proxygadgets_scrollpanel_TScrollPanel_CleanUp
	,_maxgui_maxgui_gadget_TProxyGadget_Free
	,_maxgui_maxgui_gadget_TProxyGadget_Rethink
	,_maxgui_proxygadgets_scrollpanel_TScrollPanel_ClientWidth
	,_maxgui_proxygadgets_scrollpanel_TScrollPanel_ClientHeight
	,_maxgui_maxgui_gadget_TProxyGadget_Activate_i
	,_maxgui_maxgui_gadget_TProxyGadget_State
	,_maxgui_maxgui_gadget_TProxyGadget_SetText_S
	,_maxgui_maxgui_gadget_TProxyGadget_GetText
	,_maxgui_maxgui_gadget_TProxyGadget_SetFont_TTGuiFont
	,_maxgui_maxgui_gadget_TProxyGadget_SetColor_iii
	,_maxgui_maxgui_gadget_TProxyGadget_RemoveColor
	,_maxgui_maxgui_gadget_TProxyGadget_SetAlpha_f
	,_maxgui_maxgui_gadget_TProxyGadget_SetTextColor_iii
	,_maxgui_maxgui_gadget_TProxyGadget_SetTooltip_S
	,_maxgui_maxgui_gadget_TProxyGadget_GetTooltip
	,_maxgui_maxgui_gadget_TProxyGadget_SetPixmap_TTPixmapi
	,_maxgui_maxgui_gadget_TProxyGadget_SetIconStrip_TTIconStrip
	,_maxgui_maxgui_gadget_TProxyGadget_SetShow_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetEnabled_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetSelected_i
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
	,_maxgui_proxygadgets_scrollpanel_TScrollPanel_Create_iiiiTTGadgeti
	,_maxgui_proxygadgets_scrollpanel_TScrollPanel_GetXScroll
	,_maxgui_proxygadgets_scrollpanel_TScrollPanel_GetYScroll
	,_maxgui_proxygadgets_scrollpanel_TScrollPanel_ScrollTo_ii
	,_maxgui_proxygadgets_scrollpanel_TScrollPanel_FitToChildren_ii
	,_maxgui_proxygadgets_scrollpanel_TScrollPanel_FitToViewport
	,_maxgui_proxygadgets_scrollpanel_TScrollPanel_Update
	,_maxgui_proxygadgets_scrollpanel_TScrollPanel_AddVerticalScroll_iii
	,_maxgui_proxygadgets_scrollpanel_TScrollPanel_RemoveVerticalScroll
	,_maxgui_proxygadgets_scrollpanel_TScrollPanel_AddHorizontalScroll_iii
	,_maxgui_proxygadgets_scrollpanel_TScrollPanel_RemoveHorizontalScroll
	,_maxgui_proxygadgets_scrollpanel_TScrollPanel_eventHook_iTObjectTObject
	,maxgui_proxygadgets_scrollpanel_TScrollPanel_eventHandler_TObject_iTObjectTObject
	,maxgui_proxygadgets_scrollpanel_TScrollPanel_CheckParent_i_TTGadgetTTGadget
};

void _maxgui_proxygadgets_scrollpanel_TScrollClient_New(struct maxgui_proxygadgets_scrollpanel_TScrollClient_obj* o) {
	_maxgui_maxgui_gadget_TProxyGadget_New((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o);
	o->clas = &maxgui_proxygadgets_scrollpanel_TScrollClient;
}
BBINT _maxgui_proxygadgets_scrollpanel_TScrollClient_SetShape_iiii(struct maxgui_proxygadgets_scrollpanel_TScrollClient_obj* o,BBINT bbt_x,BBINT bbt_y,BBINT bbt_w,BBINT bbt_h){
	BBINT bbt_i=0;
	BBARRAY volatile bbt_arrDimensions=&bbEmptyArray;
	BBARRAY volatile bbt_tmpDimensions=&bbEmptyArray;
	struct brl_linkedlist_TList_obj* bbt_2;
	struct brl_linkedlist_TListEnum_obj* bbt_=(struct brl_linkedlist_TListEnum_obj*)(((struct brl_linkedlist_TList_obj*)(bbt_2 = o->_maxgui_maxgui_gadget_tproxygadget_proxy ->_maxgui_maxgui_gadget_tgadget_kids ))->clas)->m_ObjectEnumerator((struct brl_linkedlist_TList_obj*)bbt_2);
	while((bbt_)->clas->m_HasNext((struct brl_linkedlist_TListEnum_obj*)bbt_)!=0){
		struct maxgui_maxgui_gadget_TGadget_obj* bbt_tmpChild=(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)(bbt_)->clas->m_NextObject((struct brl_linkedlist_TListEnum_obj*)bbt_),(BBClass*)&maxgui_maxgui_gadget_TGadget));
		if(bbt_tmpChild==&bbNullObject){
			continue;
		}
		BBINT bbt_3[]={maxgui_maxgui_GadgetX((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_tmpChild),maxgui_maxgui_GadgetY((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_tmpChild),maxgui_maxgui_GadgetWidth((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_tmpChild),maxgui_maxgui_GadgetHeight((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_tmpChild)};
		BBARRAY bbt_4 = bbArrayFromData("i",4,bbt_3);
		bbt_tmpDimensions=bbt_4;
		BBARRAY bbt_5[]={bbt_tmpDimensions};
		BBARRAY bbt_6 = bbArrayFromData("[]i",1,bbt_5);
		bbt_arrDimensions=bbArrayConcat("[]i",bbt_arrDimensions,bbt_6);
	}
	(&maxgui_proxygadgets_scrollpanel_TScrollClient)->super->m_SetShape_iiii((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o,((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)->clas->m_GetXPos((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o),((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o)->clas->m_GetYPos((struct maxgui_maxgui_gadget_TProxyGadget_obj*)o),bbt_w,bbt_h);
	struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* bbt_7;
	(((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)(bbt_7 = ((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbObjectDowncast((BBOBJECT)o->_maxgui_maxgui_gadget_tproxygadget_proxy ->_maxgui_maxgui_gadget_tgadget_parent ->_maxgui_maxgui_gadget_tgadget_parent ->_maxgui_maxgui_gadget_tgadget_source ,(BBClass*)&maxgui_proxygadgets_scrollpanel_TScrollPanel))))->clas)->m_Update((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbt_7);
	struct brl_linkedlist_TList_obj* bbt_9;
	struct brl_linkedlist_TListEnum_obj* bbt_8=(struct brl_linkedlist_TListEnum_obj*)(((struct brl_linkedlist_TList_obj*)(bbt_9 = o->_maxgui_maxgui_gadget_tproxygadget_proxy ->_maxgui_maxgui_gadget_tgadget_kids ))->clas)->m_ObjectEnumerator((struct brl_linkedlist_TList_obj*)bbt_9);
	while((bbt_8)->clas->m_HasNext((struct brl_linkedlist_TListEnum_obj*)bbt_8)!=0){
		struct maxgui_maxgui_gadget_TGadget_obj* bbt_tmpChild2=(struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)(bbt_8)->clas->m_NextObject((struct brl_linkedlist_TListEnum_obj*)bbt_8),(BBClass*)&maxgui_maxgui_gadget_TGadget));
		if(bbt_tmpChild2==&bbNullObject){
			continue;
		}
		bbt_tmpDimensions=((BBARRAY*)BBARRAYDATA(bbt_arrDimensions,1))[((BBUINT)bbt_i)];
		bbt_i+=1;
		maxgui_maxgui_SetGadgetShape((struct maxgui_maxgui_gadget_TGadget_obj*)bbt_tmpChild2,((BBINT*)BBARRAYDATA(bbt_tmpDimensions,1))[0U],((BBINT*)BBARRAYDATA(bbt_tmpDimensions,1))[1U],((BBINT*)BBARRAYDATA(bbt_tmpDimensions,1))[2U],((BBINT*)BBARRAYDATA(bbt_tmpDimensions,1))[3U]);
	}
	return 0;
}
BBINT _maxgui_proxygadgets_scrollpanel_TScrollClient_SetLayout_iiii(struct maxgui_proxygadgets_scrollpanel_TScrollClient_obj* o,BBINT bbt_lft,BBINT bbt_rht,BBINT bbt_top,BBINT bbt_bot){
	return 0;
}
struct BBDebugScope_3 maxgui_proxygadgets_scrollpanel_TScrollClient_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TScrollClient",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&_maxgui_proxygadgets_scrollpanel_TScrollClient_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetShape",
			"(i,i,i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_scrollpanel_TScrollClient_SetShape_iiii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetLayout",
			"(i,i,i,i)i",
			.var_address=(void*)&_maxgui_proxygadgets_scrollpanel_TScrollClient_SetLayout_iiii
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_maxgui_proxygadgets_scrollpanel_TScrollClient maxgui_proxygadgets_scrollpanel_TScrollClient={
	&maxgui_maxgui_gadget_TProxyGadget,
	bbObjectFree,
	(BBDebugScope*)&maxgui_proxygadgets_scrollpanel_TScrollClient_scope,
	sizeof(struct maxgui_proxygadgets_scrollpanel_TScrollClient_obj),
	(void (*)(BBOBJECT))_maxgui_proxygadgets_scrollpanel_TScrollClient_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
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
	,_maxgui_proxygadgets_scrollpanel_TScrollClient_SetShape_iiii
	,_maxgui_maxgui_gadget_TGadget_SetArea_iiii
	,_maxgui_maxgui_gadget_TGadget_SetRect_iiii
	,_maxgui_maxgui_gadget_TGadget_LockLayout
	,_maxgui_proxygadgets_scrollpanel_TScrollClient_SetLayout_iiii
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
	,_maxgui_maxgui_gadget_TProxyGadget_CleanUp
	,_maxgui_maxgui_gadget_TProxyGadget_Free
	,_maxgui_maxgui_gadget_TProxyGadget_Rethink
	,_maxgui_maxgui_gadget_TProxyGadget_ClientWidth
	,_maxgui_maxgui_gadget_TProxyGadget_ClientHeight
	,_maxgui_maxgui_gadget_TProxyGadget_Activate_i
	,_maxgui_maxgui_gadget_TProxyGadget_State
	,_maxgui_maxgui_gadget_TProxyGadget_SetText_S
	,_maxgui_maxgui_gadget_TProxyGadget_GetText
	,_maxgui_maxgui_gadget_TProxyGadget_SetFont_TTGuiFont
	,_maxgui_maxgui_gadget_TProxyGadget_SetColor_iii
	,_maxgui_maxgui_gadget_TProxyGadget_RemoveColor
	,_maxgui_maxgui_gadget_TProxyGadget_SetAlpha_f
	,_maxgui_maxgui_gadget_TProxyGadget_SetTextColor_iii
	,_maxgui_maxgui_gadget_TProxyGadget_SetTooltip_S
	,_maxgui_maxgui_gadget_TProxyGadget_GetTooltip
	,_maxgui_maxgui_gadget_TProxyGadget_SetPixmap_TTPixmapi
	,_maxgui_maxgui_gadget_TProxyGadget_SetIconStrip_TTIconStrip
	,_maxgui_maxgui_gadget_TProxyGadget_SetShow_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetEnabled_i
	,_maxgui_maxgui_gadget_TProxyGadget_SetSelected_i
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
};

struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* maxgui_proxygadgets_scrollpanel_CreateScrollPanel(BBINT bbt_x,BBINT bbt_y,BBINT bbt_w,BBINT bbt_h,struct maxgui_maxgui_gadget_TGadget_obj* bbt_group,BBINT bbt_flags){
	return (struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)maxgui_proxygadgets_scrollpanel_TScrollPanel.m_Create_iiiiTTGadgeti((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbObjectNew((BBClass *)&maxgui_proxygadgets_scrollpanel_TScrollPanel)),bbt_x,bbt_y,bbt_w,bbt_h,(struct maxgui_maxgui_gadget_TGadget_obj*)bbt_group,bbt_flags);
}
struct maxgui_maxgui_gadget_TGadget_obj* maxgui_proxygadgets_scrollpanel_ScrollPanelClient(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* bbt_scrollpanel){
	return (struct maxgui_maxgui_gadget_TGadget_obj*)((struct maxgui_maxgui_gadget_TGadget_obj*)bbObjectDowncast((BBOBJECT)bbt_scrollpanel->_maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea ,(BBClass*)&maxgui_maxgui_gadget_TGadget));
}
BBINT maxgui_proxygadgets_scrollpanel_FitScrollPanelClient(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* bbt_scrollpanel,BBINT bbt_fitType){
	BBINT bbt_=bbt_fitType;
	if(bbt_==0){
		(bbt_scrollpanel)->clas->m_FitToChildren_ii((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbt_scrollpanel,0,0);
	}else{
		if(bbt_==1){
			(bbt_scrollpanel)->clas->m_FitToViewport((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbt_scrollpanel);
		}
	}
	return 0;
}
BBINT maxgui_proxygadgets_scrollpanel_ScrollScrollPanel(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* bbt_scrollpanel,BBINT bbt_pX,BBINT bbt_pY){
	(bbt_scrollpanel)->clas->m_ScrollTo_ii((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbt_scrollpanel,bbt_pX,bbt_pY);
	(bbt_scrollpanel)->clas->m_Update((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbt_scrollpanel);
	return 0;
}
BBINT maxgui_proxygadgets_scrollpanel_ScrollPanelX(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* bbt_scrollpanel){
	return (bbt_scrollpanel)->clas->m_GetXScroll((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbt_scrollpanel);
}
BBINT maxgui_proxygadgets_scrollpanel_ScrollPanelY(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* bbt_scrollpanel){
	return (bbt_scrollpanel)->clas->m_GetYScroll((struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*)bbt_scrollpanel);
}
static int _bb_maxgui_proxygadgets_scrollpanel_inited = 0;
int _bb_maxgui_proxygadgets_scrollpanel(){
	if (!_bb_maxgui_proxygadgets_scrollpanel_inited) {
		_bb_maxgui_proxygadgets_scrollpanel_inited = 1;
		__bb_brl_blitz_blitz();
		__bb_maxgui_maxgui_maxgui();
		bbObjectRegisterType((BBCLASS)&maxgui_proxygadgets_scrollpanel_TScrollPanel);
		bbObjectRegisterType((BBCLASS)&maxgui_proxygadgets_scrollpanel_TScrollClient);
		return 0;
	}
	return 0;
}