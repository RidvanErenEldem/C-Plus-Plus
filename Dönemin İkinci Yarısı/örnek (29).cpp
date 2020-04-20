#include <iostream>
#include <algorithm>

using namespace std;

double metre[] = {3.5,6.2,1.0,12.75,4.33};
double cm[5];

double ceviri(double);

int main()
{
	transform (metre, metre+5 ,cm, ceviri);
	for(int i = 0; i < 5 ;i++)
		cout << metre[i] << "m = " << cm[i] << "cm" << endl;
	return 0;
}

double ceviri(double m)
{
	return (m*100);
}

