#include <iostream>

using namespace std;

int mutlakdeger(int deger)
{
	if (deger < 0)
		return (deger*-1);
	else
		return deger;
}

float mutlakdeger(float deger)
{
	if (deger < 0.0)
		return (deger*-1.0);
	else
		return deger;
}

int main()
{
	int sayi1=-5;
	float sayi2 = -1.5;
	cout << mutlakdeger(sayi1)<< endl;
	cout << mutlakdeger(sayi2) << endl;
	return 0;
}
