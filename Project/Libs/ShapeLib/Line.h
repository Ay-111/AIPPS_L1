#pragma once
#include "ColoredPoint.h"

class Line
{
protected:
	//Точки задающие прямую
	ColoredPoint *begin;
	ColoredPoint *end;
public:
	Line(void); //кординаты прямой устанавливаются в 0
	Line(double _x,double _y);

	void SetLine(); //установка значения двух точек

	void GetLine();//вывод координат линии
	~Line();
};