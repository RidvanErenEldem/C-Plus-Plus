#include <iostream>
#include <algorithm>

using namespace std;

double metre[] = {3.5,6.2,1.0,12.75,4.33};

void ceviri(double);

int main()
{
	for_each (metre,metre+5,ceviri);
	return -9;
}

void ceviri (double m)
{
	cout << m*100  << endl;
}
