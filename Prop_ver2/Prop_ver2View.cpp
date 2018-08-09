
// Prop_ver2View.cpp : CProp_ver2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(IDM_PROPERTYSHEET, &CProp_ver2View::OnPropertysheet)
END_MESSAGE_MAP()

// CProp_ver2View 构造/析构

CProp_ver2View::CProp_ver2View()
{
	// TODO: 在此处添加构造代码

}

CProp_ver2View::~CProp_ver2View()
{
}

BOOL CProp_ver2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CProp_ver2View 绘制

void CProp_ver2View::OnDraw(CDC* /*pDC*/)
{
	CProp_ver2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CProp_ver2View 打印

BOOL CProp_ver2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CProp_ver2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CProp_ver2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CProp_ver2View 诊断

#ifdef _DEBUG
void CProp_ver2View::AssertValid() const
{
	CView::AssertValid();
}

void CProp_ver2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CProp_ver2Doc* CProp_ver2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CProp_ver2Doc)));
	return (CProp_ver2Doc*)m_pDocument;
}
#endif //_DEBUG


// CProp_ver2View 消息处理程序


void CProp_ver2View::OnPropertysheet()
{
	CPropSheet p(TEXT("属性表单程序"));
	p.SetWizardMode();
	p.DoModal();
}

