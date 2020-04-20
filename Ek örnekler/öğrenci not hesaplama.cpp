#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class ogrenci{
	public :
		int no;
		int vize;
		int final;
		int ort;
		string isim;
		string soyad;
/*void Ogrenci_giris (int No, int Vize, int Final, int Ort, char *Isim, char *Soyad)
	{
		no = No;
		vize = Vize;
		final = Final;
		ort = Ort;
		strcpy(isim,Isim);
		strcpy(soyad,Soyad);
	} */
	void ortalama_hesapla ()
	{
		ort = (vize*0.4)+(final*0.6);
		cout << no << " " << isim << " " << soyad << " " << "Ortalama: " << ort;
	}
};

int main()
{
	ogrenci o1;
	cout << "Ogrenci adi giriniz: ";
	getline(cin,o1.isim);
	cout << "Ogrenci soyadi giriniz: ";
	getline(cin,o1.soyad);
	cout << "Ogrenci no giriniz: ";
	cin >> o1.no;
	cout << "Ogrenci vize notu giriniz: ";
	cin >> o1.vize;
	cout << "Ogrenci final notu giriniz: ";
	cin >> o1.final;
	
	o1.ortalama_hesapla();
}
