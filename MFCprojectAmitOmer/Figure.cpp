#include "pch.h"
#include "Figure.h"




Figure::Figure()
{
}

void Figure::Serialize(CArchive& archive)
{
	CObject::Serialize(archive);
	if (archive.IsStoring())
	{
		archive << P1;
		archive << P2;
		archive << mPenColor;
		archive << mThickness;
	}
	else // Loading, not storing
	{
		archive >> P1;
		archive >> P2;
		archive >> mPenColor;
		archive >> mThickness;
	}
}


CPoint Figure::getP1() const
{
	return P1;

}

CPoint Figure::getP2() const
{
	return P2;
}

void Figure::Redefine(CPoint p1, CPoint p2)
{
	P1 = p1; P2 = p2;
}

bool Figure::isInside(const CPoint& P) const
{
	return (P1.x <= P.x && P.x <= P2.x || P1.x >= P.x && P.x >= P2.x) &&
		(P1.y <= P.y && P.y <= P2.y || P1.y >= P.y && P.y >= P2.y);

}

void Figure::Shift(int dx, int dy)
{
	P1 = P1 + CPoint(dx, dy);
	P2 = P2 + CPoint(dx, dy);
}

COLORREF Figure::GetColor() const
{
	return mPenColor;
}
