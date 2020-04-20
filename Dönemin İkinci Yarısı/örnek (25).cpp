// find(baþlangýç,bitiþ,aranan_deger);

#include <iostream>
#include <algorithm>

using namespace std;

int dizi[] = {11,22,33,44,55,66,77,88};

int main()
{
	int *ptr;
	ptr=find(dizi, dizi+8, 33);
	cout << (ptr-dizi+1) << ". eleman";
	return 6;
}
