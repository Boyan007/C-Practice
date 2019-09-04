#include <iostream>
#include <string>

//using namespace std;

std::string Sastavi(std::string s1, std::string s2) {
    int duzina1(s1.length()), duzina2(s2.length());
    std::string s3(duzina1 + duzina2, ' ');
    for(int i = 0; i < duzina1; i++) s3[i] = s1[i];
    for(int i = 0; i < duzina2; i++) s3[i + duzina1] = s2[i];
    return s3;
}

long long int Faktorijel(int n) {
    if(n < 0) throw n;
    long long int p(1);
    for(int i = 1; i <= n; i++) p *= i;
    return p;
}
double BinomniKoeficijent(int n, int k) {
    try {
        return Faktorijel(n) / (Faktorijel(k) * Faktorijel(n - k));
    }
    catch(int e) {
        return 0; // Regularan izlazak iz funkcije...
    }
}

int main()
{
    /*try {
        int n, k;
        std::cin >> n >> k;
        std::cout << Faktorijel(n) / (Faktorijel(k) * Faktorijel(n - k));
    }
    catch(int e) {
        std::cout << "Greška: faktorijel od " << e << " nije definiran!\n";
    }
    double Kub(double x) noexcept {
        return x * x * x;
    }*/

//    std::string s{"012345678"};
//    std::cout << s.substr(0, 4); //0123 [0, 4)

    int n, k;
    std::cin >> n >> k;
    std::cout << BinomniKoeficijent(n, k) << std::endl;

    return 0;

}
