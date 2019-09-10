#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
#include <memory>
#include <map>
//using namespace std;

/*zadatak 5
template<typename Tip>
struct Cvor{
    Tip element;
    Cvor* veza;
};*/
/* zadatak 4
std::string ZamijeniPremaRjecniku(std::string s, std::map<std::string, std::string> dict){
    int pocetak, kraj(0), i(0);
    std::string rijec;
    if(s[i] >= 'a' && s[i] <= 'z'){pocetak = 0; i++;}
    while(i < s.length()){
        if((s[i] >= 'a' && s[i] <= 'z') && s[i-1] == ' '){
            pocetak = i;
            //std::cout << s[i];
            //std::cout << pocetak << std::endl;
            //std::cout << "Testirati pocetak\t" << s[i] << std::endl;
        }
        if(s[i-1] >= 'a' && s[i-1] <= 'z'){
            //std::cout << i << std::endl;;
            if(s[i] == ' ')kraj = i;
            else if(s[i+1] == '\0')kraj = i+1;

            //std::cout << "Testirati kraj\t" << s[i] << std::endl;
        }
        if(pocetak<kraj){

            rijec = s.substr(pocetak, kraj-pocetak);
            auto it(dict.find(rijec));

            if(it == dict.end()){
                //std::cout << pocetak << std::endl;
                pocetak = i;
                kraj = i;
            }

            else{
                s = s.substr(0, pocetak) + dict[rijec] + s.substr(kraj, s.length()-kraj);
                pocetak += dict[rijec].length();
                kraj = pocetak;
                i = 0;
            }
        }
        i++;
    }
    return s;
}*/

/*zadatak 2
const int BrojPredmeta(8);
struct Datum {
    int dan, mjesec, godina;
};
struct Ucenik {
    std::string ime, prezime;
    Datum datum_rodjenja;
    int ocjene[BrojPredmeta];
    double prosjek;
    bool prolaz;
};*/

/*zadatak 1
struct Vrijeme{
    int sati, minute, sekunde;
};

void IspisiVrijeme(const struct Vrijeme &v){
    std::cout << "(hh:mm:ss) = (" << v.sati << ":" << v.minute << ":" << v.sekunde << ")";
}

struct Vrijeme SaberiVrijeme(const struct Vrijeme &v1, const struct Vrijeme &v2){
    Vrijeme Zbir{0,0,0};

    Zbir.sekunde = v1.sekunde + v2.sekunde;
    if(Zbir.sekunde >= 60){Zbir.sekunde %= 60; Zbir.minute++;}

    Zbir.minute += (v1.minute + v2.minute);
    if(Zbir.minute >= 60){Zbir.minute %= 60; Zbir.sati++;}

    Zbir.sati += (v1.sati + v2.sati);
    if(Zbir.sati >= 24)Zbir.sati %= 24;

    return Zbir;
};*/


int main()
{
    /*zadatak 1
    Vrijeme prvo{12, 15, 45}, drugo{15, 54, 44};
    IspisiVrijeme(SaberiVrijeme(prvo, drugo));*/

    /*zadatak 2
    void UnesiUcenike(std::shared_ptr<Ucenik> p_ucenici[], int broj);
    void ObradiUcenike(std::shared_ptr<Ucenik> p_ucenici[], int broj);
    void IspisiIzvjestaj(std::shared_ptr<Ucenik> p_ucenici[], int broj);
    //void OslobodiMemoriju(std::shared_ptr<Ucenik> &p_ucenici);

    int broj_ucenika;
    std::cout << "Koliko ima ucenika: ";
    std::cin >> broj_ucenika;

    std::shared_ptr<Ucenik> p_ucenici[broj_ucenika];

    UnesiUcenike(p_ucenici, broj_ucenika); // Ovo može izazvati izuzetak!!!

    ObradiUcenike(p_ucenici, broj_ucenika);
    IspisiIzvjestaj(p_ucenici, broj_ucenika);*/

    /*zadatak 4

    std::map<std::string, std::string> moj_rjecnik{{"jabuka", "apple"}, {"da", "yes"}, {"kako", "how"}, {"ne", "no"}, {"majmun", "monkey"}, {"mart", "ozujak"}, {"mart", "ožujak"}, {"maj", "svibanj"}, {"jul", "srpanj"}};

    std::cout << ZamijeniPremaRjecniku("kako da ne", moj_rjecnik);
    */
//    std::shared_ptr<int> p[5];
//    p[0] = std::make_shared<int>(5);
//    p[1] = std::make_shared<int>(2);
//
//
//    std::cout << *p[0];


    /*zadatak 5
    Cvor<int> *pocetni(nullptr), *prethodni(0);
    for(;;){
        int broj;
        std::cin >> broj;
        if(broj == 0)break;
        Cvor<int> *novi(new Cvor<int>);
        novi->element = broj; novi->veza = nullptr;
        if(!pocetni)pocetni = novi;
        else prethodni->veza = novi;
        prethodni = novi;//ovo je jako bitno, sta je sa pokazivacem, zar se i on ne prekopira?
    }

    //template<typename Tip>
    double arit(0);
    int broj_prolazaka(0);
    for(auto p(pocetni); p != nullptr; p = p->veza){
        broj_prolazaka++;
        arit += p->element;
    }
    arit = arit/broj_prolazaka; broj_prolazaka = 0;
    for(auto p(pocetni); p != nullptr; p = p->veza){
        if(p->element >= arit)broj_prolazaka++;
    }
    std::cout << broj_prolazaka;*/
    return 0;
}
/*zadatak 2
void UnesiUcenike(std::shared_ptr<Ucenik> p_ucenici[], int broj) {
    void UnesiJednogUcenika(std::shared_ptr<Ucenik> p_ucenik);
    //int i(1);
    for(int i = 0; i < broj; i++) {
        std::cout << "Unesite podatke za " << i + 1 << ". ucenika:\n";
        p_ucenici[i] = std::make_shared<Ucenik>();
        UnesiJednogUcenika(p_ucenici[i]);
    }
}
void UnesiJednogUcenika(std::shared_ptr<Ucenik> p_ucenik) {
    void UnesiDatum(Datum &datum);
    void UnesiOcjene(int ocjene[], int broj_predmeta);
    std::cout << " Ime: "; std::cin >> p_ucenik->ime;
    std::cout << " Prezime: "; std::cin >> p_ucenik->prezime;
    std::cout << " Datum rodenja (D/M/G): ";
    UnesiDatum(p_ucenik->datum_rodjenja);
    UnesiOcjene(p_ucenik->ocjene, BrojPredmeta);
}
void UnesiDatum(Datum &datum) {
    char znak;
    std::cin >> datum.dan >> znak >> datum.mjesec >> znak >> datum.godina;
}
void UnesiOcjene(int ocjene[], int broj_predmeta) {
    for(int i = 0; i < broj_predmeta; i++) {
        std::cout << " Ocjena iz " << i + 1 << ". predmeta: ";
        std::cin >> ocjene[i];
    }
}
void ObradiUcenike(std::shared_ptr<Ucenik> p_ucenici[], int broj) {
    void ObradiJednogUcenika(std::shared_ptr<Ucenik> p_ucenik);
    for(int i = 0; i < broj; i++) ObradiJednogUcenika(p_ucenici[i]);
    std::sort(p_ucenici, p_ucenici+broj,[](std::shared_ptr<const Ucenik> p_u1, std::shared_ptr<const Ucenik> p_u2) {return p_u1->prosjek > p_u2->prosjek;});
}
void ObradiJednogUcenika(std::shared_ptr<Ucenik> p_ucenik) {
    double suma_ocjena(0);
    p_ucenik->prosjek = 1; p_ucenik->prolaz = false;
    for(int ocjena : p_ucenik->ocjene) {
        if(ocjena == 1) return;
        suma_ocjena += ocjena;
    }
    p_ucenik->prolaz = true;
    p_ucenik->prosjek = suma_ocjena / BrojPredmeta;
}
void IspisiIzvjestaj(std::shared_ptr<Ucenik> p_ucenici[], int broj) {
    void IspisiJednogUcenika(std::shared_ptr<const Ucenik> ucenik);
    std::cout << std::endl;
    for(int i = 0; i < broj; i++) IspisiJednogUcenika(p_ucenici[i]);
}
void IspisiJednogUcenika(std::shared_ptr<const Ucenik> p_ucenik) {
    void IspisiDatum(const Datum &datum);
    std::cout << "Ucenik " << p_ucenik->ime << " " << p_ucenik->prezime << " roden ";
    IspisiDatum(p_ucenik->datum_rodjenja);
    if(p_ucenik->prolaz) std::cout << " ima prosjek " << std::setprecision(3) << p_ucenik->prosjek;
    else std::cout << " mora ponavljati razred";
    std::cout << std::endl;
}
void IspisiDatum(const Datum &datum) {
    std::cout << datum.dan << "/" << datum.mjesec << "/" << datum.godina;
}*/
