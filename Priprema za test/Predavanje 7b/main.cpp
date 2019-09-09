#include <iostream>
#include <list>
#include <set>
#include <deque>
#include <vector>
#include <algorithm>
#include <iterator>
#include <functional>

//using namespace std;
/*
void Tabeliraj(std::function<int(int)> f, int x_min, int x_max) { //sada radi kako treba
    for(int x = x_min; x <= x_max; x++)
    std::cout << std::setw(10) << x << std::setw(10) << f(x) << std::endl;
}

template <typename FunkcijskiTip>
void Tabeliraj(FunkcijskiTip f, int x_min, int x_max) {
    for(int x = x_min; x <= x_max; x++)
    std::cout << std::setw(10) << x << std::setw(10) << f(x) << std::endl;
}

*/

/*void IspisiSumu(std::function<int(int, int)> f, int a, int b){
    std::cout << f(a, b);
}*/

/*std::function<double(double, double)>CeSabrati(int a, int b, int c){
    return [a](double x, double y){return x+y+a;};
}*/
/*
IspisiSumu(int a, int b, int c){
     int (*pok_na_fun)(int, int), d(a);
     pok_na_fun = [=](int i, int j){return i + j + d;};
     std::cout << pok_na_fun(b, c);
}*/

int main()
{
    //auto Saberi(CeSabrati(1, 2, 3));
    //std::cout << Saberi(4, 5);


    /*std::unique_ptr<double> p(new double(3.5));
    p = std::unique_ptr<double>(new double(2.13)); // Preusmjeravanje...

    std::unique_ptr<int[]> p(new int[5]); // Obratiti paţnju na []...

    std::list<int> lista{5, 2, 4, 6};
    lista.push_back(3);
    lista.push_front(8);
    for(int x : lista) std::cout << x << " "; // Ispis 8 5 2 4 6 3
    std::cout << lista[2]; // NE MOŢE!
    lista[1] = 10; // NE MOŢE NI OVO!

    std::list<int>::iterator it(lista.begin()); // ili auto it(...);
    for(int i = 0; i < 3; i++)
        std::cout << *it++ << " "; // Prva 3 elementa
    std::cout << std::endl; // Novi red
    while(it != lista.end())
        std::cout << *it++ << " "; // Ostali elementi*/
    /*std::list<int>l{2, 3, 4};

    l.push_back(5);
    l.push_front(1);


    std::list<int>::iterator it(l.begin());

    it++;
    it++;

    it = l.erase(it);
    //it--;
    l.insert(it, 3);

    for(int x: l)std::cout << x << " ";*/

    /*std::set<int> skup{3, 5, 1, 4, 3, 7};
    for(int x : skup) std::cout << x << " "; // Ispis 1 3 4 5 7

    std::cout << std::endl;

    std::multiset<int> multiskup{3, 5, 1, 4, 3, 7};
    for(int x : multiskup) std::cout << x << " ";*/ // Ispis 1 3 3 4 5 7

    /*std::deque<int> d{3, 5, 2, 8, 4};
    std::vector<int> v;
    std::copy(d.begin(), d.end(), std::back_inserter(v));*/

    /*std::ostream_iterator<int> it(std::cout, " ");
    *it++ = 3; *it++ = 2; *it++ = 7;*/

    //int a(1);
    //Tabeliraj([a](int x) { return x * x + a; }, 0, 10);//sada radi kako treba

    return 0;
}
