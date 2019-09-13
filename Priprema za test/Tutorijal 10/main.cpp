#include <iostream>
#include <cmath>

const double pi = 4*std::atan(1);
//using namespace std;

class Ugao{
    double radijani;
public:
    Ugao(double radijani);
    Ugao(int stepeni, int minute, int sekunde);
    void Postavi(double radijani);
    void Postavi(int stepeni, int minute, int sekunde);
    double DajRadijane() const{return this-> radijani;};
    void OcitajKlasicneJedinice(int &stepeni, int &minute, int &sekunde){stepeni = this->DajStepene(); minute = this->DajMinute(); sekunde = this->DajSekunde();};
    int DajStepene() const {return int(radijani*180/pi);};
    int DajMinute() const {return int((radijani*180/pi - int(radijani*180/pi))*60);};
    int DajSekunde() const {return int((((radijani*180/pi - int(radijani*180/pi))*60) - int((radijani*180/pi - int(radijani*180/pi))*60))*60);};
    void Ispisi() const {std::cout << this->radijani << std::endl;};
    void IspisiKlasicno() const{std::cout << this->DajStepene() << "deg " << this->DajMinute() << "min " << this->DajSekunde() << "sec" << std::endl; };
    Ugao &SaberiSa(const Ugao &u);
    Ugao &PomnoziSa(double x);
    friend Ugao ZbirUglova(const Ugao &u1, const Ugao &u2);
    friend Ugao ProduktUglaSaBrojem(const Ugao &u, double x);
};
Ugao::Ugao(double radijani = 0){
    Postavi(radijani);
};

Ugao::Ugao(int stepeni, int minute, int sekunde){
    double rad = pi*(double(stepeni) + double(minute)/60 + double(sekunde)/3600)/180;
    Postavi(rad);
};

void Ugao::Postavi(double radijani){
    this->radijani = radijani;

    while(this->radijani > 2*pi)this->radijani -= 2*pi;
    while(this->radijani < 0)this->radijani += 2*pi;
}

void Ugao::Postavi(int stepeni, int minute, int sekunde){
    double rad = pi*(double(stepeni) + double(minute)/60 + double(sekunde)/3600)/180;
    Postavi(rad);
}

Ugao& Ugao::SaberiSa(const Ugao &u){
    this->Postavi(radijani + u.DajRadijane());
    return *this;
}

Ugao& Ugao::PomnoziSa(double x){
    this->Postavi(radijani * x);
    return *this;
}

Ugao ZbirUglova(const Ugao &u1, const Ugao &u2){
    Ugao u3;
    u3.radijani = u1.radijani + u2.radijani;
    return u3;
}

Ugao ProduktUglaSaBrojem(const Ugao &u, double x){
    Ugao u1;
    u1.radijani = u.radijani*x;
    u1.Postavi(u1.DajRadijane());
    return u1;
}

int main()
{
    Ugao kut(0.014544410433), ku;
    std::cout << kut.DajSekunde();
//    kut.Ispisi();
//    kut.SaberiSa(4.71);
//    kut.PomnoziSa(5.);
//    kut.Ispisi();
//    ku = ProduktUglaSaBrojem(kut, 7);
//    ku.Ispisi();
    return 0;
}
