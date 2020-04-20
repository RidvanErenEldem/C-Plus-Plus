#include <iostream>

using namespace std;

class dortgen{
	protected:
		int genislik, yukseklik;
	public:
		void set_values(int a, int b)
		{
			genislik = a;
			yukseklik = b;
		}
		virtual int area()
		{
			return 0;
		}
		
};

class Dikdortgen: public dortgen {
	public :
		int area ()
		{
			return genislik*yukseklik;
		}
};

class Ucgen: public dortgen {
	public:
		int area ()
		{
			return (genislik*yukseklik)/2;
		}
};

int main ()
{
	Dikdortgen d1;
	Ucgen u1;
	dortgen dortgen1;
	dortgen *dort1 = &d1;
	dortgen *dort2 = &u1;
	dortgen *dort3 = &dortgen1;
	
	dort1->set_values(3,5);
	dort2->set_values(10,8);
	dort3->set_values(6,7);
	
	cout << "Dikdortgen = " << dort1->area() << "\nUcgen = " << dort2->area() << "\nDortgen = " << dort3->area();
	
	
}
