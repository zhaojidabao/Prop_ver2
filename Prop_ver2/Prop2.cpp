// Prop2.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Prop_ver2.h"
#include "Prop2.h"
#include "afxdialogex.h"


// CProp2 �Ի���

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


// CProp2 ��Ϣ�������


BOOL CProp2::OnSetActive()
{
	
	((CPropertySheet*)GetParent())->SetWizardButtons(PSWIZB_NEXT | PSWIZB_NEXT);
	return CPropertyPage::OnSetActive();
}
