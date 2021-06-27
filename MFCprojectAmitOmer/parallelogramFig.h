#pragma once
#include "Figure.h"
class parallelogramFig :
    public Figure
{

	DECLARE_SERIAL(parallelogramFig)

public:

	parallelogramFig();
	parallelogramFig(CPoint p1, CPoint p2, COLORREF iPenColor,int iThickness);
	void Draw(CDC* dc) const;

};

