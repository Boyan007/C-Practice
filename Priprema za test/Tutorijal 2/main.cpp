#include <iostream>
#include <vector>
#include <complex>
//#include <polar>

//using namespace std;

/*bool DaLiJeProst(int n){
    if(n<=1)std::cout << "Say whaa...?";
    for(int i(2); i<(n/2+1); i++) if(n%i==0) return false;
    return true;
}*/

/*int Periodicnost(std::vector<int> v){

    int period=0;
    std::vector<int>templ;

    for(int i(1); i<v.size(); i++){

        if(v[i] == v[0] && period == 0){
            int j{0};
            while(j < i){
                templ.push_back(v[j]);
                j++;
            }
            period = i;
        }

        if(v[i] != v[i-period]) period = 0;
    }
    return period;
}*/

int main()
{
    /*int a, b;
    std::cin >> a >> b;
    for(int i(a); i<=b; i++){
        std::cout << "Broj " << i;
        if(DaLiJeProst(i))std::cout << " je ";
        else std::cout << " nije ";
        std::cout << "prost." << std::endl;
    }*/

    /*
    std::vector<int> v{5, 9, 7, 2, 5, 8, 7, 2, 5, 9, 7, 2, 5, 8, 7, 2};
    int period(Periodicnost(v));
    if(period == 0) std::cout << "Nema perioda";
    else std::cout << "Periodicno se ponavlja s periodom od " << period;*/

    /*int n;
    double Re, Im;
    std::complex<double> Z{0,0};
    std::cout << "Unesi broj elemenata: ";
    std::cin >> n;
    std::cout << "Re i Im:";
    while(n-- > 0){
        std::cin >> Re >> Im;
        Z += 1./(std::complex<double> {Re, Im});
    }
    Z = 1./Z;
    std::cout << "Paralelna veza ovih elemenata ima impedansu Z_ = (" << Z.real() << ", " << Z.imag() << ").";*/

    /*int n;
    double module, phase;
    const double PI = 4*std::atan(1);
    std::complex<double> Z;
    Z = std::polar(0,0);
    std::cout << "Unesi broj elemenata: ";
    std::cin >> n;
    std::cout << "Mod i Phs:";
    while(n-- > 0){
        std::cin >> module >> phase;
        Z += 1./(std::polar(module, phase*PI/180));
    }
    Z = 1./Z;
    std::cout << "Paralelna veza ovih elemenata ima impedansu Z_ = (" << std::abs(Z) << ", " << std::arg(Z)*180/PI << ").";
    */

    //second try

    //zadatak 2

    /*typedef std::vector<int> Niz;

    Niz n;
    int i, numb, cnt(0), T(0);
    bool isPeriod(false);
    while(std::cin >> i, i >= 0){
        n.push_back(i);
        //cnt++;
        //if(cnt == 1)numb = n[0];
        if(n[n.size()-1] == n[0] && !isPeriod && n.size()>1){
                T = n.size()-1;
                isPeriod = !isPeriod;
        }
        if(isPeriod)if(n[n.size()-1] != n[n.size()-1-T]){isPeriod = !isPeriod; T=0;}
    }

    std::cout << "Period ponavljanja je " << T;*/

    //zadatak 3

    /*int n;
    double re, im;

    std::cout << "Unesi broj elemenata: ";
    std::cin >> n;

    std::complex<double> z(0,0), z1;

    while(n-- > 0){
        std::cin >> z1;
        z += 1./(std::complex<double>{re, im});
    }

    z = 1./z;

    std::cout << "Paralelna veza ovih elemenata ima impedansu " << z.real() << " , " << z.imag();*/

    int n;
    double Mo, phi;
    std::complex<double> z(0,0);

    std::cout << "Unesite broj elemenata: ";
    std::cin >> n;

    while(n-- > 0){
        std:: cin >> Mo >> phi;
        z += 1./std::polar(Mo, phi*3.14159/180);
    }

    z = 1./z;

    std:: cout << "Paralelna veza ovih elemenata ima " << std::abs(z) << " , " << std::arg(z)*180/3.14159;
    return 0;
}
