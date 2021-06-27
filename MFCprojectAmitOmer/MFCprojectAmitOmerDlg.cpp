
// MFCprojectAmitOmerDlg.cpp : implementation file
//

#include "pch.h"
#include "framework.h"
#include "MFCprojectAmitOmer.h"
#include "MFCprojectAmitOmerDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCprojectAmitOmerDlg dialog

CMFCprojectAmitOmerDlg::CMFCprojectAmitOmerDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MFCPROJECTAMITOMER_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCprojectAmitOmerDlg::PaintMainScreen()
{
	CPaintDC dc(this);//device context for 

    //figs menu
	CPoint Rec_Icon1(10, 110), Rec_Icon2(50, 135);
	dc.Rectangle(Rec_Icon1.x, Rec_Icon1.y, Rec_Icon2.x, Rec_Icon2.y);
	CPoint Line_Icone1(10, 155), Line_Icon2(50, 180);
	dc.MoveTo(Line_Icone1);
	dc.LineTo(Line_Icon2.x, Line_Icon2.y);
	CPoint Elipse_icon1(5, 205), Elipse_icon2(60, 240);
	dc.Ellipse(Elipse_icon1.x, Elipse_icon1.y, Elipse_icon2.x, Elipse_icon2.y);
	CPoint Square_icon1(20, 265), Square_icon2(50, 295);
	dc.Rectangle(Square_icon1.x, Square_icon1.y, Square_icon2.x, Square_icon2.y);
	CPoint p1(20, 315), p2(10, 345), p3(50, 345), p4(60, 315);
	CPoint paral[4] = { p4,p3,p2,p1 };
	dc.Polygon(paral, 4);
	CPoint p5(30, 365), p6(15, 385), p7(30, 405), p8(45, 385);
	CPoint Rhombus[4] = { p8,p7,p6,p5 };
	dc.Polygon(Rhombus, 4);

	CRect rect;
	GetClientRect(&rect);
	CFont font;
	font.CreatePointFont(400, _T("Impact"));
	CFont* oldFont = dc.SelectObject(&font); dc.SetBkMode(TRANSPARENT);
	CString string = _T("Painter");
	rect.OffsetRect(0, -480);
	dc.SetTextColor(RGB(255, 0, 0)); dc.DrawText(string, &rect, DT_SINGLELINE |
		DT_CENTER | DT_VCENTER);
	rect.OffsetRect(-2, -2);
	dc.SetTextColor(RGB(255, 255, 0)); dc.DrawText(string, &rect, DT_SINGLELINE |
		DT_CENTER | DT_VCENTER);
	rect.OffsetRect(-4, -4);
	dc.SetTextColor(RGB(0, 255, 0)); dc.DrawText(string, &rect, DT_SINGLELINE | DT_CENTER | DT_VCENTER);
	rect.OffsetRect(-6, -6);
	dc.SetTextColor(RGB(0, 0, 255)); dc.DrawText(string, &rect, DT_SINGLELINE |
		DT_CENTER | DT_VCENTER);
	rect.OffsetRect(-8, -8);
	
	dc.SelectObject(oldFont);

	
	for (int i = 0; i < figs.GetSize(); i++) {
		figs[i]->Draw(&dc);
	}
	CDialogEx::OnPaint();
}

void CMFCprojectAmitOmerDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CMFCprojectAmitOmerDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
	ON_BN_CLICKED(IDC_RADIO1, &CMFCprojectAmitOmerDlg::OnBnClickedRadio1)
	ON_BN_CLICKED(IDC_RADIO2, &CMFCprojectAmitOmerDlg::OnBnClickedRadio2)
	ON_BN_CLICKED(IDC_RADIO3, &CMFCprojectAmitOmerDlg::OnBnClickedRadio3)
	ON_BN_CLICKED(IDC_RADIO4, &CMFCprojectAmitOmerDlg::OnBnClickedRadio4)
	ON_BN_CLICKED(IDC_RADIO5, &CMFCprojectAmitOmerDlg::OnBnClickedRadio5)
	ON_BN_CLICKED(IDC_RADIO6, &CMFCprojectAmitOmerDlg::OnBnClickedRadio6)
	ON_BN_CLICKED(IDC_BUTTON1, &CMFCprojectAmitOmerDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CMFCprojectAmitOmerDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CMFCprojectAmitOmerDlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CMFCprojectAmitOmerDlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &CMFCprojectAmitOmerDlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &CMFCprojectAmitOmerDlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_CHECK1, &CMFCprojectAmitOmerDlg::OnBnClickedCheck1)
END_MESSAGE_MAP()

// CMFCprojectAmitOmerDlg message handlers

BOOL CMFCprojectAmitOmerDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here
	CheckRadioButton(IDC_RADIO1, IDC_RADIO6, IDC_RADIO1);
	

	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMFCprojectAmitOmerDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		PaintMainScreen();

	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMFCprojectAmitOmerDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CMFCprojectAmitOmerDlg::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
	

	startP = point;
	isPressed = true;
	
		switch (futureFigureKind)
		{
		case 1:
			figs.Add(new RectangleFig(startP, startP,mPenColor, Thickness));
			tmpfigureStack.push(new RectangleFig(startP, startP, mPenColor, Thickness));
			break;
		case 2:
			figs.Add(new EllipseFig(startP, startP, mPenColor,Thickness));
			tmpfigureStack.push(new EllipseFig(startP, startP, mPenColor,Thickness));
			break;
		case 3:
			figs.Add(new LineFig(startP, startP, mPenColor, Thickness));
			tmpfigureStack.push(new LineFig(startP, startP, mPenColor, Thickness));
			break;
		case 4:
			figs.Add(new SquareFig(startP, startP, mPenColor, Thickness));
			tmpfigureStack.push(new SquareFig(startP, startP, mPenColor, Thickness));
			break;
		case 5:
			figs.Add(new parallelogramFig(startP, startP,mPenColor, Thickness));
			tmpfigureStack.push(new parallelogramFig(startP, startP, mPenColor, Thickness));
			break;
		case 6:
			figs.Add(new RhombusFig(startP, startP, mPenColor, Thickness));
			tmpfigureStack.push(new RhombusFig(startP, startP, mPenColor, Thickness));
			break;
		}
	
	CDialogEx::OnLButtonDown(nFlags, point);
}
void CMFCprojectAmitOmerDlg::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
	if (isPressed)
	{
			endP = point;
			isPressed = false;
			figs[figs.GetSize() - 1]->Redefine(startP, endP);
			tmpfigureStack.top()->Redefine(startP, endP);
			Invalidate();
		
	}
			
	CDialogEx::OnLButtonUp(nFlags, point);
}
void CMFCprojectAmitOmerDlg::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
	
	CClientDC dc(this);
	CString str;
	str.Format(_T("X:%d , Y:%d"), point.x, point.y);
	dc.TextOutW(1600, 1080, str);

		if (isPressed)
		{
			
			endP = point;
			figs[figs.GetSize() - 1]->Redefine(startP, endP);
			tmpfigureStack.top()->Redefine(startP, endP);
			Invalidate(); //simulates the WM_PAINT message to redraw window
	
		}
	
	CDialogEx::OnMouseMove(nFlags, point);
}
void CMFCprojectAmitOmerDlg::OnBnClickedRadio1()
{
	// TODO: Add your control notification handler code here
	futureFigureKind = 1;
}
void CMFCprojectAmitOmerDlg::OnBnClickedRadio2()
{
	// TODO: Add your control notification handler code here
	futureFigureKind = 2;
}
void CMFCprojectAmitOmerDlg::OnBnClickedRadio3()
{
	// TODO: Add your control notification handler code here
	futureFigureKind = 3;
}
void CMFCprojectAmitOmerDlg::OnBnClickedRadio4()
{
	// TODO: Add your control notification handler code here
	futureFigureKind = 4;
}


void CMFCprojectAmitOmerDlg::OnBnClickedRadio5()
{
	// TODO: Add your control notification handler code here
	futureFigureKind = 5;
}


void CMFCprojectAmitOmerDlg::OnBnClickedRadio6()
{
	// TODO: Add your control notification handler code here
	futureFigureKind = 6;
}


void CMFCprojectAmitOmerDlg::OnBnClickedButton1()//SAVE files
{
	// TODO: Add your control notification handler code here

	CFileDialog dlg(FALSE, _T(" .fs"), NULL, 0, _T("Figures (* .figs)| *.figs|ALL Files (*.*) | *.* ||"));
	CString filename;
	if (dlg.DoModal() == IDOK)
	{
		filename = dlg.GetPathName();
		CFile file(filename, CFile::modeCreate | CFile::modeWrite);
		CArchive archive(&file, CArchive::store);
		figs.Serialize(archive);
		archive.Close();
		file.Close();
	}
}


void CMFCprojectAmitOmerDlg::OnBnClickedButton2()//LOAD Files
{
	// TODO: Add your control notification handler code here
	CFileDialog dlg(TRUE, _T(" .fs"), NULL, 0, _T("Figures (* .figs)| *.figs|ALL Files (*.*) | *.* ||"));
	CString filename;
	if (dlg.DoModal() == IDOK)
	{
		filename = dlg.GetPathName();
		CFile file(filename, CFile::modeRead);
		CArchive archive(&file, CArchive::load);
		figs.Serialize(archive);
		archive.Close();
		file.Close();
		Invalidate();
	}
}


void CMFCprojectAmitOmerDlg::OnBnClickedButton3() //redo button
{
	// TODO: Add your control notification handler code here
	if (!tmpfigureStack.empty())
	{
		Figure* tmpfig = tmpfigureStack.top();
		figs.Add(tmpfig);
		tmpfigureStack.pop();
		Invalidate();
	}

}


void CMFCprojectAmitOmerDlg::OnBnClickedButton4() //undo button
{
	// TODO: Add your control notification handler code here
	if (figs.GetSize() > 0)
	{
		Figure* tmpfig = figs[figs.GetSize() - 1];
		figs.RemoveAt(figs.GetSize() - 1);
		tmpfigureStack.push(tmpfig);
		Invalidate();
	}
	
}


void CMFCprojectAmitOmerDlg::OnBnClickedButton5()//delete all
{
	// TODO: Add your control notification handler code here
	figs.RemoveAll();
	while (!tmpfigureStack.empty())
	{
		tmpfigureStack.pop();
	}
	Invalidate();
}


void CMFCprojectAmitOmerDlg::OnBnClickedButton6()//Color
{
	// TODO: Add your control notification handler code here
	CColorDialog colorWindow;
	if (colorWindow.DoModal() == IDOK) {
		mPenColor = colorWindow.GetColor();
	}
}


void CMFCprojectAmitOmerDlg::OnBnClickedCheck1()
{
	// TODO: Add your control notification handler code here
	if (Thickness !=1)
	{
		Thickness = 1;
	}
	else
	{
		Thickness = 3;
	}
}
