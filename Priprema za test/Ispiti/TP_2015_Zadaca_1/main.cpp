#include <iostream>
#include <vector>
#include <cmath>
#include <string>
//#include <cstdio>
#include <string.h>
//using namespace std;
/*zadatak 1
std::vector<int>NajduziMonotoniPodniz(std::vector<int> v){
    int start_index(0), max_length(0), length_index(0);
    bool rastuci(true), opadajuci(true);

    for(int i(0); i<v.size()-1; i++){

        if(v[i+1]>v[i] && opadajuci){
            if(max_length < i - start_index){max_length = i - start_index;length_index = start_index;}
            start_index = i;

            opadajuci = false;
            rastuci = true;
        }
        if(v[i+1]<v[i] && rastuci){
            if(max_length < i - start_index){max_length = i - start_index;length_index = start_index;}
            start_index = i;

            opadajuci = true;
            rastuci = false;
        }
    }

    if(max_length == 0)max_length = v.size();

    std::vector<int>v1;
    for(int i(length_index); i<=length_index+max_length; i++)v1.push_back(v[i]);

    return v1;
}*/
/*zadatak 2
std::vector <std::vector<int>> WalshHadamardovaMatrica(int n){

    if(n<0)throw std::domain_error("Indeks ne moze biti negativan");
    std::vector <std::vector<int>> v, temp;
    v.resize(std::pow(2, n));

    for(int i(0); i<v.size(); i++)v[i].resize(std::pow(2, n));

    if(n == 0) return {{1}};

    temp = WalshHadamardovaMatrica(n-1);

    for(int i(0); i<std::pow(2, n); i++){
        for(int j(0); j<std::pow(2, n); j++){
          if(i<std::pow(2, n)/2 || j<std::pow(2, n)/2)
                v[i][j] = temp[i%temp.size()][j%temp.size()];

          else
                v[i][j] = -(temp[i%temp.size()][j%temp.size()]);
        }
    }
    return v;
}*/

/*zadatak 3

std::vector<std::string>IzdvojiSavrsenoRitmicneRijeci(std::string recenica){
    std::vector<std::string>vs;
    int cnt(0), start_word(0), end_word(0);
    char c, bc;
    bool samoglasnik(false), suglasnik(false), ritmicna(true);
    while(cnt <= recenica.length()){
        c = std::toupper(recenica[cnt]);

        if(c < 'A' || c > 'Z'){samoglasnik = false; suglasnik = false;}

        if((c >= 'A' && c <= 'Z')&& bc == ' ')start_word = cnt;
        else if((c == ' ' || c == '\0') && (bc >= 'A' && bc <= 'Z'))end_word = cnt;

        if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
            if(samoglasnik)ritmicna = false;
            samoglasnik = true;
            suglasnik = false;
        }
        else if((c >= 'A' && c <= 'Z') && (c != 'E' || c != 'I' || c != 'O' || c != 'U')){
            if(suglasnik)ritmicna = false;
            suglasnik = true;
            samoglasnik = false;
        }

        if(start_word < end_word && (end_word-start_word)>1){
            if(ritmicna)vs.push_back(recenica.substr(start_word, end_word-start_word));//kada ovo ukljuciti???
            start_word = end_word;
            ritmicna = true;
        }

        cnt++;
        bc = c;
    }
    return vs;
}*/

int main()
{
    /*zadatak 1
    std::vector<int> v{3, 6, 7, 5, 2, 4, 8, 9, 8, 8, 5, 3, 2, 4, 9, 9, 7, 1};
    for(int x : NajduziMonotoniPodniz(v)) std::cout << x << " ";*/

    /*zadatak 2
    std::vector<std::vector<int>> v;
    try{
        v = WalshHadamardovaMatrica(-3);
    }
    catch(std::domain_error &e){std::cout << e.what();}
    for(auto a: v){
        for(auto b: a){
            if(b == 1)std::cout << "+";
            else std::cout << "-";
        }
        std::cout << std::endl;
    }*/

    /*zadatak 3
    std::string c{"a b"}, f{" "};
    std::vector<std::string>s;
    s = IzdvojiSavrsenoRitmicneRijeci("  Sajonara   from  Yokohama  ");
    for(std::string s1: s)std::cout << s1 << std::endl;
    */

    return 0;
}
