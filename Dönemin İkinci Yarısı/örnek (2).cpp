#include <iostream>
#include <cstring>

using namespace std;

class testsinif
{
	int a,b;
	public :
		friend int fark(testsinif ts);
		testsinif();
};

testsinif::testsinif(){
	a=10;
	b=3;
}
int fark(testsinif ts)
{
	if(ts.a==ts.b) 
		return 1;
	return 0;
}
int main()
{
	testsinif(ts);
	if (fark(ts))
		cout << "iki deger esit";
	else
		cout << "iki deger esit degil";
		
	return 0;
}
