#include <iostream>

using namespace std;

class A{
	int degerA;
	public:
		int f1(){
			return degerA=10;
		}
};

class B{
	int degerB;
	A sinifA;
	public:
		int f1()
		{
			return degerB=20;
		}
		void getir()
		{
			cout << sinifA.f1();
		}
};

int main()
{
	B sinifB;
	cout << sinifB.f1() << endl;
	sinifB.getir();
	return 0;
}
