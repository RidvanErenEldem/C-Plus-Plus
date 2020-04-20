#include <iostream>

using namespace std;

class Ornek 
{
	private:
		int veri; 
	public:
		void veri_ata(int a)
		{
			veri = a;
		}
		void veri_yaz()
		{
			cout << "Girilen deger = " << veri<< endl;
		}
};

main()
{
	Ornek o1;
	o1.veri_ata(15);
	o1.veri_yaz();
	o1.veri_ata(20);
	o1.veri_yaz();
}
