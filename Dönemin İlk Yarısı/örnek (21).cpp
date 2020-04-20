#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

main()
{
	int kelimesay=1, krsay=0;
	char ch;
	cout << "Cümle giriniz: ";
	while(ch!='\r') //enter kontrolü
	{
		ch = getche();
		if (ch == ' ')
			kelimesay++;
		else
			krsay++;
	}
	cout << "\nkelime sayisi = " << kelimesay;
	cout << "\nkarakter  sayisi = " << krsay-1;
}
