#include <iostream>
#include <cmath>
#include <typeinfo>
//using namespace std;

/*zadatak 1 & 2
class Vektor3d {
    //double x, y, z;   zadatak 1
    double xyz[3];
    public:
    void Postavi(double x, double y, double z) {
        //Vektor3d::x = x; Vektor3d::y = y; Vektor3d::z = z;
        xyz[0] = x; xyz[1] = y; xyz[2] = z;
    }
    void Ocitaj(double &x, double &y, double &z) const {
        //x = Vektor3d::x; y = Vektor3d::y; z = Vektor3d::z;
        x = xyz[0]; y = xyz[1]; z = xyz[2];
    }
    void Ispisi() const {
        //std::cout << "{" << x << "," << y << "," << z << "}";
        std::cout << "{" << xyz[0] << "," << xyz[1] << "," << xyz[2] << "}";
    }
//    double DajX() const { return x; }
//    double DajY() const { return y; }
//    double DajZ() const { return z; }

    double DajX() const { return xyz[0]; }
    double DajY() const { return xyz[1]; }
    double DajZ() const { return xyz[2]; }

    void PostaviX(int x){Vektor3d::xyz[0] = x;}
    void PostaviY(int y){Vektor3d::xyz[1] = y;}
    void PostaviZ(int z){Vektor3d::xyz[2] = z;}

//    void PostaviX(int x){this->x = x;}
//    void PostaviY(int y){this->y = y;}
//    void PostaviZ(int z){this->z = z;}

    double DajDuzinu() const { return std::sqrt(xyz[0] * xyz[0] + xyz[1] * xyz[1] + xyz[2] * xyz[2]); }
//    double DajDuzinu() const { return std::sqrt(x * x + y * y + z * z); }
//    void PomnoziSaSkalarom(double s) { x *= s; y *= s; z *= s; }
    void PomnoziSaSkalarom(double s) { xyz[0] *= s; xyz[1] *= s; xyz[2] *= s; }
    //void SaberiSa(const Vektor3d &v) { x += v.x; y += v.y; z += v.z; }
    void SaberiSa(const Vektor3d &v) { xyz[0] += v.xyz[0]; xyz[1] += v.xyz[1]; xyz[2] += v.xyz[2]; }
};*/
/* zadatak 3
class Sat{
    int sati, minute, sekunde;

    public:
    void Postavi(int sati, int minute, int sekunde);
    void Sljedeci();
    void Prethodni();
    void PomjeriZa(int pomak);
    int DajSate() const;
    int DajMinute() const;
    int DajSekunde() const;
    void Ispisi() const;
    friend int BrojSekundiIzmedju(const Sat &s1, const Sat &s2);
};

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

void Sat::Sljedeci(){
    PomjeriZa(1);
}

void Sat::Prethodni(){
    PomjeriZa(-1);
}

int Sat::DajSate() const {return Sat::sati;}
int Sat::DajMinute() const {return Sat::minute;}
int Sat::DajSekunde() const {return Sat::sekunde;}

void Sat::Ispisi() const {std::cout << sati << ":" << minute << ":" << sekunde << std::endl;}

int BrojSekundiIzmedju(const Sat &s1, const Sat &s2){
    return (s1.sati*3600 + s1.minute*60 + s1.sekunde)-(s2.sati*3600 + s2.minute*60 +s2.sekunde);
}*/

/*zadatak 4*/
class Sat{
    int sekunde;
public:
    void Postavi(int sati, int minute, int sekunde);
    void Sljedeci(){PomjeriZa(1);};
    void Prethodni(){PomjeriZa(-1);};
    void PomjeriZa(int pomak);
    //void Svedi(){while(sekunde<0)sekunde += 86400;while(sekunde>86399)sekunde -= 86400;}
    int DajSate() const;
    int DajMinute() const;
    int DajSekunde() const;
    void Ispisi() const;
};
void Sat::Postavi(int sati, int minute, int sekunde){
    Sat::sekunde = sati*3600 + minute*60 + sekunde;
}

void Sat::PomjeriZa(int pomak){
    sekunde += pomak;
}

int Sat::DajSate()const{
    //Sat::Svedi();
    return (sekunde/3600)%24;
}

int Sat::DajMinute()const{
    //Svedi();
    return (sekunde%3600)/60;
}

int Sat::DajSekunde()const{
    return (sekunde%3600)%60;
}

void Sat::Ispisi() const{
    std::cout << "(hh:mm:ss) = (" << DajSate() << ":" << DajMinute() << ":" << DajSekunde() << ")" << std::endl;
}

int main()
{
    /*zadatak 1
    Vektor3d v;
    v.PostaviX(2);
    v.PostaviY(3);
    v.PostaviZ(4);
    v.Ispisi();*/

    /*zadatak 2
    Vektor3d v;
    v.PostaviX(2);
    v.PostaviY(3);
    v.PostaviZ(4);
    v.Ispisi();*/

 /*   Sat vrijeme1, vrijeme2;
    try{
        vrijeme1.Postavi(17, 0, 0);
        vrijeme2.Postavi(16, 0, 0);
    }
    catch(std::domain_error &err){
        std::cout<<"Caught: "<<err.what()<<std::endl;
        std::cout<<"Type: "<<typeid(err).name()<<std::endl;
//        cerr<<"Caught: "<<err.what()<<endl;
//        cerr<<"Type: "<<typeid(err).name()<<endl;
    }*/
    /*catch(std::exception &e){//moze i std::domain_error e
        std::cout << e.what() << std::endl;
    }

    std::cout << BrojSekundiIzmedju(vrijeme1, vrijeme2);*/

    Sat vrijeme1, vrijeme2;

    vrijeme1.Postavi(8, 55, 14);
    vrijeme1.PomjeriZa(15*3600+4*60+45);

    vrijeme1.Ispisi();

    vrijeme1.Sljedeci();
    vrijeme1.Sljedeci();

    vrijeme1.Ispisi();

    vrijeme1.Prethodni();

    vrijeme1.Ispisi();

    return 0;
}
