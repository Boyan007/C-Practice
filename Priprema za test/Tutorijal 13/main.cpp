#include <iostream>
#include <string>
#include <cmath>
#include <memory>
#include <algorithm>
#include <string.h>
//using namespace std;

/*zadatak 1

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
}*/
class Student {
    std::string ime;
    int indeks;
public:
    Student(): ime(""), indeks(0){}
    Student(std::string ime, int ind) : ime(ime), indeks(ind) {}
    std::string DajIme() const { return ime; }
    int DajIndeks() const { return indeks; }
    virtual void Ispisi() const {
        std::cout << std::endl << "Student " << ime << " ima indeks " << indeks;
    }
};
class DiplomiraniStudent : public Student {
    int godina_diplomiranja;
public:
    DiplomiraniStudent(std::string ime, int ind, int god_dipl) : Student(ime, ind), godina_diplomiranja(god_dipl) {}
    int DajGodinuDiplomiranja() const { return godina_diplomiranja; }
    void Ispisi() const {
        Student::Ispisi();
        std::cout << ", a diplomirao je " << godina_diplomiranja << ". godine" << std::endl;
    }
};

class StudentskaSluzba{
    int broj_studenata;
    const int kapacitet;
    std::unique_ptr<Student*[]> studenti;
//    Student **studenti;
public:
    StudentskaSluzba(int kapacitet): kapacitet(kapacitet), broj_studenata(0), studenti(new Student*[kapacitet]){}
    ~StudentskaSluzba();
    StudentskaSluzba(const StudentskaSluzba &Ss) = delete; //zabrana kopiranja
    StudentskaSluzba &operator =(const StudentskaSluzba &Ss) = delete;//zabrana dodjele
    void UpisStudenta(std::string ime_i_prezime, int broj_indexa);
    void UpisDiplomiranogStudenta(std::string ime_i_prezime, int broj_indexa, int godina_diplomiranja);
    void IspisiPoAbecedi()const;
    void IspisiPoIndexu()const;
};
StudentskaSluzba::~StudentskaSluzba(){
//    for(int i(0); i<broj_studenata; i++) delete studenti[i];
//    delete[] studenti;
}
void StudentskaSluzba::UpisStudenta(std::string ime_i_prezime, int broj_indexa){
    if(broj_studenata>=kapacitet)throw std::range_error("Maksimalan broj studenata dostignut");
    studenti[broj_studenata++] = new Student(ime_i_prezime, broj_indexa);
}
void StudentskaSluzba::UpisDiplomiranogStudenta(std::string ime_i_prezime, int broj_indexa, int godina_diplomiranja){
    if(broj_studenata>=kapacitet)throw std::range_error("Maksimalan broj studenata dostignut");
    studenti[broj_studenata++] = new DiplomiraniStudent(ime_i_prezime, broj_indexa, godina_diplomiranja);
}
void StudentskaSluzba::IspisiPoAbecedi()const{
    std::sort(&studenti[0], &studenti[broj_studenata],[](Student *a, Student *b){return (a->DajIme() < b->DajIme());});
    for(int i(0); i<broj_studenata; i++)studenti[i]->Ispisi();
}
void StudentskaSluzba::IspisiPoIndexu()const{
    std::sort(&studenti[0], &studenti[broj_studenata], [](Student *a, Student *b){return a->DajIndeks() < b->DajIndeks();});
    for(int i(0); i<broj_studenata; i++)studenti[i]->Ispisi();
}
int main()
{
//    StudentskaSluzba s(3);
//    s.UpisStudenta("Ivan Ivanovic", 1238);
//    s.UpisDiplomiranogStudenta("Tomo Tomovic", 1236, 2015);
//    s.UpisStudenta("Pero Perovic", 1335);
//
//    s.IspisiPoAbecedi();
//    s.IspisiPoIndexu();
    //s = 6; // provjeriti sta bi bilo za definisano kopiranje i dodjelu

    /*zadatak 1
    KolekcijaLikova likovi(3);

    likovi.DodajKrug(5);
    likovi.DodajPravougaonik(3,4);
    likovi.DodajTrougao(3, 4, 5);

    likovi.IspisiKolekciju();*/

    Student s1("Pero Peric", 123), s2("Tomo Tomic", 234);
    StudentskaSluzba P(2);
    P.UpisStudenta("Tomo Tomic", 234);
    P.UpisStudenta("Pero Peric", 123);
    P.IspisiPoAbecedi();
//    std::string s1("Pero Peric"), s2("Tomo Tomic");
//    std::string s3;
//    s3 = s1 + s2;
//    std::cout << s1.compare(s2);
    return 0;
}
