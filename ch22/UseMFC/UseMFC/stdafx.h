// stdafx.h : 標准系統包括檔案的包括檔案，
// 或是經常使用但不常變更的
// 特定於專案的包括檔案

#pragma once

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN            // 從 Windows 頭中排除極少使用的資料
#endif

#include "targetver.h"

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // 某些 CString 建構函數將是顯性的

#include <afxwin.h>         // MFC 核心元件和標准元件
#include <afxext.h>         // MFC 延伸

#ifndef _AFX_NO_OLE_SUPPORT
#include <afxole.h>         // MFC OLE 類別
#include <afxodlgs.h>       // MFC OLE 交談視窗類別
#include <afxdisp.h>        // MFC 自動化類別
#endif // _AFX_NO_OLE_SUPPORT

#ifndef _AFX_NO_DB_SUPPORT
#include <afxdb.h>                      // MFC ODBC 資料庫類別
#endif // _AFX_NO_DB_SUPPORT

#ifndef _AFX_NO_DAO_SUPPORT
#include <afxdao.h>                     // MFC DAO 資料庫類別
#endif // _AFX_NO_DAO_SUPPORT

#ifndef _AFX_NO_OLE_SUPPORT
#include <afxdtctl.h>           // MFC 對 Internet Explorer 4 公共控制項的支援
#endif
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>                     // MFC 對 Windows 公共控制項的支援
#endif // _AFX_NO_AFXCMN_SUPPORT


