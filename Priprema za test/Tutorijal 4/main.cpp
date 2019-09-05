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
/*
void UnosBroja(std::string s1, std::string s2, NekiTip &n){

    std::cout << s1;

    while(!(std::cin >> n)){
        std::cout << s2 << std::endl;
        std::cin.clear();
        std::cin.ignore(1000, '\n');
    }

    std::cout << std::endl << n << std::endl;
}*/

/*void Cifre(int broj, int &a, int &b){
    a = 9, b = 0;
    while(broj > 0){
        if(broj%10<a)a = broj%10;
        if(broj%10>b)b = broj%10;
        broj/=10;
    }
}*/


/*template <typename Neki>

void UnesiVektor(std::vector<Neki> &v1){
    Neki broj;
    while(std::cin >> broj, broj != -1) v1.push_back(broj);
}

std::vector<Neki> Presjek(const std::vector<Neki>v1, const std::vector<Neki>v2){
    std::vector<Neki> v3;

    int j(0);
    for(int i(0); i<v1.size(); i++){
        for(j = i+1; j<v1.size(); j++){
            if(v1[i] == v1[j])break;
        }
        if(j == v1.size())v3.push_back(v1[i]);
    }

    j=0;

    for(int i(0); i<v2.size(); i++){
        for(j = 0; j<v3.size(); j++){
            if(v2[i] == v3[j])break;
        }
        if(j == v3.size())v3.push_back(v2[i]);
    }

    return v3;
}

*/

/*void UnosBroja(std::string s1, std::string s2, Neki &prvi_broj){

    std::string b;
    std::cout << s1;
    std::cin >> prvi_broj;
    std::getline(std::cin, b);

    while(b != ""){
        std::cout << s2;

        std::cin >> prvi_broj;
        std::getline(std::cin, b);
        std::cout << b;
    }
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

    /*Zadatak 1

    int broj_rijeci;
    std::cin >> broj_rijeci;// >> std::ws;
    std::cin.ignore(10000, '\n');
    std::vector<std::string> vs, nvs;
    int i(0), j;
    std::string sa, sz;

    while(broj_rijeci > i){
        vs.resize(i+1);
        j=0;
        std::getline(std::cin, vs[i]);

        for(j = 0; j<i; j++){
            if(vs[i] == nvs[j])break;
        }

        if(i == j)nvs.push_back(vs[i]);

        if(i==0){
            sa = vs[0];sz = vs[0];
        }
        else{
            if(strcmp(vs[i].c_str(), sa.c_str()) == -1) sa = vs[i];
            if(strcmp(vs[i].c_str(), sz.c_str()) == 1) sz = vs[i];
        }
        i++;
    }

    std::cout << "First is " << sa << std::endl << "Second is " << sz << std::endl;

    for(std::string s : nvs) std::cout << s << std::endl;
    */

    //for(std::string a : vs) std::cout << a << " ";
    //std::string s1{"c"}, s2{"b"};
    //std::cout << strcmp(s1.c_str(), s2.c_str());

    /*zadatak 2
    int a, b;
    Cifre(37232645, a, b);

    std::cout << "Min: " << a << std::endl << "Max: " << b;*/

    /*zadatak 4
    int n;
    double x;
    UnosBroja("Unesi prvi broj: ", "Neispravan unos!\n", n);
    UnosBroja("Unesi prvi broj: ", "Neispravan unos!\n", x);

    std::cout << "\nx^n =  " << std::pow(x, n);*/

    /*zadatak 5
    //std::vector<int> v1, v2;
  //  std::vector<std::string> v1{"Ja", "Ti", "Ti", "On"}, v2{"Ti","On","Ona","Ono"};

    //UnesiVektor(v1);
    //UnesiVektor(v2);

    auto v3 = Presjek(v1, v2);

    for(auto x: v1) std::cout << x << " ";
    std::cout << std::endl;
    for(auto x: v2) std::cout << x << " ";
    std::cout << std::endl;
    for(auto x: v3) std::cout << x << " ";
*/
    return 0;
}
