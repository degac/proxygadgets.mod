superstrict
import brl.blitz
import maxgui.maxgui
import "common.bmx"
tUserInput^TProxyGadget{
.panel:TGadget&
.label:TGadget&
.txt:TGadget&[]&
.lbl:TGadget&[]&
.btn_ok:TGadget&
.btn_cancel:TGadget&
._window%&
.window:TGadget&
-Class%()="maxgui_proxygadgets_userinput_tUserInput_Class"
-SetFont%(fnt:TGuiFont="bbNullObject")="maxgui_proxygadgets_userinput_tUserInput_SetFont_TTGuiFont"
-CleanUp%()="maxgui_proxygadgets_userinput_tUserInput_CleanUp"
-SetText%(tx$)="maxgui_proxygadgets_userinput_tUserInput_SetText_S"
+Create:tUserInput(msg$,fields$,x%=0,y%=0,group:TGadget="bbNullObject",def$&[]="bbEmptyArray")="maxgui_proxygadgets_userinput_tUserInput_Create_TtUserInput_SSiiTTGadgetaS"
-SetColor%(RED%,green%,blue%)="maxgui_proxygadgets_userinput_tUserInput_SetColor_iii"
-SetEnabled%(sta%=1)="maxgui_proxygadgets_userinput_tUserInput_SetEnabled_i"
+eventHandler:Object(pID%,pData:Object,pContext:Object)="maxgui_proxygadgets_userinput_tUserInput_eventHandler_TObject_iTObjectTObject"
}="maxgui_proxygadgets_userinput_tUserInput"
CreateInput:tUserInput(msg$=$"",Fields$=$"",x%=0,y%=0,group:TGadget="bbNullObject",defaults$&[]="bbEmptyArray")="maxgui_proxygadgets_userinput_CreateInput"