#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int prihod(11000), oporezovani_prihod(2000), porez(666);
    std::cout << "Prihod: " << std::setw(18) << prihod << std::endl << std::endl;
    std::cout << "Oporezovani prihod: " << std::setw(6) << oporezovani_prihod << endl;
    std::cout << "Poreska dazbina: " << std::setw(9) << porez << std::endl;
    std::cout << "Cisti prihod: " << std::setw(12) << prihod - porez << std::endl;

//    std::cout << std::left << std::setw(10) << 2 + 3 << "<" << std::right << std::setw(10) << 2 * 3 << std::endl;

    return 0;
}
