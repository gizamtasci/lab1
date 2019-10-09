#include<iostream>
#include<vector>
using namespace std;

class islemler
{
public:
	// diziyi alan constructer
	islemler(vector<int> dizi1);
	vector<int> dizi;
	
   // dizide ki en kucuk elemanı bulan fonksiyon
	int enkucuk();
  
	//dizide ki elemanların toplamanı bulan fonksiyon
	int toplam();
  
  
	// dizide ki elemanların carpimini bulan fonksiyon
	int carpim();
	

private:
	
};


