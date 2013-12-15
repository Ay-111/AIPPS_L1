 
#pragma once
#include "Point.h"
#include "ColoredPoint.h"
#include "Line.h"
#include "ColoredLine.h"

class Picture
{
private:
	//указатели на будущие массивы элементов
	ColoredPoint *CPOINTS; //÷ветные точки
	Line *LINES; //Ћинии
	ColoredLine *CLINES; //÷ветные линии
public:
	Picture();
	~Picture();
	void SETLINE(int _k);
	void GETLINE(int _k);
	void SETCOLORLINE(int _a);
	void SETCOLOREDPOINT(int _c);
	int SETPOLYLINE(int _f);
};	 
