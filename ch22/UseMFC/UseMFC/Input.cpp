// Input.cpp : 實現檔案
//

#include "stdafx.h"
#include "UseMFC.h"
#include "Input.h"


// CInput 交談視窗

IMPLEMENT_DYNAMIC(CInput, CDialog)

CInput::CInput(CWnd* pParent /*=NULL*/)
	: CDialog(CInput::IDD, pParent)
	, m_input(_T(""))
{

}

CInput::~CInput()
{
}

void CInput::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_input);
}


BEGIN_MESSAGE_MAP(CInput, CDialog)
END_MESSAGE_MAP()


// CInput 訊息處理程式
