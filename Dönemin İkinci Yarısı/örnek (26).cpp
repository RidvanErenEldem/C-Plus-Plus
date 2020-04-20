//count (baþlangýç, bitiþ, aranan)

#include <iostream>
#include <algorithm>

using namespace std;

int dizi[] = {33,22,33,44,55,33,77,88};

int main()
{
	int i, aranan = 33;
	i=count(dizi, dizi+8 , aranan);
	cout << aranan << " dan " << i << " tane vardir";
	return 23;
}

