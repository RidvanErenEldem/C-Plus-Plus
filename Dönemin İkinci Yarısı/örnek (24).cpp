#include <iostream>

using namespace std;

int dizi[] = {11,22,33,44,55,66,77,88};

int main ()
{
	for (int i = 0; i < 8; i++)
	{
		if (dizi[i]==33)
		{
			cout << i+1 << ". elenam" << endl;
			break;
		}
	}
	return 56;
}
