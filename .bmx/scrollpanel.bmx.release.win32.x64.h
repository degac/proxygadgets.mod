#ifndef MAXGUI_PROXYGADGETS_SCROLLPANEL_BMX_RELEASE_WIN32_X64_H
#define MAXGUI_PROXYGADGETS_SCROLLPANEL_BMX_RELEASE_WIN32_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.release.win32.x64.h>
#include <maxgui.mod/maxgui.mod/.bmx/maxgui.bmx.release.win32.x64.h>
int _bb_maxgui_proxygadgets_scrollpanel();
struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj;
struct maxgui_proxygadgets_scrollpanel_TScrollClient_obj;
void _maxgui_proxygadgets_scrollpanel_TScrollPanel_New(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* o);
typedef struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* (*maxgui_proxygadgets_scrollpanel_TScrollPanel_Create_iiiiTTGadgeti_m)(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*,BBINT,BBINT,BBINT,BBINT,struct maxgui_maxgui_gadget_TGadget_obj*,BBINT);
struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* _maxgui_proxygadgets_scrollpanel_TScrollPanel_Create_iiiiTTGadgeti(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*,BBINT,BBINT,BBINT,BBINT,struct maxgui_maxgui_gadget_TGadget_obj*,BBINT);
typedef BBINT (*maxgui_proxygadgets_scrollpanel_TScrollPanel_SetShape_iiii_m)(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*,BBINT,BBINT,BBINT,BBINT);
BBINT _maxgui_proxygadgets_scrollpanel_TScrollPanel_SetShape_iiii(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*,BBINT,BBINT,BBINT,BBINT);
typedef BBINT (*maxgui_proxygadgets_scrollpanel_TScrollPanel_ClientWidth_m)(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*);
BBINT _maxgui_proxygadgets_scrollpanel_TScrollPanel_ClientWidth(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*);
typedef BBINT (*maxgui_proxygadgets_scrollpanel_TScrollPanel_ClientHeight_m)(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*);
BBINT _maxgui_proxygadgets_scrollpanel_TScrollPanel_ClientHeight(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*);
typedef BBINT (*maxgui_proxygadgets_scrollpanel_TScrollPanel_GetXScroll_m)(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*);
BBINT _maxgui_proxygadgets_scrollpanel_TScrollPanel_GetXScroll(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*);
typedef BBINT (*maxgui_proxygadgets_scrollpanel_TScrollPanel_GetYScroll_m)(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*);
BBINT _maxgui_proxygadgets_scrollpanel_TScrollPanel_GetYScroll(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*);
typedef BBINT (*maxgui_proxygadgets_scrollpanel_TScrollPanel_ScrollTo_ii_m)(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*,BBINT,BBINT);
BBINT _maxgui_proxygadgets_scrollpanel_TScrollPanel_ScrollTo_ii(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*,BBINT,BBINT);
typedef BBINT (*maxgui_proxygadgets_scrollpanel_TScrollPanel_FitToChildren_ii_m)(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*,BBINT,BBINT);
BBINT _maxgui_proxygadgets_scrollpanel_TScrollPanel_FitToChildren_ii(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*,BBINT,BBINT);
typedef BBINT (*maxgui_proxygadgets_scrollpanel_TScrollPanel_FitToViewport_m)(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*);
BBINT _maxgui_proxygadgets_scrollpanel_TScrollPanel_FitToViewport(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*);
typedef BBINT (*maxgui_proxygadgets_scrollpanel_TScrollPanel_Update_m)(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*);
BBINT _maxgui_proxygadgets_scrollpanel_TScrollPanel_Update(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*);
typedef BBINT (*maxgui_proxygadgets_scrollpanel_TScrollPanel_AddVerticalScroll_iii_m)(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*,BBINT,BBINT,BBINT);
BBINT _maxgui_proxygadgets_scrollpanel_TScrollPanel_AddVerticalScroll_iii(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*,BBINT,BBINT,BBINT);
typedef BBINT (*maxgui_proxygadgets_scrollpanel_TScrollPanel_RemoveVerticalScroll_m)(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*);
BBINT _maxgui_proxygadgets_scrollpanel_TScrollPanel_RemoveVerticalScroll(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*);
typedef BBINT (*maxgui_proxygadgets_scrollpanel_TScrollPanel_AddHorizontalScroll_iii_m)(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*,BBINT,BBINT,BBINT);
BBINT _maxgui_proxygadgets_scrollpanel_TScrollPanel_AddHorizontalScroll_iii(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*,BBINT,BBINT,BBINT);
typedef BBINT (*maxgui_proxygadgets_scrollpanel_TScrollPanel_RemoveHorizontalScroll_m)(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*);
BBINT _maxgui_proxygadgets_scrollpanel_TScrollPanel_RemoveHorizontalScroll(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*);
typedef BBOBJECT (*maxgui_proxygadgets_scrollpanel_TScrollPanel_eventHook_iTObjectTObject_m)(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*,BBINT,BBOBJECT,BBOBJECT);
BBOBJECT _maxgui_proxygadgets_scrollpanel_TScrollPanel_eventHook_iTObjectTObject(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*,BBINT,BBOBJECT,BBOBJECT);
typedef BBINT (*maxgui_proxygadgets_scrollpanel_TScrollPanel_CleanUp_m)(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*);
BBINT _maxgui_proxygadgets_scrollpanel_TScrollPanel_CleanUp(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj*);
typedef BBOBJECT (*maxgui_proxygadgets_scrollpanel_TScrollPanel_eventHandler_TObject_iTObjectTObject_f)(BBINT,BBOBJECT,BBOBJECT);
BBOBJECT maxgui_proxygadgets_scrollpanel_TScrollPanel_eventHandler_TObject_iTObjectTObject(BBINT,BBOBJECT,BBOBJECT);
typedef BBINT (*maxgui_proxygadgets_scrollpanel_TScrollPanel_CheckParent_i_TTGadgetTTGadget_f)(struct maxgui_maxgui_gadget_TGadget_obj*,struct maxgui_maxgui_gadget_TGadget_obj*);
BBINT maxgui_proxygadgets_scrollpanel_TScrollPanel_CheckParent_i_TTGadgetTTGadget(struct maxgui_maxgui_gadget_TGadget_obj*,struct maxgui_maxgui_gadget_TGadget_obj*);
struct BBClass_maxgui_proxygadgets_scrollpanel_TScrollPanel {
	struct BBClass_maxgui_maxgui_gadget_TProxyGadget*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	maxgui_maxgui_gadget_TGadget_SetFilter_F_TTEventTObject_i_TObject_m m_SetFilter_F_TTEventTObject_i_TObject;
	maxgui_maxgui_gadget_TProxyGadget_HasDescendant_TTGadget_m m_HasDescendant_TTGadget;
	maxgui_maxgui_gadget_TGadget__setparent_TTGadgeti_m m__setparent_TTGadgeti;
	maxgui_maxgui_gadget_TGadget_SelectionChanged_m m_SelectionChanged;
	maxgui_maxgui_gadget_TGadget_Handle_m m_Handle;
	maxgui_maxgui_gadget_TProxyGadget_GetXPos_m m_GetXPos;
	maxgui_maxgui_gadget_TProxyGadget_GetYPos_m m_GetYPos;
	maxgui_maxgui_gadget_TProxyGadget_GetWidth_m m_GetWidth;
	maxgui_maxgui_gadget_TProxyGadget_GetHeight_m m_GetHeight;
	maxgui_maxgui_gadget_TProxyGadget_GetGroup_m m_GetGroup;
	maxgui_proxygadgets_scrollpanel_TScrollPanel_SetShape_iiii_m m_SetShape_iiii;
	maxgui_maxgui_gadget_TGadget_SetArea_iiii_m m_SetArea_iiii;
	maxgui_maxgui_gadget_TGadget_SetRect_iiii_m m_SetRect_iiii;
	maxgui_maxgui_gadget_TGadget_LockLayout_m m_LockLayout;
	maxgui_maxgui_gadget_TProxyGadget_SetLayout_iiii_m m_SetLayout_iiii;
	maxgui_maxgui_gadget_TGadget_LayoutKids_m m_LayoutKids;
	maxgui_maxgui_gadget_TGadget_DoLayout_m m_DoLayout;
	maxgui_maxgui_gadget_TGadget_SetDataSource_TObject_m m_SetDataSource_TObject;
	maxgui_maxgui_gadget_TGadget_KeysFromList_aS_TTList_f f_KeysFromList_aS_TTList;
	maxgui_maxgui_gadget_TGadget_KeysFromObjectArray_aS_aTObject_f f_KeysFromObjectArray_aS_aTObject;
	maxgui_maxgui_gadget_TGadget_SyncDataSource_m m_SyncDataSource;
	maxgui_maxgui_gadget_TGadget_SyncData_aS_m m_SyncData_aS;
	maxgui_maxgui_gadget_TGadget_InsertItemFromKey_iS_m m_InsertItemFromKey_iS;
	maxgui_maxgui_gadget_TProxyGadget_Clear_m m_Clear;
	maxgui_maxgui_gadget_TProxyGadget_InsertItem_iSSiTObjecti_m m_InsertItem_iSSiTObjecti;
	maxgui_maxgui_gadget_TProxyGadget_SetItem_iSSiTObjecti_m m_SetItem_iSSiTObjecti;
	maxgui_maxgui_gadget_TProxyGadget_RemoveItem_i_m m_RemoveItem_i;
	maxgui_maxgui_gadget_TProxyGadget_ItemCount_m m_ItemCount;
	maxgui_maxgui_gadget_TProxyGadget_ItemText_i_m m_ItemText_i;
	maxgui_maxgui_gadget_TProxyGadget_ItemTip_i_m m_ItemTip_i;
	maxgui_maxgui_gadget_TProxyGadget_ItemFlags_i_m m_ItemFlags_i;
	maxgui_maxgui_gadget_TProxyGadget_ItemIcon_i_m m_ItemIcon_i;
	maxgui_maxgui_gadget_TProxyGadget_ItemExtra_i_m m_ItemExtra_i;
	maxgui_maxgui_gadget_TProxyGadget_SetItemState_ii_m m_SetItemState_ii;
	maxgui_maxgui_gadget_TProxyGadget_ItemState_i_m m_ItemState_i;
	maxgui_maxgui_gadget_TProxyGadget_SelectItem_ii_m m_SelectItem_ii;
	maxgui_maxgui_gadget_TProxyGadget_SelectedItem_m m_SelectedItem;
	maxgui_maxgui_gadget_TProxyGadget_SelectedItems_m m_SelectedItems;
	maxgui_maxgui_gadget_TGadget_Insert_TTGadgeti_m m_Insert_TTGadgeti;
	maxgui_maxgui_gadget_TProxyGadget_Query_i_m m_Query_i;
	maxgui_maxgui_gadget_TGadget_ScaleFactor_m m_ScaleFactor;
	maxgui_proxygadgets_scrollpanel_TScrollPanel_CleanUp_m m_CleanUp;
	maxgui_maxgui_gadget_TProxyGadget_Free_m m_Free;
	maxgui_maxgui_gadget_TProxyGadget_Rethink_m m_Rethink;
	maxgui_proxygadgets_scrollpanel_TScrollPanel_ClientWidth_m m_ClientWidth;
	maxgui_proxygadgets_scrollpanel_TScrollPanel_ClientHeight_m m_ClientHeight;
	maxgui_maxgui_gadget_TProxyGadget_Activate_i_m m_Activate_i;
	maxgui_maxgui_gadget_TProxyGadget_State_m m_State;
	maxgui_maxgui_gadget_TProxyGadget_SetText_S_m m_SetText_S;
	maxgui_maxgui_gadget_TProxyGadget_GetText_m m_GetText;
	maxgui_maxgui_gadget_TProxyGadget_SetFont_TTGuiFont_m m_SetFont_TTGuiFont;
	maxgui_maxgui_gadget_TProxyGadget_SetColor_iii_m m_SetColor_iii;
	maxgui_maxgui_gadget_TProxyGadget_RemoveColor_m m_RemoveColor;
	maxgui_maxgui_gadget_TProxyGadget_SetAlpha_f_m m_SetAlpha_f;
	maxgui_maxgui_gadget_TProxyGadget_SetTextColor_iii_m m_SetTextColor_iii;
	maxgui_maxgui_gadget_TProxyGadget_SetTooltip_S_m m_SetTooltip_S;
	maxgui_maxgui_gadget_TProxyGadget_GetTooltip_m m_GetTooltip;
	maxgui_maxgui_gadget_TProxyGadget_SetPixmap_TTPixmapi_m m_SetPixmap_TTPixmapi;
	maxgui_maxgui_gadget_TProxyGadget_SetIconStrip_TTIconStrip_m m_SetIconStrip_TTIconStrip;
	maxgui_maxgui_gadget_TProxyGadget_SetShow_i_m m_SetShow_i;
	maxgui_maxgui_gadget_TProxyGadget_SetEnabled_i_m m_SetEnabled_i;
	maxgui_maxgui_gadget_TProxyGadget_SetSelected_i_m m_SetSelected_i;
	maxgui_maxgui_gadget_TProxyGadget_SetHotKey_ii_m m_SetHotKey_ii;
	maxgui_maxgui_gadget_TProxyGadget_SetSensitivity_i_m m_SetSensitivity_i;
	maxgui_maxgui_gadget_TProxyGadget_GetSensitivity_m m_GetSensitivity;
	maxgui_maxgui_gadget_TProxyGadget_Class_m m_Class;
	maxgui_maxgui_gadget_TProxyGadget_GetStatusText_m m_GetStatusText;
	maxgui_maxgui_gadget_TProxyGadget_SetStatusText_S_m m_SetStatusText_S;
	maxgui_maxgui_gadget_TProxyGadget_GetMenu_m m_GetMenu;
	maxgui_maxgui_gadget_TProxyGadget_PopupMenu_TTGadgetTObject_m m_PopupMenu_TTGadgetTObject;
	maxgui_maxgui_gadget_TProxyGadget_UpdateMenu_m m_UpdateMenu;
	maxgui_maxgui_gadget_TProxyGadget_SetMinimumSize_ii_m m_SetMinimumSize_ii;
	maxgui_maxgui_gadget_TProxyGadget_SetMaximumSize_ii_m m_SetMaximumSize_ii;
	maxgui_maxgui_gadget_TProxyGadget_ClearListItems_m m_ClearListItems;
	maxgui_maxgui_gadget_TProxyGadget_InsertListItem_iSSiTObject_m m_InsertListItem_iSSiTObject;
	maxgui_maxgui_gadget_TProxyGadget_SetListItem_iSSiTObject_m m_SetListItem_iSSiTObject;
	maxgui_maxgui_gadget_TProxyGadget_RemoveListItem_i_m m_RemoveListItem_i;
	maxgui_maxgui_gadget_TProxyGadget_SetListItemState_ii_m m_SetListItemState_ii;
	maxgui_maxgui_gadget_TProxyGadget_ListItemState_i_m m_ListItemState_i;
	maxgui_maxgui_gadget_TProxyGadget_RootNode_m m_RootNode;
	maxgui_maxgui_gadget_TProxyGadget_InsertNode_iSi_m m_InsertNode_iSi;
	maxgui_maxgui_gadget_TProxyGadget_ModifyNode_Si_m m_ModifyNode_Si;
	maxgui_maxgui_gadget_TProxyGadget_SelectedNode_m m_SelectedNode;
	maxgui_maxgui_gadget_TProxyGadget_CountKids_m m_CountKids;
	maxgui_maxgui_gadget_TProxyGadget_ReplaceText_iiSi_m m_ReplaceText_iiSi;
	maxgui_maxgui_gadget_TProxyGadget_AddText_S_m m_AddText_S;
	maxgui_maxgui_gadget_TProxyGadget_AreaText_iii_m m_AreaText_iii;
	maxgui_maxgui_gadget_TProxyGadget_AreaLen_i_m m_AreaLen_i;
	maxgui_maxgui_gadget_TProxyGadget_LockText_m m_LockText;
	maxgui_maxgui_gadget_TProxyGadget_UnlockText_m m_UnlockText;
	maxgui_maxgui_gadget_TProxyGadget_SetTabs_i_m m_SetTabs_i;
	maxgui_maxgui_gadget_TProxyGadget_SetMargins_i_m m_SetMargins_i;
	maxgui_maxgui_gadget_TProxyGadget_GetCursorPos_i_m m_GetCursorPos_i;
	maxgui_maxgui_gadget_TProxyGadget_GetSelectionLength_i_m m_GetSelectionLength_i;
	maxgui_maxgui_gadget_TProxyGadget_SetStyle_iiiiiii_m m_SetStyle_iiiiiii;
	maxgui_maxgui_gadget_TProxyGadget_SetSelection_iii_m m_SetSelection_iii;
	maxgui_maxgui_gadget_TProxyGadget_CharX_i_m m_CharX_i;
	maxgui_maxgui_gadget_TProxyGadget_CharY_i_m m_CharY_i;
	maxgui_maxgui_gadget_TProxyGadget_CharAt_i_m m_CharAt_i;
	maxgui_maxgui_gadget_TProxyGadget_LineAt_i_m m_LineAt_i;
	maxgui_maxgui_gadget_TProxyGadget_SetCaretWidth_i_m m_SetCaretWidth_i;
	maxgui_maxgui_gadget_TProxyGadget_SetCaretColor_iii_m m_SetCaretColor_iii;
	maxgui_maxgui_gadget_TGadget_HasUndoRedo_m m_HasUndoRedo;
	maxgui_maxgui_gadget_TGadget_EnableUndoRedo_i_m m_EnableUndoRedo_i;
	maxgui_maxgui_gadget_TGadget_UndoRedoEnabled_m m_UndoRedoEnabled;
	maxgui_maxgui_gadget_TGadget_Undo_m m_Undo;
	maxgui_maxgui_gadget_TGadget_Redo_m m_Redo;
	maxgui_maxgui_gadget_TGadget_CanUndo_m m_CanUndo;
	maxgui_maxgui_gadget_TGadget_CanRedo_m m_CanRedo;
	maxgui_maxgui_gadget_TGadget_ClearUndoRedo_m m_ClearUndoRedo;
	maxgui_maxgui_gadget_TGadget_HasHighlighting_m m_HasHighlighting;
	maxgui_maxgui_gadget_TGadget_SetHighlightLanguage_S_m m_SetHighlightLanguage_S;
	maxgui_maxgui_gadget_TGadget_SetHighlightKeywords_iS_m m_SetHighlightKeywords_iS;
	maxgui_maxgui_gadget_TGadget_SetHighlightStyle_iiiii_m m_SetHighlightStyle_iiiii;
	maxgui_maxgui_gadget_TGadget_HighLight_m m_HighLight;
	maxgui_maxgui_gadget_TGadget_ClearHighlightStyles_iiiiii_m m_ClearHighlightStyles_iiiiii;
	maxgui_maxgui_gadget_TGadget_HasLineNumbers_m m_HasLineNumbers;
	maxgui_maxgui_gadget_TGadget_SetLineNumberBackColor_iii_m m_SetLineNumberBackColor_iii;
	maxgui_maxgui_gadget_TGadget_SetLineNumberForeColor_iii_m m_SetLineNumberForeColor_iii;
	maxgui_maxgui_gadget_TGadget_SetLineNumberEnable_i_m m_SetLineNumberEnable_i;
	maxgui_maxgui_gadget_TGadget_HasCharEventSupressionFixup_m m_HasCharEventSupressionFixup;
	maxgui_maxgui_gadget_TProxyGadget_SetValue_f_m m_SetValue_f;
	maxgui_maxgui_gadget_TProxyGadget_SetRange_ii_m m_SetRange_ii;
	maxgui_maxgui_gadget_TProxyGadget_SetProp_i_m m_SetProp_i;
	maxgui_maxgui_gadget_TProxyGadget_GetProp_m m_GetProp;
	maxgui_maxgui_gadget_TProxyGadget_AttachGraphics_i_m m_AttachGraphics_i;
	maxgui_maxgui_gadget_TProxyGadget_CanvasGraphics_m m_CanvasGraphics;
	maxgui_maxgui_gadget_TProxyGadget_Run_S_m m_Run_S;
	maxgui_maxgui_gadget_TProxyGadget_SetProxy_TTGadget_m m_SetProxy_TTGadget;
	maxgui_maxgui_gadget_TProxyGadget_GetProxy_m m_GetProxy;
	maxgui_maxgui_gadget_TProxyGadget_SetStatus_S_m m_SetStatus_S;
	maxgui_proxygadgets_scrollpanel_TScrollPanel_Create_iiiiTTGadgeti_m m_Create_iiiiTTGadgeti;
	maxgui_proxygadgets_scrollpanel_TScrollPanel_GetXScroll_m m_GetXScroll;
	maxgui_proxygadgets_scrollpanel_TScrollPanel_GetYScroll_m m_GetYScroll;
	maxgui_proxygadgets_scrollpanel_TScrollPanel_ScrollTo_ii_m m_ScrollTo_ii;
	maxgui_proxygadgets_scrollpanel_TScrollPanel_FitToChildren_ii_m m_FitToChildren_ii;
	maxgui_proxygadgets_scrollpanel_TScrollPanel_FitToViewport_m m_FitToViewport;
	maxgui_proxygadgets_scrollpanel_TScrollPanel_Update_m m_Update;
	maxgui_proxygadgets_scrollpanel_TScrollPanel_AddVerticalScroll_iii_m m_AddVerticalScroll_iii;
	maxgui_proxygadgets_scrollpanel_TScrollPanel_RemoveVerticalScroll_m m_RemoveVerticalScroll;
	maxgui_proxygadgets_scrollpanel_TScrollPanel_AddHorizontalScroll_iii_m m_AddHorizontalScroll_iii;
	maxgui_proxygadgets_scrollpanel_TScrollPanel_RemoveHorizontalScroll_m m_RemoveHorizontalScroll;
	maxgui_proxygadgets_scrollpanel_TScrollPanel_eventHook_iTObjectTObject_m m_eventHook_iTObjectTObject;
	maxgui_proxygadgets_scrollpanel_TScrollPanel_eventHandler_TObject_iTObjectTObject_f f_eventHandler_TObject_iTObjectTObject;
	maxgui_proxygadgets_scrollpanel_TScrollPanel_CheckParent_i_TTGadgetTTGadget_f f_CheckParent_i_TTGadgetTTGadget;
};

struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj {
	struct BBClass_maxgui_proxygadgets_scrollpanel_TScrollPanel* clas;
	struct maxgui_maxgui_gadget_TGadget_obj* _maxgui_maxgui_gadget_tgadget_source;
	struct maxgui_maxgui_gadget_TGadget_obj* _maxgui_maxgui_gadget_tgadget_parent;
	struct brl_linkedlist_TList_obj* _maxgui_maxgui_gadget_tgadget_kids;
	BBINT _maxgui_maxgui_gadget_tgadget_xpos;
	BBINT _maxgui_maxgui_gadget_tgadget_ypos;
	BBINT _maxgui_maxgui_gadget_tgadget_width;
	BBINT _maxgui_maxgui_gadget_tgadget_height;
	BBSTRING _maxgui_maxgui_gadget_tgadget_name;
	BBOBJECT _maxgui_maxgui_gadget_tgadget_extra;
	BBINT _maxgui_maxgui_gadget_tgadget_style;
	BBINT _maxgui_maxgui_gadget_tgadget_sensitivity;
	BBINT _maxgui_maxgui_gadget_tgadget_visible;
	BBINT _maxgui_maxgui_gadget_tgadget_total;
	BBINT _maxgui_maxgui_gadget_tgadget_lockl;
	BBINT _maxgui_maxgui_gadget_tgadget_lockr;
	BBINT _maxgui_maxgui_gadget_tgadget_lockt;
	BBINT _maxgui_maxgui_gadget_tgadget_lockb;
	BBINT _maxgui_maxgui_gadget_tgadget_lockx;
	BBINT _maxgui_maxgui_gadget_tgadget_locky;
	BBINT _maxgui_maxgui_gadget_tgadget_lockw;
	BBINT _maxgui_maxgui_gadget_tgadget_lockh;
	BBINT _maxgui_maxgui_gadget_tgadget_lockcw;
	BBINT _maxgui_maxgui_gadget_tgadget_lockch;
	BBINT(* _maxgui_maxgui_gadget_tgadget_eventfilter)(struct brl_event_TEvent_obj*,BBOBJECT);
	BBOBJECT _maxgui_maxgui_gadget_tgadget_context;
	BBARRAY _maxgui_maxgui_gadget_tgadget_items;
	BBARRAY _maxgui_maxgui_gadget_tgadget_arrprevselection;
	BBOBJECT _maxgui_maxgui_gadget_tgadget_datasource;
	BBARRAY _maxgui_maxgui_gadget_tgadget_datakeys;
	struct maxgui_maxgui_gadget_TGadget_obj* _maxgui_maxgui_gadget_tproxygadget_proxy;
	BBINT _maxgui_proxygadgets_scrollpanel_tscrollpanel_flags;
	struct maxgui_maxgui_gadget_TGadget_obj* _maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlentire;
	struct maxgui_maxgui_gadget_TGadget_obj* _maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlviewport;
	struct maxgui_maxgui_gadget_TProxyGadget_obj* _maxgui_proxygadgets_scrollpanel_tscrollpanel_pnlclientarea;
	struct maxgui_maxgui_gadget_TGadget_obj* _maxgui_proxygadgets_scrollpanel_tscrollpanel_scrhorizontal;
	struct maxgui_maxgui_gadget_TGadget_obj* _maxgui_proxygadgets_scrollpanel_tscrollpanel_scrvertical;
	BBINT _maxgui_proxygadgets_scrollpanel_tscrollpanel_currenth;
	BBINT _maxgui_proxygadgets_scrollpanel_tscrollpanel_currentv;
	BBINT _maxgui_proxygadgets_scrollpanel_tscrollpanel_clientw;
	BBINT _maxgui_proxygadgets_scrollpanel_tscrollpanel_clienth;
};
extern struct BBClass_maxgui_proxygadgets_scrollpanel_TScrollPanel maxgui_proxygadgets_scrollpanel_TScrollPanel;
void _maxgui_proxygadgets_scrollpanel_TScrollClient_New(struct maxgui_proxygadgets_scrollpanel_TScrollClient_obj* o);
typedef BBINT (*maxgui_proxygadgets_scrollpanel_TScrollClient_SetShape_iiii_m)(struct maxgui_proxygadgets_scrollpanel_TScrollClient_obj*,BBINT,BBINT,BBINT,BBINT);
BBINT _maxgui_proxygadgets_scrollpanel_TScrollClient_SetShape_iiii(struct maxgui_proxygadgets_scrollpanel_TScrollClient_obj*,BBINT,BBINT,BBINT,BBINT);
typedef BBINT (*maxgui_proxygadgets_scrollpanel_TScrollClient_SetLayout_iiii_m)(struct maxgui_proxygadgets_scrollpanel_TScrollClient_obj*,BBINT,BBINT,BBINT,BBINT);
BBINT _maxgui_proxygadgets_scrollpanel_TScrollClient_SetLayout_iiii(struct maxgui_proxygadgets_scrollpanel_TScrollClient_obj*,BBINT,BBINT,BBINT,BBINT);
struct BBClass_maxgui_proxygadgets_scrollpanel_TScrollClient {
	struct BBClass_maxgui_maxgui_gadget_TProxyGadget*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	maxgui_maxgui_gadget_TGadget_SetFilter_F_TTEventTObject_i_TObject_m m_SetFilter_F_TTEventTObject_i_TObject;
	maxgui_maxgui_gadget_TProxyGadget_HasDescendant_TTGadget_m m_HasDescendant_TTGadget;
	maxgui_maxgui_gadget_TGadget__setparent_TTGadgeti_m m__setparent_TTGadgeti;
	maxgui_maxgui_gadget_TGadget_SelectionChanged_m m_SelectionChanged;
	maxgui_maxgui_gadget_TGadget_Handle_m m_Handle;
	maxgui_maxgui_gadget_TProxyGadget_GetXPos_m m_GetXPos;
	maxgui_maxgui_gadget_TProxyGadget_GetYPos_m m_GetYPos;
	maxgui_maxgui_gadget_TProxyGadget_GetWidth_m m_GetWidth;
	maxgui_maxgui_gadget_TProxyGadget_GetHeight_m m_GetHeight;
	maxgui_maxgui_gadget_TProxyGadget_GetGroup_m m_GetGroup;
	maxgui_proxygadgets_scrollpanel_TScrollClient_SetShape_iiii_m m_SetShape_iiii;
	maxgui_maxgui_gadget_TGadget_SetArea_iiii_m m_SetArea_iiii;
	maxgui_maxgui_gadget_TGadget_SetRect_iiii_m m_SetRect_iiii;
	maxgui_maxgui_gadget_TGadget_LockLayout_m m_LockLayout;
	maxgui_proxygadgets_scrollpanel_TScrollClient_SetLayout_iiii_m m_SetLayout_iiii;
	maxgui_maxgui_gadget_TGadget_LayoutKids_m m_LayoutKids;
	maxgui_maxgui_gadget_TGadget_DoLayout_m m_DoLayout;
	maxgui_maxgui_gadget_TGadget_SetDataSource_TObject_m m_SetDataSource_TObject;
	maxgui_maxgui_gadget_TGadget_KeysFromList_aS_TTList_f f_KeysFromList_aS_TTList;
	maxgui_maxgui_gadget_TGadget_KeysFromObjectArray_aS_aTObject_f f_KeysFromObjectArray_aS_aTObject;
	maxgui_maxgui_gadget_TGadget_SyncDataSource_m m_SyncDataSource;
	maxgui_maxgui_gadget_TGadget_SyncData_aS_m m_SyncData_aS;
	maxgui_maxgui_gadget_TGadget_InsertItemFromKey_iS_m m_InsertItemFromKey_iS;
	maxgui_maxgui_gadget_TProxyGadget_Clear_m m_Clear;
	maxgui_maxgui_gadget_TProxyGadget_InsertItem_iSSiTObjecti_m m_InsertItem_iSSiTObjecti;
	maxgui_maxgui_gadget_TProxyGadget_SetItem_iSSiTObjecti_m m_SetItem_iSSiTObjecti;
	maxgui_maxgui_gadget_TProxyGadget_RemoveItem_i_m m_RemoveItem_i;
	maxgui_maxgui_gadget_TProxyGadget_ItemCount_m m_ItemCount;
	maxgui_maxgui_gadget_TProxyGadget_ItemText_i_m m_ItemText_i;
	maxgui_maxgui_gadget_TProxyGadget_ItemTip_i_m m_ItemTip_i;
	maxgui_maxgui_gadget_TProxyGadget_ItemFlags_i_m m_ItemFlags_i;
	maxgui_maxgui_gadget_TProxyGadget_ItemIcon_i_m m_ItemIcon_i;
	maxgui_maxgui_gadget_TProxyGadget_ItemExtra_i_m m_ItemExtra_i;
	maxgui_maxgui_gadget_TProxyGadget_SetItemState_ii_m m_SetItemState_ii;
	maxgui_maxgui_gadget_TProxyGadget_ItemState_i_m m_ItemState_i;
	maxgui_maxgui_gadget_TProxyGadget_SelectItem_ii_m m_SelectItem_ii;
	maxgui_maxgui_gadget_TProxyGadget_SelectedItem_m m_SelectedItem;
	maxgui_maxgui_gadget_TProxyGadget_SelectedItems_m m_SelectedItems;
	maxgui_maxgui_gadget_TGadget_Insert_TTGadgeti_m m_Insert_TTGadgeti;
	maxgui_maxgui_gadget_TProxyGadget_Query_i_m m_Query_i;
	maxgui_maxgui_gadget_TGadget_ScaleFactor_m m_ScaleFactor;
	maxgui_maxgui_gadget_TProxyGadget_CleanUp_m m_CleanUp;
	maxgui_maxgui_gadget_TProxyGadget_Free_m m_Free;
	maxgui_maxgui_gadget_TProxyGadget_Rethink_m m_Rethink;
	maxgui_maxgui_gadget_TProxyGadget_ClientWidth_m m_ClientWidth;
	maxgui_maxgui_gadget_TProxyGadget_ClientHeight_m m_ClientHeight;
	maxgui_maxgui_gadget_TProxyGadget_Activate_i_m m_Activate_i;
	maxgui_maxgui_gadget_TProxyGadget_State_m m_State;
	maxgui_maxgui_gadget_TProxyGadget_SetText_S_m m_SetText_S;
	maxgui_maxgui_gadget_TProxyGadget_GetText_m m_GetText;
	maxgui_maxgui_gadget_TProxyGadget_SetFont_TTGuiFont_m m_SetFont_TTGuiFont;
	maxgui_maxgui_gadget_TProxyGadget_SetColor_iii_m m_SetColor_iii;
	maxgui_maxgui_gadget_TProxyGadget_RemoveColor_m m_RemoveColor;
	maxgui_maxgui_gadget_TProxyGadget_SetAlpha_f_m m_SetAlpha_f;
	maxgui_maxgui_gadget_TProxyGadget_SetTextColor_iii_m m_SetTextColor_iii;
	maxgui_maxgui_gadget_TProxyGadget_SetTooltip_S_m m_SetTooltip_S;
	maxgui_maxgui_gadget_TProxyGadget_GetTooltip_m m_GetTooltip;
	maxgui_maxgui_gadget_TProxyGadget_SetPixmap_TTPixmapi_m m_SetPixmap_TTPixmapi;
	maxgui_maxgui_gadget_TProxyGadget_SetIconStrip_TTIconStrip_m m_SetIconStrip_TTIconStrip;
	maxgui_maxgui_gadget_TProxyGadget_SetShow_i_m m_SetShow_i;
	maxgui_maxgui_gadget_TProxyGadget_SetEnabled_i_m m_SetEnabled_i;
	maxgui_maxgui_gadget_TProxyGadget_SetSelected_i_m m_SetSelected_i;
	maxgui_maxgui_gadget_TProxyGadget_SetHotKey_ii_m m_SetHotKey_ii;
	maxgui_maxgui_gadget_TProxyGadget_SetSensitivity_i_m m_SetSensitivity_i;
	maxgui_maxgui_gadget_TProxyGadget_GetSensitivity_m m_GetSensitivity;
	maxgui_maxgui_gadget_TProxyGadget_Class_m m_Class;
	maxgui_maxgui_gadget_TProxyGadget_GetStatusText_m m_GetStatusText;
	maxgui_maxgui_gadget_TProxyGadget_SetStatusText_S_m m_SetStatusText_S;
	maxgui_maxgui_gadget_TProxyGadget_GetMenu_m m_GetMenu;
	maxgui_maxgui_gadget_TProxyGadget_PopupMenu_TTGadgetTObject_m m_PopupMenu_TTGadgetTObject;
	maxgui_maxgui_gadget_TProxyGadget_UpdateMenu_m m_UpdateMenu;
	maxgui_maxgui_gadget_TProxyGadget_SetMinimumSize_ii_m m_SetMinimumSize_ii;
	maxgui_maxgui_gadget_TProxyGadget_SetMaximumSize_ii_m m_SetMaximumSize_ii;
	maxgui_maxgui_gadget_TProxyGadget_ClearListItems_m m_ClearListItems;
	maxgui_maxgui_gadget_TProxyGadget_InsertListItem_iSSiTObject_m m_InsertListItem_iSSiTObject;
	maxgui_maxgui_gadget_TProxyGadget_SetListItem_iSSiTObject_m m_SetListItem_iSSiTObject;
	maxgui_maxgui_gadget_TProxyGadget_RemoveListItem_i_m m_RemoveListItem_i;
	maxgui_maxgui_gadget_TProxyGadget_SetListItemState_ii_m m_SetListItemState_ii;
	maxgui_maxgui_gadget_TProxyGadget_ListItemState_i_m m_ListItemState_i;
	maxgui_maxgui_gadget_TProxyGadget_RootNode_m m_RootNode;
	maxgui_maxgui_gadget_TProxyGadget_InsertNode_iSi_m m_InsertNode_iSi;
	maxgui_maxgui_gadget_TProxyGadget_ModifyNode_Si_m m_ModifyNode_Si;
	maxgui_maxgui_gadget_TProxyGadget_SelectedNode_m m_SelectedNode;
	maxgui_maxgui_gadget_TProxyGadget_CountKids_m m_CountKids;
	maxgui_maxgui_gadget_TProxyGadget_ReplaceText_iiSi_m m_ReplaceText_iiSi;
	maxgui_maxgui_gadget_TProxyGadget_AddText_S_m m_AddText_S;
	maxgui_maxgui_gadget_TProxyGadget_AreaText_iii_m m_AreaText_iii;
	maxgui_maxgui_gadget_TProxyGadget_AreaLen_i_m m_AreaLen_i;
	maxgui_maxgui_gadget_TProxyGadget_LockText_m m_LockText;
	maxgui_maxgui_gadget_TProxyGadget_UnlockText_m m_UnlockText;
	maxgui_maxgui_gadget_TProxyGadget_SetTabs_i_m m_SetTabs_i;
	maxgui_maxgui_gadget_TProxyGadget_SetMargins_i_m m_SetMargins_i;
	maxgui_maxgui_gadget_TProxyGadget_GetCursorPos_i_m m_GetCursorPos_i;
	maxgui_maxgui_gadget_TProxyGadget_GetSelectionLength_i_m m_GetSelectionLength_i;
	maxgui_maxgui_gadget_TProxyGadget_SetStyle_iiiiiii_m m_SetStyle_iiiiiii;
	maxgui_maxgui_gadget_TProxyGadget_SetSelection_iii_m m_SetSelection_iii;
	maxgui_maxgui_gadget_TProxyGadget_CharX_i_m m_CharX_i;
	maxgui_maxgui_gadget_TProxyGadget_CharY_i_m m_CharY_i;
	maxgui_maxgui_gadget_TProxyGadget_CharAt_i_m m_CharAt_i;
	maxgui_maxgui_gadget_TProxyGadget_LineAt_i_m m_LineAt_i;
	maxgui_maxgui_gadget_TProxyGadget_SetCaretWidth_i_m m_SetCaretWidth_i;
	maxgui_maxgui_gadget_TProxyGadget_SetCaretColor_iii_m m_SetCaretColor_iii;
	maxgui_maxgui_gadget_TGadget_HasUndoRedo_m m_HasUndoRedo;
	maxgui_maxgui_gadget_TGadget_EnableUndoRedo_i_m m_EnableUndoRedo_i;
	maxgui_maxgui_gadget_TGadget_UndoRedoEnabled_m m_UndoRedoEnabled;
	maxgui_maxgui_gadget_TGadget_Undo_m m_Undo;
	maxgui_maxgui_gadget_TGadget_Redo_m m_Redo;
	maxgui_maxgui_gadget_TGadget_CanUndo_m m_CanUndo;
	maxgui_maxgui_gadget_TGadget_CanRedo_m m_CanRedo;
	maxgui_maxgui_gadget_TGadget_ClearUndoRedo_m m_ClearUndoRedo;
	maxgui_maxgui_gadget_TGadget_HasHighlighting_m m_HasHighlighting;
	maxgui_maxgui_gadget_TGadget_SetHighlightLanguage_S_m m_SetHighlightLanguage_S;
	maxgui_maxgui_gadget_TGadget_SetHighlightKeywords_iS_m m_SetHighlightKeywords_iS;
	maxgui_maxgui_gadget_TGadget_SetHighlightStyle_iiiii_m m_SetHighlightStyle_iiiii;
	maxgui_maxgui_gadget_TGadget_HighLight_m m_HighLight;
	maxgui_maxgui_gadget_TGadget_ClearHighlightStyles_iiiiii_m m_ClearHighlightStyles_iiiiii;
	maxgui_maxgui_gadget_TGadget_HasLineNumbers_m m_HasLineNumbers;
	maxgui_maxgui_gadget_TGadget_SetLineNumberBackColor_iii_m m_SetLineNumberBackColor_iii;
	maxgui_maxgui_gadget_TGadget_SetLineNumberForeColor_iii_m m_SetLineNumberForeColor_iii;
	maxgui_maxgui_gadget_TGadget_SetLineNumberEnable_i_m m_SetLineNumberEnable_i;
	maxgui_maxgui_gadget_TGadget_HasCharEventSupressionFixup_m m_HasCharEventSupressionFixup;
	maxgui_maxgui_gadget_TProxyGadget_SetValue_f_m m_SetValue_f;
	maxgui_maxgui_gadget_TProxyGadget_SetRange_ii_m m_SetRange_ii;
	maxgui_maxgui_gadget_TProxyGadget_SetProp_i_m m_SetProp_i;
	maxgui_maxgui_gadget_TProxyGadget_GetProp_m m_GetProp;
	maxgui_maxgui_gadget_TProxyGadget_AttachGraphics_i_m m_AttachGraphics_i;
	maxgui_maxgui_gadget_TProxyGadget_CanvasGraphics_m m_CanvasGraphics;
	maxgui_maxgui_gadget_TProxyGadget_Run_S_m m_Run_S;
	maxgui_maxgui_gadget_TProxyGadget_SetProxy_TTGadget_m m_SetProxy_TTGadget;
	maxgui_maxgui_gadget_TProxyGadget_GetProxy_m m_GetProxy;
	maxgui_maxgui_gadget_TProxyGadget_SetStatus_S_m m_SetStatus_S;
};

struct maxgui_proxygadgets_scrollpanel_TScrollClient_obj {
	struct BBClass_maxgui_proxygadgets_scrollpanel_TScrollClient* clas;
	struct maxgui_maxgui_gadget_TGadget_obj* _maxgui_maxgui_gadget_tgadget_source;
	struct maxgui_maxgui_gadget_TGadget_obj* _maxgui_maxgui_gadget_tgadget_parent;
	struct brl_linkedlist_TList_obj* _maxgui_maxgui_gadget_tgadget_kids;
	BBINT _maxgui_maxgui_gadget_tgadget_xpos;
	BBINT _maxgui_maxgui_gadget_tgadget_ypos;
	BBINT _maxgui_maxgui_gadget_tgadget_width;
	BBINT _maxgui_maxgui_gadget_tgadget_height;
	BBSTRING _maxgui_maxgui_gadget_tgadget_name;
	BBOBJECT _maxgui_maxgui_gadget_tgadget_extra;
	BBINT _maxgui_maxgui_gadget_tgadget_style;
	BBINT _maxgui_maxgui_gadget_tgadget_sensitivity;
	BBINT _maxgui_maxgui_gadget_tgadget_visible;
	BBINT _maxgui_maxgui_gadget_tgadget_total;
	BBINT _maxgui_maxgui_gadget_tgadget_lockl;
	BBINT _maxgui_maxgui_gadget_tgadget_lockr;
	BBINT _maxgui_maxgui_gadget_tgadget_lockt;
	BBINT _maxgui_maxgui_gadget_tgadget_lockb;
	BBINT _maxgui_maxgui_gadget_tgadget_lockx;
	BBINT _maxgui_maxgui_gadget_tgadget_locky;
	BBINT _maxgui_maxgui_gadget_tgadget_lockw;
	BBINT _maxgui_maxgui_gadget_tgadget_lockh;
	BBINT _maxgui_maxgui_gadget_tgadget_lockcw;
	BBINT _maxgui_maxgui_gadget_tgadget_lockch;
	BBINT(* _maxgui_maxgui_gadget_tgadget_eventfilter)(struct brl_event_TEvent_obj*,BBOBJECT);
	BBOBJECT _maxgui_maxgui_gadget_tgadget_context;
	BBARRAY _maxgui_maxgui_gadget_tgadget_items;
	BBARRAY _maxgui_maxgui_gadget_tgadget_arrprevselection;
	BBOBJECT _maxgui_maxgui_gadget_tgadget_datasource;
	BBARRAY _maxgui_maxgui_gadget_tgadget_datakeys;
	struct maxgui_maxgui_gadget_TGadget_obj* _maxgui_maxgui_gadget_tproxygadget_proxy;
};
extern struct BBClass_maxgui_proxygadgets_scrollpanel_TScrollClient maxgui_proxygadgets_scrollpanel_TScrollClient;
struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* maxgui_proxygadgets_scrollpanel_CreateScrollPanel(BBINT bbt_x,BBINT bbt_y,BBINT bbt_w,BBINT bbt_h,struct maxgui_maxgui_gadget_TGadget_obj* bbt_group,BBINT bbt_flags);
struct maxgui_maxgui_gadget_TGadget_obj* maxgui_proxygadgets_scrollpanel_ScrollPanelClient(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* bbt_scrollpanel);
BBINT maxgui_proxygadgets_scrollpanel_FitScrollPanelClient(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* bbt_scrollpanel,BBINT bbt_fitType);
BBINT maxgui_proxygadgets_scrollpanel_ScrollScrollPanel(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* bbt_scrollpanel,BBINT bbt_pX,BBINT bbt_pY);
BBINT maxgui_proxygadgets_scrollpanel_ScrollPanelX(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* bbt_scrollpanel);
BBINT maxgui_proxygadgets_scrollpanel_ScrollPanelY(struct maxgui_proxygadgets_scrollpanel_TScrollPanel_obj* bbt_scrollpanel);

#endif
