// Prop1.cpp : 实现文件
//

#include "stdafx.h"
#include "Prop_ver2.h"
#include "Prop1.h"
#include "afxdialogex.h"


// CProp1 对话框

IMPLEMENT_DYNAMIC(CProp1, CPropertyPage)

CProp1::CProp1()
	: CPropertyPage(IDD_PROP1)
	, m_occupation(0)
{
	m_occupation = -1;
}

CProp1::~CProp1()
{
}

void CProp1::DoDataExchange(CDataExchange* pDX)
{
	CPropertyPage::DoDataExchange(pDX);
	DDX_Radio(pDX, IDC_RADIO1, m_occupation);
}


BEGIN_MESSAGE_MAP(CProp1, CPropertyPage)
END_MESSAGE_MAP()


// CProp1 消息处理程序


BOOL CProp1::OnSetActive()
{
	((CPropertySheet*)GetParent())->SetWizardButtons(PSWIZB_NEXT);

	return CPropertyPage::OnSetActive();
}



LRESULT CProp1::OnWizardNext()
{
	UpdateData();
	if (m_occupation== -1)
	{
		MessageBox(L"重新选择");
		return(-1);
	} 
	
	return CPropertyPage::OnWizardNext();
}
