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

/*template <typename NekiTip>
void UnistiMatricu(NekiTip **mat, int redovi){
    if(!mat)return;
    for(int i(0); i<redovi; i++) delete[] mat[i];
    delete[] mat;
}

template <typename NekiTip>
NekiTip **StvoriMatricu(int kolone, int redovi){
    NekiTip **mat(nullptr);
    //NekiTip **mat(new NekiTip*[redovi])
    mat = new NekiTip*[redovi];
    for(int i(0); i<redovi; i++) mat[i] = nullptr;

    try{
        for(int i(0); i<redovi; i++) mat[i] = new NekiTip[kolone];
    }
    catch(...){
        UnistiMatricu(mat, redovi);
        throw;
    }
    return mat;
}*/

/*NekiTip *Funkcija(std::vector<NekiTip>v){
    auto *p(new NekiTip[v.size()]);
    std::reverse_copy(&v[0], &v[v.size()], p);
    return p;
}*/

/*  zadatak 1
int* StepenBrojeva(int n){
//void StepenBrojeva(int n){
    if(n<0)throw "Broj elemenata mora biti pozitivan";
    int *a(nullptr);
    try{
        a = new int[n+1];
        for(int i(0); i<=n; i++) a[i] = std::pow(2, i);
    }
    catch(...){
        std::cout << "Alokacija nije uspjela";
        delete[] a;
        std::cout << "\n\nSve je izbrisano";
    }
    return a;
}*/

/*template <typename NekiTip>

NekiTip *VratiNiz(std::vector<NekiTip>v){
    NekiTip *a(new NekiTip[v.size()]);

    int i(v.size()-1);
    for(NekiTip x: v){a[i] = x; i--;}

    return a;
}*/
/*  zadatak 3
template <typename Tip>
Tip **GrbavaMatrica(int n){
    Tip **a(nullptr);
    a = new Tip*[n];
    for(int i(0); i<n; i++) a[i] = nullptr;

    for(int i(0); i<n; i++){
        a[i] = new Tip[2*i+1];
        for(int j(0); j<2*i+1; j++)
            if(j<=i)a[i][j] = j+1;
            else a[i][j] = a[i][2*i-j];
    }

    for(int i(0); i<n; i++){
        for(int j(0); j<2*i+1; j++){
            std::cout << a[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return a;
}*/

int main()
{
    /* test program da li radi
    double **a;
    a = StvoriMatricu<double>(3, 5);

    for(int i(0); i<5; i++){
        for(int j(0); j<3; j++){
            std::cin >> a[i][j];
        }
    }

    for(int i(0); i<5; i++){
        for(int j(0); j<3; j++){
            std::cout << a[i][j] << " ";
        }
        std::cout << std::endl;
    }

    UnistiMatricu(a, 5);*/

    /*zadatak 1

    int n(50000000000000000000000000), *p;
    try{
        p = StepenBrojeva(n);
    }
    catch(const char poruka[]){ std::cout << poruka;}

    std::cout << "\nJe li prosla ova poruka?";*/

    /*zadatak 2

    std::vector<int>v{1, 2, 3, 4, 5};
    int *a(VratiNiz(v));

    std::cout << a[0] << a[1] << a[2] << a[3] << a[4];

    delete[] a;

    std::cout << a[0] << a[1] << a[2] << a[3] << a[4];*/

    /*zadatak 3

    int **p;
    p = GrbavaMatrica<int>(5);

    */

    /*int *p;
    std::vector<int> v{5, 4, 3, 2, 1};
    p = Funkcija(v);
    std::cout << *p << ", " << *(p+1) << ", " << *(p+2) << ", " << *(p+3) << ", " << *(p+4) << std::endl;
    delete[] p;*/
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
