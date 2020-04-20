#include <iostream>
#include <cstring>

using namespace std;

class Metin{
	private :
		enum {
			size = 80
		};
		char ad[size];
		public:
			Metin(){
				ad[0]= '\0';
			}
			Metin(char a[])
			{
				strcpy(ad,a);
			}
			
			void yaz()
			{
				cout << ad;
			}
			void birlestir(Metin s2)
			{
				if(strlen(ad)+strlen(s2.ad)<size)
					strcat(ad, s2.ad);
				else
					cout << "too many char";
			}
			~Metin()
			{
			}
};

int main ()
{
	Metin s1;
	Metin s2("havalar sogudu");
	Metin s3 = "Ogrenci sayisi az";
	cout << "s1 = ";
	s1.yaz();
	cout << "\ns2 = ";
	s2.yaz(); 
	cout << "\ns3 = ";
	s3.yaz();
	s3.birlestir(s2);
	cout << endl;
	s3.yaz();
	return 0;
}
