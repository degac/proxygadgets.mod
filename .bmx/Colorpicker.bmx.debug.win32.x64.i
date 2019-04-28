superstrict
import brl.blitz
import maxgui.maxgui
import brl.retro
import "Spinner.bmx"
tColorpicker^TProxyGadget{
.panel:TGadget&
.label:TGadget&
.button:TGadget&
.rgb%&[]&
.spinner:TSpinner&[]&
-Class%()="maxgui_proxygadgets_colorpicker_tColorpicker_Class"
-SetFont%(fnt:TGuiFont="bbNullObject")="maxgui_proxygadgets_colorpicker_tColorpicker_SetFont_TTGuiFont"
-CleanUp%()="maxgui_proxygadgets_colorpicker_tColorpicker_CleanUp"
-SetShow%(bool%)="maxgui_proxygadgets_colorpicker_tColorpicker_SetShow_i"
-SetEnabled%(status%=1)="maxgui_proxygadgets_colorpicker_tColorpicker_SetEnabled_i"
+Create:tColorpicker(x%,y%,w%,h%,group:TGadget,style%=0)="maxgui_proxygadgets_colorpicker_tColorpicker_Create_TtColorpicker_iiiiTTGadgeti"
-SetColor%(RED%,green%,blue%)="maxgui_proxygadgets_colorpicker_tColorpicker_SetColor_iii"
-GetText$()="maxgui_proxygadgets_colorpicker_tColorpicker_GetText"
-UpdateValue%()="maxgui_proxygadgets_colorpicker_tColorpicker_UpdateValue"
-SetText%(tx$)="maxgui_proxygadgets_colorpicker_tColorpicker_SetText_S"
-SetLayout%(a%,b%,c%,d%)="maxgui_proxygadgets_colorpicker_tColorpicker_SetLayout_iiii"
+eventHandler:Object(pID%,pData:Object,pContext:Object)="maxgui_proxygadgets_colorpicker_tColorpicker_eventHandler_TObject_iTObjectTObject"
}="maxgui_proxygadgets_colorpicker_tColorpicker"
CreateColorPicker:tColorpicker(x%,y%,w%,h%,group:TGadget,style%=0)="maxgui_proxygadgets_colorpicker_CreateColorPicker"