#include <iostream>

using namespace std;

class sayici
{
	private:
		unsigned int sayac;
	public:
		sayici():
		sayac(0) 
		{
			
		}
		void artir () 
		{
			sayac++;
		}
		int dondur()
		{
			return sayac;
		}
		~sayici ()
		{
			
		}
		
};

int main()
{
	sayici s1,s2;
	cout << "s1 = " << s1.dondur() << "\ns2 = " << s2.dondur();
	s1.artir();
	s2.artir();
	cout << "\ns1 = " << s1.dondur() << "\ns2 = " << s2.dondur();
	return 0;
}
