#include <iostream>
#include <memory>

//using namespace std;
class Tocka{
    int b, c, a;
public:
    Tocka(){a = 0, b=0, c=0;}
    Tocka(int A){a = A, b=0, c=0;}
    explicit Tocka(int A, int B, int C){a = A, b=B, c=C;}
    void Ispisi(){std::cout << a << "\n" << b << "\n" << c << "\n";}
};
struct NekaStruktura {
int x, y, z;
};
class KlasaSaAgregatima {
int niz[5];
NekaStruktura struktura;
public:
KlasaSaAgregatima() : niz{3, 5, 2, 3, 6}, struktura{2, 3, 1} {}
//... // Ostatak klase
};

int main()
{
    /*double a{{}};
    std::shared_ptr<double>b;
    b = std::make_shared<double>(2.5);
    std::cout << *b << std::endl;*/
    Tocka T;
    T = 9;
    //T = {5,6,7};
    //T = {1,2,3};
    //T.Ispisi();

    int *niz = new int[3]{1, 2, 3};
    //std::cout << niz[0];

    //std::shared_ptr<Tocka> niz_tocaka[10];
    //niz_datuma[i] = std::make_shared<Tocka>(dan, mjesec, godina);

    return 0;
}
