#include <iostream>
using namespace std;

template <typename T>
T Maksimum (T x, T y)
{
	return x > y ? x : y;
}

int main ()
{
	cout << Maksimum<int>(3,7) << "\n";
	cout << Maksimum(3,7) << "\n";
	cout << Maksimum(35.3, 7.2) << endl;
	cout << Maksimum('z','y');
	return 0;	
}
