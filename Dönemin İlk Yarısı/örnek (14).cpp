#include <iostream>

using namespace std;

main()
{
	int i=0;
	for(;i<10;i++)
	{
		if(i==3)
		{
			continue;
		}
		cout<<i<<endl;
	}
}

