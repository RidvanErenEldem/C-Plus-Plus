#include <iostream>

using namespace std;

class sinifA {
	public :
		int degerA;
		sinifA()
		{
			cout << "sinifA olustu\n";
		}
		~sinifA()
		{
			cout << "sinifA yok edlildi\n";
		}
};

class sinifB {
	public :
		int degerB;
		sinifB()
		{
			cout << "sinifB olustu\n";
		}
		~sinifB()
		{
			cout << "sinifB yok edlildi\n";
		}
};

class sinifC : public sinifA, public sinifB {
	public:
		int degerC;
		sinifC()
		{
			cout << "sinifC olustu\n";
		}
		~sinifC()
		{
			cout << "sinifC yok edildi\n";
		}
};

int main()
{
	sinifC c1;
	return 0;
}
