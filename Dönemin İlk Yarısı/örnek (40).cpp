#include <iostream>

using namespace std;

class Sayici
{
	private:
		static int sayac;
	public:
		Sayici()
		{
			sayac++;
		}
		~Sayici()
		{
		}
		int dondur()
		{
			return sayac;	
		}		
};
int Sayici::sayac = 0;
int main ()
{
	Sayici s1;
	cout << "s1: "  << s1.dondur();
	Sayici s2;
	cout << "\ns2: " << s2.dondur();
}
