#include <iostream>

using namespace std;

class test {
	int x,y;
	public :
		test (int a=0, int b=0)
		{
			this->x = a;
			this->y = b;
		}
		test &setx (int a)
		{
			x = a;
			return *this;
		}
		test &sety (int b)
		{
			y = b;
			return *this;
		}
		void yaz()
		{
			cout << "x = " << x << endl;
			cout << "y = " << y;
		}
};

int main ()
{
	test t1(3,5);
	t1.yaz();
	t1.setx(4);
	t1.yaz();
	t1.sety(10);
	t1.yaz();
	t1.setx(7).sety(8);
	t1.yaz();
}
