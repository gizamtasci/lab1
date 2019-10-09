#include<iostream>
#include"Dosyalama.h"
#include"Islemler.h"
using namespace std;

int main()
{
	DosyaIslem txtIslem;
	txtIslem.Okuma();
	islemler islemler1(txtIslem.DiziDondur());

	cout <<endl<< "enkucuk :" << islemler1.enkucuk() << endl;
	cout << "toplam :" << islemler1.toplam() << endl;
	cout << "carpim :" << islemler1.carpim() << endl;


	system("pause");
}
