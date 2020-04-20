#include <iostream>

using namespace std;

class testsinif{
	public:
		int x,y;
		testsinif ()
		{
			x = 0;
			y = 0;
		}
		testsinif (int, int);
		testsinif operator+ (testsinif); // donustipi operetor(operator) sinifadi
};

testsinif::testsinif(int koorX, int koorY)
{
	x = koorX;
	y = koorY;
}

testsinif testsinif::operator+(testsinif param)
{
	testsinif gecici;
	gecici.x = x+param.x;
	gecici.y = y+param.y;
	return gecici;
}

int main()
{
	testsinif a(3,5);
	testsinif b(8,10);
	testsinif c;
	c = a+b;
	cout << c.x << endl << c.y;
}
