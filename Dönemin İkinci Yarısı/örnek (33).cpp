#include <iostream>
#include <vector>

// vector<int> degisken adi;

using namespace std;

int main()
{
	vector<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(15);
	d[0] = 30;
	d.pop_back();
	cout << d.back()<< endl;
	for(int i=0;i< d.size();i++)
		cout << d[i] << endl;
}
