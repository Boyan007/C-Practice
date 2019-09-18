#include <iostream>
#include <cstring>
#include <iomanip>
#include <algorithm>
#include <initializer_list>
#include <exception>
//using namespace std;

class Tim{
    char ime_tima[20];
    int broj_odigranih, broj_pobjeda, broj_nerijesenih, broj_poraza, broj_datih, broj_primljenih, broj_poena;
public:
    Tim(const char ime[]);
    void ObradiUtakmicu(int broj_datih, int broj_primljenih);
    const char *DajImeTima() const;
    int DajBrojPoena() const;
    int DajGolRazliku() const;
    void IspisiPodatke() const;
};

Tim::Tim(const char ime[]): broj_odigranih(0), broj_pobjeda(0), broj_nerijesenih(0), broj_poraza(0), broj_datih(0), broj_primljenih(0), broj_poena(0){
    strcpy(ime_tima, ime);
}

void Tim::IspisiPodatke()const{
    std::cout << std::left << std::setw(20) << ime_tima << std::right << std::setw(4) << broj_odigranih << std::setw(4) << broj_pobjeda
    << std::setw(4) << broj_nerijesenih << std::setw(4) << broj_poraza << std::setw(4) << broj_datih << std::setw(4)
    << broj_primljenih << std::setw(4) << broj_poena;
}

void Tim::ObradiUtakmicu(int broj_datih, int broj_primljenih){
    if(broj_datih > broj_primljenih){broj_pobjeda++; broj_poena += 3;}
    else if(broj_datih == broj_primljenih){broj_nerijesenih++; broj_poena++;}
    else broj_poraza++;

    this->broj_datih += broj_datih; this->broj_primljenih += broj_primljenih;
    broj_odigranih++;
}

const char *Tim::DajImeTima() const{return &ime_tima[0];}

int Tim::DajBrojPoena() const{return this->broj_poena;}

int Tim::DajGolRazliku() const{return this->broj_datih - this->broj_primljenih;}

class Liga{
    int broj_timova;
    const int max_br_timova;
    Tim **timovi;
public:
    explicit Liga(int velicina_lige);
    explicit Liga(std::initializer_list<Tim> lista_timova);
    ~Liga();
    Liga(const Liga &l);//konstruktor kopije, parametri funkcije postaju kopije originala, ove kopije
    Liga(Liga &&l);//pomjerajuci konstruktor, ako je u pitanju npr funkcija, ono sto prima je privremena vrijednost, nije l-vrijednost, nego r
    Liga &operator =(const Liga &l);//kopirajuci operator dodjele, sluzi za dodjelu l-vrijednosti
    Liga &operator =(Liga &&l);//pomjerajuci operator dodjele; sluzi za dodjelu r-vrijednosti

    void DodajNoviTim(const char ime_tima[]);
    void RegistrirajUtakmicu(const char tim1[], const char tim2[], int rezultat_1, int rezultat_2);
    void IspisiTabelu();

//    Tim *begin() const { return timovi; }
//    Tim *end() const { return timovi + broj_timova; }
};

Liga::Liga(int velicina_lige): max_br_timova(velicina_lige), broj_timova(0), timovi(new Tim*[max_br_timova]){}

Liga::Liga(std::initializer_list<Tim> lista_timova): broj_timova(lista_timova.size()), max_br_timova(lista_timova.size()), timovi(new Tim*[lista_timova.size()]){
    //std::copy(lista_timova.begin(), lista_timova.end(), *timovi); // ne moze jer treba alocirati nove elemente, inicijalizaciona lista ne radi sa pokazivacima i ne daje adrese, zato nema ni operatora +
    int i(0);
    for(Tim x: lista_timova)timovi[i++] = new Tim(x); // kada imamo dvostruke pokazivace, svaki leement treba alocirati, a ne dodjeliti; zato ne radi copy
}

Liga::~Liga(){
    for(int i(0); i<broj_timova; i++)delete timovi[i];
    delete[] timovi;
}

Liga::Liga(const Liga &l):broj_timova(l.broj_timova), max_br_timova(l.max_br_timova), timovi(new Tim*[broj_timova]){
    std::copy(l.timovi, l.timovi+l.broj_timova, timovi);
}

Liga::Liga(Liga &&l):broj_timova(l.broj_timova), max_br_timova(l.max_br_timova), timovi(l.timovi){
    l.timovi = nullptr;
}

Liga &Liga::operator =(const Liga &l){
    if(broj_timova < l.broj_timova){
        for(int i(0); i<broj_timova; i++)delete timovi[i];
        delete[] timovi;
        timovi = new Tim*[l.broj_timova];
    }
    broj_timova = l.broj_timova;
    std::copy(l.timovi, l.timovi + l.broj_timova, timovi);
    return *this;
}

Liga &Liga::operator =(Liga &&l){
    if(&l == this){
        for(int i(0); i<broj_timova; i++)delete timovi[i];
        delete[] timovi;
        timovi = l.timovi;
        broj_timova = l.broj_timova;
        l.timovi = nullptr;
    }
    return *this;
}

void Liga::DodajNoviTim(const char ime_tima[]){
    if(broj_timova == max_br_timova) throw std::domain_error("Maksimalan broj timova dostignut");
    timovi[broj_timova] = new Tim(ime_tima);
    broj_timova++;
}

void Liga::RegistrirajUtakmicu(const char tim1[], const char tim2[], int rezultat_1, int rezultat_2){
    bool neNalaziSe1(true), neNalaziSe2(true);
    int prvi_index, drugi_index;
    for(int i(0); i<broj_timova; i++){
        if(strcmp(tim1, timovi[i]->DajImeTima()) == 0){
            neNalaziSe1 = false;
            prvi_index = i;
        }
        if(strcmp(tim2, timovi[i]->DajImeTima()) == 0){
            neNalaziSe2 = false;
            drugi_index = i;
        }
    }
    if(neNalaziSe1 || neNalaziSe2) throw "Timovi sa danim imenima ne postoje";

    timovi[prvi_index]->ObradiUtakmicu(rezultat_1, rezultat_2);
    timovi[drugi_index]->ObradiUtakmicu(rezultat_2, rezultat_1);
}

void Liga::IspisiTabelu(){
    std::sort(timovi, timovi+broj_timova, [](const Tim *t1, const Tim *t2){return strcmp(t1->DajImeTima(), t2->DajImeTima()) < 0;});
    std::sort(timovi, timovi+broj_timova, [](const Tim *t1, const Tim *t2){return t1->DajBrojPoena() > t2->DajBrojPoena();});
    for(int i(0); i<broj_timova; i++){
        timovi[i]->IspisiPodatke();
        std::cout << std::endl;
    }
}

int main()
{
    /*zadatak 1
    Tim Jedan("Fazlija");
    Jedan.ObradiUtakmicu(3, 2);
    Jedan.IspisiPodatke();
    std::cout << std::endl << Jedan.DajImeTima() << std::endl;
    std::cout << Jedan.DajBrojPoena() << std::endl << Jedan.DajGolRazliku();*/

    /*zadatak 2
    Liga liga(5);
    liga.DodajNoviTim("Celik");
    liga.DodajNoviTim("Jedinstvo");
    liga.DodajNoviTim("Zeljeznicar");
    liga.DodajNoviTim("Velez");
    liga.DodajNoviTim("Sarajevo");

    liga.RegistrirajUtakmicu("Celik", "Velez", 2, 3);
    liga.RegistrirajUtakmicu("Celik", "Sarajevo", 1, 1);
    liga.RegistrirajUtakmicu("Sarajevo", "Zeljeznicar", 0, 0);
    liga.RegistrirajUtakmicu("Zeljeznicar", "Jedinstvo", 1, 0);
    liga.RegistrirajUtakmicu("Celik", "Jedinstvo", 1, 1);

    Liga liga{"Celik", "Sarajevo", "Jedinstvo", "Zeljeznicar", "Velez"};
    liga.IspisiTabelu();*/

    return 0;
}
