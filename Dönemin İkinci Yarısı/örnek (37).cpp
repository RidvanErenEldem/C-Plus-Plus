#include <iostream>
#include <list>

using namespace std;

int main ()
{
	list <int> l1, l2;
	int arr1[] = {40,30,20,10};
	int arr2[] = {15,20,25,30,35};
	
	for(int i=0;i<4;i++)
		l1.push_back(arr1[i]);
	for(int i = 0;i<5;i++)
		l2.push_back(arr2[i]);
	
	l1.reverse();
	
	l1.merge(l2);
	
	l1.unique();
	
	int size = l1.size();
	
	for (int i = 0; i < size; i++)
	{
		cout << l1.front() << endl;
		l1.pop_front();
	}	
	return 0;
}
