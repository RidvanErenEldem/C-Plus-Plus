#include <iostream>

using namespace std;

class test {
	int sayi;
	public:
		test (int n) {
			sayi = n;
		}
		int deger ()
		{
			return sayi;
		}
};

int kare (test t1)
{
	t1= test(t1.deger()+1);
	return t1.deger()*t1.deger();
}

int kare2 (test &t1)
{
	t1=test(t1.deger()+1);
	return t1.deger()*t1.deger();
}

int main ()
{
	test a(9), b(5);
	cout << kare(a) << endl;
	cout << kare (b) << endl;
	cout << a.deger() << endl;
	cout << b.deger() << endl;
	/*-------------------------------*/
	cout << kare2(a) << endl;
	cout << kare2(b) << endl;
	cout << a.deger() << endl;
	cout << b.deger() << endl;
	
}
