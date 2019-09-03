#include <iostream>
#include <cstring>
#include <memory>
//using namespace std;

bool IspredPo_ASCII_Kodovima(const char *a, const char *b) {
    return std::strcmp(a, b) < 0;
}

int main()
{
    char prva[10]{'J', 'e', 'd', 'a', 'n'}, druga[10]{'d', 'e', 'd', 'a', 'n'};
    std::cout << 'J' - 'D' << endl;

    const char *imena[5] = {"Maja", "Tarik", "Ivo", "Belma", "Sead"};
    std::sort(imena, imena + 5);//poredi adrese pokazivaca
    std::sort(imena, imena + 5, IspredPo_ASCII_Kodovima);
    std::sort(imena, imena + 5, [](const char *a, const char *b) {
        return std::strcmp(a, b) < 0;
    });


    std::shared_ptr<double> p(new double(3.5));

    /*(auto umjesto std::shared_ptr<double>)*/std::shared_ptr<double> p(std::make_shared<double>(3.5));
    p = std::make_shared<double>(2.13);


    return 0;
}
