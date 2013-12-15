 
#pragma once
#include "Point.h"
#include "ColoredPoint.h"
#include "Line.h"
#include "ColoredLine.h"

class Picture
{
private:
	//��������� �� ������� ������� ���������
	ColoredPoint *CPOINTS; //������� �����
	Line *LINES; //�����
	ColoredLine *CLINES; //������� �����
public:
	Picture();
	~Picture();
	void SETLINE(int _k);
	void GETLINE(int _k);
	void SETCOLORLINE(int _a);
	void SETCOLOREDPOINT(int _c);
	int SETPOLYLINE(int _f);
};	 
