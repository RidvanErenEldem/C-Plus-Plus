#include <iostream>
#include <string>

using namespace std;

void mesaj(char m[]="computer");
void mesaj(char m[])
{
	cout << "Mesaj: " << m << endl;
}

int main()
{
	mesaj();
	mesaj("deneme");
	return 0;
}

