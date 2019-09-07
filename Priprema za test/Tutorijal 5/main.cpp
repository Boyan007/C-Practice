#include <iostream>
//#include <>
#include <algorithm>
#include <deque>
#include <vector>

//using namespace std;

/*auto kolikoSePojavljuje(int *p1, int *p2)-> int{
    int *s;
    s = std::min_element(p1, p2, [](int a, int b){return a<b;});
    return std::count_if(p1, p2, [s](int x){return *s == x;});
    //return *s;
}
*/
/*
char* BezPrve(char *r){//zadatak 1

    char *druga, *kraj;
    kraj = r;
    int rijeci(1);
    while(*kraj != '\0'){
        if((std::toupper(*kraj) >= 'A' && std::toupper(*kraj) <= 'Z') && *(kraj-1) == ' '){
            rijeci++;
            if(rijeci == 2)druga = kraj;
        }
        kraj++;
    }
    //std::cout << *kraj << std::endl;

    return std::copy(druga, kraj, r);
}*/

/*template<typename NekiTip>   // zadatak 2

auto RazmjeniBlokove(NekiTip p1, NekiTip p2, NekiTip p3)->decltype(p3+p3){

    //NekiTip temp;
    while(p1 != p2){

        auto temp(*p1);
        //temp = p1;
        *p1 = *p3;
        *p3 = temp;
        //std::cout << *p3;
        //std::cout << *p1;
        p1++;
        p3++;
    }

    return p3;
}*/
/*zadatak 6
template<typename Tip>
auto SumaBloka(Tip a, Tip b)->decltype(a[0]+a[0]){
    decltype(a[0]+a[0]) suma(0);
    while(a != b){
        suma += *a++;
    }
    return suma;
}*/

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

    //std::cout << Zbir(2, 3);
/*
    char recenica[100], *pok;
    std::cin.getline(recenica, sizeof recenica);

    pok = BezPrve(recenica);
    *pok = '\0';

    void (*pok_na_fun)(char*, char*);
    pok_na_fun = [](char *a, char *b){while(*a != *b){std::cout << *a;a++;}};
    pok_na_fun(recenica, pok);
*/
/*  zadatak 2
    //int a[]{1, 2, 3, 4}, b[]{10, 20, 30, 40}, *p, *p1;
    std::deque<int> a{1, 2, 3, 4}, b{10, 20, 30, 40};
    std::deque<int>::iterator *p, *p1;
    //for(double x: b)std::cout << x << " ";
    RazmjeniBlokove(a.begin(), a.end(), b.begin());

    RazmjeniBlokove(a, a+4, b);

    for(double x: a)std::cout << x << " ";
    //while(*p1 != *p)std::cout << *p1++;
//    std::cout << *--p;
    //for(double x: b)std::cout << x << " ";
*/
/*zadatak 6
    std::deque<int> a{1, 2, 3, 4};
//    auto suma(SumaBloka(a.begin(), a.end()));
//    int a[]{1, 2, 3, 4};
    std::cout << SumaBloka(a.begin(), a.end());
*/
    return 0;
}
