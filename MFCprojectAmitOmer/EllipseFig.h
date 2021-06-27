#pragma once
#include "Figure.h"
class EllipseFig :  public Figure
{
	DECLARE_SERIAL(EllipseFig) 
public:

	EllipseFig();
	EllipseFig(CPoint p1, CPoint p2, COLORREF iPenColor,int iThickness);
	void Draw(CDC* dc) const;

};

