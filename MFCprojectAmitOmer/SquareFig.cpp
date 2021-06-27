#include "pch.h"
#include "SquareFig.h"

IMPLEMENT_SERIAL(SquareFig, CObject, 1)


SquareFig::SquareFig()
{
	
}

SquareFig::SquareFig(CPoint p1, CPoint p2, COLORREF iPenColor,int iThickness): RectangleFig(p1, p2, iPenColor, iThickness)
{

}

void SquareFig::Draw(CDC* dc)const
{
	CPen myPen1(PS_SOLID, mThickness, mPenColor);
	CPen* oldPen;
	oldPen = dc->SelectObject(&myPen1);

	CPoint p1 = getP1();
	CPoint p2 = getP2();

	double dx = fabs(p1.x - p2.x);
	double dy = fabs(p1.y - p2.y);
	double side = dx < dy ? dx : dy;

	double squareP1_xValue = (p1.x + p2.x) / 2 - side / 2;
	double squareP1_yValue = (p1.y + p2.y / 2) + (side / 2);
    double squareP2_xValue=(p1.x + p2.x) / 2 + side / 2;
	double squareP2_yValue = (p1.y + p2.y / 2) - (side / 2);

	dc->Rectangle(squareP1_xValue, squareP1_yValue, squareP2_xValue, squareP2_yValue);
	
}



