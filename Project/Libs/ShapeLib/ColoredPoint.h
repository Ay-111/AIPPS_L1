#pragma once
#include "Point.h"
#include <string>
//��������� ����������� ���� �� ���� �����������
struct Color
	{
		char red;
		char green;
		char blue;
	};

class ColoredPoint : public Point
{
protected:
	Color color; //���� �����
public:
	//��������� ������������ ����������� ��������� ����� 
	//� ���������� ��������� �����������
	ColoredPoint(void);
	ColoredPoint(double, double);

	//������ �������������� � ������ Point

	void SetXY(double, double);
	void SetXY();

	//��������� ����� ���������� ���������
	void SetColor(Color);
	void SetColor(unsigned char, unsigned char, unsigned char);

	//������ �������������� � ������ Point
	void GetXY(void) ;


	Color GetColor(void) const; //��������� �������� ���� �����

	//��������� ����������� ����� ��� �����
	static const Color white;
	static const Color black;
	static const Color red;
	static const Color green;
	static const Color blue;
};