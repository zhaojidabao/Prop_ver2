
// Prop_ver2.h : Prop_ver2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CProp_ver2App:
// �йش����ʵ�֣������ Prop_ver2.cpp
//

class CProp_ver2App : public CWinAppEx
{
public:
	CProp_ver2App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CProp_ver2App theApp;
