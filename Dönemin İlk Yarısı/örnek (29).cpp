#include <iostream>

using namespace std;

main()
{
	int dizi[5] = {10,5,8,9,3};
	int *p;
	
	p=dizi;
	
	for(int i=0;i<5;i++)
		cout << *(p+i) << endl; 
}
