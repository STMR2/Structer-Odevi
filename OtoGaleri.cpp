#include <iostream>
using namespace std;

struct Otomobil
{
	string marka, model;
	int yil, km, fiyat;
	char yakit;
};

int main()
{
	Otomobil binek, suv, ticari;
	
    binek.marka = "BMW";
    binek.model = "M4 Competition";
    binek.yil = 2023;
    binek.yakit = 'B';
    binek.km = 12000;
    binek.fiyat = 12750000;

    suv.marka = "BMW";
    suv.model = "25d xDrive M Sport ";
    suv.yil = 2014;
    suv.yakit = 'D';
    suv.km = 125000;
    suv.fiyat = 2600000;

    ticari.marka = "Ford";
    ticari.model = "Transit";
    ticari.yil = 2018;
    ticari.yakit = 'G';
    ticari.km = 138000;
    ticari.fiyat = 775000;

    cout<< "---Binek Arac---" <<endl;
    cout<< "Marka: " << binek.marka <<endl;
    cout<< "Model: " << binek.model <<endl;
    cout<< "Yil: " << binek.yil <<endl;
    cout<< "Yakit: " << binek.yakit <<endl;
    cout<< "KM: " << binek.km <<endl;
    cout<< "Fiyat: " << binek.fiyat << " TL"  <<endl <<endl;

    cout<< "---SUV Arac---" << endl;
    cout<< "Marka: " << suv.marka << endl;
    cout<< "Model: " << suv.model << endl;
    cout<< "Yil: " << suv.yil << endl;
    cout<< "Yakit: " << suv.yakit << endl;
    cout<< "KM: " << suv.km << endl;
    cout<< "Fiyat: " << suv.fiyat << " TL"  <<endl <<endl;

    cout<< "---Ticari Arac---" <<endl;
    cout<< "Marka: " << ticari.marka <<endl;
    cout<< "Model: " << ticari.model << endl;
    cout<< "Yil: " << ticari.yil <<endl;
    cout<< "Yakit: " << ticari.yakit << endl;
    cout<< "KM: " << ticari.km << endl;
    cout<< "Fiyat: " << ticari.fiyat << " TL" << endl;

    return 0;
}
