#include "Kullanicilar.h"
#ifndef MUSTERI_H
#define MUSTERI_H
#include <iostream>
using namespace std;

class Musteri:public Kullanicilar{
private:
	int tutar = 0, odaNo;
	static int count;
public:
	
	Musteri(string isim ,string soyisim,int id,int odaNo):Kullanicilar(isim,soyisim,id),odaNo(odaNo) {
		count++;
	};
	~Musteri() {
	cout << isim << " " << soyisim << " Silindi" << endl;
	}
	void setCount(int x) {
	this->count = x;
	}
	int getCount() {
		return this->count;
	}
	void setTutar(int x) {
		this->tutar = x;
	}
	int getTutar(){
		return this->tutar;
	}
	void setOdaNo(int x) {
		this->odaNo = x;
	}
	int getOdaNo() {
		return this->odaNo;
	}

	int kisiSayisi(int x) {
		if (x == 1) {
			tutar /=2 ;
		}
		else if (x == 2) {
			tutar = tutar;
		}
		else if (x == 3) {
			tutar *=2;
		}
		else if (x == 4) {
			tutar *=2.5 ;
		}
		else {
			cout << "Tekrar Deneyiniz!!!" << endl;
		}
		return tutar;
	}
	
	double ucretHesapla(int x,int y ) {
		
		if (x==1){
			tutar = 2000 * y;
		}
		else if (x == 2) {
			tutar = 3000 * y;
		}
		else if (x == 3) {
			tutar = 5000 * y;
		}
		else if (x == 4) {
			tutar = 7000 * y;
		}
		else {
			cout << "Tekrar Deneyiniz!!!" << endl;
		}
		
		return tutar;
	}
	void ucretYazdir() {
		cout << "Toplam Oda Ucreti:" << tutar<<endl;
	}


};

int Musteri::count=0;

#endif // MUSTERI_H