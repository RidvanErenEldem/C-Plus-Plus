#include <iostream>

using namespace std;

main()
{
	int x=10,y;
	y=3;
	cout << "x + y = " << x+y;
	cout << "\nx - y = " << x-y;
	cout << "\nx * y = " << x*y;
	cout << "\nx / y = " << x/y;
	cout << "\nx % y = " << x%y;
	cout << "\n++x = " << ++x;
	cout << "\n--y = " << --y;
	cout << "\nx++ = " << x++;
	cout << "\nx = " << x;
	cout << "\nx=x+3 -> " << (x=x+3);
	cout << "\nx+=3 -> " << (x+=3);
	cout << "\nx-=3 -> " << (x-=3);
	cout << "\nx*=3 -> " << (x*=3);
	cout << "\nx/=3 -> " << (x/=3);
	cout << "\nx%=3 -> " << (x%=3);
}
