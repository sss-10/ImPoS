#pragma once
#include"wx/wx.h"
#include "xMain.h"



class xApp : public wxApp
{
	xMain* frame01 = nullptr;
public:
	xApp();
	~xApp();
	virtual bool OnInit();
};

