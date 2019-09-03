#include <iostream>

//using namespace std;

int main()
{
    int a, b;
    std::cout << "Unesite prvi broj: ";
    std::cin >> a;
    std::cin.ignore(10000, '\n');

    std::cout << "Unesite drugi broj: ";
    std::cin >> b;

    std::cout << "Zbir ta dva broja je: " << a+b << std::endl;

    /*char n, ln;

    n = std::cin.get();
    std::cin.ignore(256, ' ');

    ln = std::cin.get();
    std::cin.ignore(256, ' ');

    std::cout << "Your initials are: " << n << "." << ln << std::endl;*/

    return 0;
}
