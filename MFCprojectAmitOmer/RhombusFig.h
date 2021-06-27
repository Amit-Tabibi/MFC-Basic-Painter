#pragma once
#include "parallelogramFig.h"
class RhombusFig :
    public parallelogramFig
{
	DECLARE_SERIAL(RhombusFig)

public:
	RhombusFig();
	RhombusFig(CPoint p1, CPoint p2, COLORREF iPenColor,int iThickness);
	void Draw(CDC* dc) const;
};

