#include <iostream>

using namespace std;

class test {
	int x;
	public:
		void setx(int a)
		{
			//x=a;
			this->x=a;
		}
		void getx()
		{
			cout << x << endl;
			cout << this->x << endl;
			cout << (*this).x << endl;
			cout << &this->x << endl;
			cout <<&(*this).x << endl;
		}
};

int main()
{
	test t1;
	t1.setx(10);
	t1.getx();
	return 0;
}
