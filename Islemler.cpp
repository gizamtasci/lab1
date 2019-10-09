#include "Islemler.h"
islemler::islemler(vector<int> dizi1)
{
	dizi = dizi1;
}

int islemler::enkucuk()
{
	int kucuk =INT_MAX ;
	for (auto i = dizi.cbegin(); i != dizi.cend(); ++i)
	{
		
		if (*i < kucuk)
			kucuk = *i;
	}


	return kucuk;
}

int islemler::toplam()
{
	int sum = 0;
	for (auto i = dizi.cbegin(); i != dizi.cend(); ++i)
	{
		sum = sum +*i;
	
	}

	return sum;
}

int islemler::carpim()
{

	int product = 1;
	for (auto i = dizi.cbegin(); i != dizi.cend(); ++i)
	{
		product = product * *i;

	}

	return product;
}

