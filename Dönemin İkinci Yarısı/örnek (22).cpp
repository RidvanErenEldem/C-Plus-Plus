#include <iostream>

using namespace std;

class testsinif{
	public:
		int x,y;
		testsinif()
		{
			x = 0;
			y = 0;
		}
		testsinif(int, int);
		int operator< (testsinif param); 
		int operator> (testsinif param);
};

testsinif::testsinif(int koorX, int koorY)
{
	x= koorX;
	y= koorY;
}

int testsinif::operator>(testsinif param)
{
	return (x>param.x && y>param.y);
}

int main ()
{
	testsinif a(3,5);
	testsinif b(8,10);
	
	if (a>b)
		cout << "a nin her iki degeri b den buyuktur" << endl;
	else 
		cout << "a nin herhangi degeri b den kucuktur" << endl;
}
