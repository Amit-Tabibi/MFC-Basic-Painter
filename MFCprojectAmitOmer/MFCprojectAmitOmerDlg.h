
// MFCprojectAmitOmerDlg.h : header file
//

#pragma once
#include "Figure.h"
#include "RectangleFig.h"
#include "EllipseFig.h"
#include "LineFig.h"
#include "SquareFig.h"
#include "parallelogramFig.h"
#include "RhombusFig.h"
#include <stack>

using namespace std;

// CMFCprojectAmitOmerDlg dialog
class CMFCprojectAmitOmerDlg : public CDialogEx
{
// Construction
public:
	CMFCprojectAmitOmerDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCPROJECTAMITOMER_DIALOG };
#endif

	CTypedPtrArray< CObArray, Figure*> figs;
	int futureFigureKind = 1; 
	bool isPressed = false;
	CPoint startP;
	CPoint endP;

	void PaintMainScreen();
	
	//stack
	stack<Figure*> tmpfigureStack;

	//color 
	COLORREF mPenColor = RGB(0, 0, 0);

	//Thickness
	int Thickness = 1;
	
	

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

public:
	
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnBnClickedRadio1();
	afx_msg void OnBnClickedRadio2();
	afx_msg void OnBnClickedRadio3();
private:
	
public:
	afx_msg void OnBnClickedRadio4();
	afx_msg void OnBnClickedRadio5();
	afx_msg void OnBnClickedRadio6();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedCheck1();
};
