#include "pch.h"
#include "LineFig.h"

IMPLEMENT_SERIAL(LineFig, CObject, 1)

LineFig::LineFig()
{
}

LineFig::LineFig(CPoint p1, CPoint p2, COLORREF iPenColor,int iThickness) :Figure(p1, p2,iPenColor, iThickness)
{
}

void LineFig::Draw(CDC* dc) const
{
	CPen myPen1(PS_SOLID, mThickness, mPenColor);
	CPen* oldPen;
	oldPen = dc->SelectObject(&myPen1);
	CPoint p1 = getP1();
	CPoint p2 = getP2();

	dc->MoveTo(p1);
	dc->LineTo(p2.x, p2.y);

}
