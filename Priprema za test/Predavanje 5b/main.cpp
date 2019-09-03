#include <iostream>
#include <typeinfo>

//using namespace std;

double NulaFunkcije(double fun(double), double a, double b, double eps = 1e-7) {
    if(b < a) throw std::range_error("Nekorektan interval!");

    if(fun(a) * fun(b) > 0) throw std::range_error("Vrijednosti F(a) i F(b) su istog znaka!");

    while(b - a > eps) {
        double c((a + b) / 2);
        if(fun(a) * fun(c) < 0) b = c;
        else a = c;
    }

    return (a + b) / 2;
}

int main()
{
    //[](double x) { return x * x * x - x – 1; }
    //[](int x, double y) -> double { if(x > y) return x; else return y; }

    //std::cout << 3 + 2 * [](int x, int y) { return 2 * x - y; } (5, 2) - 4;

    //decltype(std::toupper('A')) b = std::toupper('A');

    //std::cout << typeid(std::toupper('A')).name();



    return 0;
}
