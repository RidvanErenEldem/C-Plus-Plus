#include <iostream>

using namespace std;


void tarih(char *deger)
{
	cout << "Tarih: " << deger <<endl;
}

void tarih(int gun, int ay, int yil)
{
	cout << "Tarih: " << gun <<"/" << ay << "/" << yil << endl;
}

int main ()
{
	tarih("3/12/2019");
	tarih(3,12,2019);
	return 0;
}
