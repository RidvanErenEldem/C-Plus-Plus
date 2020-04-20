#include <iostream>
#include <cstring>

using namespace std;

main()
{
	char str1[10] ="Hello";
	char str2[10] ="World !";
	char str3[10];
	strcpy(str3, str1);
	cout << str3 << endl;
	strcat(str1, str2);
	cout << str1 << endl;
}
