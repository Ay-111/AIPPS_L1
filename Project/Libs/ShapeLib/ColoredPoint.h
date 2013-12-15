#pragma once
#include "Point.h"
#include <string>
//структура описывающа€ цвет по трем компонентам
struct Color
	{
		char red;
		char green;
		char blue;
	};

class ColoredPoint : public Point
{
protected:
	Color color; //цвет точки
public:
	//–азличные конструкторы позвол€ющие создавать точку 
	//с различными заданными параметрами
	ColoredPoint(void);
	ColoredPoint(double, double);

	//методы унаследованные у класса Point

	void SetXY(double, double);
	void SetXY();

	//установка цвета различными способами
	void SetColor(Color);
	void SetColor(unsigned char, unsigned char, unsigned char);

	//методы унаследованные у класса Point
	void GetXY(void) ;


	Color GetColor(void) const; //позвол€ет получить цвет точки

	//–азличные стандартные цвета дл€ точек
	static const Color white;
	static const Color black;
	static const Color red;
	static const Color green;
	static const Color blue;
};