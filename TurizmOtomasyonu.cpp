#include <iostream>
using namespace std;
#include "Musteri.h"
#include "Kullanicilar.h"
#include "Yonetici.h"

int main()
{
	int sec;
	Yonetici y("Burak","Altundas", 45,1905);
	Musteri m("Hasan Ali", "Kaldirim", 3, 1);
	Musteri m1("Yunus", "Akgun", 17, 2);
	Musteri m2("Kerem", "Akturkoglu", 7, 3);
	Musteri m3("Irfan", "Kahveci", 10, 4);
	Musteri m4("Semih", "Kilicsoy", 9, 5);
	Musteri m5("Kenan","Yildiz",19,6);
	Musteri arr[] = { m,m1,m2,m3,m4,m5 };
	

	do {
		y.welcome();
		cout <<"Yapmak Istediginiz Islemi Seciniz : \n1 - Yonetici Olarak Giris(Sifreli)\n2 - Kullanici Girisi\n3 - Cikis Yap(Musteri Bilgileri Silinecek!!!)" << endl;
		cin >> sec;
		switch (sec) {
		case 1:
			int sifre, id;
			cout << "ID nizi Giriniz:" << endl;
			cin >> id;
			cout << "Giris Yapmak Icin Yonetici Sifresini Giriniz:" << endl;
			cin >> sifre;

			if (y.getYoneticiSifre() == sifre && y.getID() == id)
			{
				int secim;
				cout << "Basariyla Giris Yapildi\nYapmak Istediginiz Islemi Seciniz\n1-Musteri Bilgileri\n2-Mevcut Musteri Sayisi" << endl;
				cin >> secim;
				switch(secim){
				case 1:y.musteriBilgileri(arr,arr->getCount());

				break;
				case 2:cout<<arr->getCount() <<endl;
					break;
					}
				case 3:
				break;

				}
			else {

				cout << "Yanlis Sifre Girdiniz Tekrar Deneyiniz" << endl;
				break;
			}
			break;
		case 2:
			int oda, gece, kisi;
			cout << "Kalmak Istediginiz Odayi Seciniz:\n1-Standart Oda(2000TL)\n2-Aile Odasi(3000)\n3-Suit(5000)\n4-VIP(7000)" << endl;
			cin >> oda;
			cout << "Kalinacak Gece Sayisi:" << endl;
			cin >> gece;
			m.ucretHesapla(oda, gece);
			do {
				cout << "Kisi Sayisi:(Max 4)" << endl;
				cin >> kisi;
				m.kisiSayisi(kisi);
			} while (kisi>4 || kisi<1);
			m.ucretYazdir();
			break;
		}
		
			

	} while (sec!=3);
	


}
