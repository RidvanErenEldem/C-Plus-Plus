#include <iostream>

using namespace std;

class Box {
	double genislik;
	double yukseklik;
	double derinlik;
	
	public:
		void setgenislik (double a);
		void setyukseklik (double b);
		void setderinlik (double c);
		double gethacim(void);
};

void Box::setderinlik(double c)
{
	derinlik = c;
}
void Box::setgenislik(double b)
{
	genislik = b;
}
void Box::setyukseklik(double a)
{
	yukseklik =a;
}
double Box::gethacim(void)
{
	return derinlik*yukseklik*genislik;
}

main()
{
	Box b1;
	b1.setderinlik(10);
	b1.setgenislik(20);
	b1.setyukseklik(5);
	cout << "Hacim = " << b1.gethacim();
	
}
