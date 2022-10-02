#pragma once
#include "wx/wx.h"

class xMain : public wxFrame
{
public:
	wxMenuBar* xmenubar = nullptr;
	wxMenu* xfilemenu = nullptr;
	wxMenu* xtoolmenu = nullptr;
	wxMenu* xhelpmenu = nullptr;
	wxMenu* xaboutmenu = nullptr;
	wxMenu* xlogmenu = nullptr;
	
	void OnButtonClicked(wxCommandEvent &event);
	
	wxDECLARE_EVENT_TABLE();
public:
	xMain(); 
	~xMain();
};

