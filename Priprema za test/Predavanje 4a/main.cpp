#include <iostream>
#include <vector>

//using namespace std;
void Udvostruci(int &x) {
    x *= 2;
}
int &VeciOd(int &x, int &y){
    if(x > y) return x;
    else return y;
}

int main()
{
//    int a(5), broj;
//    int &x(a);
//    std::cout << x << std::endl;
//    std::vector<int>v(5);
//    for(int &x: v){//svakim prolazom kroz petlju se unistava stara referenca i kreira nova
//        std::cin >> broj;
//        x = broj;
//    }
//
//    for(int x: v) std::cout << x;
//    int a(5), b(7);
//    VeciOd(a, b)++;
//    std::cout << b;
//    int a(5);
//    const int &b(a), &c(3*a + 0);
//    a++;
//    std::cout << b << " " << c << std::endl;

    return 0;
}
