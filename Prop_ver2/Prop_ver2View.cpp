
// Prop_ver2View.cpp : CProp_ver2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Prop_ver2.h"
#include "PropSheet.h"


#endif

#include "Prop_ver2Doc.h"
#include "Prop_ver2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CProp_ver2View

IMPLEMENT_DYNCREATE(CProp_ver2View, CView)

BEGIN_MESSAGE_MAP(CProp_ver2View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(IDM_PROPERTYSHEET, &CProp_ver2View::OnPropertysheet)
END_MESSAGE_MAP()

// CProp_ver2View ����/����

CProp_ver2View::CProp_ver2View()
{
	// TODO: �ڴ˴���ӹ������

}

CProp_ver2View::~CProp_ver2View()
{
}

BOOL CProp_ver2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CProp_ver2View ����

void CProp_ver2View::OnDraw(CDC* /*pDC*/)
{
	CProp_ver2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CProp_ver2View ��ӡ

BOOL CProp_ver2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CProp_ver2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CProp_ver2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CProp_ver2View ���

#ifdef _DEBUG
void CProp_ver2View::AssertValid() const
{
	CView::AssertValid();
}

void CProp_ver2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CProp_ver2Doc* CProp_ver2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CProp_ver2Doc)));
	return (CProp_ver2Doc*)m_pDocument;
}
#endif //_DEBUG


// CProp_ver2View ��Ϣ�������


void CProp_ver2View::OnPropertysheet()
{
	CPropSheet p(TEXT("���Ա�����"));
	p.SetWizardMode();
	p.DoModal();
}

