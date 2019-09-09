#include <iostream>
#include <cstring>
#include <memory>
//using namespace std;

/*bool IspredPo_ASCII_Kodovima(const char *a, const char *b) {
    return std::strcmp(a, b) < 0;
}*/

int main()
{


    //char prva[10]{'J', 'e', 'd', 'a', 'n'}, druga[10]{'d', 'e', 'd', 'a', 'n'};
    //std::cout << 'J' - 'D' << std::endl;
/*
    int a[3] = {1,2,3}, *p1, *p2, *temp;

    p1 = &a[0]; p2 = &a[1];

    temp = p1; p1 = p2; p2 = temp;

    std::cout << *p1 << " " << *p2;

    std::cout << a[0];*/

    /*char niz[2][5] = {{'J','E','D','A','N'},{'D','E','V','E','T'}};

    char *pok[2], *temp, pr;

    pok[0] = &niz[0][0];
    pok[1] = &niz[1][0];

    temp = pok[0];
    pok[0] = pok[1];
    pok[1] = temp;

    std::cout << *pok[0] << std::endl << std::endl << std::endl << std::endl;

    for(int i(0); i<2; i++){
        for(int j(0); j<5; j++){
            std::cout << niz[i][j] << " ";
        }
        std::cout << std::endl;
    }*/



    //std::cout << *p;
    /*std::sort(imena, imena + 5);//poredi adrese pokazivaca
    std::sort(imena, imena + 5, IspredPo_ASCII_Kodovima);
    std::sort(imena, imena + 5, [](const char *a, const char *b) {
        return std::strcmp(a, b) < 0;
    });

    std::shared_ptr<double> p(new double(3.5));//isto sto i double*p(new double(5))*/



    /*(auto umjesto std::shared_ptr<double>)*//*std::shared_ptr<double> p(std::make_shared<double>(3.5));
    p = std::make_shared<double>(2.13);*/




    return 0;
}
