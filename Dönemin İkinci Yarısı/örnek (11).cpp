#include <iostream>

using namespace std;

class sinifA {
	public :
		int degerA;
		sinifA();
		~sinifA(){
			cout << "temel sinif yok edildi\n";
		}
};

class sinifB: public sinifA{
	public :
		int degerB;
		sinifB();
		~sinifB(){
			cout << "turetilmis sinif yok edildi\n";
		}
};
sinifA::sinifA()
{
	degerA=165;
}
sinifB::sinifB()
{
	degerB=250;
}

int main ()
{
	sinifB b1;
	cout << b1.degerA << endl;
	cout << b1.degerB << endl;
	
	return 0;
}
