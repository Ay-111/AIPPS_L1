#pragma once
#include "ColoredPoint.h"

class Line
{
protected:
	//����� �������� ������
	ColoredPoint *begin;
	ColoredPoint *end;
public:
	Line(void); //��������� ������ ��������������� � 0
	Line(double _x,double _y);

	void SetLine(); //��������� �������� ���� �����

	void GetLine();//����� ��������� �����
	~Line();
};