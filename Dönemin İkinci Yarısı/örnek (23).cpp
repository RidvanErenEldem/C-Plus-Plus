#include <iostream>

using namespace std;

class testsinif{
	int x;
	public:
		testsinif (int n)
		{
			x = n;
		}
		int oku () 
		{
			return x;
		} 
};

int main()
{
	testsinif d[5] = {3,5,9,10,5};
	
	for(int i=0;i<5;i++)
		cout << d[i].oku() << "\t";
		
	return 0;
}
