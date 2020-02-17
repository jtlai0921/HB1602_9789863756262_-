// UseMFC.h : UseMFC DLL 的主頭檔案
//

#pragma once

#ifndef __AFXWIN_H__
	#error "在包括此檔案之前包括“stdafx.h”以產生 PCH 檔案"
#endif

#include "resource.h"		// 主符號


// CUseMFCApp
// 有關此類別實現的訊息，請參閱 UseMFC.cpp
//

class CUseMFCApp : public CWinApp
{
public:
	CUseMFCApp();

// 重新定義
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
