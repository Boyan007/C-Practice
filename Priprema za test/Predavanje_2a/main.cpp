#include <iostream>
#include <complex>

//using namespace std;

int main()
{
    /*bool a(true);
    //std::cout << std::boolalpha << a << " " << false << " " << (2 < 3) << std::endl;

    enum Dani {Ponedjeljak = 2, Utorak, Srijeda, Cetvrtak, Petak, Subota, Nedjelja};
    Dani danas, sutra;

    enum Rezultat {Poraz = 3, Nerijeseno, Pobjeda = 7} danasnji_rezultat;
    //enum {Poraz, Nerijeseno, Pobjeda} danasnji_rezultat;
    danasnji_rezultat = Rezultat(0);
    danas = Dani::Ponedjeljak;
    //danas = Dani(danas+1);

    std::cout << danasnji_rezultat;*/

    /*std::complex<double>z(2, 3.5);

    z = std::complex<double>(5, z.imag());

    //std::cout << z;
    typedef std::complex<double> Kompleksni;
    double ss(-25.0);
    std::complex<double> s;

    s = std::sqrt(std::complex<double> (ss));

    std::cout << s;*/

    std::complex<double>z;

    z = {1, 2};

    std::cout << z;

    return 0;
}
