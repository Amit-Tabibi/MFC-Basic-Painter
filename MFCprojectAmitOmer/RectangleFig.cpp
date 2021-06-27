#include "pch.h"
#include "RectangleFig.h"

IMPLEMENT_SERIAL(RectangleFig, CObject, 1)


RectangleFig::RectangleFig()
{
}

RectangleFig::RectangleFig(CPoint p1, CPoint p2, COLORREF iPenColor,int iThickness):parallelogramFig(p1,p2,iPenColor, iThickness)
{
}

void RectangleFig::Draw(CDC* dc) const
{
	CPen myPen1(PS_SOLID, mThickness, mPenColor);
	CPen* oldPen;
	oldPen = dc->SelectObject(&myPen1);

	CPoint p1 = getP1();
	CPoint p2 = getP2();
	dc->Rectangle(p1.x, p1.y, p2.x, p2.y);
	
}
