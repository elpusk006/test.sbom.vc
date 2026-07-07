
// vc_mfc.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CvcmfcApp:
// See vc_mfc.cpp for the implementation of this class
//

class CvcmfcApp : public CWinApp
{
public:
	CvcmfcApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CvcmfcApp theApp;
