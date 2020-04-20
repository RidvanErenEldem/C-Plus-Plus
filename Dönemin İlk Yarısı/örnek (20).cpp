#include <iostream>
#include <string>

using namespace std;

main()
{
	int i = 0,uzunluk,j=0,z=0;
	string ch;
	
	cout << "Bir cumle giriniz: ";
	getline(cin,ch);
	
	uzunluk = ch.length();
	
	while (i<=uzunluk)
	{
		if (ch[i] == ' ')
		{
			j++;
			i++;
		}
		else
		{
			z++;
			i++;
		}
	}
	
	cout << "Kelime sayisi: " << j+1 << "\n" << "Bosluk sayisi: " << j << "\n" << "Karakter sayisi: " << z-1;
	
}
