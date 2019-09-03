#include <iostream>
#include <vector>
#include <deque>
#include <iomanip>
#include <string>

//using namespace std;

/*bool JeLiProst(int n){

  //  if(n == 1) return;
    for(int i(2); i<(n/2+1); i++)if(n%i==0)return false;

    return true;
}*/

/*typedef std::vector<std::vector<int>> Matrica;

Matrica PascalovTrokut(int n){
    Matrica a(n);
    //a[0].push_back(1);
    for(int i(0); i<n; i++){
        for(int j(0); j<=i; j++){
            if(j == 0 || j == i) a[i].push_back(1);
            else a[i].push_back(a[i-1][j] + a[i-1][j-1]);
        }
    }
    return a;
}
void TablicaMnozenja(int m, int n){
    std::vector<int> v1, v2;
    for(int i(1); i<= m; i++)v1.push_back(i);
    for(int i(1); i<= n; i++)v2.push_back(i);

    for(int x : v1){
        for(int y: v2) std::cout << std::setw(5) << x*y;
        std::cout << std::endl;
    }
}*/

std::string IzdvojiRijec(std::string s, int redoslijed){
    int broj_rijeci(0), duzina_rijeci(1), i(0);
    while(i<s.length()){

        duzina_rijeci++;
        //std::cout << s << std::endl;
        if(s[i-1] == ' ' && ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))){
            broj_rijeci++;

            if(broj_rijeci == redoslijed){
                return s.substr(0, duzina_rijeci);
            }

            s = s.substr(i, s.length()-i);
            //std::cout << s << std::endl;
            i = 0;
            duzina_rijeci = 0;
        }
        i++;
    }
}

int main()
{
    std::cout << IzdvojiRijec("Na vrh brda vrba mrda.", 3);
    /*int n(1);
    std::cin >> n;
    int m, n;
    std::cin >> m >> n;

    TablicaMnozenja(m, n);*/
    /*
    std::vector<int> v(n), v1, v2;

    for(int i(0);i<v.size(); i++) std::cin >> v[i];

    for(int x: v){
        if(x == 1) continue;

        if(JeLiProst(x))v1.push_back(x);
        else if(!JeLiProst(x)) v2.push_back(x);
    }

    for(int x: v1) std::cout << x << " ";
    std::cout << std::endl;

    for(int x: v2) std::cout << x << " ";
    std::cout << std::endl;*/

    //for(int i : v) std::cout << i << ", ";

    /*std::deque<int> d(n), d1, d2;

    for(int i(0); i<n; i++) std::cin >> d[i];

    for(int x: d){
        if(x == 1) continue;

        if(JeLiProst(x)) d1.push_front(x);
        else d2.push_front(x);
    }

    for(int x : d1) std::cout << x << " ";
    std::cout << std::endl;

    for(int x : d2) std::cout << x << " ";
    std::cout << std::endl;*/

    /*Matrica a;

    a = PascalovTrokut(n);

    for(std::vector<int> x: a){
        for(int y: x) std::cout << std::setw(5) << y;
        std::cout << std::endl;
    }*/

    return 0;
}
