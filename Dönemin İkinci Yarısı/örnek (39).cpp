#include <iostream>
using namespace std;

template <typename T>
void artir(const T&)
{
	static int i= 10;
	
	cout << ++i << endl;
}

int main()
{
	artir(1);
	artir(2);
	return 0;
}
