#include <iostream>
#include "Kullanicilar.h"
#include "Musteri.h"
#ifndef YONETICI_H
#define YONETICI_H
using namespace std;
class Yonetici :public Kullanicilar
{
private:
	int yoneticiSifre;
public:
	Yonetici(string isim,string soyisim,int id,int yoneticiSifre) :Kullanicilar(isim, soyisim,id),yoneticiSifre(yoneticiSifre) {}

	void setYoneticiSifre(int x) {
		this->yoneticiSifre = x;
	}
	int getYoneticiSifre() {
		return this->yoneticiSifre;
	}

	void musteriBilgileri(Musteri *x,int size) {
		for (int i = 0; i < size; i++) {
			cout << "Isim:" << x[i].getIsim() << endl;
			cout << "Soyisim:" << x[i].getSoyisim() << endl;
			cout << "Oda No:" << x[i].getOdaNo() << endl;
			cout << "*************" << endl;
		}
	}
	
};
#endif // YONETICI_H
