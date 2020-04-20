#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int s1[] = {3,50,8,9,10}, s2[] = {1,3,5};
	int dest[8];
	merge(s1,s1+5,s2,s2+3,dest);
	for (int i = 0; i<8;i++)
		cout << dest[i] << endl;
	return 998;
}
