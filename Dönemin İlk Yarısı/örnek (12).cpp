#include <iostream>

using namespace std;

main()
{
	float vize, final, ortalama;
	bas:
	cout << "Vize notunu giriniz: ";
	cin >> vize;
	cout << "Final notunu giriniz: ";
	cin >> final;
	if	((vize >=0 && vize <=100) && (final>=0 && final<=100))
	{
		ortalama = (vize*40/100) + (final*60/100);
		
		if (ortalama < 40)
			cout << "F ile kaldin\nOrtalaman = " << ortalama;
		else if (ortalama >= 40 && ortalama < 50)
			cout << "E ile gectin\nOrtalaman = " << ortalama;
		else if (ortalama >= 50 && ortalama < 60)
			cout << "D ile gectin\nOrtalaman = " << ortalama;
		else if (ortalama >= 60 && ortalama < 70)
			cout << "C ile gectin\nOrtalaman = " << ortalama;
		else if (ortalama >=70 && ortalama < 85)
			cout << "B ile gectin\nOrtalama = " << ortalama;
		else
			cout << "A ile gectin\nOrtalama = " << ortalama;
	}
	else
	{
		cout << "Hatali Giris !\n";
		goto bas;
	}
}
