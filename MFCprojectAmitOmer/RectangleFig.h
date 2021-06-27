#pragma once
#include "parallelogramFig.h"
class RectangleFig :public parallelogramFig
{
	DECLARE_SERIAL(RectangleFig)  
	
public:

	RectangleFig();
	RectangleFig(CPoint p1, CPoint p2, COLORREF iPenColor,int iThickness);
	void Draw(CDC* dc) const;
	
};

