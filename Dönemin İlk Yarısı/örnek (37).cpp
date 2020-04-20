#include <iostream>

using namespace std;

class Line
{
	double uzunluk;
	public:
		void set_uzunluk (double l)
		{
			uzunluk = l;
		}
		double get_uzunluk (void)
		{
			return uzunluk;
		}
		Line()
		{
			cout << "olusturuldu\n";
		}
		~Line()
		{
			cout << "\niptal edildi";
		}
};

int main()
{
	Line l1;
	l1.set_uzunluk(5);
	cout << l1.get_uzunluk();
	Line l2;
	return 0;
}
