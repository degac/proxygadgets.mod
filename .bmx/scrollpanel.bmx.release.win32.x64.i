import brl.blitz
import maxgui.maxgui
SCROLLPANEL_HNEVER%=32
SCROLLPANEL_HALWAYS%=2
SCROLLPANEL_VNEVER%=64
SCROLLPANEL_VALWAYS%=4
SCROLLPANEL_SUNKEN%=1
SCROLLPANEL_HSCALING%=8
SCROLLPANEL_VSCALING%=16
SCROLLPANEL_SIZETOKIDS%=0
SCROLLPANEL_SIZETOVIEWPORT%=1
SCROLLPANEL_TOP%=0
SCROLLPANEL_LEFT%=0
SCROLLPANEL_HOLD%=-1
SCROLLPANEL_BOTTOM%=2147483647
SCROLLPANEL_RIGHT%=2147483647
TScrollPanel^TProxyGadget{
SCROLL_WIDTH%=18
.flags%&
.pnlEntire:TGadget&
.pnlViewport:TGadget&
.pnlClientArea:TProxyGadget&
.scrHorizontal:TGadget&
.scrVertical:TGadget&
.currentH%&
.currentV%&
.clientW%&
.clientH%&
-Create:TScrollPanel(pX%,pY%,pWidth%,pHeight%,pParent:TGadget,pFlags%=0)="maxgui_proxygadgets_scrollpanel_TScrollPanel_Create_iiiiTTGadgeti"
-SetShape%(x%,y%,w%,h%)="maxgui_proxygadgets_scrollpanel_TScrollPanel_SetShape_iiii"
-ClientWidth%()="maxgui_proxygadgets_scrollpanel_TScrollPanel_ClientWidth"
-ClientHeight%()="maxgui_proxygadgets_scrollpanel_TScrollPanel_ClientHeight"
-GetXScroll%()="maxgui_proxygadgets_scrollpanel_TScrollPanel_GetXScroll"
-GetYScroll%()="maxgui_proxygadgets_scrollpanel_TScrollPanel_GetYScroll"
-ScrollTo%(pHSlider%,pVSlider%)="maxgui_proxygadgets_scrollpanel_TScrollPanel_ScrollTo_ii"
-FitToChildren%(pRightMargin%=0,pBottomMargin%=0)="maxgui_proxygadgets_scrollpanel_TScrollPanel_FitToChildren_ii"
-FitToViewport%()="maxgui_proxygadgets_scrollpanel_TScrollPanel_FitToViewport"
-Update%()="maxgui_proxygadgets_scrollpanel_TScrollPanel_Update"
-AddVerticalScroll%(pVisible%,pY%,pHeight%)="maxgui_proxygadgets_scrollpanel_TScrollPanel_AddVerticalScroll_iii"
-RemoveVerticalScroll%()="maxgui_proxygadgets_scrollpanel_TScrollPanel_RemoveVerticalScroll"
-AddHorizontalScroll%(pVisible%,pX%,pWidth%)="maxgui_proxygadgets_scrollpanel_TScrollPanel_AddHorizontalScroll_iii"
-RemoveHorizontalScroll%()="maxgui_proxygadgets_scrollpanel_TScrollPanel_RemoveHorizontalScroll"
-eventHook:Object(pID%,pData:Object,pContext:Object)="maxgui_proxygadgets_scrollpanel_TScrollPanel_eventHook_iTObjectTObject"
-CleanUp%()="maxgui_proxygadgets_scrollpanel_TScrollPanel_CleanUp"
+eventHandler:Object(pID%,pData:Object,pContext:Object)="maxgui_proxygadgets_scrollpanel_TScrollPanel_eventHandler_TObject_iTObjectTObject"
+CheckParent%(pGadget:TGadget,pParentToCheck:TGadget)="maxgui_proxygadgets_scrollpanel_TScrollPanel_CheckParent_i_TTGadgetTTGadget"
}="maxgui_proxygadgets_scrollpanel_TScrollPanel"
CreateScrollPanel:TScrollPanel(x%,y%,w%,h%,group:TGadget,flags%=0)="maxgui_proxygadgets_scrollpanel_CreateScrollPanel"
ScrollPanelClient:TGadget(scrollpanel:TScrollPanel)="maxgui_proxygadgets_scrollpanel_ScrollPanelClient"
FitScrollPanelClient%(scrollpanel:TScrollPanel,fitType%=0)="maxgui_proxygadgets_scrollpanel_FitScrollPanelClient"
ScrollScrollPanel%(scrollpanel:TScrollPanel,pX%=0,pY%=0)="maxgui_proxygadgets_scrollpanel_ScrollScrollPanel"
ScrollPanelX%(scrollpanel:TScrollPanel)="maxgui_proxygadgets_scrollpanel_ScrollPanelX"
ScrollPanelY%(scrollpanel:TScrollPanel)="maxgui_proxygadgets_scrollpanel_ScrollPanelY"