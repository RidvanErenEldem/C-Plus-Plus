// sort(ba�,biti�,comp)

#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

char *isimler[] = {"Ahmet", "Tu�ran" , "Hanife", "Selami", "B��ra", "Ramazan"};

bool karsilastir (char *s1, char *s2)
{
	return (strcmp(s1,s2)<0) ? true: false;
}

int main()
{
	sort(isimler, isimler +6,karsilastir);
	for (int i=0; i<6;i++)
		cout << isimler[i] << endl;
}

