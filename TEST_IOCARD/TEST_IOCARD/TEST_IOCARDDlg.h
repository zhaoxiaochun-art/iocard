
// TEST_IOCARDDlg.h: 头文件
//
#include "IoCard.h"
#pragma once


// CTESTIOCARDDlg 对话框
class CTESTIOCARDDlg : public CDialogEx
{
// 构造
public:
	CTESTIOCARDDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TEST_IOCARD_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持

	CioControl *iocard;
// 实现
protected:
	HICON m_hIcon;
	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonReadtimer();
	afx_msg void OnBnClickedButtonReadio();
	afx_msg void OnBnClickedButtonOpen();
	afx_msg void OnBnClickedButtonInit();
	afx_msg void OnBnClickedButtonStart();
	afx_msg void OnBnClickedButtonStop();
};
