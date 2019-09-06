#include <iostream>
#include <type_traits>
#include <vector>
#include <deque>

//using namespace std;
/*
template <typename IspisiviObjekat>
void IspisiNiz(IspisiviObjekat niz[], int broj_elemenata) {
    for(int i = 0; i < broj_elemenata; i++) std::cout << niz[i] << " ";
}

template <typename IspisiviObjekat>
void IspisiNiz(std::vector<IspisiviObjekat> v, int broj_elemenata) {
    for(int i = 0; i < broj_elemenata; i++) std::cout << v[i] << " ";
}

template <typename NekiTip>
void IspisiKolekciju(NekiTip c, int broj_elemenata) {
    for(int i = 0; i < broj_elemenata; i++) std::cout << c[i] << " ";
}

template <typename Kontejner>
    auto MaxElement(Kontejner c, int broj_elemenata) -> decltype(c[0]) { //za nizove i vektore bilo kojeg tipa
    int indeks(0);
    for(int i = 1; i < broj_elemenata; i++)
        if(c[i] > c[indeks]) indeks = i;
    return c[indeks];
}*/
/*auto Zbir(int a, int b)->decltype(a) //decltype vraca referencu; ako ne zelimo referencu, onda treba decltype(a+0)
//moze i ovako se udaljiti referenca           auto Zbir(int a, int b)->std::remove_reference<decltype(a)>::type; biblioteka type_traits
{
        return a+b;
}*/

/*auto Zbir(int a, int b)->std::remove_reference<decltype(a)>::type// biblioteka type_traits //decltype vraca referencu; ako ne zelimo referencu, onda treba decltype(a+0)
    {
        return a+b;
    }
template <typename TipElemenata>
void IspisiDek(typename std::deque<TipElemenata>::iterator pocetak, typename std::deque<TipElemenata>::iterator iza_kraja) {
    while(pocetak != iza_kraja) std::cout << *pocetak++ << " ";
}*/

/*double Polovina(int a, int b){return double(a+b)/2;}

void Ispisi(double f(int, int), int a, int b){
    double c = f(a, b);
    std::cout << c;
}*/

int main()
{
    /*std::vector<int>::iterator it1; // Iterator za vektor cijelih brojeva
    std::string::iterator it2; // Iterator za string
    std::deque<double>::iterator it3; // Iterator za dek realnih brojeva*/

//    for(std::vector<int>::iterator i = v.begin(); i != v.end(); i++)
//        std::cout << *i << " ";
//
//    for(auto i = v.begin(); i != v.end(); i++) // Samo u C++11!
//        std::cout << *i << " ";

    //std::cout << Zbir(2,3) << std::endl;
    /*std::vector<int> v{1, 2, 3, 4, 5, 6, 7};
    v.erase(v.begin()+3);
    for(int a: v)std::cout << a << " ";*/


    //std::cout << [](int a, int b){return a+b;}(2, 3);

    //Ispisi(Polovina, 2, 3);

//    typedef int (*TipPokNaFun)(int, int); // Tip pokazivača na funkciju
//    TipPokNaFun pok_na_fun; // Kreira konkretan pokazivač na funkciju



    return 0;
}
