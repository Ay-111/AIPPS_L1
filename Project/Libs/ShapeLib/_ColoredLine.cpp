#include "ColoredLine.h"
#include <iostream>
using namespace std;



	ColoredLine::ColoredLine()
	{
		
		begin->SetXY(0,0);
		end->SetXY(0,0);
	}

	void ColoredLine::GetColor(Color)
	{
		begin->GetXY();
		end->GetXY();

	}
