#include <iostream>

using namespace std;

int main()
{
    std::unique_ptr<double> p(new double(3.5));
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
        std::cout << *it++ << " "; // Ostali elementi


    return 0;
}
