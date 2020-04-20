#include <iostream>

using namespace std;

main()
{
	int i;
	cout << "Bir sayi giriniz: ";
	cin >> i;
	if(i%2 == 0)
		cout << "sayi ciftdir";
	else
		cout << "sayi tekdir";
}
