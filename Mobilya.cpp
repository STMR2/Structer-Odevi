#include <iostream>
#include <string>
using namespace std;

struct Iskelet {
    string malzeme;
    string birlestirme;
    string boyut;
    int miktar;
    string tarz;
};

struct Kumas
{
    int dm2agirlik;
    string dokumatipi;
    string ipliktipi;
    string kaplama;
    int miktar;
    string renk;
};

struct Mobilya
{
    Iskelet iskelet;
    Kumas kumas;
    int miktar;
    double fiyat;
};

int main()
{
	int toplam =0;
	
    Mobilya mobilyalar[10] = {
        { {"Tahta", "Mentese", "4x5", 10, "Koltuk"}, {30, "Duz Dokuma", "Pamuk", "Ahsap", 10, "Yesil"}, 2, 60 },
        { {"Metal", "Kaynak", "3x2", 8, "Masa"}, {50, "Duz Dokuma", "Polyester", "Metalik", 5, "Gri"}, 7, 80 },
        { {"Plastik", "Civili", "2x1", 20, "Tabure"}, {5, "Duz Dokuma", "Sentetik", "Plastik", 1, "Sari"}, 8, 100 },
        { {"Tahta", "Mentese", "4x1", 10, "Koltuk"}, {30, "Duz Dokuma", "Pamuk", "Ahsap", 10, "Kirmizi"}, 4, 50 },
        { {"Tahta", "Mentese", "5x2", 12, "Dolap"}, {40, "Duz Dokuma", "Keten", "Ahsap", 6, "Beyaz"}, 11, 300 },
        { {"Cam", "Yapistirma", "1x1", 5, "Vitrin"}, {60, "Ince Dokuma", "Naylon", "Cam", 2, "Siyah"}, 21, 250 },
        { {"Tahta", "Mentese", "4x2", 10, "Sandalye"}, {10, "Duz Dokuma", "Elyaf", "Ahsap", 10, "Mavi"}, 6, 150 },
        { {"Metal", "Kaynak", "4x4", 7, "Sandalye"}, {20, "Duz Dokuma", "Polyester", "Metalik", 8, "Kirmizi"}, 6, 120 },
        { {"Tahta", "Mentese", "8x4", 15, "Sehpa"}, {15, "Sik Dokuma", "Pamuk", "Ahsap", 3, "Kahverengi"}, 2, 120 },
        { {"Tahta", "Mentese", "6x2", 14, "Kanepe"}, {35, "Kalyn Dokuma", "Pamuk", "Ahsap", 9, "Mor"}, 2, 190 }
    };

    for (int i = 0; i < 10; i++) {
        cout<< "---Mobilya " << i + 1 <<"---"<< endl;
        cout<<"  Iskelet:\n";
        cout<<"    Malzeme: " << mobilyalar[i].iskelet.malzeme <<endl;
        cout<<"    Birlestirme: " << mobilyalar[i].iskelet.birlestirme <<endl;
        cout<<"    Boyut: " << mobilyalar[i].iskelet.boyut <<endl;
        cout<<"    Miktar: " << mobilyalar[i].iskelet.miktar <<endl;
        cout<<"    Tarz: " << mobilyalar[i].iskelet.tarz <<endl<<endl;
        cout<<"  Kumas:\n";
        cout<<"    DM2 Agirlik: " << mobilyalar[i].kumas.dm2agirlik << endl;
        cout<<"    Dokuma Tipi: " << mobilyalar[i].kumas.dokumatipi << endl;
        cout<<"    Iplik Tipi: " << mobilyalar[i].kumas.ipliktipi << endl;
        cout<<"    Kaplama: " << mobilyalar[i].kumas.kaplama <<endl;;
        cout<<"    Miktar: " << mobilyalar[i].kumas.miktar << endl;
        cout<<"    Renk: " << mobilyalar[i].kumas.renk <<endl;
        cout<<"  Genel Miktar: " << mobilyalar[i].miktar << endl;
        cout<<"  Adet Fiyati: " << mobilyalar[i].fiyat<<endl;
        cout<<"  Fiyat: " << mobilyalar[i].fiyat*mobilyalar[i].miktar << endl<<endl;
        toplam += mobilyalar[i].miktar*mobilyalar[i].fiyat;
    }
    
	cout << "Toplam Fiyat : " << toplam << endl;

    return 0;
}
