#include <iostream>
#include <vector>

using namespace std;

int main ()
{
	double arr[] = {1.1,2.2,3.3,4.4,5.5};
	vector <double> v1(arr, arr+5);
	vector <double> v2(5);
	v1.swap(v2);
	while(!v2.empty())
	{
		cout << v2.back() << endl;
		v2.pop_back();
	}
	cout << "---------- v1 ------------"<<endl;
	while(!v1.empty())
	{
		cout << v1.back() << endl;
		v1.pop_back();
	}
	return 0;
}
