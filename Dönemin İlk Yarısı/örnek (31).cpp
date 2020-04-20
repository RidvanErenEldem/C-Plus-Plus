#include <iostream>

using namespace std;
int topla(int *a)
{
	return *a+10;
}

main()
{
	int sayi = 5;
	int *p;
	p=&sayi;
	cout << "sonuc = " << topla(p);
}
