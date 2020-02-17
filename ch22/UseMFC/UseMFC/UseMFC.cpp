// UseMFC.cpp : 定義 DLL 的起始化例程。
//

#include "stdafx.h"
#include "UseMFC.h"
#include "Input.h"
#include <Python.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

//
//TODO: 若果此 DLL 相對於 MFC DLL 是動態連結的，
//		則從此 DLL 匯出的任何調入
//		MFC 的函數必須將 AFX_MANAGE_STATE 巨集新增到
//		該函數的最前面。
//
//		例如:
//
//		extern "C" BOOL PASCAL EXPORT ExportedFunction()
//		{
//			AFX_MANAGE_STATE(AfxGetStaticModuleState());
//			// 此處為普通函數體
//		}
//
//		此巨集先於任何 MFC 呼叫
//		出現在每個函數中十分重要。這表示
//		它必須作為函數中的第一個敘述
//		出現，甚至先於所有物件變數宣告，
//		這是因為它們的建構函數可能產生 MFC
//		DLL 呼叫。
//
//		有關其他詳細訊息，
//		請參閱 MFC 技術說明 33 和 58。
//

// CUseMFCApp

BEGIN_MESSAGE_MAP(CUseMFCApp, CWinApp)
END_MESSAGE_MAP()


// CUseMFCApp 建構

CUseMFCApp::CUseMFCApp()
{
	// TODO: 在此處加入建構程式碼，
	// 將所有重要的起始化放置在 InitInstance 中
}


// 唯一的一個 CUseMFCApp 物件

CUseMFCApp theApp;


// CUseMFCApp 起始化

BOOL CUseMFCApp::InitInstance()
{
	CWinApp::InitInstance();

	return TRUE;
}

PyObject *show(PyObject *self, PyObject *args)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	CInput dia;
	dia.DoModal();
	return Py_BuildValue("s", dia.m_input);
}

static PyMethodDef UseMFCMethods[] = 
{
	{"show", show, METH_VARARGS,"show a messagebox"},
	{NULL,NULL,0,NULL}
};

static struct PyModuleDef UseMFCmodule = {
    PyModuleDef_HEAD_INIT,
    "UseMFC",
    NULL,
    -1,
    UseMFCMethods
};


PyMODINIT_FUNC PyInit_UseMFC()
{
	PyObject *pModule;
	pModule = PyModule_Create(&UseMFCmodule);
    return pModule;
}
