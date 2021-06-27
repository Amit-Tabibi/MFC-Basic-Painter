#pragma once
#include "Figure.h"

class LineFig : public Figure
{
	DECLARE_SERIAL(LineFig)
public:
	LineFig();
	LineFig(CPoint p1, CPoint p2, COLORREF iPenColor,int iThickness);
	void Draw(CDC* dc) const;
};

