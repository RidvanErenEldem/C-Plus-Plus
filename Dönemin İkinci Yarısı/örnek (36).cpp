#include <iostream>
#include <list>

using namespace std;

int main ()
{
	list <int> l1;
	
	l1.push_back(30);
	l1.push_back(40);
	l1.push_back(50);
	
	int size = l1.size();
	
	for(int i = 0;i<size;i++)
	{
		cout << l1.front() << endl;
		l1.pop_front();
	}
	return 0;	
}
