superstrict
import brl.blitz
import maxgui.maxgui
import brl.max2d
import "common.bmx"
LIST_FILES%=1
LIST_SHOWONLYNAME%=4
LIST_FORCEORDER%=8
LIST_DIRS%=64
LIST_ITEMS%=2
LBM_ICON_ACTIVE%=16
LBM_ICON_INACTIVE%=32
TlistManager^TProxyGadget{
list_listmanager:TList&=mem:p("maxgui_proxygadgets_listmanager_TlistManager_list_listmanager")
_IN_MSG$&[]&=mem:p("maxgui_proxygadgets_listmanager_TlistManager__IN_MSG")
_BTN_BALOON$&[]&=mem:p("maxgui_proxygadgets_listmanager_TlistManager__BTN_BALOON")
.fpointer_FILTER$(source$,remov$)&
.sid$&
.parent:TGadget&
.panel:TGadget&
.list_box:TGadget&
.btn_add:TGadget&
.btn_remove:TGadget&
.btn_up:TGadget&
.btn_down:TGadget&
.btn_clear:TGadget&
.btn_AddDir:TGadget&
.txt_item:TGadget&
.filter$&
.path$&
.reqfilter$&
.filter_items$&[]&
.last_selected%&
._list_manager_icons:TIconStrip&
._list_manager_icons_disabled:TIconStrip&
.hidden%&
.style%&
-SetFont%(fnt:TGuiFont="bbNullObject")="maxgui_proxygadgets_listmanager_TlistManager_SetFont_TTGuiFont"
-SetEnabled%(sta%=1)="maxgui_proxygadgets_listmanager_TlistManager_SetEnabled_i"
-SelectFilter%(_filter$=$"")="maxgui_proxygadgets_listmanager_TlistManager_SelectFilter_S"
-SelectPath%(_PATH$=$"")="maxgui_proxygadgets_listmanager_TlistManager_SelectPath_S"
-GetItem$()="maxgui_proxygadgets_listmanager_TlistManager_GetItem"
-SetShape%(x%,y%,w%,h%)="maxgui_proxygadgets_listmanager_TlistManager_SetShape_iiii"
-ItemExtra:Object(index%=0)="maxgui_proxygadgets_listmanager_TlistManager_ItemExtra_i"
-SetItem%(index%,Text$,tip$,icon%,extra:Object,flags%)="maxgui_proxygadgets_listmanager_TlistManager_SetItem_iSSiTObjecti"
-InsertItem%(index%,Text$=$"",tip$=$"",icon%=-1,extra:Object="bbNullObject",flags%=0)="maxgui_proxygadgets_listmanager_TlistManager_InsertItem_iSSiTObjecti"
-RemoveItem%(index%)="maxgui_proxygadgets_listmanager_TlistManager_RemoveItem_i"
-ItemCount%()="maxgui_proxygadgets_listmanager_TlistManager_ItemCount"
-CleanUp%()="maxgui_proxygadgets_listmanager_TlistManager_CleanUp"
-Clear%()="maxgui_proxygadgets_listmanager_TlistManager_Clear"
-Class%()="maxgui_proxygadgets_listmanager_TlistManager_Class"
-SetColor%(RED%,green%,blue%)="maxgui_proxygadgets_listmanager_TlistManager_SetColor_iii"
-SetLayout%(le%,ri%,Top%,bot%)="maxgui_proxygadgets_listmanager_TlistManager_SetLayout_iiii"
-ItemText$(index%)="maxgui_proxygadgets_listmanager_TlistManager_ItemText_i"
-State%()="maxgui_proxygadgets_listmanager_TlistManager_State"
-SetShow%(truefalse%=1)="maxgui_proxygadgets_listmanager_TlistManager_SetShow_i"
-SetItemList%(_CONTENT:TList="bbNullObject")="maxgui_proxygadgets_listmanager_TlistManager_SetItemList_TTList"
-SetItemArray%(_CONTENT$&[])="maxgui_proxygadgets_listmanager_TlistManager_SetItemArray_aS"
-GetItemList:TList()="maxgui_proxygadgets_listmanager_TlistManager_GetItemList"
-GetItemExtraList:TList()="maxgui_proxygadgets_listmanager_TlistManager_GetItemExtraList"
-GetItemArray$&[]()="maxgui_proxygadgets_listmanager_TlistManager_GetItemArray"
-GetItemExtraArray$&[]()="maxgui_proxygadgets_listmanager_TlistManager_GetItemExtraArray"
+Create:TlistManager(x%,y%,w%,h%,group:TGadget,style%=1)="maxgui_proxygadgets_listmanager_TlistManager_Create_TTlistManager_iiiiTTGadgeti"
-SetDefinitions%(array$&[])="maxgui_proxygadgets_listmanager_TlistManager_SetDefinitions_aS"
-SetTooltips%(array$&[])="maxgui_proxygadgets_listmanager_TlistManager_SetTooltips_aS"
-SetMessage%(array$&[])="maxgui_proxygadgets_listmanager_TlistManager_SetMessage_aS"
-SetPixmap%(_iconstrip:TPixmap="bbNullObject",style%=16)="maxgui_proxygadgets_listmanager_TlistManager_SetPixmap_TTPixmapi"
-EnableIcons%()="maxgui_proxygadgets_listmanager_TlistManager_EnableIcons"
-DisableIcons%()="maxgui_proxygadgets_listmanager_TlistManager_DisableIcons"
-EnableAll%()="maxgui_proxygadgets_listmanager_TlistManager_EnableAll"
-DisableAll%()="maxgui_proxygadgets_listmanager_TlistManager_DisableAll"
-AddItem%(Text$=$"",flags%=0,icon%=-1,tip$=$"",extra:Object="bbNullObject")="maxgui_proxygadgets_listmanager_TlistManager_AddItem_SiiSTObject"
+eventHandler:Object(pID%,pData:Object,pContext:Object)="maxgui_proxygadgets_listmanager_TlistManager_eventHandler_TObject_iTObjectTObject"
}="maxgui_proxygadgets_listmanager_TlistManager"
tfiles^Object{
lista:TList&=mem:p("maxgui_proxygadgets_listmanager_tfiles_lista")
.file$&
+add:tfiles(_NAME$)="maxgui_proxygadgets_listmanager_tfiles_add_Ttfiles_S"
+Clear()="maxgui_proxygadgets_listmanager_tfiles_Clear_v"
}="maxgui_proxygadgets_listmanager_tfiles"
lPath$(file$)="maxgui_proxygadgets_listmanager_lPath"
ScanDir%(obj:TlistManager,path$,recursive%=1,lvl%=0)="maxgui_proxygadgets_listmanager_ScanDir"
CreateListManager:TlistManager(x%,y%,w%,h%,group:TGadget="bbNullObject",_style%=13,filter$=$"exe")="maxgui_proxygadgets_listmanager_CreateListManager"
ExternalFilter$(source$=$"",st$=$"")="maxgui_proxygadgets_listmanager_ExternalFilter"