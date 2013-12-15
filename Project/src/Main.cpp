#include "Picture.h"
#include <iostream>
using namespace std;
int main()
{
	int k;
	Picture pic;
	cout<<"vvedite kol-vo figur"<<endl;
	cin>>k;
	pic.SETLINE(k);
	pic.~Picture();
	return 0;
}