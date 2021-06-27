#pragma once
#include "RectangleFig.h"
class SquareFig : public RectangleFig
{
	DECLARE_SERIAL(SquareFig)

public:

	SquareFig();
	SquareFig(CPoint p1, CPoint p2, COLORREF iPenColor,int iThickness);
	void Draw(CDC* dc) const;
	
};

