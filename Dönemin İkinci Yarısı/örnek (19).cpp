#include <iostream>
#include <string>

using namespace std;

void mesaj(int a=5, float b= 1.5,char kr='A');
void mesaj(int a, float b, char kr)
{
	cout << a << "-" << b << "-" << kr << endl;
}

int main()
{
	mesaj();
	mesaj(2);
	mesaj(2,8.3);
	mesaj(2,8.3,'b');
	mesaj(8.3);
	mesaj('a');
	return 0;
}
