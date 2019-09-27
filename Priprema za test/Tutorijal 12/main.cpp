#include <iostream>
#include <cmath>
#include <set>
#include <vector>
#include <algorithm>
#include <functional>
//using namespace std;

/*zadatak 1
class Vektor3d {
    double x, y, z;
public:

    Vektor3d():x(0), y(0), z(0){}
    Vektor3d(double x, double y, double z): x(x), y(y), z(z){}

    void Postavi(double x, double y, double z) {
        Vektor3d::x = x; Vektor3d::y = y; Vektor3d::z = z;
    }
    void Ocitaj(double &x, double &y, double &z) const {
        x = Vektor3d::x; y = Vektor3d::y; z = Vektor3d::z;
    }

    double DajX() const { return x; }
    double DajY() const { return y; }
    double DajZ() const { return z; }

    void PostaviX(int x){this->x = x;}
    void PostaviY(int y){this->y = y;}
    void PostaviZ(int z){this->z = z;}

    double DajDuzinu() const { return std::sqrt(x * x + y * y + z * z); }

    Vektor3d operator *=(double d);

    Vektor3d &operator +=(const Vektor3d &v){
        x += v.x; y += v.y; z += v.z;
        return *this;
    }
    friend std::ostream &operator <<(std::ostream &tok, const Vektor3d &v);
};
Vektor3d Vektor3d::operator *=(double d){
    x *= d; y *= d; z *= d;
    return *this;
}

std::ostream &operator <<(std::ostream &tok, const Vektor3d &v){
    tok << "[" << v.x << ", " << v.y << ", " << v.z << "]" << std::endl;
    return tok;
}*/

/*zadatak 2
class Sat{
    int sati, minute, sekunde;

    public:
    Sat():sekunde(0), minute(0), sati(0){}
    Sat(int h, int m, int s){Postavi(h, m, s);}
    void Postavi(int sati, int minute, int sekunde);
//    void Sljedeci();
//    void Prethodni();
    Sat &operator ++();
    Sat operator ++(int);
    Sat &operator --();
    Sat operator --(int);
    Sat &operator +=(int sek);
    void PomjeriZa(int pomak);
    int DajSate() const;
    int DajMinute() const;
    int DajSekunde() const;
    void Ispisi() const;
    friend int BrojSekundiIzmedju(const Sat &s1, const Sat &s2);
    friend std::ostream &operator <<(std::ostream &ct, const Sat &s);
};


Sat &Sat::operator ++(){
    sekunde++;
    if(sekunde > 59){
        sekunde -= 60; minute++;
    }
    if(minute>59){
        minute -= 60; sati++;
    }
    if(sati>23){
        sati -= 24;
    }
    return *this;
}

Sat Sat::operator ++(int){
    Sat pomocni(sati, minute, sekunde);
    sekunde++;
    if(sekunde > 59){
        sekunde -= 60; minute++;
    }
    if(minute>59){
        minute -= 60; sati++;
    }
    if(sati>23){
        sati -= 24;
    }
    return pomocni;
}


Sat &Sat::operator --(){
    sekunde--;
    if(sekunde < 0){
        sekunde += 60; minute--;
    }
    if(minute < 0){
        minute += 60; sati--;
    }
    if(sati < 0){
        sati += 24;
    }
    return *this;
}

Sat Sat::operator --(int){
    Sat pomocni(sati, minute, sekunde);
    sekunde--;
    if(sekunde < 0){
        sekunde += 60; minute--;
    }
    if(minute < 0){
        minute += 60; sati--;
    }
    if(sati < 0){
        sati += 24;
    }
    return pomocni;
}

Sat &Sat::operator +=(int sek){
    int temp{sekunde + sek + (minute)*60 + (sati)*3600};
    while(temp < 0)temp += 24*3600;
    sekunde = temp%60;
    minute = (temp/60)%60;
    sati = (temp/3600)%24;
    return *this;
}

void Sat::Postavi(int sati, int minute, int sekunde){
    if(sati > 23 || sati < 0 )throw std::domain_error("Neispravan unos sati.");
    else if( minute > 59 || minute < 0 )throw std::domain_error("Neispravan unos minuta.");
    else if( sekunde > 59 || sekunde < 0 )throw std::domain_error("Neispravan unos sekundi.");

    (*this).sati = sati; this->minute = minute; Sat::sekunde = sekunde;
}

void Sat::PomjeriZa(int pomak){
    int temp{this->sekunde + pomak + (this->minute)*60 + (this->sati)*3600};
    while(temp < 0)temp += 24*3600;
    this->sekunde = temp%60;
    this->minute = (temp/60)%60;
    this->sati = (temp/3600)%24;

}
std::ostream &operator <<(std::ostream &ct, const Sat &s){
    ct << std::endl << "[" << s.sati << ":" << s.minute << ":" << s.sekunde << "]";
    return ct;
}

int Sat::DajSate() const {return Sat::sati;}
int Sat::DajMinute() const {return Sat::minute;}
int Sat::DajSekunde() const {return Sat::sekunde;}

void Sat::Ispisi() const {std::cout << sati << ":" << minute << ":" << sekunde << std::endl;}

int BrojSekundiIzmedju(const Sat &s1, const Sat &s2){
    return (s1.sati*3600 + s1.minute*60 + s1.sekunde)-(s2.sati*3600 + s2.minute*60 +s2.sekunde);
}*/
/*zadatak 3
template <typename Tip>
std::set<Tip> operator +(const std::set<Tip>&a, const std::set<Tip>&b){
    std::set<Tip> c(b);
    for(Tip x: a)c.insert(x);
    return c;
}

template <typename Tip>
std::ostream &operator <<(std::ostream &out, const std::set<Tip>&a){
    out << "{";
    for(Tip x: a) out << x << " ";
    out << "}";
    return out;
}

template <typename Tip>
std::set<Tip> operator *(const std::set<Tip>&a, const std::set<Tip>&b){
    std::set<Tip> c(b), d(b);
    for(Tip x: a)c.erase(x);
    for(Tip x: c)d.erase(x);
    return d;
}*/

/*zadatak 4
enum Dani{Ponedjeljak, Utorak, Srijeda, Cetvrtak, Petak, Subota, Nedjelja};

std::ostream &operator <<(std::ostream &out, const Dani d){
    std::string nazivi[7]{"Ponedjeljak", "Utorak", "Srijeda", "Cetvrtak", "Petak", "Subota", "Nedjelja"};
    out << nazivi[d%7];
    return out;
}
Dani &operator ++(Dani &d){
    return d = Dani((int(d)+1)%7);
}

Dani operator ++(Dani &d, int){
    Dani pomocni(d);
    d = Dani(int(d)+1);
    return pomocni;
}*/
/*zadatak 5
class Funkcija: public std::binary_function<int, int, int>{
public:
    int operator()(int broj, int deset)const{
        int obratni(0);
        while(broj>0){obratni*=deset; obratni += broj%deset; broj/=deset;}
        return obratni;
    }
};*/
/*zadatak 6*/
class Mjere{
    int jard, stopa, inc;
public:
    Mjere(int jardi = 0, int stope = 0, int inci = 0): jard(jardi), stopa(stope), inc(inci){
        UnesiMjere(jard, stopa, inc);
    }

    void UnesiMjere(int jardi, int stope, int inci);
    void Koriguj();

    void Ispisi()const{std::cout << "Jardi: " << jard << " Stope: " << stopa << " Inci: " << inc;}

    int DajJardi()const{return jard;}
    int DajStope()const{return stopa;}
    int DajInce()const{return inc;}

    double DajMetre()const {return DajJardi()*0.9144 + DajStope()*0.3084 + DajInce()*0.0254;}

    Mjere(const Mjere &m){
        jard = m.jard; stopa = m.stopa; inc = m.inc;
    }

    Mjere &operator +=(const Mjere &m1);

    friend Mjere operator*(double a, const Mjere &m);
    friend Mjere operator*(const Mjere &m, double a);

    friend Mjere &operator ++(Mjere &m);//OVO POSTFIKS???
    friend Mjere operator++(Mjere &m, int);

    friend Mjere operator +(const Mjere &m1, const Mjere &m2);

    friend double operator/(const Mjere m1, const Mjere m2);
    friend std::ostream &operator <<(std::ostream &out, const Mjere &m);

    //friend operator/(const Mjere m1, const Mjere m2);

};
Mjere operator*(double a, const Mjere &m){
        return {m.jard*a, m.stopa*a, m.inc*a};;
}
Mjere operator*(const Mjere &m, double a){
    return a*m;
}

Mjere &operator++(Mjere &m){
    m.inc++;
    m.Koriguj();
    return m;
}

Mjere operator++(Mjere &m, int){
    Mjere pomocni(m);
    m.inc++;
    m.Koriguj();
    return pomocni;
}

void Mjere::Koriguj(){
     while(inc>11 || stopa> 2){
        if(inc > 11){
            stopa++;
            inc -= 12;
        }
        if(stopa > 2){
            stopa -= 3;
            jard++;
        }
    }
}
Mjere operator +(const Mjere &m1, const Mjere &m2){
    Mjere m3(0,0,0);

    m3.UnesiMjere(m1.jard + m2.jard, m1.stopa + m2.stopa, m1.inc + m2.inc);

    return m3;
}

Mjere &Mjere::operator +=(const Mjere &m1){
    UnesiMjere(jard += m1.jard, stopa += m1.stopa, inc += m1.inc);
    return *this;
}


void Mjere::UnesiMjere(int jardi, int stope, int inci){
    this->jard = jardi;
    this->stopa = stope;
    this->inc = inci;
    Koriguj();
}

double operator/(const Mjere m1, const Mjere m2){
    return m1.DajMetre()/m2.DajMetre();
}
std::ostream &operator <<(std::ostream &out, const Mjere &m){
    out << m.DajJardi() << " yd " << m.DajStope() << " ft " << m.DajInce() << " in" << std::endl;
    return out;
}

int main()
{
    /*zadatak 1
    Vektor3d v1(1, 2, 3), v2(2, 3, 4);
    v1 += v2;
    std::cout << v1;
    v1 *= 3;
    std::cout << v1;*/

    /*zadatak 2
    Sat s1(12, 13, 15);
    std::cout << s1--;
    std::cout << --s1;*/

    /*zadatak 3
    std::set<int> a{1,2,3,6,5,4}, b{9,8,7,4,5,6};
    std::cout << a * b;*/

    /*zadatak 4

    for(Dani d = Ponedjeljak; d <= Nedjelja; d++) std::cout << d << std::endl;

    Dani d(Petak);
    d = Dani(7);
    d++;
    std::cout << d;*/

    /*zadatak 5

    std::vector<int>v{123, 4567, 78, 345678};
    Funkcija f;
//    std::transform(v.begin(), v.end(), v.begin(), std::bind2nd(f, 10));
    std::transform(v.begin(), v.end(), v.begin(), std::bind(f, std::placeholders::_1, 10));

    for(int c: v)std::cout << c << std::endl;
*/
    /*zadatak 6
    Mjere m1(0, 2, 12), m3(3*m1);
    //m1 += m2;

    std::cout << m3;*/

    return 0;
}
