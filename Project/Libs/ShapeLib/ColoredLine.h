#pragma once
#include "Line.h"
#include "ColoredPoint.h"

class ColoredLine :public Line,ColoredPoint
{
private:
	Color color; //���� ������
public:
	ColoredLine(void); //���� �����, ��������� � 0
	void SetLine(ColoredPoint, ColoredPoint, Color); //��������� ����� � �����
	void SetColor(Color); //��������� ������ �����
	void SetColor(unsigned char, unsigned char, unsigned char); //��������� ����� �� ���� �����������
	void GetColor(Color) ; //��������� ����� �����
};