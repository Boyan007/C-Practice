#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <sstream>
#include <cmath>

//using namespace std;

/*void Cifre(int num, int &c_min, int &c_max){
    int mini(9), maxi(0);
    while(num>0){
        if(num%10<mini) mini = num%10;
        if(num%10>maxi) maxi = num%10;
        num/=10;
    }
    c_min = mini;
    c_max = maxi;
}*/
/*
void Izvrni(std::string &s){
    char temp;
    for(int i(0); i<s.length()/2; i++){
        temp = s[i];
        s[i] = s[s.length() - (i+1)];
        s[s.length() - (i+1)] = temp;
    }

}*/
/*template <typename NekiTip>
void UnosBroja(std::string s1, std::string s2, NekiTip &n){

    std::cout << s1;

    while(!(std::cin >> n)){
        std::cout << s2 << std::endl;
        std::cin.clear();
        std::cin.ignore(1000, '\n');
    }

    std::cout << std::endl << n << std::endl;
}*/

int main()
{


    /*int prvi_broj;
    double drugi_broj;
    bool is;
    UnosBroja("Unesi prvi broj: ", "Neispravan unos!", prvi_broj);
    UnosBroja("Unesi prvi broj: ", "Neispravan unos!", drugi_broj);

//    std::string s1{"123"};
//
//    is = stoi(s1)==prvi_broj;
//    std::cout << is;

    std::cout << std::pow(drugi_broj, prvi_broj);
*/

    /*std::vector<std::string> vs, nvs;

    int n;
    std::cin >> n;
    std::cin.ignore(1000, '\n');
    vs.resize(n);

    for(int i(0); i<n; i++){
        std::getline(std::cin, vs[i]);
    }
    std::string mini, maxi;

    mini = vs[0]; maxi = vs[0];
    for(int i(0); i<n; i++){

        if(strcmp(vs[i].c_str(), mini.c_str()) == -1) mini = vs[i];

        if(strcmp(vs[i].c_str(), maxi.c_str()) == 1) maxi = vs[i];
    }

    std::cout << std::endl << mini << std::endl <<  maxi << std::endl;

    for(int i(0); i<n; i++){
        int is=0;
        if(strcmp(vs[i].c_str(), mini.c_str()) == 0 || strcmp(vs[i].c_str(), maxi.c_str()) == 0) is = 1;

        for(int j(i+1); j<n; j++){
            if(strcmp(vs[i].c_str(), vs[j].c_str()) == 0)
                is = 1;

        }
        if(is == 0)nvs.push_back(vs[i]);
    }

    for(auto x : nvs) std::cout << std::endl << x;*/

    /*int a, b;
    Cifre(37232645, a, b);

    std::cout << a << std::endl << b;*/
/*
    std::string s{"Ovo je neki tekst ..."};
    Izvrni(s);

    std::cout << s;*/

    return 0;
}
