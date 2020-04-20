#include <iostream>

using namespace std;

class A {
	int degerA;
	protected :
		int dondur()
		{
			return degerA = 165;
		}
};

class B : public A{
	int degerB;
	public :
		int f2() {
			return degerB = 325;
		}
		int f3(){
			int c = dondur();
			return c;
		}
};

int main()
{
	int sayi;
	/*A a1;
	sayi = a1.dondur(); */
	B b1;
	sayi=b1.f3();
	cout << sayi;
	return 0;
}
