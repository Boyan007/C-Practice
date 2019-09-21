#include <iostream>
#include <string>
#include <cmath>
#include <memory>
//using namespace std;

/*zadatak 1*/

class Lik{
    std::string naziv;
public:
    Lik(std::string s): naziv(s){}
    virtual void IspisiAtribute(){std::cout << naziv << std::endl;}
    virtual double DajObim() const {return 0;}
    virtual double DajPovrsinu() const {return 0;}
    virtual void IspisiPodatke() {this->IspisiAtribute();
    std::cout << "O = " << this->DajObim() << std::endl << "P = " << this->DajPovrsinu() << std::endl;}
    virtual Lik *DajKopiju() const = 0;
};

class Krug: public Lik{
    double r;
    static constexpr double PI = 4*atan(1);
public:
    Krug(): Lik("Krug"), r(0) {}
    Krug(double R): Lik("Krug"), r(R){}
    double DajObim() const override{return 2*r*PI;}
    double DajPovrsinu() const override{return r*r*PI;}
    virtual Lik *DajKopiju() const {return new Krug(*this);}
    friend std::istream &operator>>(std::istream &in, Krug &k);
};

std::istream &operator>>(std::istream &in, Krug &k){
    char znak;
    in >> znak >> k.r;
    return in;
}

class Pravokutnik: public Lik{
    double a, b;
public:
    Pravokutnik(): Lik("Pravokutnik"), a(0), b(0) {}
    Pravokutnik(double a, double b): Lik("Pravokutnik"), a(a), b(b){}
    double DajObim() const override{return 2*(a+b);}
    double DajPovrsinu() const override{return a*b;}
    virtual Lik *DajKopiju() const {return new Pravokutnik(*this);}
    friend std::istream &operator>>(std::istream &in, Pravokutnik &p);
};
std::istream &operator>>(std::istream &in, Pravokutnik &p){
    char znak;
    in >> znak >> p.a >> znak >> p.b;
    return in;
}
class Trokut: public Lik{
    double a, b, c;
public:
    Trokut(double a, double b, double c): Lik("Trokut"), a(a), b(b), c(c){}
    double DajObim() const override{return a+b+c;}
    double DajPovrsinu() const override{double s(a+b+c); return sqrt(s*(s-a)*(s-b)*(s-c));}
    virtual Lik *DajKopiju() const {return new Trokut(*this);}
    friend std::istream &operator>>(std::istream &in, Trokut &t);
};
std::istream &operator>>(std::istream &in, Trokut &t){
    char znak;
    in >> znak >> t.a >> znak >> t.b >> znak >> t.c;
    return in;
}

class KolekcijaLikova {
    int broj_likova, kapacitet;
    Lik **likovi;
public:
    KolekcijaLikova(int kapacitet) : broj_likova(0), kapacitet(kapacitet),
    likovi(new Lik*[kapacitet]) {}
    ~KolekcijaLikova();
    KolekcijaLikova(const KolekcijaLikova &k);
    KolekcijaLikova &operator =(const KolekcijaLikova &k);
    void DodajLik(Lik *lik);
    void DodajKrug(double r) { DodajLik(new Krug(r)); }
    void DodajPravougaonik(double a, double b) {
        DodajLik(new Pravokutnik(a, b));
    }
    void DodajTrougao(double a, double b, double c) {
        DodajLik(new Trokut(a, b, c));
    }
    void IspisiKolekciju() const;
};

KolekcijaLikova::~KolekcijaLikova() {
    for(int i = 0; i < broj_likova; i++) delete likovi[i];
    delete[] likovi;
}

void KolekcijaLikova::DodajLik(Lik *lik) {
    if(broj_likova >= kapacitet) {
        delete lik; throw std::range_error("Kolekcija popunjena!");
    }
    likovi[broj_likova++] = lik;
}

void KolekcijaLikova::IspisiKolekciju() const {
    for(int i = 0; i < broj_likova; i++) likovi[i]->IspisiPodatke();
}
KolekcijaLikova::KolekcijaLikova(const KolekcijaLikova &k) : likovi(new Lik*[k.kapacitet]), kapacitet(k.kapacitet), broj_likova(k.broj_likova) {
    for(int i = 0; i < broj_likova; i++) likovi[i] = k.likovi[i]->DajKopiju();
}

KolekcijaLikova &KolekcijaLikova::operator =(const KolekcijaLikova &k) {
    if(&k != this) {
        for(int i = 0; i < broj_likova; i++) delete likovi[i];
        delete[] likovi;
        likovi = new Lik*[k.kapacitet];
        kapacitet = k.kapacitet; broj_likova = k.broj_likova;
        for(int i = 0; i < broj_likova; i++) likovi[i] = k.likovi[i]->DajKopiju();
    }
    return *this;
}

int main()
{
    KolekcijaLikova likovi(3);

    likovi.DodajKrug(5);
    likovi.DodajPravougaonik(3,4);
    likovi.DodajTrougao(3, 4, 5);

    likovi.IspisiKolekciju();
    return 0;
}
