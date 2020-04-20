#include <iostream>

using namespace std;

class A{
	int degerA;
	public:
		int f1(){
			return degerA=10;
		}
};

class B: public A {
	int degerB;
	public:
		int f1(){
			return degerB=20;
		}
};

int main ()
{
	B ob1;
	cout << "Class A = " << ob1.A::f1() << "\nClass B = " << ob1.B::f1();
	return 0; 
}
