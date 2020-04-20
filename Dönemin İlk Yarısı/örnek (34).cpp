#include <iostream>

using namespace std;

class Ornek 
{
	private:
		int veri;
		string ad;
		char cinsiyet;
	public:
		void veri_ata(int a, string isim,char c)
		{
			veri = a;
			ad = isim;
			cinsiyet = c;
		}
		void veri_yaz()
		{
			cout << "Girilen deger = " << veri <<"	Girilen Ad = " << ad << "	Girilen Cinsiyet = "<< cinsiyet <<  endl;
		}
};

main()
{
	Ornek o1;
	o1.veri_ata(15,"Eren",'e');
	o1.veri_yaz();
	o1.veri_ata(20,"Eldem",'k');
	o1.veri_yaz();
}
