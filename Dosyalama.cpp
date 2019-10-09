#include "Dosyalama.h"
#include<iostream>
#include<fstream>
using namespace std;

void DosyaIslem::Okuma()
{
	ifstream txt; 
	txt.open("txt.txt");  //dosya acma
	int i = 0;

	cout << "elemanlar  :";

	while (txt>>i) //dosyadaki elemanları okur
	{
		cout << i<<" ";
		dizi.push_back(i);  //diziye ekler
	}
	

}

vector<int> DosyaIslem::DiziDondur()
{
	return dizi;
}
