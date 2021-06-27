#include "pch.h"
#include "parallelogramFig.h"

IMPLEMENT_SERIAL(parallelogramFig, CObject, 1)

parallelogramFig::parallelogramFig()
{
}

parallelogramFig::parallelogramFig(CPoint p1, CPoint p2, COLORREF iPenColor,int iThickness):Figure(p1,p2,iPenColor, iThickness)
{
}

void parallelogramFig::Draw(CDC* dc) const
{
	CPen myPen1(PS_SOLID, mThickness, mPenColor);
	CPen* oldPen;
	oldPen = dc->SelectObject(&myPen1);

	CPoint p1 = getP1();
	CPoint p2 = getP2();

	CPoint p3(p2.x - 100, p1.y), p4(p1.x + 100, p2.y);
	CPoint paral[4] = { p4,p2,p3,p1 };
	dc->Polygon(paral, 4);

}
