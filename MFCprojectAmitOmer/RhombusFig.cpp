#include "pch.h"
#include "RhombusFig.h"

IMPLEMENT_SERIAL(RhombusFig, CObject, 1)

RhombusFig::RhombusFig()
{

}

RhombusFig::RhombusFig(CPoint p1, CPoint p2, COLORREF iPenColor,int iThickness) :parallelogramFig(p1, p2, iPenColor, iThickness)
{

}

void RhombusFig::Draw(CDC* dc) const
{
	CPen myPen1(PS_SOLID, mThickness, mPenColor);
	CPen* oldPen;
	oldPen = dc->SelectObject(&myPen1);

	CPoint p1 = getP1();
	CPoint p2 = getP2();

	double mid_x_value = (p1.x + p2.x) / 2;
	double mid_y_value = (p1.y + p2.y) / 2;

	p1.x = mid_x_value;
	p1.y = mid_y_value + 200;

	CPoint p3(mid_x_value - 100, mid_y_value);

	p2.x = mid_x_value;
	p2.y = mid_y_value - 200;

	CPoint p4(mid_x_value + 100, mid_y_value);

	CPoint paral[4] = { p4,p2,p3,p1 };
	dc->Polygon(paral, 4);
}
