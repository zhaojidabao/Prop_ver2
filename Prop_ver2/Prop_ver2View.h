
// Prop_ver2View.h : CProp_ver2View 类的接口
//

#pragma once


class CProp_ver2View : public CView
{
protected: // 仅从序列化创建
	CProp_ver2View();
	DECLARE_DYNCREATE(CProp_ver2View)

// 特性
public:
	CProp_ver2Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~CProp_ver2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPropertysheet();
};

#ifndef _DEBUG  // Prop_ver2View.cpp 中的调试版本
inline CProp_ver2Doc* CProp_ver2View::GetDocument() const
   { return reinterpret_cast<CProp_ver2Doc*>(m_pDocument); }
#endif

