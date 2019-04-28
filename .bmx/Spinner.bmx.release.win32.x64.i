superstrict
import brl.blitz
import maxgui.drivers
import brl.eventqueue
SPINNER_TRACKBAR%=1
TSpinner^TProxyGadget{
SLIDERWIDTH%=18
DIV%=80
.panel:TGadget&
.textfield:TGadget&
.slider:TGadget&
.trackbar:TGadget&
.value!&
.Range!&[]&
.accuracy%&
.floatitemmultiplier!&
-SetProp%(val%=0)="maxgui_proxygadgets_spinner_TSpinner_SetProp_i"
-Class%()="maxgui_proxygadgets_spinner_TSpinner_Class"
-SetFont%(fnt:TGuiFont="bbNullObject")="maxgui_proxygadgets_spinner_TSpinner_SetFont_TTGuiFont"
-SetShow%(bool%)="maxgui_proxygadgets_spinner_TSpinner_SetShow_i"
-SetRange_%(minimum!,maximum!,accuracy%=1)="maxgui_proxygadgets_spinner_TSpinner_SetRange__ddi"
-SetColor%(r%=255,g%=255,b%=255)="maxgui_proxygadgets_spinner_TSpinner_SetColor_iii"
-SetEnabled%(sta%=1)="maxgui_proxygadgets_spinner_TSpinner_SetEnabled_i"
-CleanUp%()="maxgui_proxygadgets_spinner_TSpinner_CleanUp"
+Create:TSpinner(x%,y%,WIDTH%,HEIGHT%,group:TGadget,flags%=0)="maxgui_proxygadgets_spinner_TSpinner_Create_TTSpinner_iiiiTTGadgeti"
-SetValue_%(i!)="maxgui_proxygadgets_spinner_TSpinner_SetValue__d"
-GetText$()="maxgui_proxygadgets_spinner_TSpinner_GetText"
+EventHook:Object(id%,data:Object,context:Object)="maxgui_proxygadgets_spinner_TSpinner_EventHook_TObject_iTObjectTObject"
+Round%(val!)="maxgui_proxygadgets_spinner_TSpinner_Round_i_d"
+FloatToString$(value#,places%=3)="maxgui_proxygadgets_spinner_TSpinner_FloatToString_S_fi"
}="maxgui_proxygadgets_spinner_TSpinner"
CreateSpinner:TSpinner(x%,y%,W%,H%,group:TGadget,flags%=0)="maxgui_proxygadgets_spinner_CreateSpinner"
SetSpinnerRange%(spinner:TSpinner,minimum!,maximum!,accuracy%=1)="maxgui_proxygadgets_spinner_SetSpinnerRange"
SetSpinnerValue%(spinner:TSpinner,value!)="maxgui_proxygadgets_spinner_SetSpinnerValue"
SpinnerValue!(spinner:TSpinner)="maxgui_proxygadgets_spinner_SpinnerValue"