#include <iostream>
#include <cstring>

using namespace std;
class kamyon;

class araba
{
	int hiz;
	public:
		araba(int h)
		{
			hiz =h;
		}
		friend int fark(araba a, kamyon b);
};
	
class kamyon
{
	int hiz;
	public :
		kamyon (int h)
		{
			hiz = h;
		}
		friend int fark(araba a, kamyon b);
};

int fark(araba a, kamyon b)
{
	return a.hiz-b.hiz;
}
int main()
{
	araba a(180);
	kamyon b(100);
	cout << fark(a,b);
	return 0;
}
