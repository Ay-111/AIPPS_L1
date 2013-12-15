#pragma once
#include "Line.h"
#include "ColoredPoint.h"

class ColoredLine :public Line,ColoredPoint
{
private:
	Color color; //цвет прямой
public:
	ColoredLine(void); //цвет белый, кординаты в 0
	void SetLine(ColoredPoint, ColoredPoint, Color); //изменение точек и цвета
	void SetColor(Color); //изменение только цвета
	void SetColor(unsigned char, unsigned char, unsigned char); //изменение цвета по трем компонентам
	void GetColor(Color) ; //получение цвета линии
};