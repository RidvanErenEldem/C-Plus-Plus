#include <iostream>
#include <cstring>

using namespace std;

class dizi {
	int x;
	public :
		dizi(int n)
		{
			x = n;
		}
		int oku()
		{
			return x;
		}
};

int main()
{
	dizi d[5] = {2,8,5,0,9};
	dizi *p;
	int i;
	p=d;
	for (i=0;i<5;i++)
	{
		//cout << p->oku() << endl
		cout << (*p).oku() << endl;
	}
}
