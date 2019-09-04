#include <iostream>
#include <vector>
#include <iomanip>

/*bool DaLiJeProst(int n){

    for(int i(2); i<n/2+1; i++)if(n%i==0)return false;
    return true;
}*/

/*void TablicaMnozenja(int m, int n){
    std::vector<std::vector<double>>a(m, std::vector<double>(n));
    for(int i(0); i<m; i++){
        for(int j(0); j<n; j++){
            a[i][j] = (i+1)*(j+1);
        }
    }

    for(std::vector<double> x : a){
        for(double y : x){
            std::cout << std::setw(5) << y;
        }
        std::cout << std::endl;
    }
}*/
/*typedef std::vector<std::vector<int>> Matrica;

Matrica PascalovTrokut(int n){
    Matrica a(n, std::vector<int>(0));
    for(int i(1); i<=n; i++){
        for(int j(1); j<=i; j++){
            if(j == 1 || j == i)a[i-1].push_back(1);
            else a[i-1].push_back(a[i-2][j-1]+a[i-2][j-2]);
        }
    }
    return a;
}

void Ispisi(Matrica m){
    for(int i(0); i<m.size(); i++){
        for(int j(0); j<m[i].size();j++)std::cout << m[i][j] << " ";
        std::cout << std::endl;
    }
}*/



int main()
{
    /*zadatak 1&2&3
    int n, broj;
    std::cin >> n;
    std::vector<int>a, b, c;
    while(n-->0){
        std::cin >> broj;
        a.push_back(broj);
        if(broj == 1) continue;

        if(DaLiJeProst(broj))b.push_back(broj);
        else c.push_back(broj);
    }

    for(int x: b) std::cout << x << " ";
    std::cout << std::endl;
    for(int x: c) std::cout << x << " ";*/

    /*zadatak 4
    int m, n;
    std::cin >> m >> n;
    TablicaMnozenja(m, n);*/

    /*zadatak 5
    int n;
    std::cin >> n;
    //PascalovTrokut(n);
    auto P = PascalovTrokut(n);
    Ispisi(P);*/


    return 0;
}
