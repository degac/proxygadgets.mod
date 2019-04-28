#include <maxgui.mod/proxygadgets.mod/.bmx/proxygadgets.bmx.debug.win32.x64.h>
static int __bb_maxgui_proxygadgets_proxygadgets_inited = 0;
int __bb_maxgui_proxygadgets_proxygadgets(){
	if (!__bb_maxgui_proxygadgets_proxygadgets_inited) {
		__bb_maxgui_proxygadgets_proxygadgets_inited = 1;
		__bb_brl_blitz_blitz();
		_bb_maxgui_proxygadgets_hyperlink();
		_bb_maxgui_proxygadgets_splitter();
		_bb_maxgui_proxygadgets_scrollpanel();
		_bb_maxgui_proxygadgets_calendar();
		_bb_maxgui_proxygadgets_userinput();
		_bb_maxgui_proxygadgets_checklistbox();
		_bb_maxgui_proxygadgets_datepicker();
		_bb_maxgui_proxygadgets_filepicker();
		_bb_maxgui_proxygadgets_listmanager();
		_bb_maxgui_proxygadgets_notify();
		_bb_maxgui_proxygadgets_progressbar();
		_bb_maxgui_proxygadgets_toolbarextra();
		_bb_maxgui_proxygadgets_spinner();
		_bb_maxgui_proxygadgets_buttonextra();
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_FUNCTION,
			"proxygadgets",
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		bbOnDebugLeaveScope();
		return 0;
	}
	return 0;
}