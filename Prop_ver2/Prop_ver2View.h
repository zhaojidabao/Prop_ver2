
// Prop_ver2View.h : CProp_ver2View ��Ľӿ�
//

#pragma once


class CProp_ver2View : public CView
{
protected: // �������л�����
	CProp_ver2View();
	DECLARE_DYNCREATE(CProp_ver2View)

// ����
public:
	CProp_ver2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CProp_ver2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPropertysheet();
};

#ifndef _DEBUG  // Prop_ver2View.cpp �еĵ��԰汾
inline CProp_ver2Doc* CProp_ver2View::GetDocument() const
   { return reinterpret_cast<CProp_ver2Doc*>(m_pDocument); }
#endif

