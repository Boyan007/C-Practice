#include <iostream>
#include <cmath>
//using namespace std;

/*class Student {
    std::string ime;
    int indeks;
public:
    Student(std::string ime, int ind) : ime(ime), indeks(ind) {}
    std::string DajIme() const { return ime; }
    int DajIndeks() const { return indeks; }
    /*virtual void Ispisi() const {
        std::cout << "Student " << ime << " ima indeks " << indeks;
    }
};

class DiplomiraniStudent : public Student {
    int godina_diplomiranja;
public:
    DiplomiraniStudent(std::string ime, int ind, int god_dipl) :
    Student(ime, ind), godina_diplomiranja(god_dipl) {}
    int DajGodinuDiplomiranja() const { return godina_diplomiranja; }
};
*/
/*
class Base1{
protected:
    int a;
public:
    Base1(int b){a = b; std::cout << "Base1";}
};

class Base2{
    int b;
public:
    Base2(){std::cout << "Base2";}
};

class Derived: public Base2, public Base1{
    int c;
public:
    Derived(int f): Base1(f){std::cout << "Derived";}
};*/
/*
class ApstraktniLik {
protected:
    std::string naziv;
public:
    ApstraktniLik(std::string naziv) : naziv(naziv) {}
    virtual ~ApstraktniLik() {}
    virtual double DajObim() const { return 0; }
    virtual double DajPovrsinu() const { return 0; }
    void Ispisi() const {
        std::cout << "Lik: " << naziv << " Obim: " << DajObim() << " Povrsina: " << DajPovrsinu() << std::endl;
    }
};

class Krug : public ApstraktniLik {
    double r;
    static constexpr double PI = 4 * std::atan(1); // Samo C++11
public:
    Krug(double r) : ApstraktniLik("Krug"), r(r) {}
    double DajObim() const override{ return 2 * PI * r; }
    double DajPovrsinu() const override{ return r * r * PI; }
};

class Pravougaonik : public ApstraktniLik {
    double a, b;
public:
    Pravougaonik(double a, double b) : ApstraktniLik("Pravougaonik"), a(a), b(b) {}
    double DajObim() const override { return 2 * (a + b); }
    double DajPovrsinu() const override { return a * b; }
};

class Trougao : public ApstraktniLik {
    double a, b, c;
public:
    Trougao(double a, double b, double c) : ApstraktniLik("Trougao"), a(a), b(b), c(c) {}
    double DajObim() const { return a + b + c; }
    double DajPovrsinu() const {
        double s((a + b + c) / 2);
        return std::sqrt(s * (s - a) * (s - b) * (s - c)) ;
    }
};

class Kvadrat : public Pravougaonik {
public:
    Kvadrat(double a) : Pravougaonik(a, a) { naziv = "Kvadrat"; }
};*/

//int x = 10;
//void fun(){
//    int x = 2;
//    {
//        int x = 1;
//        std::cout << ::x << std::endl;
//    }
//
//}

//class O1{
//int x;
//int z;
//public:
//    void Update();
//};
//
//class O2: public O1{
//int y;
//public:
//    virtual void Update2();
//    //virtual void Update1();
//};
int main()
{
    std::cout << sizeof(O2);//sizeof(O1) << sizeof(O2);
    //Derived d(5);
/*    Pravougaonik p(5, 4);
    Kvadrat k(3);
    p.Ispisi();
    std::cout << "O = " << p.DajObim() << " P = " << p.DajPovrsinu() << std::endl;
    k.Ispisi();
    std::cout << "O = " << k.DajObim() << " P = " << k.DajPovrsinu() << std::endl;*/
//    fun();

    return 0;
}
