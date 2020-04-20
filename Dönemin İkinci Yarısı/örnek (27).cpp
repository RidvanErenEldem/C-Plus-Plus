// sort(baþlangýç, bitiþ)
#include <iostream>
#include <algorithm>

using namespace std;

int dizi[] = {-33,-7,45,1,44,226,-887,988};

int main()
{
	sort(dizi, dizi+8);
	for (int i = 0; i < 8; i++)
		cout << dizi[i] << " ";
	return 0;
}
