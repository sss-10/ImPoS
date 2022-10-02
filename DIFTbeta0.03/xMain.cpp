#include "xMain.h"

wxBEGIN_EVENT_TABLE(xMain, wxFrame)
//EVT_MENU_RANGE(2001,2002,2003,2004, OnButtonClicked)
//EVT_MENU_RANGE(3002,3001,3003, OnButtonClicked)
EVT_MENU_RANGE(5001,5002, OnButtonClicked)
wxEND_EVENT_TABLE()


xMain::xMain() : wxFrame(nullptr, wxID_ANY, "DIGITAL IMAGE FORENSICS TOOL", wxPoint(80,40),wxSize(1000,650))
{
	
	//background colour of frame
	this->SetBackgroundColour(26);
	//menu bar
	    xmenubar = new wxMenuBar(0);
	//file menu
		xfilemenu = new wxMenu();
		xfilemenu->Append(wxID_OPEN, _T("&Open"));
		xfilemenu->Append(wxID_SAVE, _T("&Save"));
		xfilemenu->AppendSeparator();
		xfilemenu->Append(wxID_EXIT, _T("&Quit"));
	//tool menu
		xtoolmenu = new wxMenu();
		xtoolmenu->Append(2001, _T("&Function (log)"));
		xtoolmenu->Append(2002, _T("&Function (upto n)"));
		xtoolmenu->Append(2003, _T("&Function (between n-m)"));
		xtoolmenu->Append(2004, _T("&Function (continuous)"));
		xtoolmenu->Append(2005, _T("&Function (blur correction)"));
	//log menu
		xlogmenu = new wxMenu();
		xlogmenu->Append(3001, _T("&Session logs"));
		xlogmenu->Append(3002, _T("&All logs"));
	//help menu
		xhelpmenu = new wxMenu();
		xhelpmenu->Append(4001, _T("&View help"));
		xhelpmenu->Append(4002, _T("&Feedback"));
		xhelpmenu->Append(4003, _T("&Technical support"));
		xhelpmenu->Append(4004, _T("&Tutorial"));
	//about menu
		xaboutmenu = new wxMenu();
		xaboutmenu->Append(5001, _T("About DIFT"));
		xaboutmenu->Append(5002, _T("About Developers"));
	//adding menu to menubar
		xmenubar->Append(xfilemenu, "&File");
		xmenubar->Append(xtoolmenu, "&Tools");
		xmenubar->Append(xlogmenu, "&Logs");
		xmenubar->Append(xhelpmenu, "&Help");
		xmenubar->Append(xaboutmenu, "&About");
	// set menu bar
		SetMenuBar(xmenubar);
	//create status bar
		CreateStatusBar(1);
		SetStatusText(_T("Welcome to the Digital Image Forensics Tool", 1));
}

xMain::~xMain()
{

}

void xMain::OnButtonClicked(wxCommandEvent& event)
{
	if (event.GetId()== 5001)
	{
		wxString msg;
		msg.Printf(_T("About DIFT : \n")
			_T(" DIFT beta 0.03 \nThe Ultimate level software designed\n for very highlevel image forensics."), wxVERSION_STRING);
		wxMessageBox(msg, _T("About DIFT : "),
			wxOK | wxICON_INFORMATION, this);
	}
	if (event.GetId()== 5002)
	{
		wxString msg;
		msg.Printf(_T("About Developers : \n")
			_T("\n\n\nHappy faces behind DIFT beta 0.03 \n\n         ARVIND KUMAR MAURYA    [ GUIDE ]\n           SHASHANK SHEKHAR SHUKLA    [ PROGRAMMER ] \n\n\nSpecial thanks to :\n\n           LAKHAN TIWARI    [ FOR PROVIDING RESOURCES ]\n           JUHI SRIVASTAVA    [ FOR MATHEMATICAL CALCULATIONS ] \n\n"), wxVERSION_STRING);
		wxMessageBox(msg, _T("About DIFT's Developers :"),
			wxOK | wxICON_INFORMATION, this);
	}
}