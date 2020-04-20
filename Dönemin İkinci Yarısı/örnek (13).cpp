#include <iostream>

using namespace std;

class A{ //temel sınıf
	int degerA;
	public:
		int f1()
		{
			return degerA=10;
		}
};

class B: virtual public A{
	int degerB;
	public:
		int f2()
		{
			return degerB=20;
		}
};

class C: virtual public A{
	int degerC;
	public:
		int f3()
		{
			return degerC=30;
		}
};

class D: public B, public C{
	int degerD;
	public:
		int f4()
		{
			return degerD=40;
		}
};

int main()
{
	D ob1;
	cout << "Sinif A: " << ob1.f1() << "\nSinif B: " << ob1.f2() << "\nSinif C: " << ob1.f3() << "\nSinif D: " << ob1.f4();
}
