#include <iostream>
#include <algorithm>

using namespace std;

int main ()
{
	int s1[] = {3,4,8,999,10};
	int s2[] = {10};
	int *ptr;
	ptr = search(s1,s1+5,s2,s2+1);
	if (ptr==s1+5)
		cout << "bulunamadi";
	else
		cout << (ptr-s1+1) << " bulundu";
	return 498;
}
