#include "xApp.h"
#include "xMain.h"
wxIMPLEMENT_APP(xApp);

xApp::xApp()
{

}

xApp::~xApp()
{

}

bool xApp::OnInit()
{
	frame01 = new xMain();
	frame01->Show();
	return true;
}

