#include <iostream>

//using namespace std;

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
}

int main()
{
    /*std::vector<int>::iterator it1; // Iterator za vektor cijelih brojeva
    std::string::iterator it2; // Iterator za string
    std::deque<double>::iterator it3; // Iterator za dek realnih brojeva*/

    for(std::vector<int>::iterator i = v.begin(); i != v.end(); i++)
        std::cout << *i << " ";

    for(auto i = v.begin(); i != v.end(); i++) // Samo u C++11!
        std::cout << *i << " ";

    cout << "Hello world!" << endl;
    return 0;
}
