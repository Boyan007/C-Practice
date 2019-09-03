#include <iostream>
#include <algorithm>

//using namespace std;

/*template<typename PokIt1, typename PokIt2>

PokIt2 RazmjeniBlokove(PokIt1 pocetak, PokIt1 kraj, PokIt2 noviPolozaj){

    PokIt1 temp2;
    while(pocetak != kraj){
        *temp2 = *pocetak;
        *pocetak = *noviPolozaj;
        *noviPolozaj = *temp2;
        pocetak++;
        noviPolozaj++;

        //std::cout << *pocetak;
    }
//    std::cout << std::endl;
    return noviPolozaj;
}*/

double f(double x){
    return x*x*x;
}

double TrapeznoPravilo(double f(double), double a, double b, int n){
    double sum{0};
    int k{n-1};

    while(k > 0){
        sum += f(a + (b-a)*(double)k/n);
        k--;
    }

    sum += 0.5*f(a) + 0.5*f(b);
    return (b-a)*sum/n;
}

int main()
{
    /*char recenica[100], recenica1[100], *beg, *endi, *p, *d;
    bool found(false);
    std::cin.getline(recenica, sizeof recenica, '\n');

    endi = &recenica[0];

    while(*(endi-1) != '.'){

        if(!found && (std::toupper(*endi) >= 'A' && std::toupper(*endi) <= 'Z' || (*endi >= '0' && *endi <= '9')) && (*(endi-1) == '\t' || *(endi-1) == ' '|| *(endi-1) == ',')){
            beg = endi;
            found = true;
            //std::cout << *endi;
            //std::cout << std::endl << 'Z';
        }
        endi++;
    }
    p = &recenica1[0];
    d = std::copy(beg, endi, p);

    while(*p != *d){
        std::cout << *p;
        p++;
    }*/
    /*int a[9]{1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *p;
    std::string s("Ja sam mali string");
    RazmjeniBlokove(&a[2], &a[4], &a[7]);*/

    //std::cout << *p << ", " << *(p+1) << ", " << *(p+2) << std::endl;
    /*int a[10]{3, 4, 0, 8, 1, -6, 1, 4, 2, -7}, *p;

    copi(&a[3], &a[9], &a[2]);
*/
    //for(int x: a) std::cout << x << ", ";
/*
    int *p1, *p2, a[]{5, 7, 1, 3, 1, 4, 6, 2, 3}, *p3, *p4, broj, *p;
    p1 = &a[0];
    p2 = &a[9];
    p = std::min_element(p1, p2, [](int x, int y){return x<y;});

    //const int num{*p};

    broj = *p;

    std::cout << std::count(p1, p2, broj);*/
/*
    double a(0), b{10};
    int n{150};

    std::cout << TrapeznoPravilo(f, a, b, n) << std::endl << 10*10*10*10/4;*/

    int a[10]{1, 5, 15, 25, 34, 58, 69, 72, 73, 84};
    int *p;
    bool isIt = std::binary_search(&a[0], &a[10], 72);
    if(isIt){
        p = std::lower_bound(&a[0], &a[10], 72);
    }

    return p - &a[0];
}
