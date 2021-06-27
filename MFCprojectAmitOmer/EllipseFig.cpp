#include "pch.h"
#include "EllipseFig.h"

IMPLEMENT_SERIAL(EllipseFig, CObject, 1)

EllipseFig::EllipseFig()
{
}

EllipseFig::EllipseFig(CPoint p1, CPoint p2, COLORREF iPenColor,int iThickness):Figure(p1,p2,iPenColor,iThickness)
{
}

void EllipseFig::Draw(CDC* dc) const
{
	CPen myPen1(PS_SOLID, mThickness, mPenColor);
	CPen* oldPen;	
	oldPen = dc->SelectObject(&myPen1);
	CPoint p1 = getP1();
	CPoint p2 = getP2();
	dc->Ellipse(p1.x, p1.y, p2.x, p2.y);



	
}
