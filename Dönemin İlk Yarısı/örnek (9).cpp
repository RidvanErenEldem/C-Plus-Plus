#include <iostream>
#include <string>

using namespace std;

main()
{
	string ad= "muhammet", soyad= "duyar",kasma="kasma";
	cout << ad << " "<< soyad << " "<< kasma << "\n";
	cout << ad.length()<< "\n";
	cout << ad[0] << " " << soyad[0] << " " << kasma[0]<< "\n";
	soyad[0] = 'm';
	cout << ad << " "<< soyad << " "<< kasma << "\n";
}
	
