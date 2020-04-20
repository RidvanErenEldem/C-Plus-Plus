#include <iostream>

using namespace std;

class Kutu {
	private:
		int en, boy;
	public:
		void set_deger(int a, int b)
		{
			en = a;
			boy = b;
		}
		void yaz ()
		{
			cout << "En = " << en << "\n" << "Boy = " << boy << endl;
		}
		void oku ()
		{
			cout << "En Degerini giriniz = ";
			cin >> en;
			cout << "Boy Degerini giriniz = ";
			cin >> boy;
		}
		bool kontrol ()
		{
			if (en > boy)
				return true;
			else
				return false;
		}
};

int main()
{
	Kutu k1, k2;
	k1.set_deger(3,5);
	k1.yaz();
	k2.oku();
	k2.yaz();
	cout << "k1 kontrol: " << k1.kontrol() << "\n";
	cout << "k2 kontrol: " << k2.kontrol() << "\n";
	
	// araþtýrma
	Kutu *k3 = new Kutu;
	k3->set_deger(10,20);
	k3->yaz();
	delete k3; 
	
	return 0;
}
