#include <iostream>
#include <limits>

using namespace std;

main()
{
	int i = 0;
	cout << "Bir sayi giriniz: ";
	while (!(cin >> i))
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(),'\n');
		cout << "Yanlis giris yaptiniz \nBir sayi giriniz: ";
	}
	cout << "Girilen sayi: " << i;
}
