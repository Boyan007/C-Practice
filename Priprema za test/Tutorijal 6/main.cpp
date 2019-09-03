#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

//using namespace std;

/*int *StepenOdDva(int32_t n){
    if(n<0) throw "Broj elemenata treba biti pozitivan\n";
    int *p(nullptr), i(0);
    //try{
        p = new int[n];
        while(i<n){
            p[i] = i;
            i++;
        }
        return p;
    //}
//    catch(std::bad_alloc){
//        std::cout << "Alokacija nije uspjela";
//    }
}*/

template <typename NekiTip>

NekiTip *Funkcija(std::vector<NekiTip>v){
    auto *p(new NekiTip[v.size()]);
    std::reverse_copy(&v[0], &v[v.size()], p);
    return p;
}

int main()
{
    int *p;
    std::vector<int> v{5, 4, 3, 2, 1};
    p = Funkcija(v);
    std::cout << *p << ", " << *(p+1) << ", " << *(p+2) << ", " << *(p+3) << ", " << *(p+4) << std::endl;
    delete[] p;
    /*int *p, n, i(0);
    std::cin >> n;
    try{
        p = StepenOdDva(n);
        while(i<n){
            std::cout << p[i] << std::endl;
            i++;
        }
        delete[] p;
        //p = nullptr;
    }
    catch(const char s[]){
        std::cout << s;
    }
    catch(std::bad_alloc){
        std::cout << std::endl << "Desava se";
    }

    p = new int[10];
    std::cout << "HELLO";*/


    return 0;
}
