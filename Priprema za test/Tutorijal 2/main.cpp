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

    int n;
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

    return 0;
}
