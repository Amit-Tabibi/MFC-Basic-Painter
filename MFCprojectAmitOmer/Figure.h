#pragma once
#include <afx.h>
class Figure : public CObject
{

protected:
	CPoint P1;
	CPoint P2;
	COLORREF mPenColor = RGB(0, 0, 0);
	int mThickness = 1;

    public:
	Figure();
	Figure(CPoint p1, CPoint p2, COLORREF iPenColor,int iThickness) :
		P1(p1), P2(p2)
	{
		mPenColor = iPenColor;
		mThickness = iThickness;
	}
	void Serialize(CArchive& archive);
	
	virtual void Draw(CDC* dc) const = 0;
	CPoint getP1()const;
	CPoint getP2() const;
	
	virtual void Redefine(CPoint p1, CPoint p2);
	virtual bool isInside(const CPoint& P) const;
	virtual void Shift(int dx, int dy);
	virtual COLORREF GetColor() const;
};

