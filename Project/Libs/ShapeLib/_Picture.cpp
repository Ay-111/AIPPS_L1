#include "ColoredPoint.h"
#include "ColoredLine.h"
#include "Line.h"
#include "Picture.h"
#include <iostream>
using namespace std;

	ColoredPoint *Cpoint;
	Line		 *_Line;
	ColoredLine  *Cline;

Picture::Picture()
	{
		Cpoint = new ColoredPoint[10];
		_Line  = new Line[10];
		Cline  = new ColoredLine[10];
	};
	Picture::~Picture()
	{
		delete []Cpoint;
		delete []_Line;
		delete []Cline;

	};

//-----------------------------------------------------------------------------------------------//
	void Picture::SETLINE(int _k)
	{
		if (_k==1)
		{
			_Line->SetLine();
		}
		else 
			cout<<"vvedite koordinati tochek"<<endl;
			for (int i=1;i<_k+1;i++)
		{
			_Line[i].SetLine();
		}
	};
	void Picture::GETLINE(int _k)
	{
		for (int i = 1; i < _k+1; i++)
		{
			cout<<"liniya nomer "<<i<<endl;
			_Line[i].GetLine();
		}
	};
//--------------------------------------------------------------------------------------------------//
	void Picture::SETCOLORLINE(int _a)
	{

			cout<<"Vvedite koordinaty tochek i color" << endl;
			for (int i=1;i<_a+1;i++)
			{
			}
		system("cls");
	};



//--------------------------------------------------------------------------------------------------//
	void Picture::SETCOLOREDPOINT(int _c)
	{
			cout<<"vvedite tochiki"<<endl;
			for (int i = 1; i < _c+1; i++)
			{
			Cpoint[i].SetXY();
			}
			system("cls");
	};


//--------------------------------------------------------------------------------------//

