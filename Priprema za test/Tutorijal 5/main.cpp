#include <iostream>
#include <>
#include <algorithm>

//using namespace std;

/*auto kolikoSePojavljuje(int *p1, int *p2)-> int{
    int *s;
    s = std::min_element(p1, p2, [](int a, int b){return a<b;});
    return std::count_if(p1, p2, [s](int x){return *s == x;});
    //return *s;
}
*/

int main()
{
    /*char recenica[100], *beg, *endi, *p;
    bool found(false);
    int t;
    std::cin.getline(recenica, sizeof recenica, '.');
    std::cin.ignore(10000, '\n');

    endi = &recenica[0];

    while(*(endi-1) != '.'){
        std::cout << *endi;
        if(!found && (std::toupper(*endi) >= 'A' && std::toupper(*endi) <= 'Z' || (*endi >= '0' && *endi <= '9')) && (*(endi-1) == '\t' || *(endi-1) == ' '|| *(endi-1) == ',')){
            beg = endi;
            found = true;
            //std::cout << std::endl << 'Z';
        }
        endi++;
    }
    *endi = '\0';
    std::cin >> t;
    p = &recenica[0];
    std::copy(beg, endi, p);

    endi = &recenica[0];

    while(*endi != '\0'){
        std::cout << *endi;
        endi++;
    }

    std::cout << char(std::toupper('!')) << std::endl;*/

    /*int a[]{1, 2, 1, 5, 1, 7, 8, 1, 4}, *p;

    //p = &a[8];

    //std::cout << *p;
    std::cout << kolikoSePojavljuje(&a[0], &a[8]);*/

    std::cout << Zbir(2, 3);

    return 0;
}
