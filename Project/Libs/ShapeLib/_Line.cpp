#include "Line.h"


	ColoredPoint *begin;
	ColoredPoint *end;

	Line::Line()
	{
		 begin = new ColoredPoint;
		 end = new ColoredPoint;
	};
	Line::~Line()
	{
		delete [] begin;
		delete [] end;
	};


	Line::Line(double _x,double _y)
	{
		begin->SetXY(_x,_y);
		end->SetXY(_x,_y);
	};

	void Line::SetLine()
	{
		begin->SetXY();
		end->SetXY();
	};

	void Line::GetLine()
	{   
		begin->GetXY();
		end->GetXY();
	};
	
