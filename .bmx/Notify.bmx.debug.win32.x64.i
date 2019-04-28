superstrict
import brl.blitz
import maxgui.maxgui
import brl.eventqueue
import "IconGadget.bmx"
Tnotifygadget^TProxyGadget{
.Text:TGadget&
.BUTTON_OK:TGadget&
.BUTTON_CANCEL:TGadget&
.button_abort:TGadget&
.window:TGadget&
.old_window:TGadget&
.LINE:TGadget&
.style%&
._destroy%&
.IconGadget:TGadget&
-CleanUp%()="maxgui_proxygadgets_notify_Tnotifygadget_CleanUp"
-Class%()="maxgui_proxygadgets_notify_Tnotifygadget_Class"
-GetText$()="maxgui_proxygadgets_notify_Tnotifygadget_GetText"
-SetFont%(fnt:TGuiFont="bbNullObject")="maxgui_proxygadgets_notify_Tnotifygadget_SetFont_TTGuiFont"
+Create%(msg$,style%=0,group:TGadget="bbNullObject",img:Object="bbNullObject",fnt:TGuiFont="bbNullObject")="maxgui_proxygadgets_notify_Tnotifygadget_Create_i_SiTTGadgetTObjectTTGuiFont"
+eventHandler:Object(pID%,pData:Object,pContext:Object)="maxgui_proxygadgets_notify_Tnotifygadget_eventHandler_TObject_iTObjectTObject"
}="maxgui_proxygadgets_notify_Tnotifygadget"
CreateNotify%(msg$=$"",group:TGadget,pix:Object="bbNullObject",fnt:TGuiFont="bbNullObject")="maxgui_proxygadgets_notify_CreateNotify"
EVENT_NOTIFY_COMPLETED%&=mem:p("maxgui_proxygadgets_notify_EVENT_NOTIFY_COMPLETED")