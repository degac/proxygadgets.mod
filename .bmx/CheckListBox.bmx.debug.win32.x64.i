superstrict
import brl.blitz
import maxgui.maxgui
import brl.eventqueue
SingleItem^Object{
.panel:TGadget&
.check:TGadget&
.label:TGadget&
.icon:TGadget&
.iconNumber%&
.parent:Tchecklistbox&
.item_h%&
+Create:SingleItem(parent:Tchecklistbox,txt$,tip$=$"",icon%=-1,state%=0)="maxgui_proxygadgets_checklistbox_SingleItem_Create_TSingleItem_TTchecklistboxSSii"
-Change%(txt$,tip$,_iconNumber%=-1,state%=-1)="maxgui_proxygadgets_checklistbox_SingleItem_Change_SSii"
-Clear%()="maxgui_proxygadgets_checklistbox_SingleItem_Clear"
-SetFont%(fnt:TGuiFont)="maxgui_proxygadgets_checklistbox_SingleItem_SetFont_TTGuiFont"
-SetEnabled%(status%=1)="maxgui_proxygadgets_checklistbox_SingleItem_SetEnabled_i"
}="maxgui_proxygadgets_checklistbox_SingleItem"
Tchecklistbox^TProxyGadget{
list_checklistbox:TList&=mem:p("maxgui_proxygadgets_checklistbox_Tchecklistbox_list_checklistbox")
.myiconstrip:TIconStrip&
.panel:TGadget&
.slider:TGadget&
.style%&
.current_position%&
.visible%&
.panel_width%&
.it:SingleItem&[]&
.mx%&[]&[]&
.mx_counter%&
._r%&
._g%&
._b%&
.item_h%&
-AddExclusion%(linea$=$"")="maxgui_proxygadgets_checklistbox_Tchecklistbox_AddExclusion_S"
-CleanExclusion%()="maxgui_proxygadgets_checklistbox_Tchecklistbox_CleanExclusion"
-InsertItem%(index%,Text$,tip$,icon%,extra:Object,flags%)="maxgui_proxygadgets_checklistbox_Tchecklistbox_InsertItem_iSSiTObjecti"
-SetIconStrip%(_iconstrip:TIconStrip)="maxgui_proxygadgets_checklistbox_Tchecklistbox_SetIconStrip_TTIconStrip"
-SetFont%(fnt:TGuiFont)="maxgui_proxygadgets_checklistbox_Tchecklistbox_SetFont_TTGuiFont"
-SelectItem%(index%=-1,op%=1)="maxgui_proxygadgets_checklistbox_Tchecklistbox_SelectItem_ii"
-SetEnabled%(status%=1)="maxgui_proxygadgets_checklistbox_Tchecklistbox_SetEnabled_i"
-ItemCount%()="maxgui_proxygadgets_checklistbox_Tchecklistbox_ItemCount"
-Class%()="maxgui_proxygadgets_checklistbox_Tchecklistbox_Class"
-RemoveItem%(index%)="maxgui_proxygadgets_checklistbox_Tchecklistbox_RemoveItem_i"
-_refresh%()="maxgui_proxygadgets_checklistbox_Tchecklistbox__refresh"
-SetItem%(index%,Text$,tip$,icon%,extra:Object,flags%)="maxgui_proxygadgets_checklistbox_Tchecklistbox_SetItem_iSSiTObjecti"
-ItemText$(index%)="maxgui_proxygadgets_checklistbox_Tchecklistbox_ItemText_i"
-ItemTip$(index%)="maxgui_proxygadgets_checklistbox_Tchecklistbox_ItemTip_i"
-ItemExtra:Object(index%)="maxgui_proxygadgets_checklistbox_Tchecklistbox_ItemExtra_i"
-ItemIcon%(index%)="maxgui_proxygadgets_checklistbox_Tchecklistbox_ItemIcon_i"
-ItemState%(index%)="maxgui_proxygadgets_checklistbox_Tchecklistbox_ItemState_i"
-Clear%()="maxgui_proxygadgets_checklistbox_Tchecklistbox_Clear"
-SetColor%(r%,g%,b%)="maxgui_proxygadgets_checklistbox_Tchecklistbox_SetColor_iii"
-SelectedItems%&[]()="maxgui_proxygadgets_checklistbox_Tchecklistbox_SelectedItems"
-CleanUp%()="maxgui_proxygadgets_checklistbox_Tchecklistbox_CleanUp"
-Free%()="maxgui_proxygadgets_checklistbox_Tchecklistbox_Free"
+Create:Tchecklistbox(x%,y%,w%,h%,group:TGadget,style%=0)="maxgui_proxygadgets_checklistbox_Tchecklistbox_Create_TTchecklistbox_iiiiTTGadgeti"
+eventHandler:Object(pID%,pData:Object,pContext:Object)="maxgui_proxygadgets_checklistbox_Tchecklistbox_eventHandler_TObject_iTObjectTObject"
-EventHook:Object(id%,data:Object,context:Object)="maxgui_proxygadgets_checklistbox_Tchecklistbox_EventHook_iTObjectTObject"
}="maxgui_proxygadgets_checklistbox_Tchecklistbox"
CreateCheckListBox:Tchecklistbox(x%,y%,w%,h%,win:TGadget,style%=0)="maxgui_proxygadgets_checklistbox_CreateCheckListBox"
ListAddExclusion%(gad:TGadget,lista$=$"")="maxgui_proxygadgets_checklistbox_ListAddExclusion"
ListCleanExclusion%(gad:TGadget)="maxgui_proxygadgets_checklistbox_ListCleanExclusion"