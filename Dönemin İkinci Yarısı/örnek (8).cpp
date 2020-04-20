#include <iostream>

using namespace std;

class A {
	int degerA;
	public:
		int dondur(){
			return degerA=165;
		}
};

class B: public A
{
	int degerB;
	public :
		int f2(){
			return degerB=325;
		}
};

int main()
{
	int aa, bb;
	B ob1;
	aa=ob1.dondur();
	bb=ob1.f2();
	cout << "A = " << aa << "\n" << "B = " << bb;
	return 0;
}
