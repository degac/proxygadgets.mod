superstrict
import brl.blitz
import maxgui.maxgui
import "common.bmx"
CHOOSE_FILE%=1
SAVEFLAG%=4
CHOOSE_FOLDER%=2
GADGET_FOLDERPICKER%=40
tFilepicker^TProxyGadget{
.panel:TGadget&
.label:TGadget&
.button:TGadget&
.path$&
.start_path$&
.message$&
.style%&
.extensions$&
.pixmap:TPixmap&
.grey_pixmap:TPixmap&
-SetFont%(fnt:TGuiFont="bbNullObject")="maxgui_proxygadgets_filepicker_tFilepicker_SetFont_TTGuiFont"
-SetPixmap%(pix:TPixmap,flags%=0)="maxgui_proxygadgets_filepicker_tFilepicker_SetPixmap_TTPixmapi"
-SelectFilter%(_filter$=$"")="maxgui_proxygadgets_filepicker_tFilepicker_SelectFilter_S"
-Class%()="maxgui_proxygadgets_filepicker_tFilepicker_Class"
-CleanUp%()="maxgui_proxygadgets_filepicker_tFilepicker_CleanUp"
-SetShow%(bool%)="maxgui_proxygadgets_filepicker_tFilepicker_SetShow_i"
-SetEnabled%(status%=1)="maxgui_proxygadgets_filepicker_tFilepicker_SetEnabled_i"
+Create:tFilepicker(msg$=$"",ini_path$=$"",x%,y%,w%,h%,group:TGadget,style%=1)="maxgui_proxygadgets_filepicker_tFilepicker_Create_TtFilepicker_SSiiiiTTGadgeti"
-SetColor%(RED%,green%,blue%)="maxgui_proxygadgets_filepicker_tFilepicker_SetColor_iii"
-GetText$()="maxgui_proxygadgets_filepicker_tFilepicker_GetText"
-SetText%(tx$)="maxgui_proxygadgets_filepicker_tFilepicker_SetText_S"
-SetLayout%(a%,b%,c%,d%)="maxgui_proxygadgets_filepicker_tFilepicker_SetLayout_iiii"
+eventHandler:Object(pID%,pData:Object,pContext:Object)="maxgui_proxygadgets_filepicker_tFilepicker_eventHandler_TObject_iTObjectTObject"
}="maxgui_proxygadgets_filepicker_tFilepicker"
CreateFilePicker:tFilepicker(msg$,cpath$,x%,y%,w%,h%,group:TGadget,style%=1)="maxgui_proxygadgets_filepicker_CreateFilePicker"