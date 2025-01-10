#include <iostream>
#include <string>

using namespace std;

struct Gonderen
{
    string adi_soyadi, adres;
    int telefon_no;
};

struct Alici
{
    string adi_soyadi, adres;
    int telefon_no;
};

struct Gonderi
{
    int gonderi_no, agirlik;
    string hacim;
    int ucret;
    char garanti;
};

struct Kurye
{
    string adi_soyadi;
    int telefon_no;
};

struct Siparis
{
    Gonderen gonderen;
    Alici alici;
    Gonderi gonderi;
    Kurye kurye;
};

void detayYazdir(Siparis siparis)
{
    cout << "Gonderen: " << siparis.gonderen.adi_soyadi << ", Adres: " << siparis.gonderen.adres << ", Telefon No: " << siparis.gonderen.telefon_no << endl;
    cout << "Alici: " << siparis.alici.adi_soyadi << ", Adres: " << siparis.alici.adres << ", Telefon No: " << siparis.alici.telefon_no << endl;
    cout << "Gonderi No: " << siparis.gonderi.gonderi_no << ", Agirlik: " << siparis.gonderi.agirlik << ", Hacim: " << siparis.gonderi.hacim << ", Ucret: " << siparis.gonderi.ucret << ", Garanti: " << siparis.gonderi.garanti << endl;
    cout << "Kurye: " << siparis.kurye.adi_soyadi << ", Telefon No: " << siparis.kurye.telefon_no << endl<<endl;
}

int main()
{
    Siparis siparis1, siparis2, siparis3, siparis4, siparis5;

    siparis1.gonderen = {"Hayko Cepkin", "Izmir/Merkez", 511111};
    siparis1.alici = {"Sebnem Ferah", "Isparta/Merkez", 511123};
    siparis1.gonderi = {816861, 8, "2x2", 650, 'E'};
    siparis1.kurye = {"Sezen Aksu", 51111563};
    
    siparis2.gonderen = {"Ahmet Kara", "Ankara/Merkez", 511112};
    siparis2.alici = {"Mehmet Kara", "Trabzon/Merkez", 511113};
    siparis2.gonderi = {32116168, 12, "5x2", 800, 'H'};
    siparis2.kurye = {"Mustafa Kara", 511111551};
    
    siparis3.gonderen = {"Caner Dagci", "Kilis/Merkez", 5536112};
    siparis3.alici = {"Enes KELES", "Trabzon/Merkez", 516813};
    siparis3.gonderi = {6165688, 20, "2x1", 350, 'H'};
    siparis3.kurye = {"Mehmet Yilmaz", 51114551};
    
    siparis4.gonderen = {"Yakup Kadri", "Kastamonu/Merkez", 51684165};
    siparis4.alici = {"Ozan Tas", "Kocaeli/Merkez", 5846848};
    siparis4.gonderi = {5651651, 5, "10x15", 200, 'E'};
    siparis4.kurye = {"Eren Kopan", 5198165};
    
    siparis5.gonderen = {"Halil Rakta", "Adana/Merkez", 5651986};
    siparis5.alici = {"Arda Namýk", "Trabzon/Merkez", 516813};
    siparis5.gonderi = {165165, 20, "2x1", 650, 'E'};
    siparis5.kurye = {"Baris Haktan", 56854684};

    detayYazdir(siparis1);
    detayYazdir(siparis2);
    detayYazdir(siparis3);
    detayYazdir(siparis4);
    detayYazdir(siparis5);

    return 0;
}
