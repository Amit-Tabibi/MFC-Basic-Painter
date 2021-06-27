
// MFCprojectAmitOmer.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CMFCprojectAmitOmerApp:
// See MFCprojectAmitOmer.cpp for the implementation of this class
//

class CMFCprojectAmitOmerApp : public CWinApp
{
public:
	CMFCprojectAmitOmerApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CMFCprojectAmitOmerApp theApp;
