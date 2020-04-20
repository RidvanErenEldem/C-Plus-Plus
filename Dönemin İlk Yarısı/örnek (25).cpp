#include <iostream>

using namespace std;

main()
{
	int dizi[2][3] = {{5,8,9},{18,20,15}};
	
	dizi[1][1] = 89;
	
	for (int i=0 ; i<2;i++)
	{
		for(int j=0;j<3;j++)
			cout << dizi [i][j]<< " ";
		cout << "\n";
	}
}
