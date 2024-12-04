#include <iostream>
#ifndef KULLANICILAR_H
#define KULLANICILAR_H

using namespace std;
class Kullanicilar
{
protected:
	string isim, soyisim;
	int id;
public:

	
	Kullanicilar(string isim, string soyisim ,int id):isim(isim) ,soyisim(soyisim),id(id){
	}
	
	string getIsim()  {
		return this->isim;
	}
	void setIsim(string x) {
		this->isim = x;
	}
	string getSoyisim()  {
		return this->soyisim;
	}
	void setSoyisim(string x) {
		this->soyisim = x;
	}
	int getID() {
		return this->id;
	}
	void setID(int x) {
		this->id = x;
	}
	void welcome() {
		cout << "Altundas Otele Hosgeldiniz\nYonetici:" << isim << " " << soyisim <<
			"\nKurulus:2017\nYildizlar:****\nTurizm Sertifika No:4034790\n"<<endl;
	}

};

#endif // KULLANICILAR_H