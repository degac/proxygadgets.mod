superstrict
import brl.blitz
import maxgui.maxgui
import brl.timer
import brl.max2d
import "common.bmx"
ICON_GADGET_STATIC%=2
TIconGadget^TProxyGadget{
icon_timer:TTimer&=mem:p("maxgui_proxygadgets_icongadget_TIconGadget_icon_timer")
.style%&
.animated%&
.original_animated%&
.panel:TGadget&
.name$&
.iconstrip:TIconStrip&
.grey_iconstrip:TIconStrip&
.o_iconstrip:TIconStrip&
.pixmap:TPixmap&
.grey_pixmap:TPixmap&
.o_pixmap:TPixmap&
.frame_max%&
.frame_current%&
.frame_timer%&
.frame_duration%&
.frame_start%&
.frame_direction%&
+Create:TIconGadget(x%,y%,w%,h%,group:TGadget="bbNullObject",image:Object="bbNullObject",style%=0)="maxgui_proxygadgets_icongadget_TIconGadget_Create_TTIconGadget_iiiiTTGadgetTObjecti"
-Class%()="maxgui_proxygadgets_icongadget_TIconGadget_Class"
-GetText$()="maxgui_proxygadgets_icongadget_TIconGadget_GetText"
-SetIconStrip%(ics:TIconStrip)="maxgui_proxygadgets_icongadget_TIconGadget_SetIconStrip_TTIconStrip"
-SetPixmap%(pix:TPixmap,flags%)="maxgui_proxygadgets_icongadget_TIconGadget_SetPixmap_TTPixmapi"
-SelectItem%(index%,opt%=0)="maxgui_proxygadgets_icongadget_TIconGadget_SelectItem_ii"
-SetItem%(index%,Text$,tip$,icon%,extra:Object,flags%)="maxgui_proxygadgets_icongadget_TIconGadget_SetItem_iSSiTObjecti"
-SetEnabled%(status%=1)="maxgui_proxygadgets_icongadget_TIconGadget_SetEnabled_i"
-CleanUp%()="maxgui_proxygadgets_icongadget_TIconGadget_CleanUp"
+eventHandler:Object(pID%,pData:Object,pContext:Object)="maxgui_proxygadgets_icongadget_TIconGadget_eventHandler_TObject_iTObjectTObject"
-State%()="maxgui_proxygadgets_icongadget_TIconGadget_State"
-SetShow%(bool%)="maxgui_proxygadgets_icongadget_TIconGadget_SetShow_i"
}="maxgui_proxygadgets_icongadget_TIconGadget"
CreateIconGadget:TIconGadget(x%,y%,w%,h%,window:TGadget="bbNullObject",image:Object="bbNullObject",style%=0)="maxgui_proxygadgets_icongadget_CreateIconGadget"
SetGadgetAnim%(gadget:TGadget,_play%=-1,fst%=-1,fe%=-1,fs%=-1,fd%=-1)="maxgui_proxygadgets_icongadget_SetGadgetAnim"
GetGadgetAnim%(gad:TGadget,a% Var,b% Var,c% Var,d% Var,e% Var)="maxgui_proxygadgets_icongadget_GetGadgetAnim"