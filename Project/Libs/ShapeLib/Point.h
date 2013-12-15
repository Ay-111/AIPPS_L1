#pragma once

class Point
{
protected: //координаты точки
double x;
double y;
public:

void SetXY(double, double); //установить оба значения

void SetXY();//установка значений,ввод с клавиатуры

void GetXY();//вывести кординаты точки на экран

};