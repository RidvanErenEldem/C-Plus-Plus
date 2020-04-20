#include <iostream>
#include <vector>

using namespace std;

int main ()
{
	int arr[] = {100,110,120,130};
	
	vector <int> v(arr,arr+4);
	
	for(int i= 0; i<v.size();i++)
		cout << v[i] << endl;
	
	v.insert(v.begin()+2, 115);
	
	for(int i= 0; i<v.size();i++)
		cout << v[i] << endl;
	
	v.erase(v.begin()+2);
	
	for(int i= 0; i<v.size();i++)
		cout << v[i] << endl;
	return 8;
}
