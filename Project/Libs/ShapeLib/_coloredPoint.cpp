
#include "ColoredPoint.h"
#include <iostream>
using namespace std;



string color;
ColoredPoint::ColoredPoint()
	{
	x=0;
	y=0;
	};

	void ColoredPoint::SetXY()
	{
		cout<<"vedite X "<<endl;
		cin>>x;
		cout<<"vedite Y "<<endl;
		cin>>y;
	};
	void ColoredPoint::GetXY()
	{
		cout<<"( "<<x<<","<<y<<" )"<<endl;
	};
	void ColoredPoint::SetXY(double _x,double _y)
	{
		x=_x;
		y=_y;
	};
