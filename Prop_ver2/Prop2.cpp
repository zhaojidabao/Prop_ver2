// Prop2.cpp : 实现文件
//

#include "stdafx.h"
#include "Prop_ver2.h"
#include "Prop2.h"
#include "afxdialogex.h"


// CProp2 对话框

IMPLEMENT_DYNAMIC(CProp2, CPropertyPage)

CProp2::CProp2()
	: CPropertyPage(IDD_PROP2)
{

}

CProp2::~CProp2()
{
}

void CProp2::DoDataExchange(CDataExchange* pDX)
{
	CPropertyPage::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CProp2, CPropertyPage)
END_MESSAGE_MAP()


// CProp2 消息处理程序


BOOL CProp2::OnSetActive()
{
	
	((CPropertySheet*)GetParent())->SetWizardButtons(PSWIZB_NEXT | PSWIZB_NEXT);
	return CPropertyPage::OnSetActive();
}
