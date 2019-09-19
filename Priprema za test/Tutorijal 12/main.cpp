#include <iostream>
#include <cmath>
#include <set>
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

    return 0;
}
