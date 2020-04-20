#include <iostream>
#include <string>

using namespace std;

main()
{
	string a;
	int i;
	int uzunluk;
	cout << "Bir kelime yazýn: ";
	getline (cin,a);
	
	uzunluk = a.length();
	
	/*for(i=0;i<=uzunluk;i++)
	{
		cout<<a[i]<<"\n";
	} */
	for(i=0;i<=a.size();i++)
	{
		cout<<a[i]<<"\n";
	}
}
