#include <iostream>

using namespace std;

class Kisi {
	public:
		string adi;
		string soyadi;
};

main()
{
	Kisi k1;
	k1.adi = "Ahmet";
	k1.soyadi = "ak";
	cout << k1.adi << " " << k1.soyadi;
}
