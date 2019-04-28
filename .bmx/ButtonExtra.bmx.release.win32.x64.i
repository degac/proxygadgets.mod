superstrict
import brl.blitz
import "Spinner.bmx"
import "FilePicker.bmx"
import "DatePicker.bmx"
import "Colorpicker.bmx"
tButtonExtra^TProxyGadget{
.panel:TGadget&
.label:TGadget&
.button:TGadget&
.style%&
.Text$&
-SetFont%(fnt:TGuiFont="bbNullObject")="maxgui_proxygadgets_buttonextra_tButtonExtra_SetFont_TTGuiFont"
-CleanUp%()="maxgui_proxygadgets_buttonextra_tButtonExtra_CleanUp"
-ItemExtra:Object(index%=0)="maxgui_proxygadgets_buttonextra_tButtonExtra_ItemExtra_i"
-Clear%()="maxgui_proxygadgets_buttonextra_tButtonExtra_Clear"
-SetPixmap%(pix:TPixmap,flags%)="maxgui_proxygadgets_buttonextra_tButtonExtra_SetPixmap_TTPixmapi"
-SetItem%(index%,Text$,tip$,icon%,extra:Object,flags%)="maxgui_proxygadgets_buttonextra_tButtonExtra_SetItem_iSSiTObjecti"
-RemoveItem%(index%)="maxgui_proxygadgets_buttonextra_tButtonExtra_RemoveItem_i"
-ItemCount%()="maxgui_proxygadgets_buttonextra_tButtonExtra_ItemCount"
-SelectedItem%()="maxgui_proxygadgets_buttonextra_tButtonExtra_SelectedItem"
-SelectItem%(it%,st%)="maxgui_proxygadgets_buttonextra_tButtonExtra_SelectItem_ii"
-InsertItem%(index%,Text$=$"",tip$=$"",icon%=-1,extra:Object="bbNullObject",flags%=0)="maxgui_proxygadgets_buttonextra_tButtonExtra_InsertItem_iSSiTObjecti"
-SetRange%(a%,b%)="maxgui_proxygadgets_buttonextra_tButtonExtra_SetRange_ii"
-SetValue%(val#)="maxgui_proxygadgets_buttonextra_tButtonExtra_SetValue_f"
-GetProxy:TGadget()="maxgui_proxygadgets_buttonextra_tButtonExtra_GetProxy"
-SetProp%(val%)="maxgui_proxygadgets_buttonextra_tButtonExtra_SetProp_i"
+Create:tButtonExtra(msg$=$"",def$=$"",x%,y%,w%,h%,group:TGadget,style%=4)="maxgui_proxygadgets_buttonextra_tButtonExtra_Create_TtButtonExtra_SSiiiiTTGadgeti"
-SetLayout%(a%,b%,c%,d%)="maxgui_proxygadgets_buttonextra_tButtonExtra_SetLayout_iiii"
-SetValue_%(value!)="maxgui_proxygadgets_buttonextra_tButtonExtra_SetValue__d"
-SetRange_%(minimum!,maximum!,accuracy%)="maxgui_proxygadgets_buttonextra_tButtonExtra_SetRange__ddi"
-SetEnabled%(sta%=1)="maxgui_proxygadgets_buttonextra_tButtonExtra_SetEnabled_i"
-State%()="maxgui_proxygadgets_buttonextra_tButtonExtra_State"
-SetSelected%(st%)="maxgui_proxygadgets_buttonextra_tButtonExtra_SetSelected_i"
-SetColor%(RED%,green%,blue%)="maxgui_proxygadgets_buttonextra_tButtonExtra_SetColor_iii"
-GetText$()="maxgui_proxygadgets_buttonextra_tButtonExtra_GetText"
-SetTooltip%(_tip$=$"")="maxgui_proxygadgets_buttonextra_tButtonExtra_SetTooltip_S"
-SetText%(tx$)="maxgui_proxygadgets_buttonextra_tButtonExtra_SetText_S"
+eventHandler:Object(pID%,pData:Object,pContext:Object)="maxgui_proxygadgets_buttonextra_tButtonExtra_eventHandler_TObject_iTObjectTObject"
}="maxgui_proxygadgets_buttonextra_tButtonExtra"
CreateButtonExtra:tButtonExtra(msg$,def$,x%,y%,w%,h%,group:TGadget,style%=4)="maxgui_proxygadgets_buttonextra_CreateButtonExtra"